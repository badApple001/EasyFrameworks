using Game;
using System;
using System.Collections.Generic;
using UnityEngine;


[DefaultExecutionOrder( -2000 )]
public class GameFlow : MonoBehaviour
{

    public static GameFlow Instance { get; private set; } = null;

    public List<string> AOTDlls = new List<string>( )
    {
        "mscorlib.dll.bytes",
        "System.dll.bytes",
        "System.Core.dll.bytes",
        "HotUpdate.dll.bytes"
    };

    private void Awake( )
    {
        if ( Instance != null && Instance != this )
        {
            Log.Error( "GameFlow Instance is already exist and Instance is not this" );
            DestroyImmediate( this );
            return;
        }
        Instance = this;
    }

    //游戏主数据
    public GUserData gameCacheData { private set; get; } = null;

    private void Start( )
    {
        gameCacheData = DiskAgent.Load( ( ) =>
        {
            //自定义默认数据
            var data = new GUserData( );
            data.createdTime = DateTime.Now.Ticks;

            var mapdata = data.mapdata;
            for ( int i = 0; i < 3; i++ )
            {
                mapdata.herodatas.Add( new List<Herodata>( ) );
                for ( int j = 0; j < 5; j++ )
                {
                    mapdata.herodatas[ i ].Add( new Herodata( ) );
                }
            }
            return data;
        } );

        if ( Framework.Instance.Completed )
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
        //游戏启动次数自增
        gameCacheData.gameLaunchCount++;

        //公共模块和基础模块初始化
        HandlerManager.Do<InitCommonHandler>( );

        //热更新模块
        HandlerManager.Find<InitHotUpdateHandler>( ).InitHotUpdate( AOTDlls, Go );
    }

    void Go( )
    {
        //在线配置
        HandlerManager.Do<OnLineConfigHandler>( );
        //初始化多语言
        //HandlerManager.Do<InitLanguageHandler>( );
        //初始化SDK
        HandlerManager.Do<InitSDKHandler>( );


        Timer.Loop( 1f, TestTimer );
    }

    private void TestTimer( )
    {
    }

}


