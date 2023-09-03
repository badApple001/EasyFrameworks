//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/Pool/ReferencePool/IReference.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿namespace CatAsset.Runtime
{
    /// <summary>
    /// 引用池对象接口
    /// </summary>
    public interface IReference
    {
        /// <summary>
        /// 清理引用
        /// </summary>
        void Clear();
    }
}