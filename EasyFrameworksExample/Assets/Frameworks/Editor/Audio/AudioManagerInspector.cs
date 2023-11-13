//==========================
// - FileName:      Assets/Frameworks/Editor/AudioManagerInspector.cs      
// - Created:       ChenJC	
// - CreateTime:    2023-06-29-16:06:51
// - UnityVersion:  2021.3.22f1
// - Version:       1.0
// - Description:   
//==========================
using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEditor;
using UnityEngine;
using Object = UnityEngine.Object;

[CanEditMultipleObjects, CustomEditor( typeof( AudioManager ) )]
public class AudioManagerInspector : Editor
{
    private Vector2 settingScrollerPosition = Vector2.zero;
    private AudioSettingAsset _asset;
    private string lastUpdateTime = string.Empty;
    private const string outputScriptDir = "Assets/Framework_AutoGenerate/Scripts/Audio";
    private const string outputResourceDir = "Assets/Framework_AutoGenerate/Resources";
    private const string abresDir = "Assets/AssetBundle/";

    private void OnEnable( )
    {
        _asset = LoadAsset( );
        lastUpdateTime = _asset.updatedTime;
    }

    public override void OnInspectorGUI( )
    {
        base.OnInspectorGUI( );

        if ( Application.isPlaying )
        {
            EditorGUILayout.LabelField( "Runtime model - 禁止修改配置" );
            return;
        }
        if ( null != _asset )
        {

            if ( GUILayout.Button( "新增音效" ) )
            {
                _asset.settings.Insert( 0, new AudioSettingItem( )
                {
                    file = null,
                    name = ""
                } );
            }

            settingScrollerPosition = EditorGUILayout.BeginScrollView( settingScrollerPosition );
            for ( int i = 0; i < _asset.settings.Count; i++ )
            {
                GUILayout.BeginHorizontal( );
                if ( GUILayout.Button( "x", GUILayout.MaxWidth( 20 ) ) )
                {
                    _asset.settings.RemoveAt( i );
                    break;
                }

                //if ( Application.isPlaying )
                //{
                //    if ( null != AudioManager.Instance )
                //    {
                //        //EditorGUILayout.Slider( AudioManager.Instance.GetAudioProgress( _asset.settings[ i ].name ), 0, 1 );
                //        EditorGUILayout.LabelField( AudioManager.Instance.GetAudioProgress( _asset.settings[ i ].name ).ToString("P") );
                //        //EditorGUILayout.Knob( new Vector2( 100, 31.4f ), AudioManager.Instance.GetAudioProgress( _asset.settings[ i ].name ) * 100, 0, 100, "%", Color.black, Color.blue, true );
                //    }
                //}
                //else
                //{
                /*_asset.settings[ i ].name =*/
                EditorGUILayout.LabelField( _asset.settings[ i ].name );
                //}

                Object o = string.IsNullOrEmpty( _asset.settings[ i ].file ) ? null : AssetDatabase.LoadAssetAtPath<AudioClip>( _asset.settings[ i ].file );
                AudioClip ac = ( AudioClip ) EditorGUILayout.ObjectField( o, typeof( AudioClip ), true, GUILayout.MaxWidth( 200 ) );
                if ( ac != null && GUI.changed )
                {
                    _asset.settings[ i ].file = AssetDatabase.GetAssetPath( ac );
                    _asset.settings[ i ].name = GetAudioNameByRelativeParentDirectory( _asset.settings[ i ].file );
                }
                GUILayout.EndHorizontal( );
            }
            EditorGUILayout.EndScrollView( );
            serializedObject.ApplyModifiedProperties( );
        }

        if ( GUI.changed && null != _asset )
        {
            SaveAsset( _asset );
            GenerateAudioPathClass( _asset );
        }
    }

    private static void GenerateAudioPathClass( AudioSettingAsset asset )
    {
        if ( null != asset && asset.settings.Count > 0 )
        {
            var settings = asset.settings;
            StringBuilder sb = new StringBuilder( );
            sb.Append( "/// <summary>\r\n/// \r\n/// class name: AudioPath\r\n/// \r\n/// example:\r\n///\t\tAudioManager.Instance.PlayMusic( AudioPath.Audio_Music_Wind_Ambience );\r\n///\t\tAudioManager.Instance.PlaySound( AudioPath.Audio_SFX_Enemies_Hoverbot_Alert );\r\n///\r\n/// </summary>\r\n" );
            sb.AppendLine( "public class AudioPath { " );
            sb.AppendLine( );

            foreach ( var setting in settings )
            {
                if ( string.IsNullOrEmpty( setting.name ) || string.IsNullOrWhiteSpace( setting.name ) )
                    continue;
                setting.name.Trim( );

                string name1 = setting.name.Replace( ' ', '_' );
                string name2 = name1.Replace( '/', '_' );
                //string name3 = name2.Substring( 0, name2.LastIndexOf( '.' ) );

                sb.AppendLine( "\t/// <summary>" );
                sb.AppendLine( $"\t/// {setting.file}" );
                sb.AppendLine( "\t/// </summary>" );
                sb.AppendLine( $"\tpublic const string {name2} = \"{setting.name}\";" );
                sb.AppendLine( );
            }

            sb.AppendLine( );
            sb.AppendLine( "}\r\n" );

            if ( !Directory.Exists( outputScriptDir ) )
            {
                Directory.CreateDirectory( outputScriptDir );
            }
            File.WriteAllText( $"{outputScriptDir}/AudioPath.cs", sb.ToString( ) );
        }
    }

