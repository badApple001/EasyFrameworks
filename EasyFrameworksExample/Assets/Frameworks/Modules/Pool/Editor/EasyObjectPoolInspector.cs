//==========================
// - FileName:      Assets/Frameworks/Editor/EasyObjectPoolInspector.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using System;
using System.Reflection;
using UnityVectorCurveline;
using PoolCore;
using System.IO;
using Object = UnityEngine.Object;
using System.Text;

[CanEditMultipleObjects, CustomEditor( typeof( PoolManager ) )]
public class EasyObjectPoolInspector : Editor
{

    private Material material;
    private float horizontalIncrement = 100f;
    private float verticalIncrement = 100f;
    private PoolManager _target { get { return target as PoolManager; } }
    private SerializedProperty preloadConfigs_serializedProperty;
    private Dictionary<string, List<float>> lines = new Dictionary<string, List<float>>();
    GUIStyle detailStyle;
    GUIStyle titleStyle;
    private PoolSettingAsset _asset;
    FieldInfo poolDictField;
    private void OnEnable()
    {
        var type = typeof( PoolManager );
        poolDictField = type.GetField( "poolDict", BindingFlags.NonPublic | BindingFlags.Instance );

        // Find the "Hidden/Internal-Colored" shader, and cache it for use.
        material = new Material( Shader.Find( "Hidden/Internal-Colored" ) );
        //line infos   
        lines.Clear();
        //label font style
        detailStyle = new GUIStyle();
        detailStyle.font = Font.CreateDynamicFontFromOSFont( "Consolas", 14 );
        detailStyle.fontStyle = FontStyle.Normal;
        titleStyle = new GUIStyle();
        titleStyle.font = Font.CreateDynamicFontFromOSFont( "仿宋", 16 );
        titleStyle.fontStyle = FontStyle.Bold;
        titleStyle.normal.textColor = Color.white;
        _asset = LoadAsset();
        VectorEditorUtility.Begin();
    }

    private void DrawVelocityGraph( List<float> velocityValues, float minimumVelocity,
    float maximumVelocity )
    {
        float velocityValue = velocityValues[ 0 ];
        float increment = 0;
        Vector3 lineStart = Vector3.zero;
        Vector3 lineEnd = new Vector3( horizontalIncrement, velocityValue * verticalIncrement );

        GL.Begin( GL.LINES );

        for ( int i = 1; i < velocityValues.Count; i++ )
        {
            if ( velocityValue == velocityValues[ i ]
                && ( velocityValue == minimumVelocity || velocityValue == maximumVelocity ) )
            {
                Handles.color = Color.red;
            }
            else
            {
                velocityValue = velocityValues[ i ];
                Handles.color = Color.green;
            }

            lineStart = lineEnd;
            lineEnd.x += increment;
            lineEnd.y = velocityValue * verticalIncrement;

            GL.Vertex( lineStart );
            GL.Vertex( lineEnd );
        }

        GL.End();
    }
    Vector2 settingScrollerPosition;
    public override void OnInspectorGUI()
    {

        if ( !Application.isPlaying )
        {
            EditorGUILayout.PropertyField( serializedObject.FindProperty( "InitOnAwake" ) );
            if ( GUILayout.Button( "新增预设" ) )
            {
                var item = new PoolSettingItem() { };
                _asset.settings.Insert( 0, item );
            }
            settingScrollerPosition = EditorGUILayout.BeginScrollView( settingScrollerPosition );
            if ( _asset.settings.Count > 0 )
            {
                for ( int i = 0; i < _asset.settings.Count; i++ )
                {
                    GUILayout.BeginHorizontal();
                    if ( GUILayout.Button( "x", GUILayout.MaxWidth( 20 ) ) )
                    {
                        _asset.settings.RemoveAt( i );
                        break;
                    }

                    if ( null != _asset.settings[ i ].name )
                    {
                        string count = EditorGUILayout.TextField( _asset.settings[ i ].count.ToString() );
                        if ( int.TryParse( count, out int c ) )
                        {
                            _asset.settings[ i ].count = c;
                        }
                    }

                    Object o = string.IsNullOrEmpty( _asset.settings[ i ].file ) ? null : AssetDatabase.LoadAssetAtPath<GameObject>( _asset.settings[ i ].file );
                    GameObject asset = ( GameObject ) EditorGUILayout.ObjectField( o, typeof( GameObject ), true, GUILayout.MaxWidth( 500 ) );
                    if ( asset != null && GUI.changed )
                    {
                        _asset.settings[ i ].file = AssetDatabase.GetAssetPath( asset );
                        _asset.settings[ i ].name = asset.name;
                    }

                    if ( null != _asset.settings[ i ].name )
                    {
                        EditorGUILayout.LabelField( _asset.settings[ i ].name );
                    }

                    GUILayout.EndHorizontal();
                }
            }
            EditorGUILayout.EndScrollView();
            serializedObject.ApplyModifiedProperties();

            if ( GUI.changed && null != _asset )
            {
                SaveAsset( _asset );
                GenenratePoolObjectPath( );
            }
        }
        else
        {

            var poolDict = poolDictField.GetValue( _target ) as Dictionary<string, TransformPool>;

            if ( null != poolDict && poolDict.Count > 0 )
            {
                EditorGUILayout.BeginVertical();

                GUILayout.Label( "对象池 内存监视", titleStyle );
                GUILayout.Space( 10 );
                foreach ( var pool in poolDict )
                {

                    #region 纯文本
                    //detailStyle.normal.textColor = pool.Value.FreeCount * 1.0f / pool.Value.Capacity > 0.5f ? Color.green : Color.red;
                    //GUILayout.Label( $"{pool.Key}: {pool.Value.FreeCount}/{pool.Value.Capacity}", detailStyle );
                    //GUILayout.Space( 4 );
                    #endregion


                    #region 可视化

                    List<float> vertexs = null;
                    if ( !lines.TryGetValue( pool.Key, out vertexs ) )
                    {
                        vertexs = new List<float>() { 0 };
                        lines.Add( pool.Key, vertexs );
                    }

                    float vertex = pool.Value.FreeCount * 1.0f / pool.Value.Capacity;
                    if ( vertexs.Count > 0 && Mathf.Abs( vertexs[ vertexs.Count - 1 ] - vertex ) > 1e-2 )
                    {
                        vertexs.Add( vertex );
                    }
                    VectorEditorUtility.Render( vertexs, pool.Key, pool.Value.Capacity );

                    #endregion
                }
                EditorGUILayout.EndVertical();
            }

        }
    }

