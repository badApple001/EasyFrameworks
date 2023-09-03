//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/Misc/BundleEncryptOptions.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System;

namespace CatAsset.Runtime
{
    /// <summary>
    /// 资源包加密设置
    /// </summary>
    [Serializable]
    public enum BundleEncryptOptions : byte
    {
        /// <summary>
        /// 使用全局设置
        /// </summary>
        UseGlobal,
        
        /// <summary>
        /// 不加密
        /// </summary>
        NotEncrypt,

        /// <summary>
        /// 偏移加密
        /// </summary>
        Offset,
        
        /// <summary>
        /// 异或加密
        /// </summary>
        XOr,
    }
}