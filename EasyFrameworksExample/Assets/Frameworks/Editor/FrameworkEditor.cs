//==========================
// - FileName:      Assets/Frameworks/Editor/FrameworkEditor.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using System.Diagnostics;
using System.IO;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEngine;

public class FrameworkEditor : Editor, IPreprocessBuildWithReport
{
    public int callbackOrder => 0;

    [MenuItem( "Frameworks/打开目录/streamingAssetsPath", priority = 1 )]
    private static void OpenReadOnlyPath( )
    {
        OpenDirectory( Application.streamingAssetsPath );
    }

    [MenuItem( "Frameworks/打开目录/persistentDataPath", priority = 1 )]
    private static void OpenReadWritePath( )
    {
        OpenDirectory( Application.persistentDataPath );
    }

    [MenuItem( "Frameworks/打开目录/项目根目录", priority = 1 )]
    private static void OpenProjectRootPath( )
    {
        OpenDirectory( "./" );
    }

    [MenuItem( "Frameworks/打开目录/Unity脚本模板目录", priority = 1 )]
    private static void OpenScriptTemplatePath( )
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
    /// 打开指定目录
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

    public static void SetRuntimeModeToDebug( )
    {
        ScriptingDefineSymbolsUtils.AddDefines( "SANDBOX_MODE" );
        ScriptingDefineSymbolsUtils.AddDefines( "ENABLE_LOG" );
        Log.PINK( "Set Runtime mode to debug." );
    }

    public static void SetRuntimeModeToRelease( )
    {
        ScriptingDefineSymbolsUtils.RemoveDefines( "SANDBOX_MODE" );
        ScriptingDefineSymbolsUtils.RemoveDefines( "ENABLE_LOG" );
        Log.PINK( "Set Runtime mode to release." );
    }

    public static void ResetProjectDefaultDirectory( )
    {

        bool createOne = NoExistThenCreateOfDirectory( new string[]
        {
            "Assets/AssetBundle/Audio",
            "Assets/AssetBundle/Entitys",
            "Assets/AssetBundle/ExcelData",

            "Assets/AssetBundle/UI/Form",
            "Assets/AssetBundle/UI/Sprites",
            "Assets/AssetBundle/UI/Animations",

            "Assets/Framework_AutoGenerate/Scripts/DataTable",
            "Assets/Framework_AutoGenerate/Scripts/Resources/DR_Bytes"
        } );

        if ( createOne )
        {
            Log.PINK( "Done set project default directory." );
        }
        AssetDatabase.Refresh( );
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
        if ( !PlayerSettings.SplashScreen.showUnityLogo )
        {
            LogEdiitor.DisableLog( );
        }
    }


    [MenuItem( "GameObject/Copy Path %#C", false, -1000 )]
    public static void CopyGameObjectPath( )
    {
        if ( Selection.activeGameObject == null )
            return;

        if ( Selection.gameObjects.Length == 2 )
        {
            string path1 = GetGameObjectObjPath( Selection.gameObjects[ 0 ] );
            string path2 = GetGameObjectObjPath( Selection.gameObjects[ 1 ] );
            string shortPath = path1.Length > path2.Length ? path2 : path1;
            string longPath = shortPath == path1 ? path2 : path1;
            string relativePath = longPath.Replace( shortPath, string.Empty );
            GUIUtility.systemCopyBuffer = relativePath.Remove( 0, 1 );
        }
        else
        {
            var obj = Selection.activeGameObject;
            string path = GetGameObjectObjPath( obj );
            GUIUtility.systemCopyBuffer = path;
        }
    }



    public static string GetGameObjectObjPath( GameObject obj )
    {
        var p = obj.transform;
        var root = p.root;
        string path = p.name;
        while ( root != p && p != null )
        {
            p = p.parent;
            path = $"{p.name}/" + path;
        }

        return path;
    }


    static Component[] copiedComponents;
    [MenuItem( "GameObject/Copy Current Components #&C" )]
    static void CopyComponents()
    {
        copiedComponents = Selection.activeGameObject.GetComponents<Component>();
    }

    [MenuItem( "GameObject/Paste Current Components #&P" )]
    static void PasteComponents()
    {
        foreach ( var targetGameObject in Selection.gameObjects )
        {
            if ( !targetGameObject || copiedComponents == null ) continue;
            foreach ( var copiedComponent in copiedComponents )
            {
                if ( !copiedComponent ) continue;
                UnityEditorInternal.ComponentUtility.CopyComponent( copiedComponent );
                UnityEditorInternal.ComponentUtility.PasteComponentAsNew( targetGameObject );
            }
        }
    }


}
