//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/BuildPipeline/BundleBuildPreProcessData.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using UnityEditor;

namespace CatAsset.Editor
{
    /// <summary>
    /// 资源包构建预处理数据
    /// </summary>
    public class BundleBuildPreProcessData
    {
        /// <summary>
        /// 构建配置
        /// </summary>
        public BundleBuildConfigSO Config;
        
        /// <summary>
        /// 目标平台
        /// </summary>
        public BuildTarget TargetPlatform;
    }
}