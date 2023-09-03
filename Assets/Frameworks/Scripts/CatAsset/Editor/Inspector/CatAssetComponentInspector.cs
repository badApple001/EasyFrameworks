//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/Inspector/CatAssetComponentInspector.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using CatAsset.Runtime;
using UnityEditor;

[CustomEditor( typeof( AssetManager ) )]
public class CatAssetComponentInspector : Editor
{

    AssetManager instance;
    SerializedProperty runtimeMode;
    SerializedProperty remoteVersionFileAddress;
    SerializedProperty IsEditorMode;
    SerializedProperty UnloadBundleDelayTime;
    SerializedProperty UnloadAssetDelayTime;
    SerializedProperty MaxTaskRunCount;

    private void OnEnable()
    {
        instance = ( AssetManager ) target;
        runtimeMode = serializedObject.FindProperty( "RuntimeMode" );
        remoteVersionFileAddress = serializedObject.FindProperty( "RemoteVersionFileAddress" );
        IsEditorMode = serializedObject.FindProperty( "IsEditorMode" );
        UnloadBundleDelayTime = serializedObject.FindProperty( "UnloadBundleDelayTime" );
        UnloadAssetDelayTime = serializedObject.FindProperty( "UnloadAssetDelayTime" );
        MaxTaskRunCount = serializedObject.FindProperty( "MaxTaskRunCount" );
    }

    public override void OnInspectorGUI()
    {
        serializedObject.Update();

        EditorGUILayout.PropertyField( runtimeMode );
        if ( instance.RuntimeMode == RuntimeMode.Updatable )
        {
            EditorGUILayout.PropertyField( remoteVersionFileAddress );
        }
        else
        {
            EditorGUILayout.PropertyField( IsEditorMode );
        }
        EditorGUILayout.PropertyField( UnloadBundleDelayTime );
        EditorGUILayout.PropertyField( UnloadAssetDelayTime );
        EditorGUILayout.PropertyField( MaxTaskRunCount );

        serializedObject.ApplyModifiedProperties();
    }
}
