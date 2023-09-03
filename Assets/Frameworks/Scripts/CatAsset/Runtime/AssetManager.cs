//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/CatAssetComponent.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using System;
using UnityEngine;
using CatAsset.Runtime;
using System.Threading;
using System.Collections.Generic;
using System.Threading.Tasks;


/// <summary>
/// CatAsset资源组件
/// </summary>
public class AssetManager : MonoBehaviour
{
    [Header( "运行模式" )]
    public RuntimeMode RuntimeMode = RuntimeMode.PackageOnly;

    public string RemoteVersionFileAddress = "127.0.0.1";

    [Header( "编辑器资源模式" )]
    public bool IsEditorMode = true;

    [Header( "资源包卸载延迟" )]
    public float UnloadBundleDelayTime = 120f;

    [Header( "资源卸载延迟" )]
    public float UnloadAssetDelayTime = 60f;

    [Header( "最大任务同时运行数量" )]
    public int MaxTaskRunCount = 30;

    /// <summary>
    /// 是否加载配置完成
    /// </summary>
    public bool Competed { private set; get; } = false;

    /// <summary>
    /// 热更新操作自定义处理
    /// </summary>
    public Action<BundleUpdateResult> HotUpdateHandler { private set; get; } = null;

    private static AssetManager instance;
    public static AssetManager GetInstance() { return instance; }
    private void Awake()
    {
        if ( instance != null && instance != this )
        {
            DestroyImmediate( instance );
            return;
        }
        instance = this;

        CatAssetManager.UnloadBundleDelayTime = UnloadBundleDelayTime;
        CatAssetManager.UnloadAssetDelayTime = UnloadAssetDelayTime;
        CatAssetManager.MaxTaskRunCount = MaxTaskRunCount;
        //添加调试分析器组件
        gameObject.AddComponent<ProfilerComponent>();
    }

    [Obsolete( "Please use Loader.Load instead. (UnityUpgradable) -> Loader.Load", true )]
    public T Load<T>( string path, GameObject owner = null ) where T : UnityEngine.Object
    {
        return Loader.Load<T>( path, owner );
    }

    private void Start()
    {

        switch ( RuntimeMode )
        {
            case RuntimeMode.PackageOnly:
#if UNITY_EDITOR
                if ( IsEditorMode )
                {
                    CatAssetManager.SetAssetLoader<EditorAssetLoader>();
                    ConfiguageCompleted();
                    return;
                }
#endif
                CatAssetManager.SetAssetLoader<PackageOnlyAssetLoader>();
                new PackageOnly( ConfiguageCompleted );
                break;
            case RuntimeMode.Updatable:
                CatAssetManager.SetAssetLoader<UpdatableAssetLoader>();
                new Updatable( RemoteVersionFileAddress, ConfiguageCompleted, HotUpdateHandler );
                break;
        }
    }

    /// <summary>
    /// 轮询CatAsset资源管理器
    /// </summary>
    private void Update()
    {
        CatAssetManager.Update();
    }

    /// <summary>
    /// 检查配置完成
    /// </summary>
    private void ConfiguageCompleted()
    {
        //预留处理
        Competed = true;
    }
}
