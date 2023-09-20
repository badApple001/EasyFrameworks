//==========================
// - FileName:      Assets/Frameworks/Editor/FrameworkInitialize.cs
// - Created:       ChenJC
// - CreateTime:    2023-08-06-00:50:32
// - UnityVersion:  2021.3.26f1c1
// - Version:       1.0
// - Description:   
//==========================
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

[InitializeOnLoad]
public static class FrameworkInitialize
{
    static FrameworkInitialize()
    {
        if ( EditorPrefs.GetBool( "HasFrameworkInit", false ) == false )
        {
            EditorPrefs.SetBool( "HasFrameworkInit", true );

            FrameworkEditor.ResetProjectDefaultDirectory();
            ToolsWindow.InitOrUpdateSubmodule();

            string path = Path.Combine( Application.dataPath, "CommonModule" );
            if ( !Directory.Exists( path ) )
            {
                Debug.Log( "更新Submodule失败 请稍后前往 Framewokrs/Project工具界面/Git-更新子库" );
            }
        }
    }
}
