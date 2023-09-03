//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/Loader/UpdatableAssetLoader.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿namespace CatAsset.Runtime
{
    /// <summary>
    /// 可更新资源加载器
    /// </summary>
    public class UpdatableAssetLoader : DefaultAssetLoader
    {
        /// <inheritdoc />
        public override void CheckVersion(OnVersionChecked onVersionChecked)
        {
            VersionChecker.CheckVersion(onVersionChecked);
        }
    }
}