//==========================
// - FileName:      Assets/Frameworks/Scripts/Utility/PlatformUtils.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlatformUtils
{

    //获取系统电量
    public static float batteryLevel
    {
        get
        {
            return SystemInfo.batteryLevel == -1 ? 1 : SystemInfo.batteryLevel;
        }
    }

}
