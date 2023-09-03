//==========================
// - FileName:      Assets/Frameworks/Editor/EasyObjectPoolInspector.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using System;
using System.Reflection;
using UnityVectorCurveline;
using PoolCore;
using static PoolManager;

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
    private void OnEnable()
    {
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

    public override void OnInspectorGUI()
    {
        EditorGUILayout.BeginVertical();

        //扩展
        Type type = typeof( PoolManager );
        var info = type.GetField( "preloadConfigs", BindingFlags.NonPublic | BindingFlags.Instance );
        var preloadConfigs = info.GetValue( _target ) as IList;
        if ( preloadConfigs.Count != 0  || !Application.isPlaying )
        {
            if ( null == preloadConfigs_serializedProperty ) preloadConfigs_serializedProperty = serializedObject.FindProperty( "preloadConfigs" );
            EditorGUILayout.PropertyField( preloadConfigs_serializedProperty, new GUIContent( "预设配置" ) );

            if ( GUILayout.Button( "新增预设" ) )
            {

                var config = new PreloadConfigs();
                preloadConfigs.Add( config );
                info.SetValue( _target, preloadConfigs );
            }

            if ( GUILayout.Button( "首尾交换" ) )
            {
                var last = preloadConfigs[ preloadConfigs.Count - 1 ];
                preloadConfigs.Remove( last );
                preloadConfigs.Insert( 0, last );
                info.SetValue( _target, preloadConfigs );
            }
            serializedObject.ApplyModifiedProperties();
        }
        else
        {


            info = type.GetField( "poolDict", BindingFlags.NonPublic | BindingFlags.Instance );
            var poolDict = info.GetValue( _target ) as Dictionary<string, TransformPool>;

            if ( null != poolDict )
            {
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
                    vertexs.Add( pool.Value.FreeCount * 1.0f / pool.Value.Capacity );

                    VectorEditorUtility.Render( vertexs, pool.Key, pool.Value.Capacity );

                    #endregion
                }
            }
        }
        EditorGUILayout.EndVertical();
    }
}