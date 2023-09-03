using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Game
{

    /// <summary>
    /// 
    /// 主数据存储结构
    /// 
    /// </summary>
    public class GUserData
    {
        public int gameLaunchCount = 0;
        public long createdTime = 0; //创建时间
        //public Dictionary<string, string> dictFiled = new Dictionary<string, string>();
        //public List<string> listField = new List<string>();
        //public BackpackData backpack = new BackpackData();
    }

    public class BackpackData
    {
        public string Title; //标签页
        public int Capacity; //背包容量; 格子数量
                             //背包可容纳的类型 默认所有
        public BackpackItemType ContainsType = BackpackItemType.Consumables | BackpackItemType.NoConsumables | BackpackItemType.TimetableConsumables | BackpackItemType.TimetableNoConsumables;
        public List<BackpackItemData> Items; //背包内的所有道具
    }

    public class BackpackItemData
    {
        public BackpackItemType Type;
        public int Count;
        public long firstGetTime;//首次获取的时间
        public long updateGetTime;//最近一次获取的时间
    }

    public enum BackpackItemType
    {

        Consumables = 1,//消耗品  代表 药水 银币
        NoConsumables = 1 << 1,//非消耗品  代表 装备 时装
        TimetableConsumables = 1 << 2, //有时间限制的消耗品  代表 活动药水
        TimetableNoConsumables = 1 << 3 //有时间限制的非消耗品 代表 时装,武器
    }

}