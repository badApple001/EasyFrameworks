//==========================
// - FileName:      Assets/Frameworks/Modules/Pool/PoolSettingAsset.cs      
// - Created:       ChenJC	
// - CreateTime:    2023-06-29-14:43:21
// - UnityVersion:  2021.3.22f1
// - Version:       1.0
// - Description:   
//==========================

using System;
using System.Collections.Generic;
using UnityEngine;

public class PoolSettingAsset : ScriptableObject
{
    [SerializeField] public List<PoolSettingItem> settings = new List<PoolSettingItem>( );
    [ReadOnly] public string createdTime = string.Empty;
    [ReadOnly] public string updatedTime = string.Empty;
}

[Serializable]
public class PoolSettingItem
{
    public string file;
    [ReadOnly] public string name;
    public int count;
}