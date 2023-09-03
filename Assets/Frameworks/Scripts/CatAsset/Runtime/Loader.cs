using CatAsset.Runtime;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Threading;
using UnityEngine;
using static UnityEngine.UI.GridLayoutGroup;

/// <summary>
/// 资源加载器
/// </summary>
public class Loader
{
    /// <summary>
    /// 同步加载AssetBundle资源
    /// </summary>
    /// <typeparam name="T"> 类型：Unity资源类型 继承自 UnityEngine.Object </typeparam>
    /// <param name="path"> 项目路径 </param>
    /// <param name="owner"> 拥有者 跟随拥有者销毁而计数减1 当计数为0时销毁资源 </param>
    /// <returns></returns>
    public static T Load<T>( string path, GameObject owner = null ) where T : UnityEngine.Object
    {
        var handler = CatAssetManager.LoadAsset<T>( path, default( CancellationToken ), default( TaskPriority ) );
        if ( owner != null )
        {
            handler.BindTo( owner );
        }
        return handler.Asset;
    }

    /// <summary>
    /// 加载原生 byte[]
    /// </summary>
    /// <param name="path"></param>
    /// <returns></returns>
    public static byte[] Load( string path )
    {
        var handler = CatAssetManager.LoadAsset<object>( path, default( CancellationToken ), default( TaskPriority ) );
        return ( byte[] ) handler.Asset;
    }

    /// <summary>
    /// 异步加载资源
    /// </summary>
    public static AssetHandler<object> LoadAssetAsync( string assetName, CancellationToken token = default,
        TaskPriority priority = TaskPriority.Low )
    {
        return CatAssetManager.LoadAssetAsync( assetName, token, priority );
    }

    /// <summary>
    /// 异步加载资源
    /// </summary>
    public static AssetHandler<T> LoadAssetAsync<T>( string assetName, CancellationToken token = default,
        TaskPriority priority = TaskPriority.Low )
    {
        return CatAssetManager.LoadAssetAsync<T>( assetName, token, priority );
    }


    /// <summary>
    /// 异步批量加载资源
    /// </summary>
    public static BatchAssetHandler BatchLoadAssetAsync( List<string> assetNames, CancellationToken token = default,
        TaskPriority priority = TaskPriority.Low )
    {
        return CatAssetManager.BatchLoadAssetAsync( assetNames, token, priority );
    }

    /// <summary>
    /// 异步加载场景
    /// </summary>
    public static SceneHandler LoadSceneAsync( string sceneName, CancellationToken token = default,
        TaskPriority priority = TaskPriority.Low )
    {
        return CatAssetManager.LoadSceneAsync( sceneName, token, priority );
    }

    /// <summary>
    /// 异步加载预制体并实例化，会自行将Handler绑定至实例化出的游戏物体上
    /// </summary>
    public static async Task<GameObject> InstantiateAsync( string prefabName, Transform parent = null )
    {
        var handler = await LoadAssetAsync<GameObject>( prefabName );
        GameObject go = null;
        if ( handler.IsSuccess )
        {
            go = GameObject.Instantiate( handler.Asset, parent );
            go.BindTo( handler );
        }
        else
        {
            handler.Unload( );
        }
        return go;
    }
}
