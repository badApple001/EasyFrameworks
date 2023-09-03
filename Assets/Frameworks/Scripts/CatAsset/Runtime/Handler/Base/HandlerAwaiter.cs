//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/Handler/Base/HandlerAwaiter.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System;
using System.Runtime.CompilerServices;

namespace CatAsset.Runtime
{
    /// <summary>
    /// 句柄的可等待对象
    /// </summary>
    public readonly struct HandlerAwaiter<T> : INotifyCompletion where T : BaseHandler
    {
        private readonly T handler;

        public HandlerAwaiter(T handler)
        {
            this.handler = handler;
        }
        
        public bool IsCompleted => handler?.IsDone ?? false;

        public T GetResult()
        {
            return handler;
        }
        
        public void OnCompleted(Action continuation)
        {
            if (handler != null)
            {
                handler.AsyncStateMachineMoveNext += continuation;
            }
           
        }
    }
}