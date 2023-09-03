//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/BuildPipeline/Task/CopyToWebServerDirectory.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using System.Collections.Generic;
using System.IO;
using CatAsset.Runtime;
using UnityEditor.Build.Pipeline;
using UnityEditor.Build.Pipeline.Injector;
using UnityEditor.Build.Pipeline.Interfaces;
using UnityEngine;

namespace CatAsset.Editor
{
    /// <summary>
    /// 复制指定资源组的资源到只读目录下
    /// </summary>
    public class CopyToWebServerDirectory : IBuildTask
    {
        /// <inheritdoc />
        public int Version => 1;

        [InjectContext( ContextUsage.In )]
        private IBundleBuildParameters buildParam;

        [InjectContext( ContextUsage.In )]
        private IBundleBuildConfigParam configParam;

        [InjectContext( ContextUsage.InOut )]
        private IManifestParam manifestParam;

        public string WebServerDirectory = "./WebServer";

        /// <inheritdoc />
        public ReturnCode Run()
        {

            BundleBuildConfigSO bundleBuildConfig = configParam.Config;

            string directory = ( ( BundleBuildParameters ) buildParam ).OutputFolder;

            CatAssetManifest manifest = manifestParam.Manifest;

            //复制指定资源组的资源到只读目录下

            //要复制的资源组的Set
            string copyGroup = bundleBuildConfig.CopyGroup;
            HashSet<string> copyGroupSet = null;
            if ( !string.IsNullOrEmpty( copyGroup ) )
            {
                copyGroupSet = new HashSet<string>( copyGroup.Split( ';' ) );
            }

            string finalPath = Path.Combine( WebServerDirectory, buildParam.Group.ToString(), $"{Application.version}_{bundleBuildConfig.ManifestVersion}" );
            EditorUtil.CreateEmptyDirectory( finalPath );

            List<BundleManifestInfo> copiedBundles = new List<BundleManifestInfo>();

            //复制指定组的资源文件
            foreach ( BundleManifestInfo bundleManifestInfo in manifest.Bundles )
            {
                if ( copyGroupSet != null )
                {
                    if ( !copyGroupSet.Contains( bundleManifestInfo.Group ) )
                    {
                        //跳过并非指定资源组的资源文件
                        continue;
                    }
                }


                FileInfo fi = new FileInfo( Path.Combine( directory, bundleManifestInfo.RelativePath ) );

                string fullPath = RuntimeUtil.JoinPath( finalPath, bundleManifestInfo.RelativePath );

                //冗余资源包没有bundleManifestInfo.Directory
                if ( !string.IsNullOrEmpty( bundleManifestInfo.Directory ) )
                {
                    string fullDirectory = RuntimeUtil.JoinPath( finalPath, bundleManifestInfo.Directory );
                    if ( !Directory.Exists( fullDirectory ) )
                    {
                        //StreamingAssets下的目录不存在则创建
                        Directory.CreateDirectory( fullDirectory );
                    }
                }

                fi.CopyTo( fullPath );
                copiedBundles.Add( bundleManifestInfo );
            }

            //根据复制过去的资源包修改资源清单
            manifest.Bundles = copiedBundles;

            //写入仅包含被复制的资源包的资源清单文件到只读区下
            manifestParam = new ManifestParam( manifest, finalPath );
            return ReturnCode.Success;

        }
    }
}