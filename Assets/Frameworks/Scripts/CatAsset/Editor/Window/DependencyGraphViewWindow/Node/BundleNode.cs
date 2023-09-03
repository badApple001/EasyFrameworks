//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/Window/DependencyGraphViewWindow/Node/BundleNode.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using CatAsset.Runtime;

namespace CatAsset.Editor
{
    /// <summary>
    /// 资源包依赖链节点
    /// </summary>
    public class BundleNode : BaseDependencyNode<ProfilerBundleInfo>
    {
        public override ProfilerBundleInfo Owner
        {
            set
            {
                base.Owner = value;
                title = Owner.BundleIdentifyName;
            }
        }
    }
}
