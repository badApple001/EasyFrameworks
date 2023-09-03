using CatAsset.Runtime;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Threading;
using UnityEngine;
using static UnityEngine.UI.GridLayoutGroup;

/// <summary>
/// ��Դ������
/// </summary>
public class Loader
{
    /// <summary>
    /// ͬ������AssetBundle��Դ
    /// </summary>
    /// <typeparam name="T"> ���ͣ�Unity��Դ���� �̳��� UnityEngine.Object </typeparam>
    /// <param name="path"> ��Ŀ·�� </param>
    /// <param name="owner"> ӵ���� ����ӵ�������ٶ�������1 ������Ϊ0ʱ������Դ </param>
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
    /// ����ԭ�� byte[]
    /// </summary>
    /// <param name="path"></param>
    /// <returns></returns>
    public static byte[] Load( string path )
    {
        var handler = CatAssetManager.LoadAsset<object>( path, default( CancellationToken ), default( TaskPriority ) );
        return ( byte[] ) handler.Asset;
    }

    /// <summary>
    /// �첽������Դ
    /// </summary>
    public static AssetHandler<object> LoadAssetAsync( string assetName, CancellationToken token = default,
        TaskPriority priority = TaskPriority.Low )
    {
        return CatAssetManager.LoadAssetAsync( assetName, token, priority );
    }

    /// <summary>
    /// �첽������Դ
    /// </summary>
    public static AssetHandler<T> LoadAssetAsync<T>( string assetName, CancellationToken token = default,
        TaskPriority priority = TaskPriority.Low )
    {
        return CatAssetManager.LoadAssetAsync<T>( assetName, token, priority );
    }


    /// <summary>
    /// �첽����������Դ
    /// </summary>
    public static BatchAssetHandler BatchLoadAssetAsync( List<string> assetNames, CancellationToken token = default,
        TaskPriority priority = TaskPriority.Low )
    {
        return CatAssetManager.BatchLoadAssetAsync( assetNames, token, priority );
    }

    /// <summary>
    /// �첽���س���
    /// </summary>
    public static SceneHandler LoadSceneAsync( string sceneName, CancellationToken token = default,
        TaskPriority priority = TaskPriority.Low )
    {
        return CatAssetManager.LoadSceneAsync( sceneName, token, priority );
    }

    /// <summary>
    /// �첽����Ԥ���岢ʵ�����������н�Handler����ʵ����������Ϸ������
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
