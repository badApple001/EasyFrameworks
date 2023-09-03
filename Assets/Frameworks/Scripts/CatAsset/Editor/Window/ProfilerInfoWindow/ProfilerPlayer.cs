//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/Window/ProfilerInfoWindow/ProfilerPlayer.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System.Collections.Generic;
using CatAsset.Runtime;
using UnityEngine;

namespace CatAsset.Editor
{

    public class ProfilerPlayer
    {
        private List<ProfilerInfo> profilerInfos = new List<ProfilerInfo>();

        private const int MaxCount = 1000;


        /// <summary>
        /// 最大范围
        /// </summary>
        public int MaxRange => profilerInfos.Count - 1;

        /// <summary>
        /// 是否为空
        /// </summary>
        public bool IsEmpty => profilerInfos.Count == 0;

        /// <summary>
        /// 添加分析器信息
        /// </summary>
        public void AddProfilerInfo(ProfilerInfo info)
        {
            if (profilerInfos.Count >= MaxCount)
            {
                profilerInfos.RemoveAt(0);
            }
            profilerInfos.Add(info);
        }

        /// <summary>
        /// 获取分析器信息
        /// </summary>
        public ProfilerInfo GetProfilerInfo(int index)
        {
            if (profilerInfos.Count == 0)
            {
                return null;
            }

            return profilerInfos[index];
        }

        /// <summary>
        /// 情况分析器信息
        /// </summary>
        public void ClearProfilerInfo()
        {
            profilerInfos.Clear();
        }
    }
}
