//==========================
// - FileName:      Assets/Frameworks/Editor/ToolsWindow.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using UnityEditor;
using UnityEngine;
using static PythonTranslator;
using static System.Net.WebRequestMethods;
using Debug = UnityEngine.Debug;

public class ToolsWindow : EditorWindow
{

    [MenuItem( "Frameworks/Project工具界面", false, 9 )]
    private static void Open( )
    {
        Rect wr = new Rect( 0, 0, 500, 309 );
        ToolsWindow window = ( ToolsWindow ) EditorWindow.GetWindowWithRect( typeof( ToolsWindow ), wr, true, "Project Tool" );
        window.Show( );
    }



    private Vector2 scrollerPos = Vector2.zero;
    private GUIStyle btnStyle, textStyle, addingBtnStyle;
    private void OnEnable( )
    {
        btnStyle = new GUIStyle( "Command" );
        btnStyle.alignment = TextAnchor.MiddleCenter;
        btnStyle.imagePosition = ImagePosition.ImageAbove;
        btnStyle.fontStyle = FontStyle.Bold;
        btnStyle.fontSize = 16;
        btnStyle.fixedWidth = 100;
        btnStyle.fixedHeight = 32;

        textStyle = new GUIStyle( "HeaderLabel" );
        textStyle.fontSize = 20;

        addingBtnStyle = new GUIStyle( "Command" );
        addingBtnStyle.alignment = TextAnchor.MiddleCenter;
        addingBtnStyle.imagePosition = ImagePosition.ImageAbove;
        addingBtnStyle.fontStyle = FontStyle.Bold;
        addingBtnStyle.fontSize = 16;
        addingBtnStyle.fixedWidth = 200;
        addingBtnStyle.fixedHeight = 32;
    }


    //绘制窗口时调用
    private void OnGUI( )
    {
        scrollerPos = EditorGUILayout.BeginScrollView( scrollerPos );
        EditorGUILayout.BeginVertical( );

        #region 模型工具
        GUILayout.BeginHorizontal( "PopupCurveSwatchBackground", GUILayout.MaxWidth( this.maxSize.x ) );
        GUILayout.Label( "模型工具", textStyle );
        GUILayout.EndHorizontal( );
        EditorGUILayout.BeginHorizontal( );
        if ( GUILayout.Button( "提取动画", btnStyle ) )
        {
            AnimationClipsExport( );
        }
        EditorGUILayout.EndHorizontal( );
        #endregion


        #region 环境设置
        GUILayout.BeginHorizontal( "PopupCurveSwatchBackground", GUILayout.MaxWidth( this.maxSize.x ) );
        GUILayout.Label( "Workspace", textStyle );
        GUILayout.EndHorizontal( );
        EditorGUILayout.BeginHorizontal( );
        if ( GUILayout.Button( "启用日志", btnStyle ) )
        {
            LogEdiitor.EnabledLog( );
            this.Close( );
        }
        if ( GUILayout.Button( "沙盒模式", addingBtnStyle ) )
        {
            FrameworkEditor.SetRuntimeModeToDebug( );
            this.Close( );
        }
        if ( GUILayout.Button( "重置目录", btnStyle ) )
        {
            FrameworkEditor.ResetProjectDefaultDirectory( );
        }
        EditorGUILayout.EndHorizontal( );
        EditorGUILayout.BeginHorizontal( );
        if ( GUILayout.Button( "禁用日志", btnStyle ) )
        {
            LogEdiitor.DisableLog( );
            this.Close( );
        }
        if ( GUILayout.Button( "线上模式", addingBtnStyle ) )
        {
            FrameworkEditor.SetRuntimeModeToRelease( );
            this.Close( );
        }
        if ( GUILayout.Button( "清理数据", btnStyle ) )
        {
            CleanGameData( );
        }
        EditorGUILayout.EndHorizontal( );
        EditorGUILayout.BeginHorizontal( );
        if ( GUILayout.Button( "添加SDK宏", btnStyle ) )
        {
            AddSDKDefines( );
            this.Close();
        }
        EditorGUILayout.EndHorizontal( );
        #endregion


        #region 仓库
        GUILayout.BeginHorizontal( "PopupCurveSwatchBackground", GUILayout.MaxWidth( this.maxSize.x ) );
        GUILayout.Label( "Git仓库", textStyle );
        GUILayout.EndHorizontal( );
        EditorGUILayout.BeginHorizontal( );
        if ( GUILayout.Button( "更新子库", btnStyle ) )
        {
            //InitOrUpdateSubmodule( );
            Debug.Log( "维护中..." );
            this.Close( );
        }
        EditorGUILayout.EndHorizontal( );
        #endregion

        EditorGUILayout.EndVertical( );
        EditorGUILayout.EndScrollView( );
    }

