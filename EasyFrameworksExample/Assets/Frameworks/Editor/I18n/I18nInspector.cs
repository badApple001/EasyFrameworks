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

[CanEditMultipleObjects, CustomEditor( typeof( I18nText ) )]
public class I18nInspector : Editor
{


    private I18nText obj;
    private SystemLanguage language;
    private SystemLanguage sysLanguage;
    private SerializedProperty mulID;
    private int oldMulID = -1;
    private static Dictionary<string, Dictionary<int, string>> languageDict = new Dictionary<string, Dictionary<int, string>>();

    void OnEnable()
    {
        obj = ( I18nText ) target;
        oldMulID = GetMulID();
        mulID = serializedObject.FindProperty( "m_mulID" );
        language = sysLanguage = I18n.Current;
        if ( languageDict.Count == 0 )
        {
            LoadDataBase();
        }
    }

    private int GetMulID()
    {
        var mulIDFiled = typeof( I18nText ).GetField( "m_mulID", System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance );
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
            RefreshMuiLanguage();
        }
        GUILayout.Space( 20 );
        serializedObject.ApplyModifiedProperties();
    }

    public void LoadDataBase()
    {
        var dataTable = DataTable.Load( I18n.dataTableName );
        var cells = dataTable.Item2;
        var fileds = dataTable.Item1;
        if ( cells == null || fileds == null )
        {
            Log.Warning( "多语言数据没有准备好" );
            return;
        }
        for ( int i = 0; i < cells.Count; i++ )
        {
            var dataline = cells[ i ];
            int ID = ( int ) cells[ i ][ 0 ];
            for ( int j = 0; j < dataline.Count; j++ )
            {
                var data = dataline[ j ];
                var filed = fileds[ j ];

                if ( !languageDict.TryGetValue( filed, out Dictionary<int, string> langGroupDict ) )
                {
                    langGroupDict = new Dictionary<int, string>();
                    languageDict.Add( filed, langGroupDict );
                }
                langGroupDict.Add( ID, data.ToString() );
            }
        }
    }

    private void RefreshMuiLanguage()
    {
        if ( languageDict != null && languageDict.Count > 0 )
        {
            if ( languageDict.TryGetValue( sysLanguage.ToString(), out Dictionary<int, string> data ) )
            {
                if ( data.TryGetValue( oldMulID, out string lang ) )
                {
                    SetString( lang );
                }
                else
                {
                    SetString( "未找到对应的多语言数据" );
                }
            }
        }
    }

    [MenuItem( "GameObject/UI/I18nText", false, 0 )]
    public static void GenI18nText()
    {
        if ( Selection.activeGameObject == null )
        {
            return;
        }
        var obj = new GameObject( nameof( I18nText ) );
        obj.transform.SetParent( Selection.activeGameObject.transform, false );
        obj.AddComponent<I18nText>();
    }

}
