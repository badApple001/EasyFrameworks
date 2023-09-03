//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/Misc/AssetCategory.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿namespace CatAsset.Runtime
{
    /// <summary>
    /// 资源类别
    /// </summary>
    public enum AssetCategory
    {
        None,
        
        /// <summary>
        /// 内置资源包资源
        /// </summary>
        InternalBundledAsset,
        
        /// <summary>
        /// 内置原生资源
        /// </summary>
        InternalRawAsset,

        /// <summary>
        /// 外置原生资源
        /// </summary>
        ExternalRawAsset,
    }
}