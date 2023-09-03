//==========================
// - FileName:      Assets/Frameworks/Editor/LanguageInspector.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-16-17:58:49
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

[CanEditMultipleObjects, CustomEditor( typeof( LanguageText ) )]
public class LanguageInspector : Editor
{


    private LanguageText obj;
    private SystemLanguage language;
    private SystemLanguage sysLanguage;
    private SerializedProperty mulID;
    private int oldMulID = -1;
    private static Dictionary<int, MultiLanguage> multiLanguageDict = new Dictionary<int, MultiLanguage>();
    void OnEnable()
    {
        obj = ( LanguageText ) target;
        oldMulID = GetMulID();
        mulID = serializedObject.FindProperty( "m_mulID" );
        language = sysLanguage = LanguageManager.Current;
        if ( multiLanguageDict.Count == 0 )
        {
            LoadDataBase();
        }
    }

    private int GetMulID()
    {
        var mulIDFiled = typeof( LanguageText ).GetField( "m_mulID", System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance );
        return ( int ) mulIDFiled.GetValue( obj );
    }

    private void SetString( string text )
    {
        if ( null != obj )
        {
            if ( obj.TryGetComponent( out Text text1 ) )
            {
                text1.text = text;
            }
        }
    }

    public override void OnInspectorGUI()
    {
        serializedObject.Update();
        EditorGUILayout.PropertyField( mulID );
        language = ( SystemLanguage ) EditorGUILayout.EnumPopup( "语言:", language );
        if ( language != sysLanguage )
        {
            sysLanguage = language;
            RefreshMuiLanguage();
        }
        int newMulID = GetMulID();
        if ( newMulID != oldMulID )
        {
            oldMulID = newMulID;
            RefreshMuiLanguage();
        }
        GUILayout.Space( 40 );
        if ( GUILayout.Button( "Reload MuliLanguage Asset", GUILayout.Height( 40 ) ) )
        {
            LoadDataBase();
        }
        GUILayout.Space( 20 );
        serializedObject.ApplyModifiedProperties();
    }

    public void LoadDataBase()
    {
        TextAsset asset = AssetDatabase.LoadAssetAtPath<TextAsset>( "Assets/BundleRes/ExcelData/MultiLanguage.bytes" );
        using ( BinaryReader br = new BinaryReader( new MemoryStream( asset.bytes ), Encoding.UTF8 ) )
        {
            int rows = br.ReadInt32();
            Dictionary<int, MultiLanguage> dataTable = new Dictionary<int, MultiLanguage>();
            var clasType = typeof( MultiLanguage );
            var fileds = clasType.GetFields();
            for ( int i = 0; i < rows; i++ )
            {
                var obj = new MultiLanguage();
                int key = -1;
                for ( int j = 0; j < fileds.Length; j++ )
                {
                    var filed = fileds[ j ];
                    if ( filed.FieldType == typeof( int ) )
                    {
                        int id = br.ReadInt32();
                        filed.SetValue( obj, id );
                        if ( key == -1 )
                        {
                            key = id;
                        }
                    }
                    else if ( filed.FieldType == typeof( bool ) )
                    {
                        filed.SetValue( obj, br.ReadBoolean() );
                    }
                    else if ( filed.FieldType == typeof( float ) )
                    {
                        filed.SetValue( obj, br.ReadSingle() );
                    }
                    else if ( filed.FieldType == typeof( double ) )
                    {
                        filed.SetValue( obj, br.ReadDouble() );
                    }
                    else if ( filed.FieldType == typeof( string ) )
                    {
                        filed.SetValue( obj, br.ReadString() );
                    }
                    else if ( filed.FieldType == typeof( ulong ) )
                    {
                        filed.SetValue( obj, br.ReadUInt64() );
                    }
                    else
                    {
                        Debug.LogError( $"[{nameof( DataTableManager )}] 类型加载错误: {filed.FieldType.ToString()}" );
                    }
                }
                dataTable.Add( key, obj );
            }
            multiLanguageDict = dataTable;
            RefreshMuiLanguage();
        }

    }

    private void RefreshMuiLanguage()
    {
        if ( multiLanguageDict != null && multiLanguageDict.Count > 0 )
        {
            if ( multiLanguageDict.TryGetValue( oldMulID, out MultiLanguage data ) )
            {
                var field = data.GetType().GetField( sysLanguage.ToString() );
                if ( null != field )
                {
                    SetString( field.GetValue( data ).ToString() );
                }
                else
                {
                    SetString( "未找到对应的多语言数据" );
                }
            }
        }
    }
}
