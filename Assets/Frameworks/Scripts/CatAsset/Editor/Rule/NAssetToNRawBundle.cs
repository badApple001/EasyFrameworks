//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/Rule/NAssetToNRawBundle.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System.Collections.Generic;
using System.IO;

namespace CatAsset.Editor
{
    /// <summary>
    /// 将指定目录下所有资源分别构建为一个原生资源包
    /// </summary>
    public class NAssetToNRawBundle : NAssetToNBundle
    {
        /// <inheritdoc />
        public override bool IsRaw => true;
    }
}