﻿using System.Collections.Generic;
using System.IO;
using CatAsset.Runtime;
using UnityEditor;
using UnityEditor.Build.Pipeline.Utilities;
using UnityEngine;

namespace CatAsset.Editor
{
    /// <summary>
    /// 配置窗口
    /// </summary>
    public class ConfigWindow : BaseSubWindow
    {
        /// <summary>
        /// 是否构建补丁资源包
        /// </summary>
        private bool isBuildPatch;

        /// <summary>
        /// 可选资源包构建平台
        /// </summary>
        private List<BuildTarget> targetPlatforms = new List<BuildTarget>()
        {
            BuildTarget.StandaloneWindows64,
            BuildTarget.Android,
            BuildTarget.iOS,
            BuildTarget.WebGL,
        };

        public override void InitSubWindow()
        {
            
        }

        public override void DrawSubWindow(Rect position)
        {
            DrawVersion();

            DrawTargetPlatforms();

            DrawOptions();

            DrawBuildPatch();

            DrawCopyGroup();

            DrawButtons();
        }

        /// <summary>
        /// 绘制版本号
        /// </summary>
        private static void DrawVersion()
        {
            using (new EditorGUILayout.HorizontalScope())
            {
                EditorGUILayout.LabelField("资源清单版本号：", GUILayout.Width(100));
                BundleBuildConfigSO.Instance.ManifestVersion =
                    EditorGUILayout.IntField(BundleBuildConfigSO.Instance.ManifestVersion, GUILayout.Width(50));
            }

            EditorGUILayout.Separator();
        }

        /// <summary>
        /// 绘制构建平台
        /// </summary>
        private void DrawTargetPlatforms()
        {
            EditorGUILayout.LabelField("选择资源包构建平台：");
            using (new EditorGUILayout.HorizontalScope())
            {
                for (int i = 0; i < targetPlatforms.Count; i++)
                {
                    BuildTarget targetPlatform = targetPlatforms[i];

                    using (EditorGUILayout.ToggleGroupScope toggle =
                           new EditorGUILayout.ToggleGroupScope(targetPlatform.ToString(),
                               BundleBuildConfigSO.Instance.TargetPlatforms.Contains(targetPlatform)))
                    {
                        if (toggle.enabled)
                        {
                            if (!BundleBuildConfigSO.Instance.TargetPlatforms.Contains(targetPlatform))
                            {
                                BundleBuildConfigSO.Instance.TargetPlatforms.Add(targetPlatform);
                            }
                        }
                        else
                        {
                            BundleBuildConfigSO.Instance.TargetPlatforms.Remove(targetPlatform);
                        }
                    }
                }
            }

            EditorGUILayout.Separator();
        }

        /// <summary>
        /// 绘制选项
        /// </summary>
        private static void DrawOptions()
        {
            using (new EditorGUILayout.HorizontalScope())
            {
                EditorGUILayout.LabelField("资源包构建设置：", GUILayout.Width(100));
                BundleBuildConfigSO.Instance.Options =
                    (BundleBuildOptions)EditorGUILayout.EnumFlagsField(BundleBuildConfigSO.Instance.Options,
                        GUILayout.Width(200));

                EditorGUILayout.Separator();

                EditorGUILayout.LabelField("资源包全局压缩设置：", GUILayout.Width(120));
                BundleCompressOptions compressOptions =
                    (BundleCompressOptions)EditorGUILayout.EnumPopup(BundleBuildConfigSO.Instance.GlobalCompress,
                        GUILayout.Width(100));
                if (compressOptions != BundleCompressOptions.UseGlobal)
                {
                    BundleBuildConfigSO.Instance.GlobalCompress = compressOptions;
                }

                EditorGUILayout.Separator();

                EditorGUILayout.LabelField("资源包全局加密设置：", GUILayout.Width(120));
                BundleEncryptOptions encryptOption =
                    (BundleEncryptOptions)EditorGUILayout.EnumPopup(BundleBuildConfigSO.Instance.GlobalEncrypt,
                        GUILayout.Width(100));
                if (encryptOption != BundleEncryptOptions.UseGlobal)
                {
                    BundleBuildConfigSO.Instance.GlobalEncrypt = encryptOption;
                }

                EditorGUILayout.Separator();

                GUILayout.Label("资源包构建输出根目录：", GUILayout.Width(150));
                BundleBuildConfigSO.Instance.OutputRootDirectory =
                    GUILayout.TextField(BundleBuildConfigSO.Instance.OutputRootDirectory, GUILayout.Width(300));
                if (GUILayout.Button("选择目录", GUILayout.Width(100)))
                {
                    string folder = EditorUtility.OpenFolderPanel("选择资源包构建输出根目录", BundleBuildConfigSO.Instance.OutputRootDirectory, "");
                    if (folder != string.Empty)
                    {
                        BundleBuildConfigSO.Instance.OutputRootDirectory = folder;
                    }
                }
            }

            EditorGUILayout.Separator();
        }

