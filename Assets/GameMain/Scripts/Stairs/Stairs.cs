//==========================
// - FileName:      Assets/GameMain/Scripts/Stairs/Stairs.cs
// - Created:       ChenJC
// - CreateTime:    2023-08-09-00:03:24
// - UnityVersion:  2021.3.26f1c1
// - Version:       1.0
// - Description:   
//==========================
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stairs : MonoBehaviour
{
    public enum ActionCompleteFaceForward
    {
        Left,
        Right
    }

    public Transform up, down;
    public ActionCompleteFaceForward toUpForward = ActionCompleteFaceForward.Right, toDownForward = ActionCompleteFaceForward.Left;
}
