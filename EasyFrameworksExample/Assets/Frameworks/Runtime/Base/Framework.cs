/// <summary>
/// 
/// 游戏框架
/// 
/// 隶属于目前FullStack架构下的功能模块集成集
/// 服务与常规业务快速开发和框架内C层的作用以及内部集成接口对外衔接
/// 就目前 我们认为 对它的压榨远远不够它占用一个MonoBehaviour的开销 
/// 今后将对这快儿进行后续开发以为其它类提供更优质更快捷的服务
/// 
/// @anchor: ChenJC
/// @time: 2023/06/09
/// 
/// </summary>
using CatAsset.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;


public class Framework : MonoBehaviour
{

    [Header( "运行模式" )]
    public RuntimeMode RuntimeMode = RuntimeMode.PackageOnly;

    [Header( "远程热更新服务器地址" )]
    public string RemoteIp = "127.0.0.1:8080";

    [Header( "资源包卸载延迟" )]
    public float UnloadBundleDelayTime = 120f;

    [Header( "资源卸载延迟" )]
    public float UnloadAssetDelayTime = 60f;

    [Header( "最大任务同时运行数量" )]
    public int MaxTaskRunCount = 30;

    [Header( "Canvas预设" )]
    public Canvas CanvasPrefab = null;

    /// <summary>
    /// Entity父节点
    /// </summary>
    public Transform Entitys { private set; get; }

    /// <summary>
    /// Environment父节点
    /// </summary>
    public Transform Environment { private set; get; }

    /// <summary>
    /// 场景内的主相机
    /// </summary>
    public Camera MainCamera { private set; get; }

    /// <summary>
    /// 场景内的ui相机
    /// </summary>
    public Camera UICamera { private set; get; }

    public static Framework Instance { private set; get; } = null;

    /// <summary>
    /// 覆盖安装 版本升级Trigger
    /// </summary>
    public bool UpgradeVersionTrigger { private set; get; } = false;

    /// <summary>
    /// 需要热更 请在游戏Loading的时候检测
    /// </summary>
    public bool HotUpdateTrigger { private set; get; } = false;

    /// <summary>
    /// 是否初始化完成
    /// </summary>
    public bool Completed { private set; get; } = false;

    private void Awake( )
    {
        if ( null != Instance && Instance != this )
        {
            DestroyImmediate( this );
            return;
        }
        Instance = this;

        MainCamera = Camera.main;
        UICamera = transform.Find( "UI/UI Camera" ).GetComponent<Camera>( );
        Entitys = transform.Find( "World/Entitys" );
        Environment = transform.Find( "World/Environment" );


        UIManager.Init( transform.Find( "UI/Layers" ).GetChild( 0 ), CanvasPrefab );

#if SANDBOX_MODE
        gameObject.AddComponent<Debugger.DebuggerComponent>( );
#endif
        //版本升级检测
#if !UNITY_EDITOR
        UpgradeVersionTrigger = CheckCurrentVersionHasUpgrade();
#endif

        CatAssetManager.UnloadBundleDelayTime = UnloadBundleDelayTime;
        CatAssetManager.UnloadAssetDelayTime = UnloadAssetDelayTime;
        CatAssetManager.MaxTaskRunCount = MaxTaskRunCount;

        //添加调试分析器组件
#if SANDBOX_MODE
        gameObject.AddComponent<ProfilerComponent>( );
#endif

        switch ( RuntimeMode )
        {
#if UNITY_EDITOR
            case RuntimeMode.Editor:
                CatAssetManager.SetAssetLoader<EditorAssetLoader>( );
                break;
#endif
            case RuntimeMode.PackageOnly:
                CatAssetManager.SetAssetLoader<PackageOnlyAssetLoader>( );
                break;
            case RuntimeMode.Updatable:
                CatAssetManager.SetAssetLoader<UpdatableAssetLoader>( );
                break;
        }
    }

