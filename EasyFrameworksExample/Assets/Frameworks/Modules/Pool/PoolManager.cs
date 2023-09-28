/**
 * 
 * class: EasyObjectPool
 * 
 * A lightweight object pool.
 * 
 * You need to create an object in the scene and then hang it.
 *
 * Support automatic capacity expansion.
 *  
 * Support recycling detection.
 * ————————————————
 * 版权声明：本文为CSDN博主「极客柒」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
 * 原文链接：https://blog.csdn.net/qq_39162566/article/details/128290119
 * 
 */
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PoolCore;
using System.Threading.Tasks;
using CatAsset.Runtime;

public class PoolManager : MonoBehaviour
{

    [SerializeField, Tooltip( "是否在Awake的时候进行预加载" )] private bool InitOnAwake = true;
    private Dictionary<string, TransformPool> poolDict = new Dictionary<string, TransformPool>();
    private static Dictionary<Transform, string> nameofDict = new Dictionary<Transform, string>();

    public static PoolManager Instance { private set; get; } = null;

    private void Awake()
    {
        if ( Instance != null && Instance != this )
        {
            DestroyImmediate( this );
            return;
        }
        Instance = this;
    }

    private void Start( )
    {
        //预加载
        if ( InitOnAwake )
        {
            if ( Framework.Instance.Completed )
            {
                Init( );
            }
            else
            {
                Fire.Once( FrameworkEvent.CheckAssetBunldeCompleted, Init );
            }
        }
    }

    public const string poolSettingAsset = nameof( PoolSettingAsset );
    private bool _initLock = false;
    public bool Completed { private set; get; } = false;
    public void Init()
    {
        if ( !_initLock )
        {
            _initLock = true;
            PoolSettingAsset settingAsset = Resources.Load<PoolSettingAsset>( poolSettingAsset );
            Load( settingAsset );
        }

    }

    public async Task<bool> Load( PoolSettingAsset settingAsset )
    {
        List<string> files = new List<string>();
        Dictionary<string, PoolSettingItem> itemDict = new Dictionary<string, PoolSettingItem>();
        settingAsset.settings.ForEach( item =>
        {
            files.Add( item.file );
            itemDict.Add( item.file, item );
        } );

        var result = await CatAssetManager.BatchLoadAssetAsync( files );
        if ( result.IsSuccess )
        {
            AssetHandler handler;
            for ( int i = 0; i < result.Handlers.Count; i++ )
            {
                handler = result.Handlers[ i ];
                var ac = handler.AssetAs<GameObject>();
                var item = itemDict[ handler.Name ];
                Load(ac,item.count);
            }

            Resources.UnloadAsset( settingAsset );
            Completed = true;
            return true;
        }
        else
        {
            Debug.LogError( $"加载音效配置失败 {result.Error}" );
            Completed = true;
            return false;
        }
    }

    /// <summary>
    /// 从对象池中拿一个闲置的对象
    /// </summary>
    /// <param name="key"></param>
    /// <returns>当返回null时 说明不存在这个预设的池子 你可以使用 GeneratePool 来添加一个新的池子 </returns>
    public Transform Spawn( string key )
    {

        TransformPool res = null;
        if ( poolDict.TryGetValue( key, out res ) )
        {
            Transform trans = res.Pop();
            trans.gameObject.SetActive( true );
            return trans;
        }
#if UNITY_EDITOR
        else
        {
            Log.Error( $"PoolManager not contain: {key}" );
        }
#endif
        return null;
    }
    /// <summary>
    /// 回收一个对象到对象池中
    /// </summary>
    /// <param name="obj"></param>
    /// <returns></returns>
    public bool Despawn( Transform obj )
    {
        if ( null == obj )
        {
#if UNITY_EDITOR || ENABLE_LOG
            throw new System.Exception( "Despawn obj is null" );
#else
            return false;
#endif
        }

        if ( nameofDict.TryGetValue( obj, out string name ) && poolDict.TryGetValue( name, out TransformPool res ) )
        {
            res.Push_Back( obj );
            return true;
        }
        else
        {
            //容错处理
#if UNITY_EDITOR || ENABLE_LOG
            obj.gameObject.SetActive( false );
            Debug.LogError( $"current object is not objectPool element: {obj.name}", obj.gameObject );
#else
            Destroy( obj.gameObject );
#endif
        }
        return false;
    }


