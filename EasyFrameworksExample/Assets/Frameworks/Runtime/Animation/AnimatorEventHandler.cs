//==========================
// - FileName:      Assets/Frameworks/Modules/Animation/AnimatorEventHandler.cs      
// - Created:       ChenJC	
// - CreateTime:    2023-06-26-15:59:18
// - UnityVersion:  2021.3.22f1
// - Version:       1.0
// - Description:   
//==========================
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimatorEventHandler : MonoBehaviour
{


    private Dictionary<string, Action> eventHandlerDict = new Dictionary<string, Action>( );

    public void RegisterAnimationEventCallback( string eventName, Action callback )
    {
        eventHandlerDict[ eventName ] = callback;
    }

    public void UnregisterAnimationEventCallback( string eventName )
    {
        eventHandlerDict.Remove( eventName );
    }

    public void ClearAnimationEvent( )
    {
        eventHandlerDict.Clear();
    }


    [ReadOnly] private string frameEventMethod = "Fire";
    public void Fire( string @event )
    {
        if ( eventHandlerDict.TryGetValue( @event, out Action callback ) )
        {
            callback( );
        }
    }

}
