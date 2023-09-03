//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/Window/BaseSubWindow.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using UnityEngine;

namespace CatAsset.Editor
{
    /// <summary>
    /// 子窗口基类
    /// </summary>
    public abstract class BaseSubWindow
    {
        /// <summary>
        /// 初始化子窗口
        /// </summary>
        public abstract void InitSubWindow();
        
        /// <summary>
        /// 绘制子窗口
        /// </summary>
        public abstract void DrawSubWindow(Rect position);
    }
}