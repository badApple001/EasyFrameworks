//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/BuildPipeline/IBundleBuildPreProcessor.cs
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
    /// 资源包构建前的预处理回调接口
    /// </summary>
    public interface IBundleBuildPreProcessor
    {
        /// <summary>
        /// 构建资源包前调用
        /// </summary>
        void OnBundleBuildPreProcess(BundleBuildPreProcessData data);
    }
}