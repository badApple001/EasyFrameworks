//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/CatAssetManager.Task.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using System;
using System.Collections.Generic;
using System.IO;
using System.Threading;
using UnityEngine.Profiling;
using Object = UnityEngine.Object;

namespace CatAsset.Runtime
{
    public static partial class CatAssetManager
    {

        /// <summary>
        /// 同步加载请求
        /// </summary>
        /// <param name="assetType"></param>
        /// <param name="handler"></param>
        /// <param name="assetRuntimeInfo"></param>
        internal static void LoadAssetImmediately( string assetName, Type assetType, AssetHandler handler, AssetRuntimeInfo assetRuntimeInfo )
        {
            //加载内置资源包资源
            var bundleRuntimeInfo = CatAssetDatabase.GetBundleRuntimeInfo( assetRuntimeInfo.BundleManifest.BundleIdentifyName );

            var Asset = bundleRuntimeInfo.Bundle.LoadAsset( assetName, assetType );

            assetRuntimeInfo.Asset = Asset;
            if ( assetRuntimeInfo.Asset != null )
            {
                assetRuntimeInfo.MemorySize = ( ulong ) Profiler.GetRuntimeMemorySizeLong( ( Object ) assetRuntimeInfo.Asset );
                //添加关联
                CatAssetDatabase.SetAssetInstance( assetRuntimeInfo.Asset, assetRuntimeInfo );
                //引用计数+1
                assetRuntimeInfo.AddRefCount( );

                //加载依赖
                if ( assetRuntimeInfo.AssetManifest.Dependencies != null )
                {
                    List<AssetHandler> dependencyHandlers = new List<AssetHandler>( );
                    foreach ( var dependency in assetRuntimeInfo.AssetManifest.Dependencies )
                    {
                        AssetHandler<Object> dependencyHandler =
                            CatAssetManager.LoadAsset<Object>( dependency, default, default );
                        dependencyHandlers.Add( dependencyHandler );
                    }

                    //成功加载资源到内存中
                    //添加依赖链记录
                    foreach ( AssetHandler dependencyHandler in dependencyHandlers )
                    {
                        if ( !dependencyHandler.IsSuccess )
                        {
                            continue;
                        }

                        AssetRuntimeInfo depInfo = CatAssetDatabase.GetAssetRuntimeInfo( dependencyHandler.AssetObj );

                        //更新自身与依赖资源的上下游关系
                        depInfo.DependencyChain.DownStream.Add( assetRuntimeInfo );
                        depInfo.DownStreamRecord.Add( assetRuntimeInfo );
                        assetRuntimeInfo.DependencyChain.UpStream.Add( depInfo );

                        //如果依赖了其他资源包里的资源 还需要设置 自身所在资源包 与 依赖所在资源包 的上下游关系
                        if ( !depInfo.BundleManifest.Equals( assetRuntimeInfo.BundleManifest ) )
                        {
                            BundleRuntimeInfo depBundleInfo =
                                CatAssetDatabase.GetBundleRuntimeInfo( depInfo.BundleManifest.BundleIdentifyName );

                            depBundleInfo.DependencyChain.DownStream.Add( bundleRuntimeInfo );
                            bundleRuntimeInfo.DependencyChain.UpStream.Add( depBundleInfo );
                        }
                    }
                }
            }
            handler.SetAsset( assetRuntimeInfo.Asset );
        }


