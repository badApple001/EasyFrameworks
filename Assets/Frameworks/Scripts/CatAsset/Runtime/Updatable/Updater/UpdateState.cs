//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/Updatable/Updater/UpdateState.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿namespace CatAsset.Runtime
{
    /// <summary>
    /// 资源包更新状态
    /// </summary>
    public enum UpdateState
    {
        None,
        
        /// <summary>
        /// 待更新
        /// </summary>
        Waiting,
        
        /// <summary>
        /// 更新中
        /// </summary>
        Updating,
        
        /// <summary>
        /// 已更新
        /// </summary>
        Updated,
    }
}