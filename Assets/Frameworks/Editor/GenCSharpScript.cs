//==========================
// - FileName:      Assets/Frameworks/Editor/GenCSharpScript.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System.IO;

public class GenCSharpScript
{
    public delegate void ClassTextContentProcess( ref string obj );

    public static void GenScriptFromTemplate( string templateFile, string toFolder, string className, ClassTextContentProcess textContentProcessing, string csFileName = "" )
    {
        if ( string.IsNullOrEmpty( templateFile ) || string.IsNullOrWhiteSpace( templateFile ) )
        {
            Log.Error( $"当前模板文件名称无效: {templateFile}" );
            return;
        }

        if ( !File.Exists( templateFile ) )
        {
            Log.Error( $"当前模板文件不存在: {templateFile}" );
            return;
        }

        if ( string.IsNullOrEmpty( csFileName ) || string.IsNullOrWhiteSpace( csFileName ) )
        {
            csFileName = className + ".cs";
        }

        if ( !Directory.Exists( toFolder ) )
        {
            Directory.CreateDirectory( toFolder );
        }

        //处理模板脚本
        var csFile = Path.Combine( toFolder, csFileName );
        string textContent = File.ReadAllText( templateFile );
        textContentProcessing?.Invoke( ref textContent );
        File.WriteAllText( csFile, textContent );
    }
}