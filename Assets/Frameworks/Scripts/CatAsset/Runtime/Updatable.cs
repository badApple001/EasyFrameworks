//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/Updatable.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using CatAsset.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class Updatable
{
    public Action<BundleUpdateResult> OnBundleUpdatedHandler;
    public class WebVersion
    {
        public string GameVersion;
        public int ManifestVersion;
    }

    protected Action CompleteHandler;
    public Updatable( string AssetServerIP, Action CompleteHandler, Action<BundleUpdateResult> onBundleUpdateHandler )
    {
        //请求最新的资源清单版本号
        string versionTxtUri = AssetServerIP + "/version.txt";
        Debug.Log( versionTxtUri );
        this.OnBundleUpdatedHandler = onBundleUpdateHandler;
        this.CompleteHandler = CompleteHandler;
        UnityWebRequest uwr = UnityWebRequest.Get( versionTxtUri );
        UnityWebRequestAsyncOperation op = uwr.SendWebRequest();
        op.completed += ( obj ) =>
        {

#if UNITY_2020_3_OR_NEWER
            if (op.webRequest.result == UnityWebRequest.Result.ConnectionError || op.webRequest.result == UnityWebRequest.Result.ProtocolError)
#else
            if ( !string.IsNullOrWhiteSpace( op.webRequest.error ) )
#endif
            {

                Debug.Log( "读取远端最新版本号失败：" + op.webRequest.error );
                return;
            }

            WebVersion webVersion = JsonUtility.FromJson<WebVersion>( op.webRequest.downloadHandler.text );
            int manifestVersion = webVersion.ManifestVersion;

            //根据平台，整包版本和资源版本设置资源更新uri的前缀
            string uriPrefix = $"{AssetServerIP}/Android/{Application.version}_{manifestVersion}";
            CatAssetManager.UpdateUriPrefix = uriPrefix;
            Debug.Log( $"读取远端最新版本号成功，资源更新地址为：{uriPrefix}" );

            //检查资源版本
            CatAssetManager.CheckVersion( OnVersionChecked );
        };
    }

    private void OnVersionChecked( VersionCheckResult result )
    {
        if ( !string.IsNullOrEmpty( result.Error ) )
        {
            Debug.LogError( $"资源版本检查失败：{result.Error}" );
            return;
        }

        Debug.Log( $"资源版本检查成功：{result}" );
        CompleteHandler?.Invoke();

        //遍历所有资源组的更新器
        List<GroupInfo> groups = CatAssetManager.GetAllGroupInfo();
        foreach ( GroupInfo groupInfo in groups )
        {
            GroupUpdater updater = CatAssetManager.GetGroupUpdater( groupInfo.GroupName );
            if ( updater != null )
            {
                Debug.Log( $"{groupInfo.GroupName}组的资源正在更新" );
                CatAssetManager.UpdateGroup( groupInfo.GroupName, OnBundleUpdated );
            }
        }
    }

    protected virtual void OnBundleUpdated( BundleUpdateResult result )
    {
        if ( !result.Success )
        {
            Debug.LogError( $"资源组{result.Updater.GroupName}的资源{result.UpdateInfo.Info}更新失败" );
            return;
        }
        Debug.Log( $"资源组{result.Updater.GroupName}的资源{result.UpdateInfo.Info}更新成功,\n{result}" );
        OnBundleUpdatedHandler?.Invoke( result );
    }
}
