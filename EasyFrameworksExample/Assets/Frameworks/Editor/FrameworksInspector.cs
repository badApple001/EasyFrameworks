using CatAsset.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.Purchasing;
using UnityEngine;

[CustomEditor( typeof( Framework ) )]
public class FrameworksInspector : Editor
{

    Framework framework;
    SerializedProperty _RuntimeMode;
    SerializedProperty RemoteIp;
    SerializedProperty UnloadBundleDelayTime;
    SerializedProperty UnloadAssetDelayTime;
    SerializedProperty MaxTaskRunCount;
    SerializedProperty CanvasPrefab;
    private void OnEnable( )
    {
        framework = ( Framework ) target;
        _RuntimeMode = serializedObject.FindProperty( "RuntimeMode" );
        RemoteIp = serializedObject.FindProperty( "RemoteIp" );
        UnloadBundleDelayTime = serializedObject.FindProperty( "UnloadBundleDelayTime" );
        UnloadAssetDelayTime = serializedObject.FindProperty( "UnloadAssetDelayTime" );
        MaxTaskRunCount = serializedObject.FindProperty( "MaxTaskRunCount" );
        CanvasPrefab = serializedObject.FindProperty( "CanvasPrefab" );
    }

    public override void OnInspectorGUI( )
    {
        serializedObject.Update( );
        EditorGUILayout.PropertyField( _RuntimeMode );
        if ( framework.RuntimeMode == RuntimeMode.Updatable )
        {
            EditorGUILayout.PropertyField( RemoteIp );
        }
        EditorGUILayout.PropertyField( UnloadBundleDelayTime );
        EditorGUILayout.PropertyField( UnloadAssetDelayTime );
        EditorGUILayout.PropertyField( MaxTaskRunCount );
        EditorGUILayout.PropertyField( CanvasPrefab );
        serializedObject.ApplyModifiedProperties( );
    }
}