        /// <summary>
        /// 同步加载原生请求
        /// </summary>
        /// <param name="assetType"></param>
        /// <param name="handler"></param>
        /// <param name="assetRuntimeInfo"></param>
        internal static void LoadRawAssetImmediately( string assetName, Type assetType, AssetHandler handler, AssetRuntimeInfo assetRuntimeInfo )
        {
            //加载原生
            var bundleRuntimeInfo = CatAssetDatabase.GetBundleRuntimeInfo( assetRuntimeInfo.BundleManifest.BundleIdentifyName );
            byte[] buffer = File.ReadAllBytes( assetName );
            if ( null == buffer )
            {
                return;
            }
            if ( bundleRuntimeInfo.Manifest.EncryptOption == BundleEncryptOptions.XOr )
            {
                EncryptUtil.EncryptXOr( buffer );
            }

            assetRuntimeInfo.Asset = buffer;
            if ( assetRuntimeInfo.Asset != null )
            {
                //获取内存占用
                assetRuntimeInfo.MemorySize = ( ulong ) buffer.Length;
                //添加关联
                CatAssetDatabase.SetAssetInstance( assetRuntimeInfo.Asset, assetRuntimeInfo );
                //引用计数+1
                assetRuntimeInfo.AddRefCount( );

                //加载依赖
                if ( assetRuntimeInfo.AssetManifest.Dependencies != null )
                {
                    List<AssetHandler> dependencyHandlers = new List<AssetHandler>( );
                    foreach ( var dependency in assetRuntimeInfo.AssetManifest.Dependencies )
                    {
                        AssetHandler<Object> dependencyHandler =
                            CatAssetManager.LoadAsset<Object>( dependency, default, default );
                        dependencyHandlers.Add( dependencyHandler );
                    }

                    //成功加载资源到内存中
                    //添加依赖链记录
                    foreach ( AssetHandler dependencyHandler in dependencyHandlers )
                    {
                        if ( !dependencyHandler.IsSuccess )
                        {
                            continue;
                        }

                        AssetRuntimeInfo depInfo = CatAssetDatabase.GetAssetRuntimeInfo( dependencyHandler.AssetObj );

                        //更新自身与依赖资源的上下游关系
                        depInfo.DependencyChain.DownStream.Add( assetRuntimeInfo );
                        depInfo.DownStreamRecord.Add( assetRuntimeInfo );
                        assetRuntimeInfo.DependencyChain.UpStream.Add( depInfo );

                        //如果依赖了其他资源包里的资源 还需要设置 自身所在资源包 与 依赖所在资源包 的上下游关系
                        if ( !depInfo.BundleManifest.Equals( assetRuntimeInfo.BundleManifest ) )
                        {
                            BundleRuntimeInfo depBundleInfo =
                                CatAssetDatabase.GetBundleRuntimeInfo( depInfo.BundleManifest.BundleIdentifyName );

                            depBundleInfo.DependencyChain.DownStream.Add( bundleRuntimeInfo );
                            bundleRuntimeInfo.DependencyChain.UpStream.Add( depBundleInfo );
                        }
                    }
                }
            }
            handler.SetAsset( assetRuntimeInfo.Asset );
        }

        /// <summary>
        /// 添加Web请求任务
        /// </summary>
        public static void AddWebRequestTask( string name, string uri, WebRequestedCallback callback,
        TaskPriority priority )
        {
            WebRequestTask task = WebRequestTask.Create( loadTaskRunner, name, uri, callback );
            loadTaskRunner.AddTask( task, priority );
        }

        /// <summary>
        /// 添加加载内置资源包资源的任务
        /// </summary>
        internal static void AddLoadAssetTask( string assetName, Type assetType, AssetHandler handler,
            CancellationToken token, TaskPriority priority )
        {
            LoadAssetTask loadAssetTask =
                LoadAssetTask.Create( loadTaskRunner, assetName, assetType, handler, token );
            loadTaskRunner.AddTask( loadAssetTask, priority );

            handler.Task = loadAssetTask;
        }

        /// <summary>
        /// 添加加载场景的任务
        /// </summary>
        public static void AddLoadSceneTask( string sceneName, SceneHandler handler, CancellationToken token,
            TaskPriority priority )
        {
            LoadSceneTask task = LoadSceneTask.Create( loadTaskRunner, sceneName, handler, token );
            loadTaskRunner.AddTask( task, priority );

            handler.Task = task;
        }

        /// <summary>
        /// 添加加载原生资源的任务
        /// </summary>
        internal static void AddLoadRawAssetTask( string assetName, AssetCategory category, AssetHandler handler,
            CancellationToken token, TaskPriority priority )
        {
            LoadRawAssetTask loadRawAssetTask =
                LoadRawAssetTask.Create( loadTaskRunner, assetName, category, handler, token );
            loadTaskRunner.AddTask( loadRawAssetTask, priority );

            handler.Task = loadRawAssetTask;
        }

        /// <summary>
        /// 添加资源包下载任务
        /// </summary>
        internal static void AddDownLoadBundleTask( GroupUpdater updater, UpdateInfo updateInfo,
            BundleDownloadedCallback onBundleDownloadedCallback,
            DownloadBundleRefreshCallback onDownloadRefreshCallback,
            TaskPriority priority = TaskPriority.Middle )
        {
            string localFilePath = RuntimeUtil.GetReadWritePath( updateInfo.Info.RelativePath );
            string downloadUri =
                RuntimeUtil.GetRegularPath( Path.Combine( CatAssetUpdater.UpdateUriPrefix, updateInfo.Info.RelativePath ) );

            DownloadBundleTask task =
                DownloadBundleTask.Create( downloadTaskRunner, downloadUri, updateInfo, updater, downloadUri,
                    localFilePath, onBundleDownloadedCallback, onDownloadRefreshCallback );
            downloadTaskRunner.AddTask( task, priority );
        }
    }
}