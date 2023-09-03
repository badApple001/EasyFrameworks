//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Editor/BuildPipeline/ContextObject/ManifestParam.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using CatAsset.Runtime;

namespace CatAsset.Editor
{
    /// <inheritdoc />
    public class ManifestParam : IManifestParam
    {
        /// <inheritdoc />
        public CatAssetManifest Manifest { get; }
        
        /// <inheritdoc />
        public string WriteFolder { get; }

        public ManifestParam(CatAssetManifest manifest, string writeFolder)
        {
            Manifest = manifest;
            WriteFolder = writeFolder;
        }
        
    }
}