//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/BuildPipeline/ContextObject/BundleBuildConfigParam.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using UnityEditor;

namespace CatAsset.Editor
{
    /// <inheritdoc />
    public class BundleBuildConfigParam : IBundleBuildConfigParam
    {
        /// <inheritdoc />
        public BundleBuildConfigSO Config { get; }
        
        /// <inheritdoc />
        public BuildTarget TargetPlatform { get; }
        
        /// <inheritdoc />
        public bool IsBuildPatch { get; }

        public BundleBuildConfigParam(BundleBuildConfigSO config,BuildTarget targetPlatform,bool isBuildPatch)
        {
            Config = config;
            TargetPlatform = targetPlatform;
            IsBuildPatch = isBuildPatch;
        }
    }
}