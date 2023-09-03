//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/Misc/AssetBinder.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System.Collections.Generic;
using UnityEngine;

namespace CatAsset.Runtime
{
    /// <summary>
    /// 资源绑定器
    /// </summary>
    public class AssetBinder : MonoBehaviour
    {
        public readonly List<IBindableHandler> Handlers = new List<IBindableHandler>();

        /// <summary>
        /// 绑定句柄
        /// </summary>
        public void BindTo(IBindableHandler handler)
        {
            if (handler.State == HandlerState.InValid)
            {
                //不可绑定无效句柄
                return;
            }
            
            Handlers.Add(handler);
        }
        

        private void OnDestroy()
        {
            foreach (IBindableHandler handler in Handlers)
            {
                handler.Unload();
            }
            Handlers.Clear();

        }
    }
}