//==========================
// - FileName:      Assets/Frameworks/Editor/LogEdiitor.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class LogEdiitor : Editor
{
    //[MenuItem( "Frameworks/Log/Disabled All Logs" )]
    public static void DisableLog()
    {
        ConsoleUtils.Clear();
        ScriptingDefineSymbolsUtils.RemoveDefines( "ENABLE_LOG" );
        Log.PINK( "Disabled All Logs Completed." );
        
        FrameworkEditor.SetRuntimeModeToRelease();
    }

    //[MenuItem( "Frameworks/Log/Enabled All Logs" )]
    public static void EnabledLog()
    {
        ScriptingDefineSymbolsUtils.AddDefines( "ENABLE_LOG" );
        Log.PINK( "Enabled All Logs Completed." );
    }
}
﻿