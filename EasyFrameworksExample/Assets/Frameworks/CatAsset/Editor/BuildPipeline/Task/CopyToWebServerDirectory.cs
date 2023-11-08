//==========================
// - FileName:      Assets/Frameworks/Modules/CatAsset/Editor/BuildPipeline/Task/CopyToWebServerDirectory.cs
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
    /// ����ָ����Դ�����Դ��ֻ��Ŀ¼��
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
        public ReturnCode Run( )
        {

            BundleBuildConfigSO bundleBuildConfig = configParam.Config;

            string directory = ( ( BundleBuildParameters ) buildParam ).OutputFolder;

            CatAssetManifest manifest = manifestParam.Manifest;

            //����ָ����Դ�����Դ��ֻ��Ŀ¼��

            //Ҫ���Ƶ���Դ���Set
            string copyGroup = bundleBuildConfig.CopyGroup;
            HashSet<string> copyGroupSet = null;
            if ( !string.IsNullOrEmpty( copyGroup ) )
            {
                copyGroupSet = new HashSet<string>( copyGroup.Split( ';' ) );
            }

            string finalPath = Path.Combine( WebServerDirectory, buildParam.Group.ToString( ), $"{Application.version}_{bundleBuildConfig.ManifestVersion}" );
            EditorUtil.CreateEmptyDirectory( finalPath );

            List<BundleManifestInfo> copiedBundles = new List<BundleManifestInfo>( );

            //����ָ�������Դ�ļ�
            foreach ( BundleManifestInfo bundleManifestInfo in manifest.Bundles )
            {
                if ( copyGroupSet != null )
                {
                    if ( !copyGroupSet.Contains( bundleManifestInfo.Group ) )
                    {
                        //��������ָ����Դ�����Դ�ļ�
                        continue;
                    }
                }


                FileInfo fi = new FileInfo( Path.Combine( directory, bundleManifestInfo.RelativePath ) );

                string fullPath = RuntimeUtil.GetRegularPath( Path.Combine( finalPath, bundleManifestInfo.RelativePath ) );

                //������Դ��û��bundleManifestInfo.Directory
                if ( !string.IsNullOrEmpty( bundleManifestInfo.Directory ) )
                {
                    string fullDirectory = RuntimeUtil.GetRegularPath( Path.Combine( finalPath, bundleManifestInfo.Directory ) );
                    if ( !Directory.Exists( fullDirectory ) )
                    {
                        //StreamingAssets�µ�Ŀ¼�������򴴽�
                        Directory.CreateDirectory( fullDirectory );
                    }
                }

                fi.CopyTo( fullPath );
                copiedBundles.Add( bundleManifestInfo );
            }

            //���ݸ��ƹ�ȥ����Դ���޸���Դ�嵥
            manifest.Bundles = copiedBundles;

            //д������������Ƶ���Դ������Դ�嵥�ļ���ֻ������
            manifestParam = new ManifestParam( manifest, finalPath );
            return ReturnCode.Success;

        }
    }
}