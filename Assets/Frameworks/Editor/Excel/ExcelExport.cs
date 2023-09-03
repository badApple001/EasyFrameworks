//==========================
// - FileName:      Assets/Frameworks/Editor/Excel/ExcelExport.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using UnityEditor;
using UnityEngine;
using EasyTool;
using System.IO;

public class ExcelExport
{
    public static void ConvertFromFolder( string folder )
    {
        float stime = Time.time;
        var dataFolder = Path.Combine( Application.dataPath, "BundleRes/ExcelData" );
        var csFolder = Path.Combine( Application.dataPath, "Scripts/ExcelCSharp" );
        PathUtils.DeleteOldAndCreateNewFolder( dataFolder );
        PathUtils.DeleteOldAndCreateNewFolder( csFolder );
        ExcelTool.Convert( folder, dataFolder, csFolder, false );
        AssetDatabase.Refresh();
        Log.PINK( $"转换Excel完成 {Time.time - stime}秒" );
    }

    public static void ConvertFromFile( string file )
    {
        float stime = Time.time;
        var dataFolder = Path.Combine( Application.dataPath, "BundleRes/ExcelData" );
        var csFolder = Path.Combine( Application.dataPath, "Scripts/ExcelCSharp" );
        PathUtils.DeleteOldAndCreateNewFolder( dataFolder );
        var csFileName = Path.GetFileNameWithoutExtension( file );
        var csFile = Path.Combine( csFolder, csFileName + ".cs" );
        if ( File.Exists( csFile ) )
        {
            File.Delete( csFile );
            Debug.Log( $"文件覆盖： {csFile}" );
        }
        ExcelTool.ConvertSingle( file, dataFolder, csFolder, false );
        AssetDatabase.Refresh();
        Log.PINK( $"转换Excel完成 {Time.time - stime}秒" );
    }

}
