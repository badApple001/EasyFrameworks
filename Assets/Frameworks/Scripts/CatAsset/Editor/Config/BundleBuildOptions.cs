//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/Config/BundleBuildOptions.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System;

namespace CatAsset.Editor
{
    /// <summary>
    /// 资源包构建设置
    /// </summary>
    [Flags]
    public enum BundleBuildOptions
    {
        /// <summary>
        /// 生成LinkXML
        /// </summary>
        WriteLinkXML = 1 << 0,
        
        /// <summary>
        /// 强制全量构建
        /// </summary>
        ForceRebuild = 1 << 1,
        
        /// <summary>
        /// 附加MD5到资源包名中
        /// </summary>
        AppendMD5 = 1 << 2,
    }
}