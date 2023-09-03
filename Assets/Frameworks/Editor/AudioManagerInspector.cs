//==========================
// - FileName:      Assets/Frameworks/Editor/AudioManagerInspector.cs      
// - Created:       ChenJC	
// - CreateTime:    2023-06-29-16:06:51
// - UnityVersion:  2021.3.22f1
// - Version:       1.0
// - Description:   
//==========================
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using UnityEditor;
using UnityEngine;
using static AudioManager;


[CanEditMultipleObjects, CustomEditor( typeof( AudioManager ) )]
public class AudioManagerInspector : Editor
{
    private AudioManager _target { get { return target as AudioManager; } }
    private Vector2 settingScrollerPosition = Vector2.zero;
    private const string preloadSettingFile = "Assets/Resources/AudioSettingAsset.asset";
    private AudioSettingAsset _asset;

    private void OnEnable( )
    {
        if ( !File.Exists( preloadSettingFile ) )
        {
            if ( !Directory.Exists( Path.GetDirectoryName( preloadSettingFile ) ) )
            {
                Directory.CreateDirectory( Path.GetDirectoryName( preloadSettingFile ) );
            }

            _asset = ScriptableObject.CreateInstance<AudioSettingAsset>( );
            _asset.createdTime = DateTime.Now.ToString( "F" );
            _asset.updatedTime = _asset.createdTime;
            AssetDatabase.CreateAsset( _asset, preloadSettingFile );
            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();
        }
        else
        {
            _asset = AssetDatabase.LoadAssetAtPath<AudioSettingAsset>( preloadSettingFile );
        }
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
                if ( GUILayout.Button( "-" ) )
                {
                    _asset.settings.RemoveAt( i );
                    break;
                }
                _asset.settings[ i ].file = ( AudioClip ) EditorGUILayout.ObjectField( _asset.settings[ i ].file, typeof( AudioClip ), false, GUILayout.MaxWidth( 200 ) );
                _asset.settings[ i ].name = EditorGUILayout.TextField( _asset.settings[ i ].name );
                if ( string.IsNullOrEmpty( _asset.settings[ i ].name ) && _asset.settings[ i ].file != null )
                {
                    _asset.settings[ i ].name = Path.GetFileNameWithoutExtension( AssetDatabase.GetAssetPath( _asset.settings[ i ].file ) );
                }
                GUILayout.EndHorizontal( );
            }
            EditorGUILayout.EndScrollView( );
            serializedObject.ApplyModifiedProperties( );
        }

        if ( GUI.changed )
        {
            _asset.updatedTime = DateTime.Now.ToString( "F" );
            AssetDatabase.SaveAssetIfDirty( _asset );
        }
    }

}
