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
using System.IO;
using UnityEngine.WSA;

public class ExcelExport
{
    public static string exepath
    {
        get
        {
            return Path.GetFullPath( "Assets/EasyFrameworks/DataTable/Editor/XlsxTransverter.exe" );
        }
    }
    public static string declare_dir_path { get { return Path.GetFullPath( "Assets/EasyFrameworks/DataTable/Declare" ); } }
    public static string data_dir_path { get { return Path.GetFullPath( "Assets/EasyFrameworks/DataTable/Resources/DR_Bytes" ); } }


    public static void ConvertFromFolder( string folder )
    {
        PathUtils.CreateFolder( declare_dir_path, data_dir_path );

        string arg = $"{folder} {declare_dir_path} {data_dir_path}";

        Execute( exepath, arg );

        Log.PINK( $"Read table complete: {folder}" );

        AssetDatabase.Refresh();
    }

    public static void ConvertFromFile( string xlsx )
    {
        PathUtils.CreateFolder( declare_dir_path, data_dir_path );

        string arg = $"{xlsx} {declare_dir_path} {data_dir_path}";

        Execute( exepath, arg );

        Log.PINK( $"Read table complete: {xlsx}" );

        AssetDatabase.Refresh();
    }

    public static void Execute( string exepath, string args )
    {
        System.Diagnostics.Process exe = new System.Diagnostics.Process();
        exe.StartInfo.FileName = exepath;
        exe.StartInfo.Arguments = args;
        exe.StartInfo.CreateNoWindow = true;
        exe.StartInfo.UseShellExecute = false;
        exe.StartInfo.RedirectStandardOutput = true;
        exe.StartInfo.StandardOutputEncoding = System.Text.Encoding.Default;
        exe.Start();
        string output = exe.StandardOutput.ReadToEnd();
        exe.WaitForExit();
        Debug.Log( output );
    }

}
