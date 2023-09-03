//==========================
// - FileName:      Assets/Frameworks/Editor/FrameworkEditor.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using CatAsset.Editor;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEngine;
using Debug = UnityEngine.Debug;

public class FrameworkEditor : Editor, IPreprocessBuildWithReport
{
    public int callbackOrder => 0;


    [MenuItem( "Frameworks/��Ŀ¼/��Դ�����������Ŀ¼", priority = 1 )]
    private static void OpenAssetBundleOutputPath()
    {
        OpenDirectory( BundleBuildConfigSO.Instance.OutputRootDirectory );
    }


    [MenuItem( "Frameworks/��Ŀ¼/streamingAssetsPath", priority = 1 )]
    private static void OpenReadOnlyPath()
    {
        OpenDirectory( Application.streamingAssetsPath );
    }

    [MenuItem( "Frameworks/��Ŀ¼/persistentDataPath", priority = 1 )]
    private static void OpenReadWritePath()
    {
        OpenDirectory( Application.persistentDataPath );
    }

    [MenuItem( "Frameworks/��Ŀ¼/��Ŀ��Ŀ¼", priority = 1 )]
    private static void OpenProjectRootPath()
    {
        OpenDirectory( "./" );
    }

    [MenuItem( "Frameworks/��Ŀ¼/Unity�ű�ģ��Ŀ¼", priority = 1 )]
    private static void OpenScriptTemplatePath()
    {
        string path =
#if UNITY_EDITOR_WIN
        Path.Combine( System.AppDomain.CurrentDomain.BaseDirectory, "Data\\Resources\\ScriptTemplates\\" );
#else
        "Unity.app/Contents/Resources/ScriptTemplates/";
#endif
        OpenDirectory( path );
    }

    /// <summary>
    /// ��ָ��Ŀ¼
    /// </summary>
    public static void OpenDirectory( string directory )
    {
        directory = string.Format( "\"{0}\"", directory );

        if ( Application.platform == RuntimePlatform.WindowsEditor )
        {
            Process.Start( "Explorer.exe", directory.Replace( '/', '\\' ) );
        }
        else if ( Application.platform == RuntimePlatform.OSXEditor )
        {
            Process.Start( "open", directory );
        }
    }

    public static void SetRuntimeModeToDebug()
    {
        ScriptingDefineSymbolsUtils.AddDefines( "DebugMode" );
        Log.PINK( "Set Runtime mode to debug." );
    }

    public static void SetRuntimeModeToRelease()
    {
        ScriptingDefineSymbolsUtils.RemoveDefines( "DebugMode" );
        Log.PINK( "Set Runtime mode to release." );
    }

    public static void ResetProjectDefaultDirectory()
    {

        bool createOne =  NoExistThenCreateOfDirectory( new string[]
        {
            "Assets/BundleRes/UI/Form",
            "Assets/BundleRes/UI/Sprites",
            "Assets/Scripts/ExcelCSharp",
            "Assets/BundleRes/ExcelData",
            "Assets/BundleRes/UI/Animations"
        } );

        if( createOne )
        {
            Log.PINK( "Done set project default directory." );
        }
        AssetDatabase.Refresh();
    }

    public static bool NoExistThenCreateOfDirectory( string[] urls )
    {

        bool hasCreateOne = false;
        foreach ( string url in urls )
        {
            if ( !Directory.Exists( url ) )
            {
                Directory.CreateDirectory( url );
                Log.PINK( $"Create Directory: {url}" );
                hasCreateOne = true;
            }
        }

        return hasCreateOne;
    }

    public void OnPreprocessBuild( BuildReport report )
    {
        SetRuntimeModeToRelease();
        if ( !PlayerSettings.SplashScreen.showUnityLogo )
        {
            LogEdiitor.DisableLog();
        }
    }
}
