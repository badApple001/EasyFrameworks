//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/BuildPipeline/ContextObject/BundleBuildInfoParam.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System.Collections.Generic;
using UnityEditor;

namespace CatAsset.Editor
{
    /// <inheritdoc />
    public class BundleBuildInfoParam : IBundleBuildInfoParam
    {

        /// <inheritdoc />
        public List<AssetBundleBuild> AssetBundleBuilds { get; }
        
        /// <inheritdoc />
        public List<BundleBuildInfo> NormalBundleBuilds { get; }
        
        /// <inheritdoc />
        public List<BundleBuildInfo> RawBundleBuilds { get; }

        public BundleBuildInfoParam()
        {
            
        }
        
        public BundleBuildInfoParam(List<AssetBundleBuild> assetBundleBuilds, List<BundleBuildInfo> normalBundleBuilds, List<BundleBuildInfo> rawBundleBuilds)
        {
            AssetBundleBuilds = assetBundleBuilds;
            NormalBundleBuilds = normalBundleBuilds;
            RawBundleBuilds = rawBundleBuilds;
        }
    }
}