//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/BuildPipeline/ContextObject/Interface/IManifestParam.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using CatAsset.Runtime;
using UnityEditor.Build.Pipeline.Interfaces;

namespace CatAsset.Editor
{
    /// <summary>
    /// CatAsset资源清单参数
    /// </summary>
    public interface IManifestParam : IContextObject
    {
        /// <summary>
        /// CatAsset资源清单
        /// </summary>
        CatAssetManifest Manifest { get; }
        
        /// <summary>
        /// 写入资源清单的路径
        /// </summary>
        string WriteFolder { get;}
    }
}