    /// <summary>
    /// 将指定key的缓存池内所有的对象全部回收
    /// </summary>
    /// <param name="pool"></param>
    public void Despawn( string pool )
    {
        if ( poolDict.TryGetValue( pool, out TransformPool res ) )
        {
            res.Recycle();
        }
#if UNITY_EDITOR || ENABLE_LOG
        else
        {
            Debug.LogError( $"exclusive pool: {pool}" );
        }
#endif
    }

    /// <summary>
    /// 延迟回收
    /// </summary>
    /// <param name="obj"></param>
    /// <param name="delay"></param>
    public void Despawn( Transform obj, float delay )
    {
        Timer.SetTimeout( delay, () => Despawn( obj ) );
    }

    /// <summary>
    /// 是否是对象池元素
    /// </summary>
    /// <param name="target"></param>
    /// <returns></returns>
    public bool Contains( Transform element )
    {
        TransformPool pool;
        if ( null != element && nameofDict.TryGetValue( element, out string name ) && poolDict.TryGetValue( name, out pool ) && pool.InSidePool( element ) )
        {
            return true;
        }
        return false;
    }

    /// <summary>
    /// 回收自身所有的对象池元素 ( 包含自身 )
    /// </summary>
    /// <param name="root"></param>
    public void DespawnSelfAny<T>( Transform root ) where T : Component
    {
        T[] suspectObjects = root.GetComponentsInChildren<T>();
        foreach ( var obj in suspectObjects )
        {
            if ( Contains( obj.transform ) )
            {
                Despawn( obj.transform );
            }
        }
    }


    /// <summary>
    /// 回收自己的子节点 如果子节点是对象池元素的话
    /// </summary>
    /// <param name="root"> 父节点 </param>
    /// <param name="includeSelf"> 本次回收是否包含父节点 </param>
    /// <param name="force"> true: 遍历所有的孩子节点  false: 仅遍历一层 </param>
    public void DespawnChildren( Transform root, bool includeSelf = false, bool force = false )
    {
        List<Transform> children = null;

        if ( force )
        {
            Transform[] suspectObjects = root.GetComponentsInChildren<Transform>();
            children = new List<Transform>( suspectObjects );
            if ( !includeSelf ) children.Remove( root );

        }
        else
        {
            children = new List<Transform>();
            if ( includeSelf )
            {
                children.Add( root );
            }
            foreach ( Transform child in root )
            {
                children.Add( child );
            }
        }

        foreach ( var child in children )
        {
            Despawn( child );
        }
    }

    /// <summary>
    /// 新增对象池
    /// </summary>
    /// <param name="prefab"></param>
    /// <param name="firstExpandCount"></param>
    public void Load( GameObject prefab, int firstExpandCount = 100 )
    {
        if ( prefab != null )
        {
            var key = prefab.name;
            if ( poolDict.ContainsKey( key ) )
            {
                Debug.LogError( $"Add Pool Error: pool name <{key}> already exist!", prefab );
                return;
            }
            var pool = new TransformPool( prefab, transform, nameofDict );
            poolDict.Add( key, pool );
            pool.Reserve( firstExpandCount );
#if UNITY_EDITOR || ENABLE_LOG
            Debug.Log( $"<color=#00ff44>[EasyObjectPool]\t对象池创建成功: {key}\t当前闲置数量: {firstExpandCount}</color>" );
#endif
        }
        else
        {
            Debug.LogError( $"Add Pool Error: prefab is null" );
        }
    }


    /// <summary>
    /// 回收所有激活对象
    /// </summary>
    public void Recycle()
    {
        foreach ( var pool in poolDict )
        {
            pool.Value.Recycle();
        }
    }

}
