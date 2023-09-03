//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/BuildPipeline/ContextObject/Interface/IBundleBuildConfigParam.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using UnityEditor;
using UnityEditor.Build.Pipeline.Interfaces;

namespace CatAsset.Editor
{
    /// <summary>
    /// 资源包构建配置参数
    /// </summary>
    public interface IBundleBuildConfigParam : IContextObject
    {
        /// <summary>
        /// 资源包构建配置
        /// </summary>
        BundleBuildConfigSO Config { get; }
        
        /// <summary>
        /// 目标平台
        /// </summary>
        BuildTarget TargetPlatform { get; }
        
        /// <summary>
        /// 是否构建补丁包
        /// </summary>
        bool IsBuildPatch { get; }
    }
}