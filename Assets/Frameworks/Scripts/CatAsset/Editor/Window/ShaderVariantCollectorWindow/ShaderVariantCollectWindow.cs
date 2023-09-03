//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/Window/ShaderVariantCollectorWindow/ShaderVariantCollectWindow.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System;
using UnityEditor;
using UnityEngine;

namespace CatAsset.Editor
{
    /// <summary>
    /// Shader变体收集窗口
    /// </summary>
    public class ShaderVariantCollectWindow : EditorWindow
    {
        private ShaderVariantCollection svc;
        
        [MenuItem("Frameworks/AssetBundle工具界面/打开Shader变体收集窗口", priority = 1)]
        private static void OpenWindow()
        {
            ShaderVariantCollectWindow window = GetWindow<ShaderVariantCollectWindow>(false, "Shader变体收集窗口");
            window.minSize = new Vector2(800, 600);
            window.Show();
        }

        private void OnGUI()
        {
            svc = (ShaderVariantCollection)EditorGUILayout.ObjectField("选择SVC：", svc, typeof(ShaderVariantCollection),false);
            EditorGUILayout.LabelField($"SVC中的Shader数：{ShaderVariantCollector.GetCurrentShaderVariantCollectionShaderCount()}");
            EditorGUILayout.LabelField($"SVC中的Shader变体数：{ShaderVariantCollector.GetCurrentShaderVariantCollectionVariantCount()}");
            if (GUILayout.Button("收集Shader变体"))
            {
                ShaderVariantCollector.CollectVariant(svc);
            }
        }

        public void SetSVC(ShaderVariantCollection svc)
        {
            this.svc = svc;
        }
    }
}