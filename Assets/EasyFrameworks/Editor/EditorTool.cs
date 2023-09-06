using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using UnityEngine.UI;

public class EditorTool
{



    [MenuItem( "Tools/Clean Game data" )]
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

    [MenuItem( "Tools/Open persistentDataPath" )]
    public static void OpenPersistentDataPath( )
    {
        EditorUtility.RevealInFinder( Application.persistentDataPath );
    }

    [MenuItem( "Tools/Open streamingAssetsPath" )]
    public static void OpenStreamingAssetsPath( )
    {
        EditorUtility.RevealInFinder( Application.streamingAssetsPath );
    }


    [MenuItem( "Tools/OptimizeRenderNodesFromSelectionObj" )]
    public static void OptimizeRenderNodesFromSelectionObj( )
    {
        var obj = Selection.activeGameObject;
        if ( obj == null )
        {
            return;
        }
        var mgs = obj.GetComponentsInChildren<MaskableGraphic>( );
        void disableRaycast( MaskableGraphic mg )
        {
            mg.raycastTarget = false;
            Log.Info( $"disable raycastTarget {mg.transform.name}" );
        }
        void disableMakeable( MaskableGraphic mg )
        {
            mg.maskable = false;
            Log.Info( $"disable maskable {mg.transform.name}" );
        }
        foreach ( var m in mgs )
        {
            if ( m.GetComponent<Button>( ) == null )
            {
                disableRaycast( m );
                disableMakeable( m );

            }
        }
    }

    //[MenuItem( "Tools/Copy code from project" )]
    //public static void CopyCodeFromProject( )
    //{

    //    var clss = AssetDatabase.FindAssets( "t:Script", new string[] { "Assets/" } );
    //    StringBuilder sb = new StringBuilder( );
    //    foreach ( var cls in clss )
    //    {
    //        var path = AssetDatabase.GUIDToAssetPath( cls );
    //        var lines = File.ReadAllLines( path );
    //        foreach ( var line in lines )
    //        {
    //            if ( line.Equals( "\n" ) )
    //            {
    //                continue;
    //            }
    //            if ( string.IsNullOrEmpty( line ) || string.IsNullOrWhiteSpace( line ) )
    //            {
    //                continue;
    //            }
    //            sb.AppendLine( line );
    //        }
    //    }
    //    File.WriteAllText( Path.Combine( Application.dataPath, "code.txt" ), sb.ToString( ) );
    //}


    [MenuItem( "GameObject/UI/Replace Children UGUI.Button To GButton", false, 0 )]
    public static void ReplaceUGUIButton2GButton( )
    {
        if ( null != Selection.activeGameObject )
        {
            var buttons = Selection.activeGameObject.GetComponentsInChildren<Button>( );
            foreach ( var button in buttons )
            {
                if ( button.GetType( ) != typeof( GButton ) )
                {
                    var @event = button.onClick;
                    if ( @event != null )
                    {
                        var obj = button.gameObject;
                        GameObject.DestroyImmediate( button );
                        var gbutton = obj.AddComponent<GButton>( );
                        gbutton.onClick = @event;
                        Log.PINK( $"Replace Button {obj.name} Succeed" );
                    }
                }
            }
        }

    }


    [MenuItem( "Tools/Runtime/Release" )]
    public static void SetRuntimeModelToRelease( )
    {
        ScriptingDefineSymbolsUtils.RemoveDefines( "SANDBOX_MODE" );
        ScriptingDefineSymbolsUtils.RemoveDefines( "ENABLE_LOG" );
    }

    [MenuItem( "Tools/Runtime/Debug" )]
    public static void SetRuntimeModelToSandbox( )
    {
        ScriptingDefineSymbolsUtils.AddDefines( "SANDBOX_MODE" );
        ScriptingDefineSymbolsUtils.AddDefines( "ENABLE_LOG" );
    }
}