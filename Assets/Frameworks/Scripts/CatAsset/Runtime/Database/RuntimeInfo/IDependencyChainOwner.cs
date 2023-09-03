//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/Database/RuntimeInfo/IDependencyChainOwner.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿namespace CatAsset.Runtime
{
    /// <summary>
    /// 依赖链持有者接口
    /// </summary>
    public interface IDependencyChainOwner<T> where T : IDependencyChainOwner<T>
    {
        /// <summary>
        /// 依赖链
        /// </summary>
        DependencyChain<T> DependencyChain { get; }
    }
}