using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TransformPool
{
    /// <summary>
    /// 模板预设
    /// </summary>
    /// <param name="prefab"> 预设 </param>
    /// <param name="parent"> 指定一个父类 </param>
    public TransformPool( GameObject prefab, Dictionary<Transform, TransformPool> objectMapping, Transform parent = null )
    {
        this.prefab = prefab;
        this.parent = parent;
        this.objectMapping = objectMapping;
    }

    private Queue<Transform> free = new Queue<Transform>( );//闲置链表
    private List<Transform> active = new List<Transform>( );//激活链表
    private Dictionary<Transform, TransformPool> objectMapping = null;
    private GameObject prefab;//预设模板
    private Transform parent;//父节点
    private float expandTimeSinceStartup = 0f; //扩充时间

    private void AutoExpandImmediately( )
    {
        //0.01秒以内发生多次扩充
        if ( Time.time - expandTimeSinceStartup < 1e-2 )
        {
            Reserve( free.Count + active.Count );
        }
        else
        {
            Reserve( 1 );
        }
    }

    public int FreeCount
    {
        get
        {
            return free.Count;
        }
    }

    public int Capacity
    {
        get
        {
            return free.Count + active.Count;
        }
    }

    /// <summary>
    /// 激活对象
    /// 
    /// 从闲置链表中推出一个闲置对象 并将其加入激活列表的中
    /// 通常情况下 你只需要处理激活列表中的对象即可
    /// 
    /// </summary>
    /// <returns> 你需要为他设置父类 并为它设置 Active为true </returns>
    public Transform Pop( )
    {
        if ( free.Count > 0 )
        {
            //申请成功
            var freeObj = free.Dequeue( );
            active.Add( freeObj );
            return freeObj;
        }
    
        AutoExpandImmediately( );
        return Pop( );
    }

    /// <summary>
    /// 限制对象
    /// </summary>
    /// <param name="obj"></param>
    public void Push_Back( Transform obj )
    {
        if ( null != obj )
        {
            obj.SetParent( parent );
            obj.gameObject.SetActive( false );
            if ( active.Contains( obj ) )
            {
                active.Remove( obj );
            }
            if ( !free.Contains( obj ) )
            {
                free.Enqueue( obj );
            }
        }
    }

    /// <summary>
    /// 是否在对象池
    /// </summary>
    /// <param name="obj"></param>
    /// <returns></returns>
    public bool InSidePool( Transform obj )
    {
        return free.Contains( obj ) || active.Contains( obj );
    }

    /// <summary>
    /// 回收所有激活的对象
    /// </summary>
    public void Recycle( )
    {
        var objs = active.ToArray( );
        for ( int i = 0; i < objs.Length; i++ )
        {
            if ( objs[ i ] != null )
            {
                Push_Back( objs[ i ] );
            }
        }

        objs = free.ToArray( );
        for ( int i = 0; i < objs.Length; i++ )
        {
            if ( objs[ i ] != null )
            {
                Push_Back( objs[ i ] );
            }
        }
    }

    /// <summary>
    /// 扩容
    /// </summary>
    /// <param name="count"></param>
    public void Reserve( int count )
    {
        string key = prefab.name;
        for ( int i = 0; i < count; i++ )
        {
            var inst = GameObject.Instantiate( prefab, parent );
            objectMapping.Add( inst.transform, this );
            inst.SetActive( false );
            inst.name = $"{key} <Clone>";
            free.Enqueue( inst.transform );
        }
        expandTimeSinceStartup = Time.time;
    }

    /// <summary>
    /// 释放内存
    /// </summary>
    public void Release( )
    {
        foreach ( var obj in free )
        {
            GameObject.Destroy( obj.gameObject, 1.0f / 120f );
        }
        foreach ( var obj in active )
        {
            GameObject.Destroy( obj.gameObject, 1.0f / 120f );
        }
        free.Clear( );
        active.Clear( );
    }
}
