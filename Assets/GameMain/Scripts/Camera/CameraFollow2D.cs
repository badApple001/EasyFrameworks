//==========================
// - FileName:      Assets/GameMain/Scripts/Camera/CameraFloow2D.cs
// - Created:       ChenJC
// - CreateTime:    2023-08-07-22:49:24
// - UnityVersion:  2021.3.26f1c1
// - Version:       1.0
// - Description:   
//==========================
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow2D : MonoBehaviour
{

    public Transform target;
    [SerializeField] private float threshold = 0.2f;
    [SerializeField] private float smooth = 4f;
    [SerializeField] private Vector3 max = new Vector3( 5f, 5f, 0f ), min = new Vector3( -12.8f, -5f, 0f );
    [SerializeField] private float offsetY = 3.653f;

    private void LateUpdate()
    {

        if ( null == target ) return;
        Vector3 targetPos = target.position;
        Vector3 pos = transform.position;
        targetPos.y += offsetY;

        if ( Mathf.Abs( targetPos.x - pos.x ) >= threshold || Mathf.Abs( targetPos.y - pos.y ) >= threshold )
        {
            targetPos.x = Mathf.Clamp( targetPos.x, min.x, max.x );
            targetPos.y = Mathf.Clamp( targetPos.y, min.y, max.y );
            targetPos.z = pos.z;
            transform.position = Vector3.Lerp( pos, targetPos, Time.deltaTime * smooth );
        }
    }
}
