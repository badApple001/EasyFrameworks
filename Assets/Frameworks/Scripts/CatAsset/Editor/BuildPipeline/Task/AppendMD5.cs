//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/BuildPipeline/Task/AppendMD5.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System.IO;
using CatAsset.Runtime;
using UnityEditor.Build.Pipeline;
using UnityEditor.Build.Pipeline.Injector;
using UnityEditor.Build.Pipeline.Interfaces;

namespace CatAsset.Editor
{
    /// <summary>
    /// 附加MD5到资源包名中
    /// </summary>
    public class AppendMD5 : IBuildTask
    {
        [InjectContext(ContextUsage.In)]
        private IManifestParam manifestParam;

        [InjectContext(ContextUsage.In)]
        private IBundleBuildParameters buildParam;

        [InjectContext(ContextUsage.In)] 
        private IBundleBuildConfigParam configParam;
        
        public int Version { get; }

        public ReturnCode Run()
        {
            CatAssetManifest manifest = manifestParam.Manifest;
            string outputFolder = ((BundleBuildParameters) buildParam).OutputFolder;

            foreach (BundleManifestInfo bundleManifestInfo in manifest.Bundles)
            {
                bundleManifestInfo.IsAppendMD5 = true;

                string oldPath = Path.Combine(outputFolder,  bundleManifestInfo.BundleIdentifyName);
                string newPath = Path.Combine(outputFolder,  bundleManifestInfo.RelativePath);

                File.Move(oldPath,newPath);
            }

            return ReturnCode.Success;
        }


    }
}
