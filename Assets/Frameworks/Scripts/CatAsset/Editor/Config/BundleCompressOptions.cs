//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/Config/BundleCompressOptions.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿namespace CatAsset.Editor
{
    /// <summary>
    /// 资源包压缩设置
    /// </summary>
    public enum BundleCompressOptions
    {
        /// <summary>
        /// 使用全局设置
        /// </summary>
        UseGlobal,
        
        /// <summary>
        /// 不压缩
        /// </summary>
        Uncompressed,
        
        /// <summary>
        /// LZ4压缩
        /// </summary>
        LZ4,
        
        /// <summary>
        /// LZMA压缩
        /// </summary>
        LZMA,
    }
}