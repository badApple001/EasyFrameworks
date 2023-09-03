//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/Window/ProfilerInfoWindow/SubWindows/GroupInfo/GroupInfoWindow.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System.Collections.Generic;
using UnityEditor;
using UnityEditor.IMGUI.Controls;
using UnityEngine;

namespace CatAsset.Editor
{
    /// <summary>
    /// 资源组信息窗口
    /// </summary>
    public class GroupInfoWindow : BaseTreeViewSubWindow
    {
        protected override List<string> GetColumns()
        {
            List<string> columnList = new List<string>()
            {
                "名称",
                "状态",
                "本地资源数",
                "本地资源长度",
                "远端资源数",
                "远端资源长度"
            };

            return columnList;
        }

        protected override void CreateTreeView()
        {
            TreeView = new GroupInfoTreeView(State, Header);
        }
    }
}
