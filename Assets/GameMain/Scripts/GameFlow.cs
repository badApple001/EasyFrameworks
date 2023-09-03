using CatAsset.Runtime;
using Game;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameFlow : MonoBehaviour
{

    private static GameFlow instance = null;
    public static GameFlow GetInstance( ) { return instance; }
    private void Awake( )
    {
        if ( instance != null && instance != this )
        {
            Log.Error( "GameFlow Instance is already exist and instance is not this" );
            DestroyImmediate( gameObject );
            return;
        }
        instance = this;
    }

    //游戏主数据
    public GUserData gameCacheData = null;
    private void Start( )
    {
        gameCacheData = DiskAgent.Load( ( ) =>
        {
            //自定义默认数据
            var data = new GUserData( );
            data.createdTime = DateTime.Now.Ticks;
            return data;
        } );

        if ( AssetManager.GetInstance( ).Competed )
        {
            OnAssetBundleReady( );
        }
        else
        {
            Fire.Once( FrameworkEvent.CheckAssetBunldeCompleted, OnAssetBundleReady );
        }
    }

    private void OnDestroy( )
    {
        Fire.Off( this );
    }


    private void OnAssetBundleReady( )
    {
        //Loading界面
        //LoadingFormManager.GetInstance( ).Open( );

        //游戏启动次数自增
        gameCacheData.gameLaunchCount++;

        //加载配置
        Go( );
    }

    async void Go( )
    {

        //初始化多语言
        await LanguageManager.GetInstance( ).Init( );

        ////创建地形
        //await Framework.GetInstance( ).CreateEnvironment( "Assets/BundleRes/Environment/Map1/Map1.prefab" );

        ////关闭Loading
        //LoadingFormManager.GetInstance( ).Close( );

        ////打开主UI
        //GameUIFormManager.GetInstance( ).Open( );
    }


    private void Update( )
    {

        //同步接口测试
        //if ( Input.GetKeyUp( KeyCode.Space ) )
        //{
        //    var imgg = UIManager.GenImage( "Assets/BundleRes/UI/Sprites/Card/acher_12.png" );

        //    UIManager.AddChild2DefaultCanvas( imgg.transform );

        //    byte[] buffer = Loader.Load( "Assets/BundleRes/ExcelData/Actor2.bytes" );
        //    var dt = DataTableManager.Parse<Actor2>( buffer );

        //    Debug.Log( dt.Count );
        //}

        if ( Input.GetMouseButton( 0 ) )
        {


            Ray ray = Camera.main.ScreenPointToRay( Input.mousePosition );
            if ( Physics.Raycast( ray, out RaycastHit hitInfo, 200 ) )
            {

                if ( hitInfo.collider.CompareTag( "Checker" ) )
                {

                }
            }
        }
    }


    //public ComputeShader computeShader;
    //private void OnEnable( )
    //{
    //    GPUBatchProcess.Load( computeShader );

    //}

}


