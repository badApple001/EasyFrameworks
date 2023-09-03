//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/Window/TreeView/TreeViewDataItem.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using UnityEditor.IMGUI.Controls;

namespace CatAsset.Editor
{
    /// <summary>
    /// TreeView数据项
    /// </summary>
    public class TreeViewDataItem<T> : TreeViewItem
    {
        /// <summary>
        /// 数据
        /// </summary>
        public T Data;
    }
}
