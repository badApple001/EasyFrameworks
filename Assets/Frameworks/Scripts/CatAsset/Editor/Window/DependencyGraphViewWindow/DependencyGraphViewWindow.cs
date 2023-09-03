//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/Window/DependencyGraphViewWindow/DependencyGraphViewWindow.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System;
using System.Collections.Generic;
using CatAsset.Runtime;
using UnityEditor;
using UnityEngine;

namespace CatAsset.Editor
{
    /// <summary>
    /// 依赖关系图窗口
    /// </summary>
    public class DependencyGraphViewWindow : EditorWindow
    {
        /// <summary>
        /// 打开窗口
        /// </summary>
        public static void Open<TOwner, TNode>(TOwner owner)
            where TOwner : IDependencyChainOwner<TOwner>
            where TNode : BaseDependencyNode<TOwner>, new()
        {
            var window = CreateWindow<DependencyGraphViewWindow>("依赖关系图");

            var graphView = new DependencyChainGraphView<TOwner, TNode>()
            {
                style = { flexGrow = 1 }
            };

            window.rootVisualElement.Add(graphView);
            window.ShowPopup();

            graphView.Init(owner);
        }
    }
}