    private bool CheckCurrentVersionHasUpgrade( )
    {
        var localVersion = DiskAgent.GetString( "ApplictionVersion", Application.version );
        try
        {
            var oldVersionCode = int.Parse( localVersion.Replace( ".", "" ) );
            var curVersionCode = int.Parse( Application.version.Replace( ".", "" ) );
            if ( curVersionCode > oldVersionCode )
            {
                Log.PINK( $"Upgrade version for current App, Version: {Application.version}" );
                DiskAgent.SetString( "ApplictionVersion", Application.version );
                return true;
            }
        }
        catch ( System.Exception e )
        {
            Log.Error( e );
        }
        return false;
    }


    [Serializable]
    public class WebVersion
    {
        public int ManifestVersion;
    }

    IEnumerator Start( )
    {

        if ( this.RuntimeMode == RuntimeMode.Updatable )
        {
            string versionTxtUri = RemoteIp + "/version.txt";
            UnityWebRequest request = UnityWebRequest.Get( versionTxtUri );
            yield return request.SendWebRequest( );
            if ( request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError )
            {
                Log.PINK( "Request remote version file error：" + request.error );
            }
            else
            {
                Log.Green( request.downloadHandler.text );
            }

            WebVersion webVersion = JsonUtility.FromJson<WebVersion>( request.downloadHandler.text );
            int manifestVersion = webVersion.ManifestVersion;


            string platformName = "StandaloneWindows64";
            if ( Application.platform == RuntimePlatform.Android )
            {
                platformName = "Android";
            }
            else if ( Application.platform == RuntimePlatform.IPhonePlayer )
            {
                platformName = "iOS";
            }
            else if ( Application.platform == RuntimePlatform.WebGLPlayer )
            {
                platformName = "WebGL";
            }
            string uriPrefix = $"{RemoteIp}/{platformName}/{manifestVersion}";
            CatAssetManager.UpdateUriPrefix = uriPrefix;
            Log.PINK( $"读取远端最新版本号成功，资源更新地址为：{uriPrefix}" );
        }

        bool checkVersionCompleted = false;
        CatAssetManager.CheckVersion( result =>
        {
            if ( !result.Success )
            {
                Log.Error( result.ToString( ) );
                return;
            }

            Debug.Log( $"资源版本检查成功：{result}" );

            if ( this.RuntimeMode == RuntimeMode.Updatable )
            {
                //遍历所有资源组的更新器
                List<GroupInfo> groups = CatAssetManager.GetAllGroupInfo( );
                foreach ( GroupInfo groupInfo in groups )
                {
                    GroupUpdater updater = CatAssetManager.GetGroupUpdater( groupInfo.GroupName );
                    if ( updater != null )
                    {

                        //需要热更新
                        HotUpdateTrigger = true;
                        break;
                    }
                }
            }

            checkVersionCompleted = true;
        } );
        yield return new WaitWhile( ( ) => !checkVersionCompleted );
        Fire.Event( FrameworkEvent.CheckAssetBunldeCompleted );
        Completed = true;
    }

    private void OnBundleUpdated( BundleUpdateResult result )
    {
        if ( !result.Success )
        {
            Debug.LogError( $"资源组{result.Updater.GroupName}的资源{result.UpdateInfo.Info}更新失败" );
            return;
        }

        Debug.Log( $"资源组{result.Updater.GroupName}的资源{result.UpdateInfo.Info}更新成功,\n{result}" );
    }

    /// <summary>
    /// 开始热更新
    /// </summary>
    public void HotUpdate( )
    {
        if ( HotUpdateTrigger )
        {
            List<GroupInfo> groups = CatAssetManager.GetAllGroupInfo( );
            foreach ( GroupInfo groupInfo in groups )
            {
                GroupUpdater updater = CatAssetManager.GetGroupUpdater( groupInfo.GroupName );
                if ( updater != null )
                {
                    CatAssetManager.UpdateGroup( groupInfo.GroupName, OnBundleUpdated );
                }
            }
            HotUpdateTrigger = false;
        }
    }


    public void OnApplicationFocus( bool focus )
    {
        Fire.Event( FrameworkEvent.SwtichFocusState, focus );
    }


    private void Update( )
    {
        CatAssetManager.Update( );//资源管理器更新
    }

}