    private void GenenratePoolObjectPath( )
    {
        if ( null != _asset && _asset.settings.Count > 0 )
        {
            var settings = _asset.settings;
            StringBuilder sb = new StringBuilder( );
            sb.AppendLine( );
            sb.AppendLine( );
            sb.AppendLine( );
            sb.AppendLine( "public class PoolObjectPath { " );
            sb.AppendLine( );

            foreach ( var setting in settings )
            {
                if ( string.IsNullOrEmpty( setting.name ) || string.IsNullOrWhiteSpace( setting.name ) )
                    continue;
                setting.name.Trim( );

                //string name1 = setting.name.Replace( ' ', '_' );
                //string name2 = name1.Replace( '/', '_' );
                //string name3 = name2.Substring( 0, name2.LastIndexOf( '.' ) );

                sb.AppendLine( "\t/// <summary>" );
                sb.AppendLine( $"\t/// {setting.file}" );
                sb.AppendLine( "\t/// </summary>" );
                sb.AppendLine( $"\tpublic const string {setting.name} = \"{setting.name}\";" );
                sb.AppendLine( );
            }

            sb.AppendLine( );
            sb.AppendLine( "}\r\n" );

            if ( !Directory.Exists( "Assets/Frameworks/Modules/Pool/Scripts" ) )
            {
                Directory.CreateDirectory( "Assets/Frameworks/Modules/Pool/Scripts" );
            }
            File.WriteAllText( "Assets/Frameworks/Modules/Pool/Scripts/PoolObjectPath.cs", sb.ToString( ) );
        }
    }

    private const string settingAssetPath = "Assets/Frameworks/Modules/Pool/Resources/PoolSettingAsset.asset";
    public static PoolSettingAsset LoadAsset()
    {
        PoolSettingAsset _asset;
        if ( !File.Exists( settingAssetPath ) )
        {
            if ( !Directory.Exists( Path.GetDirectoryName( settingAssetPath ) ) )
            {
                Directory.CreateDirectory( Path.GetDirectoryName( settingAssetPath ) );
            }

            _asset = ScriptableObject.CreateInstance<PoolSettingAsset>();
            _asset.createdTime = DateTime.Now.ToString( "F" );
            _asset.updatedTime = _asset.createdTime;
            AssetDatabase.CreateAsset( _asset, settingAssetPath );
        }
        else
        {
            _asset = AssetDatabase.LoadAssetAtPath<PoolSettingAsset>( settingAssetPath );
        }
        return _asset;
    }

    public static void SaveAsset( PoolSettingAsset asset )
    {
        asset.updatedTime = DateTime.Now.ToString( "F" );
        EditorUtility.SetDirty( asset );
        AssetDatabase.SaveAssetIfDirty( asset );
    }

}