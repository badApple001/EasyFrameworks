//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/Rule/OneAssetToOneRawBundle.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿namespace CatAsset.Editor
{
    /// <summary>
    /// 将单个资源构建为单个原生资源包
    /// </summary>
    public class OneAssetToOneRawBundle : OneAssetToOneBundle
    {
        /// <inheritdoc />
        public override bool IsRaw => true;
    }
}