    public static void AddSDKDefines( )
    {
        ScriptingDefineSymbolsUtils.AddDefines( "TextMeshPro" );
        ScriptingDefineSymbolsUtils.AddDefines( "ADS_TradPlus" );
        ScriptingDefineSymbolsUtils.AddDefines( "AppsFlyer" );
        ScriptingDefineSymbolsUtils.AddDefines( "DBT" );
        ScriptingDefineSymbolsUtils.AddDefines( "OnLineConfig" );
        ScriptingDefineSymbolsUtils.AddDefines( "ADS" );
        ScriptingDefineSymbolsUtils.AddDefines( "FireBase" );
        ScriptingDefineSymbolsUtils.AddDefines( "Bugly" );
        ScriptingDefineSymbolsUtils.AddDefines( "UNITY_PURCHASING" );
    }


    public static void CleanGameData( )
    {
        PlayerPrefs.DeleteAll( );
        string PersistentDataPath = Application.persistentDataPath;
        if ( Directory.Exists( PersistentDataPath ) )
        {
            try
            {
                Directory.Delete( PersistentDataPath, true );

            }
            catch ( System.Exception e )
            {
                //
            }
        }
        Log.PINK( "本地数据和缓存已清理完成 请重新进入游戏" );
    }

    public static void InitOrUpdateSubmodule( )
    {
        Log.PINK( "Begin Update Submodule ======>" );
        NewGitCommand( "submodule update --init --recursive" );
        NewGitCommand( "pull" );
        NewGitCommand( "submodule update" );
        NewGitCommand( "submodule update --remote" );
        AssetDatabase.Refresh( );
        Log.PINK( "End Update Submodule ======>" );
    }

    public static void NewGitCommand( string arguments, string WorkingDirectory = "./" )
    {
        string gitPath = "git";
        ProcessStartInfo startInfo = new ProcessStartInfo( gitPath, arguments )
        {
            WindowStyle = ProcessWindowStyle.Hidden,
            UseShellExecute = false,
            ErrorDialog = false,
            CreateNoWindow = true,
            RedirectStandardError = true,
            RedirectStandardInput = true,
            RedirectStandardOutput = true,
            LoadUserProfile = true,
            WorkingDirectory = WorkingDirectory
        };
        var p = new Process { StartInfo = startInfo };
        p.OutputDataReceived += new DataReceivedEventHandler( ( object sender, DataReceivedEventArgs eventArgs ) =>
        {
            if ( !string.IsNullOrEmpty( eventArgs.Data ) )
            {
                Debug.Log( eventArgs.Data );
            }
        } );
        p.ErrorDataReceived += new DataReceivedEventHandler( ( object sender, DataReceivedEventArgs eventArgs ) =>
        {
            if ( !string.IsNullOrEmpty( eventArgs.Data ) )
            {
                Debug.Log( eventArgs.Data );
            }
        } );
        p.Start( );
        p.BeginOutputReadLine( );
        p.WaitForExit( );
        p.Close( );
        p.Dispose( );
    }

    private void OnInspectorUpdate( )
    {
        this.Repaint( );
    }

    private void OnDisable( )
    {

    }

    public static void AnimationClipsExport( )
    {
        Object[] SelectionAsset = Selection.GetFiltered( typeof( Object ), SelectionMode.Unfiltered );
        foreach ( UnityEngine.Object assetFile in SelectionAsset )
        {
            AnimationClip newClip = new AnimationClip( );
            string assetFilePath = AssetDatabase.GetAssetPath( assetFile );
            string FBXFileName = Path.GetFileName( assetFilePath );
            AnimationClip animationClip = AssetDatabase.LoadAssetAtPath<AnimationClip>( assetFilePath );
            EditorUtility.CopySerialized( animationClip, newClip );
            string animName = FBXFileName;
            string animPath = Path.Combine( assetFilePath.Replace( animName, "" ), Path.GetFileNameWithoutExtension( animName ) + ".anim" );
            AssetDatabase.CreateAsset( newClip, animPath );
            AssetDatabase.DeleteAsset( assetFilePath );
            Debug.Log( animName + ".anim-完成" );
        }
        AssetDatabase.Refresh( );
    }


}
