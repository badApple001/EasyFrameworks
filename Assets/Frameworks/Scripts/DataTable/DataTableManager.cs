//==========================
// - FileName:      Assets/Frameworks/Scripts/DataTable/DataTableManager.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
//==========================
// - FileName:      Assets/Frameworks/Scripts/DataTable/DataTableManager.cs       
// - Created:       ChenJC	
// - CreateTime:    2023-06-16-17:58:49
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using CatAsset.Runtime;
using System.Collections.Generic;
using System.Data;
using System.IO;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using static DataTableManager;

public class DataTableManager
{
    private static Dictionary<System.Type, object> dataTableCache = new Dictionary<System.Type, object>( );
    private static Dictionary<System.Type, object> dataTableLine = new Dictionary<System.Type, object>( );
    private static string rootPath = "Assets/BundleRes/ExcelData";
    private static string excelSuffix = ".bytes";


    public struct DataTableInfo<T> where T : class, new()
    {
        public Dictionary<int, T> dataDict;
        public List<T> dataList; //带顺序的
        public DataTableInfo( Dictionary<int, T> datas, List<T> dataList )
        {
            this.dataDict = datas;
            this.dataList = dataList;
        }

        /// <summary>
        /// 如果找不到 返回一个默认的数据
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public T Find( int id )
        {
            if ( null != dataDict && dataDict.TryGetValue( id, out T v ) )
            {
                return v;
            }
            return new T( );
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
                return dataList[ idx ];
            }
        }

        /// <summary>
        /// 获取数据行数
        /// </summary>
        public int Count
        {
            get
            {
                return dataList.Count;
            }
        }
    }

    /// <summary>
    /// Find的前提是 有Load成功 可以提前加载所有的配表
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <returns>如果找不到 返回一个默认数据</returns>
    public static T GetCacheData<T>( int id ) where T : class, new()
    {
        var clasType = typeof( T );
        if ( dataTableCache.TryGetValue( clasType, out object result ) )
        {
            if ( ( ( Dictionary<int, T> ) result ).TryGetValue( id, out T v ) )
            {
                return v;
            }
        }
        return null;
    }

    /// <summary>
    /// 异步加载一个数据
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="id"></param>
    /// <returns>如果没有指定Id的数据 返回一个默认数据</returns>
    public static async Task<T> Find<T>( int id ) where T : class, new()
    {
        T data = GetCacheData<T>( id );

        //如果不存在 先载再Find
        if ( data == null )
        {
            var result = await Load<T>( );
            return result.Find( id );
        }
        return data;
    }

    /// <summary>
    /// 加载配置
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <returns></returns>
    public static async Task<DataTableInfo<T>> Load<T>( ) where T : class, new()
    {
        var clasType = typeof( T );

        //优先读取缓存
        if ( dataTableCache.TryGetValue( clasType, out object result ) )
        {
            return new DataTableInfo<T>( result as Dictionary<int, T>, dataTableLine[ clasType ] as List<T> );
        }

        var handler = await CatAssetManager.LoadAssetAsync<byte[]>( $"{rootPath}/{clasType.Name}{excelSuffix}" );
        if ( handler.IsSuccess )
        {
            var res = Parse<T>( handler.Asset );
            dataTableLine[ clasType ] = res.dataList;
            dataTableCache[ clasType ] = res.dataDict;
            handler.Unload( );
            return res;
        }
        handler.Unload( );
        return default( DataTableInfo<T> );
    }

    /// <summary>
    /// 通过二进制流来解析指定表格数据
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="bytes"></param>
    /// <returns></returns>
    public static DataTableInfo<T> Parse<T>( byte[] bytes ) where T : class, new()
    {
        var clasType = typeof( T );
        var fileds = clasType.GetFields( );
        using ( BinaryReader br = new BinaryReader( new MemoryStream( bytes ), Encoding.UTF8 ) )
        {
            int rows = br.ReadInt32( );
            List<T> dataLine = new List<T>( );
            Dictionary<int, T> dataTable = new Dictionary<int, T>( );
            for ( int i = 0; i < rows; i++ )
            {
                var obj = new T( );
                int key = -1;
                for ( int j = 0; j < fileds.Length; j++ )
                {
                    var filed = fileds[ j ];
                    if ( filed.FieldType == typeof( int ) )
                    {
                        int id = br.ReadInt32( );
                        filed.SetValue( obj, id );
                        if ( key == -1 )
                        {
                            key = id;
                        }
                    }
                    else if ( filed.FieldType == typeof( bool ) )
                    {
                        filed.SetValue( obj, br.ReadBoolean( ) );
                    }
                    else if ( filed.FieldType == typeof( float ) )
                    {
                        filed.SetValue( obj, br.ReadSingle( ) );
                    }
                    else if ( filed.FieldType == typeof( double ) )
                    {
                        filed.SetValue( obj, br.ReadDouble( ) );
                    }
                    else if ( filed.FieldType == typeof( string ) )
                    {
                        filed.SetValue( obj, br.ReadString( ) );
                    }
                    else if ( filed.FieldType == typeof( ulong ) )
                    {
                        filed.SetValue( obj, br.ReadUInt64( ) );
                    }
                    else
                    {
                        Debug.LogError( $"[{nameof( DataTableManager )}] 类型加载错误: {filed.FieldType.ToString( )}" );
                    }
                }
                dataLine.Add( obj );
                dataTable.Add( key, obj );
            }
            return new DataTableInfo<T>( dataTable, dataLine );
        }
    }


    /// <summary>
    /// 自定义Datatable Excel的Loader路径
    /// </summary>
    /// <param name="path"></param>
    /// <returns></returns>
    public static string CustomDatatableLoaderRoot( string path )
    {
        rootPath = path;
        return path;
    }


    /// <summary>
    /// 自定义Datatable Excel的后缀格式名
    /// </summary>
    /// <param name="path"></param>
    /// <returns></returns>
    public static string CustomDatatableSuffix( string suffix )
    {
        excelSuffix = suffix;
        return excelSuffix;
    }
}
