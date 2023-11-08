//==========================
// - FileName:      Assets/Frameworks/Modules/LocalSave/DiskAgent.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-16-17:58:49
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
// 本地数据存储
// 包含加密
// 
// 被动保存情况:
//     1. 切入后台时
//     2. 电量低于4时 每3分钟保存一次 防止用户关机数据丢失
//==========================
using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using Newtonsoft.Json;

public class DiskAgent
{
    public delegate T DefaultSpawnSaveDataHandler<T>( );
    public const string defaultSaveFile = "AccountPropertyData.json";
    public const string AESKEY16 = "5Qni9RBVrRkQPLkG";
    public const string AESIV = "0123456789ABCDEF";
    public static Dictionary<string, object> cacheSaveObjects = new Dictionary<string, object>( );


    #region 基础变量控制区域 - 快捷访问和读写


    [Serializable]
    public class BasicData
    {
        public Dictionary<string, string> strData = new Dictionary<string, string>( );
        public Dictionary<string, int> intData = new Dictionary<string, int>( );
        public Dictionary<string, float> floatData = new Dictionary<string, float>( );
        public Dictionary<string, bool> boolData = new Dictionary<string, bool>( );
    }
    public static bool HasKey( string key )
    {
        var data = Load<BasicData>( );
        if ( data.strData.ContainsKey( key )
            || data.intData.ContainsKey( key )
            || data.floatData.ContainsKey( key )
            || data.boolData.ContainsKey( key )
            )
        {
            return true;
        }
        return false;
    }
    public static void SetString( string key, string value )
    {
        Load<BasicData>( ).strData[ key ] = value;
    }
    public static string GetString( string key, string defaultValue = "" )
    {
        var data = Load<BasicData>( );
        if ( data.strData.TryGetValue( key, out var value ) )
        {
            return value;
        }
        return defaultValue;
    }
    public static void SetInt( string key, int value )
    {
        Load<BasicData>( ).intData[ key ] = value;
    }
    public static int GetInt( string key, int defaultValue = 0 )
    {
        var data = Load<BasicData>( );
        if ( data.intData.TryGetValue( key, out var value ) )
        {
            return value;
        }
        return defaultValue;
    }
    public static void SetFloat( string key, float value )
    {
        Load<BasicData>( ).floatData[ key ] = value;
    }
    public static float GetFloat( string key, float defaultValue = float.NaN )
    {
        var data = Load<BasicData>( );
        if ( data.floatData.TryGetValue( key, out var value ) )
        {
            return value;
        }
        return defaultValue;
    }
    public static void SetBool( string key, bool value )
    {
        Load<BasicData>( ).boolData[ key ] = value;
    }
    public static bool GetBool( string key, bool defaultValue = false )
    {
        var data = Load<BasicData>( );
        if ( data.boolData.TryGetValue( key, out var value ) )
        {
            return value;
        }
        return defaultValue;
    }


    ///// <summary>
    ///// 保存图片  目前仅支持 jpg和png
    ///// </summary>
    ///// <param name="key"></param>
    ///// <param name="texture"></param>
    //public static void SaveTexture2D( string key, Texture2D texture )
    //{

    //    byte[] buffer;
    //    if ( key.ToLower( ).EndsWith( ".png" ) )
    //    {
    //        buffer = texture.EncodeToPNG( );
    //    }
    //    else
    //    {
    //        buffer = texture.EncodeToJPG( );
    //    }
    //    if ( null == buffer || buffer.Length == 0 )
    //    {
    //        Debug.LogError( $"SaveTexture2D Fail: {key}  EncodePng Or EncodeJPG fail.." );
    //        return;
    //    }

    //    byte[] bytes = new byte[ 128 + buffer.Length ];
    //    for ( int i = 0; i < 128; i++ )
    //    {
    //        bytes[ i ] = ( byte ) UnityEngine.Random.Range( 0, 127 );
    //    }
    //    Array.Copy( buffer, 0, bytes, 128, buffer.Length );
    //    using ( FileStream fs = new FileStream( Path.Combine( Application.persistentDataPath, key ), FileMode.OpenOrCreate ) )
    //    {
    //        fs.Write( bytes, 0, bytes.Length ); //写入
    //        fs.Flush( );
    //        fs.Close( );
    //    }
    //}

