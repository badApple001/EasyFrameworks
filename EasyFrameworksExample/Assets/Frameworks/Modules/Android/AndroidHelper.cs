//==========================
// - FileName:      Assets/Frameworks/Modules/Android/AndroidHelper.cs      
// - Created:       ChenJC	
// - CreateTime:    2023-07-20-10:52:26
// - UnityVersion:  2021.3.22f1
// - Version:       1.0
// - Description:   
//==========================
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AndroidHelper : AndroidJavaProxy
{
    public static AndroidHelper Instance { get; private set; } = new AndroidHelper( );

    private static AndroidJavaClass _jc;
    
    private static AndroidJavaClass jc
    {
        get
        {
            if ( _jc == null )
            {
                _jc = new AndroidJavaClass( "com.unity3d.player.UnityPlayerActivity" );
            }
            return _jc;
        }
    }

    private static AndroidJavaObject _jo;
    private static AndroidJavaObject jo
    {
        get
        {
            if ( _jo == null )
            {
                _jo = jc.GetStatic<AndroidJavaObject>( "currentActivity" );
            }
            return _jo;
        }
    }

    private AndroidHelper( ) : base( "com.unity3d.player.UnityPlayerActivity" ) { }
    
    public bool IsNetworking( )
    {
        return jo.Call<bool>( "isNetworkConnected" );
    }
}
