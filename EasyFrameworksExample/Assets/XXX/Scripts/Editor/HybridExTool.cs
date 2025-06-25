using UnityEditor;
using UnityEngine;
using System.IO;
using System.Linq;


public static class HybridExTool
{

    [MenuItem( "HybridCLR/拷贝HotUpdate.dll文件到项目里并重命名后缀.bytes" )]
    public static void CopyHotUpdateDll2AssetBundleAndAsBytes( )
    {
        string configpath = Application.dataPath.Replace( "/Assets", "" ) + "/" + "ProjectSettings/HybridCLRSettings.asset";
        var hotUpdateDllCompileOutputRootDirLine = File.ReadAllText( configpath ).Split( '\n' ).ToList( ).Find( line => line.Contains( "hotUpdateDllCompileOutputRootDir" ) );
        string hotUpdateDllCompileOutputRootDir = hotUpdateDllCompileOutputRootDirLine.Split( ":" )[ 1 ].Trim( );

        string platform = EditorUserBuildSettings.activeBuildTarget.ToString( );
        string dllpath = Path.Combine( Application.dataPath.Replace( "/Assets", "" ), hotUpdateDllCompileOutputRootDir, platform, "HotUpdate.dll" );


        if ( File.Exists( dllpath ) )
        {
            string assetbundlepath = Path.Combine( Application.dataPath, "AssetBundle/HotUpdateDlls/HotUpdate.dll.bytes" );
            File.Copy( dllpath, assetbundlepath, true );
            AssetDatabase.Refresh( );
            Debug.Log( "CopyHotUpdateDll2AssetBundleAndAsBytes success" );
        }
        else
        {
            Debug.LogError( "CopyHotUpdateDll2AssetBundleAndAsBytes failed" );
        }

    }
}