        /// <summary>
        /// 绘制构建补丁资源包
        /// </summary>
        private void DrawBuildPatch()
        {
            EditorGUILayout.Separator();
            using (EditorGUILayout.ToggleGroupScope toggle =
                   new EditorGUILayout.ToggleGroupScope("构建补丁资源包", isBuildPatch))
            {
                isBuildPatch = toggle.enabled;
            }


            EditorGUILayout.Separator();
        }

        /// <summary>
        /// 绘制复制到包体内的资源组
        /// </summary>
        private static void DrawCopyGroup()
        {
            using (EditorGUILayout.ToggleGroupScope toggle =
                   new EditorGUILayout.ToggleGroupScope("资源包构建目标平台只有1个时，在构建完成后将其复制到StreamingAssets目录下",
                       BundleBuildConfigSO.Instance.IsCopyToReadOnlyDirectory))
            {
                BundleBuildConfigSO.Instance.IsCopyToReadOnlyDirectory = toggle.enabled;
            }

            if (BundleBuildConfigSO.Instance.IsCopyToReadOnlyDirectory)
            {
                using (new EditorGUILayout.HorizontalScope())
                {
                    EditorGUILayout.LabelField("要复制的资源组（以分号分隔，为空则全部复制）：", GUILayout.Width(300));
                    BundleBuildConfigSO.Instance.CopyGroup =
                        EditorGUILayout.TextField(BundleBuildConfigSO.Instance.CopyGroup, GUILayout.Width(600));
                }
            }

            EditorGUILayout.Separator();
        }

        /// <summary>
        /// 绘制按钮
        /// </summary>
        private void DrawButtons()
        {
              var oldColor = GUI.color;
            using (new EditorGUILayout.HorizontalScope())
            {
                GUI.color = Color.red;

                if (GUILayout.Button("清理资源包目录",GUILayout.Width(200)))
                {
                    if (!Directory.Exists(BundleBuildConfigSO.Instance.OutputRootDirectory))
                    {
                        Debug.Log("资源包目录不存在");
                        return;
                    }
                    
                    if (EditorUtility.DisplayDialog("提示","是否确定清理资源包目录？","是","否"))
                    {
                        BundleBuildConfigSO.Instance.ManifestVersion = 1;
                        Directory.Delete(BundleBuildConfigSO.Instance.OutputRootDirectory, true);
                        Debug.Log("资源包目录已清理");
                    }
                }
                
                if (GUILayout.Button("清理SBP构建缓存",GUILayout.Width(200)))
                {
                    BuildCache.PurgeCache(true);
                }

                if (GUILayout.Button("清理图集缓存",GUILayout.Width(200)))
                {
                    string atlasCachePath = "Library/AtlasCache";
                    if (!Directory.Exists(atlasCachePath))
                    {
                        Debug.Log("图集缓存目录不存在");
                        return;
                    }
                    
                    if (EditorUtility.DisplayDialog("提示","是否确定清理图集缓存？","是","否"))
                    {
                        Directory.Delete(atlasCachePath, true);
                        Debug.Log("图集缓存已清理");
                    }
                }

                GUI.color = oldColor;
            }
            
            using (new EditorGUILayout.HorizontalScope())
            {
                GUI.color = Color.green;
                if (GUILayout.Button("构建资源包", GUILayout.Width(200)))
                {
                    //检查是否选中至少一个平台
                    if (BundleBuildConfigSO.Instance.TargetPlatforms.Count == 0)
                    {
                        EditorUtility.DisplayDialog("提示", "至少要选择一个平台", "确认");
                        return;
                    }

                    //先刷新下资源包构建信息
                    BundleBuildConfigSO.Instance.RefreshBundleBuildInfos();

                    //处理多个平台
                    foreach (BuildTarget targetPlatform in BundleBuildConfigSO.Instance.TargetPlatforms)
                    {
                        BuildPipeline.BuildBundles(targetPlatform, isBuildPatch);
                    }

                    BundleBuildConfigSO.Instance.ManifestVersion++;
                    EditorUtility.SetDirty(BundleBuildConfigSO.Instance);
                    AssetDatabase.SaveAssets();
                    AssetDatabase.Refresh();

                    return;
                }
                GUI.color = oldColor;
            }
        }
    }
}