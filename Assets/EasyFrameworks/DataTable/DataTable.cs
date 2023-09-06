//==========================
// - FileName:      Assets/Frameworks/Scripts/DataTable/DataTableManager.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEngine;


public interface IDRTable
{
    void Decode( System.IO.BinaryReader br );

    int Get_ID();
}



public class DataTableWrapper<T> where T : class, IDRTable, new()
{
    public Dictionary<int, T> dict_item;
    public List<T> list_item; //带顺序的
    public DataTableWrapper( List<T> datas )
    {
        this.list_item = datas;
        if ( datas.Count > 0 )
        {
            dict_item = new Dictionary<int, T>();
            for ( int i = 0; i < datas.Count; i++ )
            {
                dict_item.Add( datas[ i ].Get_ID(), datas[ i ] );
            }
        }
    }

    /// <summary>
    /// 如果找不到 返回一个默认的数据
    /// </summary>
    /// <param name="id"></param>
    /// <returns></returns>
    public T Find( int id )
    {
        if ( null != dict_item && dict_item.TryGetValue( id, out T v ) )
        {
            return v;
        }
        return new T();
    }

    /// <summary>
    /// 按下标取数据
    /// </summary>
    /// <param name="idx"></param>
    /// <returns></returns>
    public T this[ int idx ]
    {
        get
        {
            return list_item[ idx ];
        }
    }

    /// <summary>
    /// 获取数据行数
    /// </summary>
    public int Count
    {
        get
        {
            return list_item.Count;
        }
    }
}


public class DataTable
{
    private static Dictionary<System.Type, object> dataTableCache = new Dictionary<System.Type, object>();

    private static string root_dir = "DR_Bytes";


    /// <summary>
    /// 获取数据表
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <returns></returns>
    public static DataTableWrapper<T> Load<T>() where T : class, IDRTable, new()
    {
        var clasType = typeof( T );

        //优先读取缓存
        if ( dataTableCache.TryGetValue( clasType, out object result ) )
        {
            return ( DataTableWrapper<T> ) result;
        }

        var textAsset = Resources.Load<TextAsset>( $"{root_dir}/{clasType.Name}" );
        var buffer = textAsset.bytes;
        if ( null != buffer )
        {
            var res = Parse<T>( buffer );
            dataTableCache[ clasType ] = res;
            return res;
        }
        return null;
    }

    /// <summary>
    /// 是否存在数据表
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <returns></returns>
    public static bool Has<T>() where T : class, IDRTable, new()
    {
        return Load<T>() != null;
    }

    /// <summary>
    /// 通过二进制流来解析指定表格数据
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="bytes"></param>
    /// <returns></returns>
    public static DataTableWrapper<T> Parse<T>( byte[] bytes ) where T : class, IDRTable, new()
    {
        List<T> items = new List<T>();
        using ( BinaryReader br = new BinaryReader( new MemoryStream( bytes ), Encoding.UTF8 ) )
        {
            ushort rows = br.ReadUInt16();
            for ( int i = 0; i < rows; i++ )
            {
                var item = new T();
                item.Decode( br );
                items.Add( item );
            }
        }
        return new DataTableWrapper<T>( items );
    }

    /// <summary>
    /// 自定义Datatable Excel的Loader路径
    /// </summary>
    /// <param name="path"></param>
    /// <returns></returns>
    public static string CustomDatatableLoaderRoot( string path )
    {
        root_dir = path;
        return path;
    }

}
