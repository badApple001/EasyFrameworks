//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/Pool/GameObjectPool/GameObjectPoolComponent.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace CatAsset.Runtime
{
    /// <summary>
    /// 游戏对象池组件
    /// </summary>
    public class GameObjectPoolComponent : MonoBehaviour
    {
        /// <summary>
        /// 游戏对象池管理器的根节点
        /// </summary>
        [Header("对象池根节点")]
        public Transform Root;
        
        /// <summary>
        /// 默认对象失效时间
        /// </summary>
        [Header("默认对象失效时间")]
        public float DefaultObjectExpireTime = 60;

        /// <summary>
        /// 默认对象池失效时间
        /// </summary>
        [Header("默认对象池失效时间")]
        public float DefaultPoolExpireTime = 60;

        /// <summary>
        /// 单帧最大实例化数
        /// </summary>
        [Header("单帧最大实例化数")]
        public int MaxInstantiateCount = 10;

       
        
        private void Awake()
        {
            GameObjectPoolManager.Root = Root;
            
            GameObjectPoolManager.DefaultObjectExpireTime = DefaultObjectExpireTime;
            GameObjectPoolManager.DefaultPoolExpireTime = DefaultPoolExpireTime;
            GameObjectPoolManager.MaxInstantiateCount = MaxInstantiateCount;
        }

        private void Update()
        {
            GameObjectPoolManager.Update(Time.deltaTime);
        }
    }

}

