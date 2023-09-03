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
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public class Framework : MonoBehaviour
{

    [SerializeField] private Transform layerRoot = null;
    public Transform Entitys = null;
    public Transform Environment = null;
    public Camera mainCamera = null;
    public Camera uiCamera = null;
    private static Framework instance = null;
    public bool UpgradeVersion { private set; get; } = false;
    public static Framework GetInstance()
    {
        return instance;
    }

    private void Awake()
    {
        if ( null != instance && instance != this )
        {
            throw new UnityException( "Multiple Framework singletons within the scenario are not allowed" );
        }
        instance = this;

        //这里如果你要启用 EffectCavnas 和 TopCanvas 你需要去场景里设置Active为False 否则默认你只能获取BaseCanvas
        UIManager.InitializeAllLayersAndCanvas( layerRoot, layerRoot.GetComponentsInChildren<Canvas>() );
#if DebugMode
        gameObject.AddComponent<Debugger.DebuggerComponent>();
#endif
        //版本升级检测
#if !UNITY_EDITOR
        UpgradeVersion = CheckCurrentVersionHasUpgrade();
#endif
    }

    private bool CheckCurrentVersionHasUpgrade()
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


    IEnumerator Start()
    {
        var AssetLoader = AssetManager.GetInstance();
        yield return new WaitWhile( () => AssetLoader != null && AssetLoader.Competed );
        Fire.Event( FrameworkEvent.CheckAssetBunldeCompleted );
    }


    //1分钟轮询一次
    public void PollingEvery1Minute()
    {
        //电量过低 
        if ( PlatformUtils.batteryLevel <= 0.04f )
        {
            DiskAgent.SaveAll2Disk();
        }
    }

    public void OnEnable()
    {

        Timer.SetInterval( 1f * 60, PollingEvery1Minute );
    }

    private void OnDestroy()
    {
        Timer.ClearTimer( this );
    }

    public void OnApplicationFocus( bool focus )
    {
        Fire.Event( FrameworkEvent.SwtichFocusState, focus );

        if ( !focus )
        {
            Log.PINK( "App失去焦点 自动保存数据" );
            DiskAgent.SaveAll2Disk();
        }
    }


    #region MouseButton Event Handler

    private List<System.Action> InputMouseButtonUp0Handler = null;
    private List<System.Action> InputMouseButtonUp1Handler = null;

    public void AddMouseBottonUp0Handler( System.Action handler )
    {
        if ( InputMouseButtonUp0Handler == null )
            InputMouseButtonUp0Handler = new List<System.Action>() { handler };
        else if ( !InputMouseButtonUp0Handler.Contains( handler ) )
        {
            InputMouseButtonUp0Handler.Add( handler );
        }
    }
    public void AddMouseBottonUp1Handler( System.Action handler )
    {
        if ( InputMouseButtonUp1Handler == null )
            InputMouseButtonUp1Handler = new List<System.Action>() { handler };
        else if ( !InputMouseButtonUp1Handler.Contains( handler ) )
        {
            InputMouseButtonUp1Handler.Add( handler );
        }
    }
    public void RemoveMouseButtonUp0Handler( System.Action handler )
    {
        if ( null != InputMouseButtonUp0Handler && InputMouseButtonUp0Handler.Contains( handler ) )
        {
            InputMouseButtonUp0Handler.Remove( handler );
        }
    }
    public void RemoveMouseButtonUp1Handler( System.Action handler )
    {
        if ( null != InputMouseButtonUp1Handler && InputMouseButtonUp1Handler.Contains( handler ) )
        {
            InputMouseButtonUp1Handler.Remove( handler );
        }
    }

    #endregion


    /// <summary>
    /// Framework.Update后期将多增加一些常用方法来简化平时业务开发中频繁且相同的逻辑
    /// 毕竟它是生产队的驴 
    /// </summary>
    private void Update()
    {

        if ( InputMouseButtonUp1Handler != null && Input.GetMouseButtonUp( 1 ) )
        {
            InputMouseButtonUp1Handler.ForEach( handler => handler.Invoke() );
        }
        if ( InputMouseButtonUp0Handler != null && Input.GetMouseButtonUp( 0 ) )
        {
            InputMouseButtonUp0Handler.ForEach( handler => handler.Invoke() );
        }
    }

    /// <summary>
    /// 从本地加载一个预设并挂载到Entity下
    /// 
    /// Entity 是一个非常需要待完善的体系 它后续可能被添加上百行代码来完善它 所以不要轻易移除这个接口 
    /// 这个接口现在暂时只是预留 而不是它的全部  
    /// 
    /// </summary>
    /// <param name="path">例如: Assets/BundleRes/Entitys/AudioVisual/AudioVisual.prefab</param>
    /// <returns></returns>
    public Task<GameObject> CreateEntity( string path )
    {
        return Loader.InstantiateAsync( path, Entitys );
    }

    /// <summary>
    /// 从本地加载一个预设并挂载到Environment下
    /// 
    /// Environment 是一个庞大的体系 这里为它单独分配一个接口是为了尊重它
    /// 
    /// 后续可能在这个接口单独添加1000行代码有余 请看待好这个接口 
    /// 
    /// </summary>
    /// <param name="path">例如: Assets/BundleRes/Entitys/AudioVisual/AudioVisual.prefab</param>
    /// <returns></returns>
    public Task<GameObject> CreateEnvironment( string path )
    {
        return Loader.InstantiateAsync( path, Environment );
    }

    /// <summary>
    /// 释放Entitys节点下的对象
    /// 先对Entitys相关对象进行回收 如果是对象池的对象
    /// 其次 进行常规Destory操作
    /// </summary>
    public void DestroyEntitys()
    {
        PoolManager.GetInstance().DespawnChildren( Entitys, false, true );
        foreach ( Transform entity in Entitys )
        {
            Destroy( entity.gameObject );
        }
        Entitys.DetachChildren();
    }

    /// <summary>
    /// 释放地形环境节点下的对象
    /// 先对地形环境相关对象进行回收 如果是对象池的对象
    /// 其次 进行常规Destory操作
    /// </summary>
    public void DestroyEnvironment()
    {
        PoolManager.GetInstance().DespawnChildren( Environment, false, true );
        foreach ( Transform entity in Environment )
        {
            Destroy( entity.gameObject );
        }
        Environment.DetachChildren();
    }
}
