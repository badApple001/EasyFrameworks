using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OnLineConfigHandler : IHandler
{

    //默认配置
    private Dictionary<string, string> settings = new Dictionary<string, string>( )
    {
        {  "openAds" , "1" },//开启广告
    };

    private Dictionary<string, string> localSetting; //本地配置备份
    /// <summary>
    /// 完成状态
    /// </summary>
    public bool done( ) {
        return localSetting != null; 
    }

    public OnLineConfigHandler( )
    {
        localSetting = new Dictionary<string, string>( );
        foreach ( var kvp in settings )
        {
            localSetting.Add( kvp.Key, kvp.Value );
        }
    }


    public async void Do( )
    {
        //var onLineConfig = await OnLineConfig.GetDatas( );

        //if ( onLineConfig != null )
        //{
        //    Merge( onLineConfig.data );
        //}

        //AdsController.IgnoreAds = settings.ContainsKey( "settings" ) && settings[ "settings" ] == "1";
    }


    public void Merge( Dictionary<string, string> items )
    {
        foreach ( var item in items )
        {
            settings[ item.Key ] = item.Value;
        }
    }

    public void Undo( )
    {
        //回滚到本地配置
        settings = localSetting;
    }
}
