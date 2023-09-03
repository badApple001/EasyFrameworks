//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/Database/RuntimeInfo/DepnecencyChain.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System;
using System.Collections.Generic;

namespace CatAsset.Runtime
{
    /// <summary>
    /// 依赖链（如A依赖B，B依赖C，则称C为B的上游，B为A的上游）
    /// </summary>
    [Serializable]
    public class DependencyChain<T>
    {
        /// <summary>
        /// 上游对象集合（此对象所依赖的对象）
        /// </summary>
        public readonly HashSet<T> UpStream = new HashSet<T>();

        /// <summary>
        /// 下游对象集合(依赖此对象的对象)
        /// </summary>
        public readonly HashSet<T> DownStream = new HashSet<T>();
    }
}
