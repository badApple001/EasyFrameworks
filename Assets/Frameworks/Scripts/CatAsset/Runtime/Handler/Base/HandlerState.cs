//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/Handler/Base/HandlerState.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿namespace CatAsset.Runtime
{
    /// <summary>
    /// 句柄状态
    /// </summary>
    public enum HandlerState
    {
        /// <summary>
        /// 无效
        /// </summary>
        InValid,

        /// <summary>
        /// 执行中
        /// </summary>
        Doing,
        
        /// <summary>
        /// 执行成功
        /// </summary>
        Success,
        
        /// <summary>
        /// 执行失败
        /// </summary>
        Failed,
    }
}