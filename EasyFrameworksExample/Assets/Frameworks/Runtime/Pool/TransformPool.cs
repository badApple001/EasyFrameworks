using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TransformPool
{
    /// <summary>
    /// ģ��Ԥ��
    /// </summary>
    /// <param name="prefab"> Ԥ�� </param>
    /// <param name="parent"> ָ��һ������ </param>
    public TransformPool( GameObject prefab, Dictionary<Transform, TransformPool> objectMapping, Transform parent = null )
    {
        this.prefab = prefab;
        this.parent = parent;
        this.objectMapping = objectMapping;
    }

    private Queue<Transform> free = new Queue<Transform>( );//��������
    private List<Transform> active = new List<Transform>( );//��������
    private Dictionary<Transform, TransformPool> objectMapping = null;
    private GameObject prefab;//Ԥ��ģ��
    private Transform parent;//���ڵ�
    private float expandTimeSinceStartup = 0f; //����ʱ��

    private void AutoExpandImmediately( )
    {
        //0.01�����ڷ����������
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
    /// �������
    /// 
    /// �������������Ƴ�һ�����ö��� ��������뼤���б����
    /// ͨ������� ��ֻ��Ҫ�������б��еĶ��󼴿�
    /// 
    /// </summary>
    /// <returns> ����ҪΪ�����ø��� ��Ϊ������ ActiveΪtrue </returns>
    public Transform Pop( )
    {
        if ( free.Count > 0 )
        {
            //����ɹ�
            var freeObj = free.Dequeue( );
            active.Add( freeObj );
            return freeObj;
        }
    
        AutoExpandImmediately( );
        return Pop( );
    }

    /// <summary>
    /// ���ƶ���
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
    /// �Ƿ��ڶ����
    /// </summary>
    /// <param name="obj"></param>
    /// <returns></returns>
    public bool InSidePool( Transform obj )
    {
        return free.Contains( obj ) || active.Contains( obj );
    }

    /// <summary>
    /// �������м���Ķ���
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
    /// ����
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
    /// �ͷ��ڴ�
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
