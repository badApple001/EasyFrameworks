using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandlerManager
{
    private static Dictionary<Type, IHandler> handlerPool = new Dictionary<Type, IHandler>( );
    public static void Do<T>( ) where T : class, IHandler, new()
    {
        if ( handlerPool.TryGetValue( typeof( T ), out IHandler handler ) )
        {
            handler.Do( );
            return;
        }
        var cls = new T( );
        handlerPool.Add( typeof( T ), cls );
        cls.Do( );
    }

    public static void Undo<T>( ) where T : class, IHandler, new()
    {
        if ( handlerPool.TryGetValue( typeof( T ), out IHandler handler ) )
        {
            handler.Undo( );
            return;
        }
        var cls = new T( );
        handlerPool.Add( typeof( T ), cls );
        cls.Undo( );
    }

    public static T Find<T>( ) where T : class, IHandler, new()
    {
        if ( handlerPool.TryGetValue( typeof( T ), out IHandler handler ) )
        {
            return handler as T;
        }
        var cls = new T( );
        handlerPool.Add( typeof( T ), cls );
        return cls;
    }
}
