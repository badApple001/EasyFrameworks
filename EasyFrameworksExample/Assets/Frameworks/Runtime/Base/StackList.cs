//==========================
// - FileName:      Assets/Frameworks/Modules/Base/StackList.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StackList<T> : List<T>
{
    public T Peek()
    {
        return this[ Count - 1 ];
    }

    public void Push( T item )
    {
        Add( item );
    }

    public T Pop()
    {
        T value = Peek();
        RemoveAt( Count - 1 );
        return value;
    }
}
