//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/PackageOnly.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using CatAsset.Runtime;
using System;
using UnityEngine;

public class PackageOnly
{
    public PackageOnly( Action CompleteHandler )
    {
        CatAssetManager.CheckVersion( ( result =>
        {
            CompleteHandler?.Invoke();
            if ( !result.Success )
            {
                Debug.LogError( "初始化错误: " + result.Error );
                return;
            }
        } ) );
    }
}
