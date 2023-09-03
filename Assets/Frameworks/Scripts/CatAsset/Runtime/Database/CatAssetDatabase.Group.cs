//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/Database/CatAssetDatabase.Group.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System.Collections.Generic;
using System.Linq;

namespace CatAsset.Runtime
{
    public static partial class CatAssetDatabase
    {
        /// <summary>
        /// 资源组名 -> 资源组信息
        /// </summary>
        private static Dictionary<string, GroupInfo> groupInfoDict = new Dictionary<string, GroupInfo>();
        
        /// <summary>
        /// 获取资源组信息，若不存在则添加
        /// </summary>
        internal static GroupInfo GetOrAddGroupInfo(string group)
        {
            if (!groupInfoDict.TryGetValue(group, out GroupInfo groupInfo))
            {
                groupInfo = new GroupInfo();
                groupInfo.GroupName = group;
                groupInfoDict.Add(group, groupInfo);
            }

            return groupInfo;
        }

        /// <summary>
        /// 获取资源组信息
        /// </summary>
        internal static GroupInfo GetGroupInfo(string group)
        {
            groupInfoDict.TryGetValue(group, out GroupInfo groupInfo);
            return groupInfo;
        }

        /// <summary>
        /// 获取所有资源组信息
        /// </summary>
        internal static List<GroupInfo> GetAllGroupInfo()
        {
            List<GroupInfo> groupInfos = groupInfoDict.Values.ToList();
            return groupInfos;
        }

        /// <summary>
        /// 清空所有资源组信息
        /// </summary>
        internal static void ClearAllGroupInfo()
        {
            groupInfoDict.Clear();
        }
    }
}