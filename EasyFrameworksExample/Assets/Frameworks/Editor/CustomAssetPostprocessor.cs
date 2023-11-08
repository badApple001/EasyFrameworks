//==========================
// - FileName:      Assets/Frameworks/Editor/CustomAssetPostprocessor.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-16-17:58:49
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using UnityEngine;
using UnityEditor;
using System;
using System.Linq;
using System.IO;
using System.Collections.Generic;

public class CustomAssetPostprocessor : AssetPostprocessor
{
    //模型导入之前调用
    public void OnPreprocessModel( )
    {

    }

    //模型导入之前调用
    public void OnPostprocessModel( GameObject go )
    {

    }

    //纹理导入之前调用，针对入到的纹理进行设置
    public void OnPreprocessTexture( )
    {

        //为需要转换为Sprite类型的图片名称中加如@sprite，用作匹配
        //当匹配到含有@sprite串时才转换图片类型
        if ( assetImporter.assetPath.Contains( "Sprite" ) )
        {
            //texImpoter是图片的Import Settings对象
            //AssetImporter是TextureImporter的基类
            TextureImporter texImpoter = assetImporter as TextureImporter;
            //TextureImporterType是结构体，包含所有Texture Type
            texImpoter.textureType = TextureImporterType.Sprite;
        }

    }

    public void OnPostprocessTexture( Texture2D tex )
    {

    }

    public void OnPostprocessAudio( AudioClip clip )
    {
    }

    public void OnPreprocessAudio( )
    {
        //AudioImporter audio = this.assetImporter as AudioImporter;
        //audio.format = AudioImporterFormat.Compressed;
    }

    //所有的资源的导入，删除，移动，都会调用此方法，注意，这个方法是static的
    public static void OnPostprocessAllAssets( string[] importedAsset, string[] deletedAssets, string[] movedAssets, string[] movedFromAssetPaths )
    {
        //List<string> formList = new List<string>();
        //string history = Path.Combine( Application.persistentDataPath, "GenerateUIFormHistory.cachedat" );
        //if ( File.Exists( history ) )
        //{
        //    string genHistory = File.ReadAllText( history );
        //    string[] forms = genHistory.Split( ';' );
        //    formList = new List<string>( forms );
        //}

        List<string> movedAssetsList = new List<string>( movedAssets );
        foreach ( string url in importedAsset )
        {
            if ( url.StartsWith( "Assets/AssetBundle/UI/Form" ) && url.EndsWith( ".prefab" ) && !movedAssetsList.Contains( url ) )
            {
                //if ( !formList.Contains( str ) )
                //{
                //    NewFormPrefabProc( str );
                //}
#if UNITY_2020_1_OR_NEWER
                string form = Path.GetFileNameWithoutExtension( url );
                if ( !Directory.Exists( $"Assets/Framework_AutoGenerate/Scripts/UIForms/{form}" ) )
#endif
                {
                    NewFormPrefab( url );
                }
            }
        }

        foreach ( string url in deletedAssets )
        {
            if ( url.StartsWith( "Assets/AssetBundle/UI/Form" ) && url.EndsWith( ".prefab" ) && !movedAssetsList.Contains( url ) )
            {

                Log.PINK( $"Check uIForm prefab deleted: {url}" );
                var formName = Path.GetFileNameWithoutExtension( url );
                var dependScriptFolder = $"Assets/Framework_AutoGenerate/Scripts/UIForms/{formName}";
                if ( Directory.Exists( dependScriptFolder ) )
                {
                    Directory.Delete( dependScriptFolder, true );
                    File.Delete( dependScriptFolder + ".meta" );
                    Log.PINK( $"Delete depend ScriptFolder: {dependScriptFolder}\nDelete depend scripts: {formName}.cs,{formName}Manager.cs" );
                }
            }
        }
    }

    public static string generateNamespaceName = "";
    public static string generateClassName = "generateClassName";
    public static string generatePrefabPath = "generatePrefabPath";
    [UnityEditor.Callbacks.DidReloadScripts]
    private static void OnScriptUpdateLoaded( )
    {
        string className = EditorPrefs.GetString( generateClassName );
        if ( string.IsNullOrEmpty( className ) )
        {
            return;
        }

        EditorUtility.DisplayProgressBar( "Mount scripts", $"{className} install...", 0f );

        var assemblies = AppDomain.CurrentDomain.GetAssemblies( );

        var defaultAssembly = assemblies.First( assembly => assembly.GetName( ).Name == "Assembly-CSharp" );

        var typeName = string.IsNullOrEmpty( generateNamespaceName ) ? className : generateNamespaceName + "." + className;

        var type = defaultAssembly.GetType( typeName );

        if ( type == null )
        {
            Debug.Log( $"编译失败: {className}" );
            EditorUtility.ClearProgressBar( );
#if UNITY_2021_1_OR_NEWER
            EditorPrefs.DeleteKey( generateClassName );
#endif
            return;
        }

        string prefabPath = EditorPrefs.GetString( generatePrefabPath );

        //为开发者提供额外处理接口
        try
        {
            GameObject prefabInstance = PrefabUtility.LoadPrefabContents( prefabPath );

            EditorUtility.DisplayProgressBar( "Mount scripts", $"{className} install...", 0.618f );

            var scriptComponent = prefabInstance.GetComponent( type );

            if ( !scriptComponent )
            {
                scriptComponent = prefabInstance.AddComponent( type );
            }

            AdditionalConfigurationForNewForm( prefabInstance );

            EditorUtility.DisplayProgressBar( "Mount scripts", $"{className} install...", 1f );

            PrefabUtility.SaveAsPrefabAssetAndConnect( prefabInstance, prefabPath, InteractionMode.AutomatedAction );
        }
        catch ( Exception e )
        {
            Debug.LogError( e );
        }

        AssetDatabase.Refresh( );

        EditorUtility.ClearProgressBar( );

        EditorPrefs.DeleteKey( generateClassName );
    }

