//==========================
// - FileName:      Assets/Frameworks/Editor/CustomScriptDeclaration.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-16-17:58:49
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
//using UnityEngine;
//using System.IO;

//public class CustomScriptDeclaration : UnityEditor.AssetModificationProcessor
//{
//    /// <summary>  
//    /// 此函数在asset被创建完，文件已经生成到磁盘上，但是没有生成.meta文件和import之前被调用  
//    /// </summary>  
//    /// <param name="newFileMeta">newfilemeta 是由创建文件的path加上.meta组成的</param>  
//    public static void OnWillCreateAsset( string newFileMeta )
//    {
//        //string newFilePath = newFileMeta.Replace( ".meta", "" );
//        //string fileExt = Path.GetExtension( newFilePath );
//        //if ( fileExt != ".cs" )
//        //{
//        //    return;
//        //}

//        //string realPath = Application.dataPath.Replace( "Assets", "" ) + newFilePath;
//        //string scriptContent = File.ReadAllText( realPath );

//        ////规则  
//        //scriptContent = scriptContent.Replace( "#SCRIPTNAME#", Path.GetFileName( newFilePath ) );
//        //scriptContent = scriptContent.Replace( "#Author#", "ChenJC" );
//        //scriptContent = scriptContent.Replace( "#Version#", "1.0" );
//        //scriptContent = scriptContent.Replace( "#UnityVersion#", Application.unityVersion );
//        //scriptContent = scriptContent.Replace( "#CreateTime#", System.DateTime.Now.ToString( "yyyy-MM-dd-HH:mm:ss" ) );
//        //scriptContent = scriptContent.Replace( "#ScriptFilePath#", newFilePath );

//        //File.WriteAllText( realPath, scriptContent );
//    }
//}