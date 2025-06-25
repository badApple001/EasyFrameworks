using CatAsset.Runtime;
using HybridCLR;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using UnityEngine;

public class InitHotUpdateHandler : IHandler
{

    static Action AotCompletedCallback;
    static byte[] HotUpdateBytes;
    public void Do( ) { }

    public void Undo( ) { }

    public void InitHotUpdate( List<string> AOTMetaAssemblyFiles, Action AotCompletedCallback )
    {
        Log.Info( "加载热更新Dll" );
        InitHotUpdateHandler.AotCompletedCallback = AotCompletedCallback;
        CatAssetManager.BatchLoadAssetAsync( AOTMetaAssemblyFiles ).OnLoaded += OnAotMetaAssemblyFilesLoaded;
    }

    private static void Run( )
    {

        Log.Green( "执行热更新后的代码" );
#if !UNITY_EDITOR
        _hotUpdateAss = Assembly.Load( HotUpdateBytes );
#else
        _hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies( ).First( a => a.GetName( ).Name == "HotUpdate" );
#endif
        Type entryType = _hotUpdateAss.GetType( "HotService" );
        entryType.GetMethod( "Update" ).Invoke( null, null );
        AotCompletedCallback?.Invoke( );
    }


    #region HotFix

    private static Assembly _hotUpdateAss;

    public Assembly GetAssembly( )
    {
        return _hotUpdateAss;
    }

    private static void OnAotMetaAssemblyFilesLoaded( BatchAssetHandler handler )
    {
        Log.Green( "AOT元数据加载完毕" );
        /// 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
        /// 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
        /// 
        handler.Handlers.ForEach( h =>
        {
            var asset = h.AssetAs<TextAsset>( );
            if ( asset != null )
            {
                // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
                LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly( asset.bytes, HomologousImageMode.SuperSet );
                Debug.Log( $"LoadMetadataForAOTAssembly:{h.Name}. mode:{HomologousImageMode.SuperSet} ret:{err}" );

                if ( h.Name.EndsWith( "HotUpdate.dll.bytes" ) )
                {
                    HotUpdateBytes = asset.bytes;
                }
            }
        } );

        //加载配置并启动游戏
        Run( );
    }

    #endregion
}
