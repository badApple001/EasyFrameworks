//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/Window/ProfilerInfoWindow/SubWindows/TaskInfo/TaskInfoWindow.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace CatAsset.Editor
{
    /// <summary>
    /// 任务信息窗口
    /// </summary>
    public class TaskInfoWindow : BaseTreeViewSubWindow
    {
        protected override List<string> GetColumns()
        {
            List<string> columnList = new List<string>()
            {
                "名称",
                "类型",
                "优先级",
                "状态",
                "进度",
                "已合并任务数"
            };

            return columnList;
        }

        protected override void CreateTreeView()
        {
            TreeView = new TaskInfoTreeView(State, Header);
        }
    }
}
