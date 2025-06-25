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
        Log.Info( "�����ȸ���Dll" );
        InitHotUpdateHandler.AotCompletedCallback = AotCompletedCallback;
        CatAssetManager.BatchLoadAssetAsync( AOTMetaAssemblyFiles ).OnLoaded += OnAotMetaAssemblyFilesLoaded;
    }

    private static void Run( )
    {

        Log.Green( "ִ���ȸ��º�Ĵ���" );
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
        Log.Green( "AOTԪ���ݼ������" );
        /// ע�⣬����Ԫ�����Ǹ�AOT dll����Ԫ���ݣ������Ǹ��ȸ���dll����Ԫ���ݡ�
        /// �ȸ���dll��ȱԪ���ݣ�����Ҫ���䣬�������LoadMetadataForAOTAssembly�᷵�ش���
        /// 
        handler.Handlers.ForEach( h =>
        {
            var asset = h.AssetAs<TextAsset>( );
            if ( asset != null )
            {
                // ����assembly��Ӧ��dll�����Զ�Ϊ��hook��һ��aot���ͺ�����native���������ڣ��ý������汾����
                LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly( asset.bytes, HomologousImageMode.SuperSet );
                Debug.Log( $"LoadMetadataForAOTAssembly:{h.Name}. mode:{HomologousImageMode.SuperSet} ret:{err}" );

                if ( h.Name.EndsWith( "HotUpdate.dll.bytes" ) )
                {
                    HotUpdateBytes = asset.bytes;
                }
            }
        } );

        //�������ò�������Ϸ
        Run( );
    }

    #endregion
}
