//==========================
// - FileName:      Assets/Frameworks/Editor/Excel/ExcelEditorWindow.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using UnityEditor;
using UnityEngine;
using Debug = UnityEngine.Debug;
using Directory = System.IO.Directory;
using File = System.IO.File;

public class ExcelEditorWindow : EditorWindow
{
    [MenuItem( "Frameworks/Excel工具界面", false, 10 )]
    private static void Open()
    {
        Rect wr = new Rect( 0, 0, 500, 500 );
        ExcelEditorWindow window = ( ExcelEditorWindow ) EditorWindow.GetWindowWithRect( typeof( ExcelEditorWindow ), wr, true, "Export Excel Window" );
        window.Show();
    }

    class ExcelEditorConfig
    {
        public string excelRootFolder;
        public string lastUpdateTime = string.Empty;
        public Dictionary<string, bool> rawSelected = new Dictionary<string, bool>();
    }
    ExcelEditorConfig data;
    private string GetConfigFilePath()
    {
        return Path.Combine( Application.persistentDataPath, nameof( ExcelEditorConfig ) );
    }
    private void OnEnable()
    {

        if ( !File.Exists( GetConfigFilePath() ) )
        {
            data = new ExcelEditorConfig();
            try
            {
                var clips = Application.dataPath.Split( '/' );
                var projname = clips[ clips.Length - 2 ];
                var plant = projname.Split( '-' )[ 0 ] + "-plan";
                var plantPath = Application.dataPath.Replace( $"{projname}/Assets", $"{plant}/" );
                data.excelRootFolder = plantPath;
            }
            catch { }
        }
        else
        {
            try
            {
                data = JsonConvert.DeserializeObject<ExcelEditorConfig>( File.ReadAllText( GetConfigFilePath() ) );
            }
            catch ( Exception e )
            {
                Debug.LogError( e );
                data = new ExcelEditorConfig();
            }
        }

        data.lastUpdateTime = DateTime.Now.ToString();
        excelRootFolder = data.excelRootFolder;
        excels.Clear();
    }
    private void OnDisable()
    {
        try
        {
            string jsonstr = JsonConvert.SerializeObject( data );
            File.WriteAllText( GetConfigFilePath(), jsonstr );
        }
        catch ( Exception e )
        {
            Debug.LogError( e );
        }
    }

    string excelRootFolder = string.Empty;
    List<string> excels = new List<string>();
    Vector2 excelScrollerPos = Vector2.zero;
    //绘制窗口时调用
    private void OnGUI()
    {
        GUILayout.Label( "选择一个批量导出的Excel目录: " );
        GUILayout.BeginHorizontal();
        excelRootFolder = GUILayout.TextField( excelRootFolder, 128, GUILayout.MaxWidth( 400f ) );
        if ( GUILayout.Button( "选择目录" ) )
        {
            string newFolder = EditorUtility.OpenFolderPanel( "选择Excel目录", excelRootFolder, string.Empty );
            if ( !string.IsNullOrEmpty( newFolder ) && !string.IsNullOrWhiteSpace( newFolder ) )
            {
                excelRootFolder = newFolder;
                if ( Directory.Exists( excelRootFolder ) )
                {
                    data.excelRootFolder = excelRootFolder;
                }
            }
        }
        GUILayout.EndHorizontal();
        GUILayout.Space( 4 );
        GUILayout.BeginHorizontal();
        if ( GUILayout.Button( "开始遍历" ) )
        {
            excels.Clear();
            if ( Directory.Exists( excelRootFolder ) )
            {
                ConsoleUtils.Clear();
                string[] xlsxs = Directory.GetFiles( excelRootFolder, "*.xlsx", SearchOption.TopDirectoryOnly );
                excels.AddRange( xlsxs );

                //默认fasle
                foreach ( var xlsx in xlsxs )
                {
                    if ( !data.rawSelected.ContainsKey( xlsx ) )
                    {
                        data.rawSelected.Add( xlsx, false );
                    }
                }
            }
            else
            {
                EditorUtility.DisplayDialog( "路径错误", $"不存在 {excelRootFolder}", "确认" );
                Debug.LogError( $"Excel路径错误: {excelRootFolder}" );
            }
        }
        else if ( GUILayout.Button( "批量导出" ) )
        {
            BatchExport( excelRootFolder );
        }
        else if ( GUILayout.Button( "打开目录 - Excel源" ) )
        {

            RevealInFinder( excelRootFolder );
        }
        else if ( GUILayout.Button( "打开目录 - 数据源" ) )
        {

            RevealInFinder( ExcelExport.data_dir_path );
        }
        else if ( GUILayout.Button( "打开目录 - 声明类" ) )
        {
            RevealInFinder( ExcelExport.declare_dir_path );
        }
        GUILayout.EndHorizontal();
        if ( excels.Count > 0 )
        {
            GUILayout.Space( 4 );
            excelScrollerPos = EditorGUILayout.BeginScrollView( excelScrollerPos );
            EditorGUILayout.BeginVertical();
            for ( int i = 0; i < excels.Count; i++ )
            {
                EditorGUILayout.BeginHorizontal();
                EditorGUILayout.LabelField( "raw?", GUILayout.MaxWidth( 30 ) );
                data.rawSelected[ excels[ i ] ] = EditorGUILayout.Toggle( data.rawSelected[ excels[ i ] ], GUILayout.MaxWidth( 30 ) );
                EditorGUILayout.TextArea( excels[ i ], GUILayout.MaxWidth( 380 ) );
                if ( GUILayout.Button( "Export" ) )
                {
                    Export( excels[ i ] );
                }
                EditorGUILayout.EndHorizontal();
            }
            EditorGUILayout.EndVertical();
            EditorGUILayout.EndScrollView();
        }

    }

    private void RevealInFinder( string directory )
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

    private void ExportRaw( string xlsx )
    {
        ExcelExport.ConvertRawFromFile( xlsx );
    }

    private void Export( string xlsx )
    {
        if ( data.rawSelected[ xlsx ] )
        {
            Log.Green( "export Raw-data..." );
            ExportRaw( xlsx );
        }
        else
        {
            ExcelExport.ConvertFromFile( xlsx );
        }
    }

    private void BatchExport( string folder )
    {
        List<string> raws = new List<string>();
        foreach ( var kvp in data.rawSelected )
        {
            if ( kvp.Value )
            {
                raws.Add( kvp.Key );
            }
        }
        ExcelExport.ConvertFromFolder( folder, raws );
    }

    private void OnInspectorUpdate()
    {
        this.Repaint();
    }
}
