// - FileName:      Assets/Frameworks/Editor/PythonToolWindow.cs
// - Created:       ChenJC
// - CreateTime:    2023-08-06-00:39:10
// - UnityVersion:  2021.3.26f1c1
// - Version:       1.0
// - Description:   
//==========================
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;
using UnityEngine.TextCore.Text;

public class PythonToolWindow : EditorWindow
{
    [MenuItem( "Frameworks/Python工具界面", false, 4 )]
    private static void Open()
    {
        Rect wr = new Rect( 0, 0, 500, 309 );
        PythonToolWindow window = ( PythonToolWindow ) EditorWindow.GetWindowWithRect( typeof( PythonToolWindow ), wr, true, "Python Tool" );
        window.Show();
    }


    private void OnEnable()
    {
       
    }


    Vector2 scrollerPos;
    //绘制窗口时调用
    private void OnGUI()
    {
        scrollerPos = EditorGUILayout.BeginScrollView( scrollerPos );
        EditorGUILayout.BeginVertical();

        #region 模型工具
        //GUILayout.BeginHorizontal( "PopupCurveSwatchBackground", GUILayout.MaxWidth( this.maxSize.x ) );
        //GUILayout.Label( "模型工具", textStyle );
        //GUILayout.EndHorizontal();
        //EditorGUILayout.BeginHorizontal();
        //if ( GUILayout.Button( "提取动画", btnStyle ) )
        //{
        //    AnimationClipsExport();
        //}
        //EditorGUILayout.EndHorizontal();
        #endregion



        EditorGUILayout.EndVertical();
        EditorGUILayout.EndScrollView();
    }

    private void OnInspectorUpdate()
    {
        this.Repaint();
    }

    private void OnDisable()
    {

    }


    public void Test()
    {
        PythonTranslator.Run( "Assets/Frameworks/Editor/PythonScripts/test.py", result =>
        {
            Debug.Log( result );
        }, "1", "2" );
    }
}
