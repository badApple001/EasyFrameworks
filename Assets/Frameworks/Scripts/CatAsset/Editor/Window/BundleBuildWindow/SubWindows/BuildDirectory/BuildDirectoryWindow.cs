//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/Window/BundleBuildWindow/SubWindows/BuildDirectory/BuildDirectoryWindow.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System.Collections.Generic;
using UnityEditor.IMGUI.Controls;
using UnityEngine;

namespace CatAsset.Editor
{
    /// <summary>
    /// 构建目录窗口
    /// </summary>
    public class BuildDirectoryWindow : BaseTreeViewSubWindow
    {
        protected override List<string> GetColumns()
        {
            List<string> columnList = new List<string>()
            {
                "名称",
                "Object",
                "构建规则",
                "Filter",
                "正则",
                "资源组",
                "压缩设置",
                "加密设置",
                "删除",
            };

            return columnList;
        }

        protected override void CreateTreeView()
        {
            TreeView = new BuildDirectoryTreeView(State, Header);
        }

        protected override void ProcessColumns(MultiColumnHeaderState.Column[] columns)
        {
            base.ProcessColumns(columns);
            columns[2].minWidth = 300;  //构建规则
        }

        /// <inheritdoc/>
        public override void DrawSubWindow(Rect position)
        {
            if (!TreeView.CanShow())
            {
                return;
            }
            TreeView.OnGUI(new Rect(0, 60, position.width, position.height - 60));
        }
    }
}