    private static string GetAudioNameByRelativeParentDirectory( string fullPath )
    {
        if ( fullPath == null )
        {
            return null;
        }

        if ( fullPath.StartsWith( "Assets/" ) )
        {
            string name1 = fullPath.Replace( abresDir, "" );
            return name1.Split( '.' )[ 0 ];
        }

        string parent = Path.Combine( Application.dataPath, abresDir );
        string name = fullPath.Replace( parent, "" );
        return name.Split( '.' )[ 0 ];
    }

    private void OnDisable( )
    {
        if ( !Application.isPlaying && null != _asset && _asset.updatedTime != lastUpdateTime )
        {
            lastUpdateTime = _asset.updatedTime;
            AssetDatabase.Refresh( );
        }
    }

    [MenuItem( "Assets/添加当前文件夹下的音效文件到 AssetManager上" )]
    public static void AddAllSoundEffectsUnderTheFolder( )
    {

        string[] guids = Selection.assetGUIDs;

        if ( guids == null || guids.Length == 0 )
        {
            Log.Info( $"{DateTime.Now.ToLocalTime( )}\tPlease select a folder or select a music file" );
            return;
        }

        var _asset = LoadAsset( );
        if ( null != _asset )
        {

            List<FileInfo> fileInfos = new List<FileInfo>( );
            foreach ( var guid in guids )
            {
                string assetPath = AssetDatabase.GUIDToAssetPath( guid );
                if ( Directory.Exists( assetPath ) )
                {
                    DirectoryInfo theFolder = new DirectoryInfo( assetPath );
                    FileInfo[] mp3s = theFolder.GetFiles( "*.mp3", SearchOption.AllDirectories );//获取所在目录的文件
                    FileInfo[] wavs = theFolder.GetFiles( "*.wav", SearchOption.AllDirectories );//获取所在目录的文件
                    List<FileInfo> audios = new List<FileInfo>( );
                    audios.AddRange( mp3s );
                    audios.AddRange( wavs );
                    for ( int i = 0; i < audios.Count; i++ )
                    {
                        if ( !audios[ i ].Name.EndsWith( ".meta" ) )
                        {
                            fileInfos.Add( audios[ i ] );
                        }
                    }
                }
                else if ( File.Exists( assetPath ) && ( assetPath.EndsWith( ".mp3" ) || assetPath.EndsWith( ".wav" ) ) )
                {
                    fileInfos.Add( new FileInfo( assetPath ) );
                }
            }

            //filter and remove empty file
            int removeEmptyFileCount = _asset.settings.RemoveAll( asi =>
            {
                var ac = AssetDatabase.LoadAssetAtPath<AudioClip>( asi.file );
                bool flag = ac != null && ac.length != 0f;
                if ( !flag )
                {
                    Log.PINK( $"remove Invalid sound file: {asi.file}" );
                }
                return !flag;
            } );

            //removed duplicat element
            var oldSettings = _asset.settings;
            HashSet<string> ids = new HashSet<string>( );
            _asset.settings = new List<AudioSettingItem>( );
            foreach ( var setting in oldSettings )
            {
                if ( !ids.Contains( setting.name ) )
                {
                    _asset.settings.Add( setting );
                    ids.Add( setting.name );
                }
                else
                {
                    Log.PINK( $"Remove duplicat audioItem: {setting.name}|{setting.file}" );
                }
            }

            //new
            foreach ( var fileInfo in fileInfos )
            {

                string fullname = fileInfo.FullName.Replace( "\\", "/" );
                fullname = fullname.Replace( Application.dataPath.Remove( Application.dataPath.Length - 6 ), "" );
                AudioClip ac = AssetDatabase.LoadAssetAtPath<AudioClip>( fullname );
                if ( ac == null || ac.length == 0f )
                {
                    Debug.LogError( $"{fullname} is not a valid audioclip" );
                    continue;
                }

                var name = GetAudioNameByRelativeParentDirectory( fullname );
                var someSoundEffect = _asset.settings.Find( asi =>
                {
                    return asi.name == name;
                } );
                if ( someSoundEffect != null )
                {
                    Log.PINK( $"replace {someSoundEffect}" );
                    someSoundEffect.file = fullname;
                }
                else
                {
                    AudioSettingItem item = new AudioSettingItem( );
                    item.file = fullname;
                    item.name = name;
                    _asset.settings.Add( item );

                    Log.PINK( $"add {fullname}" );
                }
            }

            GenerateAudioPathClass( _asset );
            SaveAsset( _asset );
            AssetDatabase.Refresh( );
            Log.PINK( $"===============Done===============" );
        }
    }

    public static AudioSettingAsset LoadAsset( )
    {

        var settings = EditorAssetUtils.FindAsset<AudioSettingAsset>( "t:AudioSettingAsset", "Assets" );
        if ( settings.Count > 0 )
        {
            return settings[ 0 ];
        }
        else
        {
            string outputAssetDir = $"{outputResourceDir}/{AudioManager.AudioSettingPath}.asset";
            AudioSettingAsset _asset;
            if ( !File.Exists( outputAssetDir ) )
            {
                if ( !Directory.Exists( Path.GetDirectoryName( outputAssetDir ) ) )
                {
                    Directory.CreateDirectory( Path.GetDirectoryName( outputAssetDir ) );
                }
                _asset = ScriptableObject.CreateInstance<AudioSettingAsset>( );
                _asset.createdTime = DateTime.Now.ToString( "F" );
                _asset.updatedTime = _asset.createdTime;
                AssetDatabase.CreateAsset( _asset, outputAssetDir );
            }
            else
            {
                _asset = AssetDatabase.LoadAssetAtPath<AudioSettingAsset>( outputAssetDir );
            }

            return _asset;
        }

    }

    public static void SaveAsset( AudioSettingAsset asset )
    {
        asset.updatedTime = DateTime.Now.ToString( "F" );
        EditorUtility.SetDirty( asset );
        AssetDatabase.SaveAssetIfDirty( asset );
    }

}
