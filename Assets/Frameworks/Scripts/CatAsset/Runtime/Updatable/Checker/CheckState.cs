//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/Updatable/Checker/CheckState.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿namespace CatAsset.Runtime
{
    /// <summary>
    /// 版本检查状态
    /// </summary>
    public enum CheckState
    {
        /// <summary>
        /// 需要更新
        /// </summary>
        NeedUpdate,

        /// <summary>
        /// 最新版本存在于读写区
        /// </summary>
        InReadWrite,

        /// <summary>
        /// 最新版本存在于只读区
        /// </summary>
        InReadOnly,

        /// <summary>
        /// 已废弃
        /// </summary>
        Disuse,
    }
}