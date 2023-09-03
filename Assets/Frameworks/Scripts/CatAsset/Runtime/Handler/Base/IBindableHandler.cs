//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/Handler/Base/IBindableHandler.cs
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
    /// 可绑定句柄的接口
    /// </summary>
    public interface IBindableHandler
    {
        /// <summary>
        /// 句柄状态
        /// </summary>
        HandlerState State { get; }

        /// <summary>
        /// 卸载句柄，会根据句柄状态进行不同的处理
        /// </summary>
        void Unload();
    }
}