    ///// <summary>
    ///// 读取图片
    ///// </summary>
    ///// <param name="key"></param>
    ///// <returns></returns>
    //public static Texture2D LoadTexture2D( string key )
    //{
    //    string path = Path.Combine( Application.persistentDataPath, key );
    //    if ( File.Exists( path ) )
    //    {
    //        using ( FileStream fs = new FileStream( path, FileMode.Open, FileAccess.Read ) )
    //        {
    //            fs.Seek( 128, SeekOrigin.Begin );
    //            byte[] bytes = new byte[ fs.Length - 128 ];
    //            fs.Read( bytes, 0, ( int ) bytes.Length );
    //            Texture2D texture = new Texture2D( 0, 0);
    //            texture.LoadImage( bytes );
    //            return texture;
    //        }
    //    }
    //    return null;
    //}

    #endregion


    /// <summary>
    /// 加载本地数据 如果加载过直接读取缓存否则读取本地
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="defaultValueSpawner"></param>
    /// <returns></returns>
    public static T Load<T>( DefaultSpawnSaveDataHandler<T> defaultValueSpawner = null ) where T : class, new()
    {

        string key = typeof( T ).ToString( );
        if ( cacheSaveObjects.TryGetValue( key, out object data ) )
        {
            return ( T ) data;
        }
        T obj = FromDisk( key, defaultValueSpawner );
        cacheSaveObjects[ key ] = obj;
        return obj;
    }

    /// <summary>
    /// 根据数据类型来存储到本地
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public static void ToDisk<T>( )
    {
        ToDisk( typeof( T ).ToString( ) );
    }

    /// <summary>
    /// 保存所有文件
    /// </summary>
    public static void SaveAll2Disk( )
    {
        foreach ( var item in cacheSaveObjects )
        {
            ToDisk( item.Key );
        }
    }

    private static T FromDisk<T>( string key, DefaultSpawnSaveDataHandler<T> defaultValueSpawner = null ) where T : class, new()
    {
        string fullPath = GetRegularPath( key );
        if ( File.Exists( fullPath ) )
        {
            try
            {
                (bool, string) result = File.ReadAllText( fullPath ).AESDecrypt( AESKEY16, AESIV );
                if ( result.Item1 )
                {
                    return JsonConvert.DeserializeObject<T>( result.Item2 );
                }
                else
                {
                    Debug.LogError( $"[ LocalSave ] - AESDecrypt Fail: {fullPath}" );
                }
            }
            catch ( JsonException e )
            {
                Debug.LogError( $"[ LocalSave ] - Json Load Fail: {fullPath}" );
                Debug.LogError( e );
            }
            catch ( IOException e )
            {
                Debug.LogError( $"[ LocalSave ] - File.ReadAllText Fail: {fullPath}" );
                Debug.LogError( e );
            }
            catch ( Exception e )
            {
                Debug.LogError( e );
            }
            finally
            {

            }
        }
        return defaultValueSpawner == null ? new T( ) : defaultValueSpawner( );
    }

    private static string GetRegularPath( string file )
    {
        if ( !file.EndsWith( ".json" ) )
        {
            file = file + ".json";
        }
        if ( file.StartsWith( Application.persistentDataPath ) )
        {
            return file;
        }
        return Path.Combine( Application.persistentDataPath, file );
    }

    /// <summary>
    /// 保存至本地 这个接口禁用避免开发者调用
    /// 原因是 墨菲定律
    /// </summary>
    /// <param name="key">保存指定文件</param>
    private static void ToDisk( string key = "" )
    {
        string fullPath = GetRegularPath( key );
        if ( cacheSaveObjects.TryGetValue( key, out object data ) )
        {
            //当前数据出现了异常 过滤掉 避免坏数据覆盖本地
            if ( data == null )
            {
                Debug.LogError( $"[ LocalSave ] - Data is null {fullPath}" );
                Fire.Event( FrameworkEvent.RuntimeData2DiskFail, fullPath );
                return;
            }

            try
            {
                var jsonstr = JsonConvert.SerializeObject( data );
                (bool, string) result = jsonstr.AESEncrypt( AESKEY16, AESIV );
                if ( result.Item1 )
                {
                    File.WriteAllText( fullPath, result.Item2 );
                }
                else
                {
                    Debug.LogError( $"[ LocalSave ] - AESEncrypt Fail: {fullPath}" );
                }
            }
            catch ( JsonException e )
            {
                Debug.LogError( $"[ LocalSave ] - Json SerializeObject Fail: {fullPath}" );
                Debug.LogError( e );
            }
            catch ( IOException e )
            {
                Debug.LogError( $"[ LocalSave ] - File.WriteAllText Fail: {fullPath}" );
                Debug.LogError( e );
            }
            catch ( Exception e )
            {
                Debug.LogError( e );
            }
        }
        else
        {
            Debug.LogError( $"[ LocalSave ] - Data nonentity {fullPath} " );
        }

    }
}
