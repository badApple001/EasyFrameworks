//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/Updatable/Updater/GroupUpdaterState.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿namespace CatAsset.Runtime
{
    /// <summary>
    /// 资源组更新器状态
    /// </summary>
    public enum GroupUpdaterState
    {
        /// <summary>
        /// 空闲
        /// </summary>
        Free,

        /// <summary>
        /// 运行中
        /// </summary>
        Running,

        /// <summary>
        /// 已暂停
        /// </summary>
        Paused,
    }
}