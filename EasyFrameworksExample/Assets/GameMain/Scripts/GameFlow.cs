using Game;
using System;
using System.Collections.Generic;
using UnityEngine;


[DefaultExecutionOrder( -2000 )]
public class GameFlow : MonoBehaviour
{

    public static GameFlow Instance { get; private set; } = null;
    

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

        //加载配置
        Go( );
    }

    void Go( )
    {
        //在线配置
        HandlerManager.Do<OnLineConfigHandler>( );
        //初始化多语言
        HandlerManager.Do<InitLanguageHandler>( );
        //初始化SDK
        HandlerManager.Do<InitSDKHandler>( );
        //初始化游戏
        HandlerManager.Do<InitGameHandler>( );
    }

}