    /// <summary>
    /// 提供给开发者额外操作的接口
    /// </summary>
    /// <param name="gameobject"> 你可以像运行时对GameObject做的任何操作 </param>
    private static void AdditionalConfigurationForNewForm( GameObject gameobject )
    {

        if ( !gameobject.TryGetComponent( out Animation animation ) )
        {
            animation = gameobject.AddComponent<Animation>( );
        }

        var closeClip = AssetDatabase.LoadAssetAtPath<AnimationClip>( "Assets/AssetBundle/UI/Animations/CloseUIForm.anim" );
        var openClip = AssetDatabase.LoadAssetAtPath<AnimationClip>( "Assets/AssetBundle/UI/Animations/OpenUIForm.anim" );

        AnimationUtility.SetAnimationClips( animation, new AnimationClip[] {
            openClip,
            closeClip,
        } );

        if ( gameobject.TryGetComponent( out Animation component ) )
        {
            component.clip = openClip;
        }
    }

    private static void NewFormPrefab( string assetPath )
    {

        if ( string.IsNullOrWhiteSpace( assetPath ) || string.IsNullOrEmpty( assetPath ) )
        {
            Log.Error( $"NewFormPrefabProc 传入路径为空或者空格: {assetPath}" );
            return;
        }

        var pathclips = assetPath.Split( '/' );
        var fileName = pathclips[ pathclips.Length - 1 ].Split( '.' )[ 0 ];
        string file = fileName + "";
        if ( !fileName.EndsWith( "Form" ) )
        {
            if ( fileName.EndsWith( "form" ) )
            {
                file = fileName.Replace( "form", "Form" );
            }
            else
            {
                file = fileName + "Form";
            }
        }

        //try
        //{
        //    //newForm path
        //    var newPath = assetPath.Replace( fileName, file );

        //    //记录一下新创建的 避免循环导入
        //    List<string> formList = new List<string>();
        //    string history = Path.Combine( Application.persistentDataPath, "GenerateUIFormHistory.cachedat" );
        //    string genHistory = string.Empty;
        //    if ( File.Exists( history ) )
        //    {
        //        genHistory = File.ReadAllText( history );
        //        string[] forms = genHistory.Split( ';' );
        //        formList = new List<string>( forms );
        //    }
        //    if ( !formList.Contains( newPath ) )
        //    {
        //        if ( File.Exists( newPath ) )
        //        {
        //            File.Delete( newPath );
        //        }
        //        File.Copy( assetPath, newPath );
        //        File.Delete( assetPath );
        //        genHistory += $";{newPath}";
        //        File.WriteAllText( Path.Combine( Application.persistentDataPath, "GenerateUIFormHistory.cachedat" ), genHistory );
        //    }
        //    else
        //    {
        //        return;
        //    }

        //}
        //catch ( System.Exception e )
        //{
        //    Debug.LogError( e );
        //}
        //预制体操作
        //var instance = PrefabUtility.LoadPrefabContents( assetPath );
        //instance.name = file;
        //PrefabUtility.SaveAsPrefabAsset( instance, "Assets/AssetBundle/UI/Form/aaa2.prefab" );
        //PrefabUtility.UnloadPrefabContents( instance );

        var formClsName = file + "";
        var managerClsName = $"{file}Manager";
        var outputFolder = $"Assets/Framework_AutoGenerate/Scripts/UIForms/{file}/";
        if ( !Directory.Exists( outputFolder ) )
        {
            Directory.CreateDirectory( outputFolder );
        }

        EditorUtility.DisplayProgressBar( "Generate UIForm Derived ClassScript", $"class {managerClsName}", 0.3f );
        GenCSharpScript.GenScriptFromTemplate( "Assets/Frameworks/Editor/UIScriptTemplate/XXXFormManager.cs", outputFolder, managerClsName, ( ref string textContentProcessing ) =>
        {
            textContentProcessing = textContentProcessing.Replace( "XXXFormManager", managerClsName );
            textContentProcessing = textContentProcessing.Replace( "XXXForm", formClsName );
        } );

        EditorUtility.DisplayProgressBar( "Generate UIForm Derived ClassScript", $"class {formClsName}", 0.667f );
        GenCSharpScript.GenScriptFromTemplate( "Assets/Frameworks/Editor/UIScriptTemplate/XXXForm.cs", outputFolder, formClsName, ( ref string textContentProcessing ) =>
        {
            textContentProcessing = textContentProcessing.Replace( "XXXFormManager", managerClsName );
            textContentProcessing = textContentProcessing.Replace( "XXXForm", formClsName );
        } );

        EditorUtility.ClearProgressBar( );

        string error = AssetDatabase.RenameAsset( assetPath, file );
        if ( !string.IsNullOrEmpty( error ) )
        {
            Debug.LogError( error );
            return;
        }

        var newPath = assetPath.Replace( fileName, file );
        EditorPrefs.SetString( generateClassName, formClsName );
        EditorPrefs.SetString( generatePrefabPath, newPath );
        AssetDatabase.SaveAssets( );
        AssetDatabase.Refresh( );
    }
}
