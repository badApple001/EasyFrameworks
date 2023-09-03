//==========================
// - FileName:      Assets/GameMain/Scripts/Char/Player.cs
// - Created:       ChenJC
// - CreateTime:    2023-08-07-22:07:13
// - UnityVersion:  2021.3.26f1c1
// - Version:       1.0
// - Description:   
//==========================
using Pathfinding;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Stairs;

public class HorizontalViewPlayerController : MonoBehaviour
{

    private Animator animate;
    private CameraFollow2D followCam;
    private enum HorizontalViewPlayerState
    {

        Idle,
        Walk,
        Run,
        Sleep,
        ToStairs,
        Stairs,
        MovementLock,
    }
    [SerializeField] private HorizontalViewPlayerState state = HorizontalViewPlayerState.Idle;
    [SerializeField, Tooltip( "sprint move multiply speed" )] private float sprintMultiply = 1.5f;
    [SerializeField, Tooltip( "move speed" )] private float speed = 0.4F;
    [SerializeField, Tooltip( "walking animtion speed" )] private float animationSpeed = 0.2F;
    private bool b_sprint = false;
    private IAstarAI ai;
    private Transform tr;
    private int speedHashKey = Animator.StringToHash( "speed" );
    private bool isAtDestination = false;
    private int MASK_Stairs = 0;
    private Stairs currentStairs = null;
    private bool isUpStairs = false;

    private void Awake()
    {
        animate = GetComponentInChildren<Animator>();
        ai = GetComponent<IAstarAI>();
        tr = GetComponent<Transform>();
        MASK_Stairs = LayerMask.GetMask( "Stairs" );
        var animatorEventHandler = animate.GetComponent<AnimatorEventHandler>();
        animatorEventHandler.RegisterAnimationEventCallback( "OnClimbCompleted", OnClimbCompleted );
    }

    private void OnEnable()
    {
        followCam = Camera.main.gameObject.AddComponent<CameraFollow2D>();
        followCam.target = tr;
    }



    private void Update()
    {

        switch ( state )
        {
            case HorizontalViewPlayerState.Idle:
            case HorizontalViewPlayerState.Walk:
            case HorizontalViewPlayerState.Run:
                {


#if UNITY_EDITOR || UNITY_WIN

                    //上下楼梯检测
                    if ( Input.GetKeyUp( KeyCode.UpArrow ) || Input.GetKeyUp( KeyCode.W ) )
                    {
                        CheckStairs( true );
                    }
                    else if ( Input.GetKeyUp( KeyCode.DownArrow ) || Input.GetKeyUp( KeyCode.S ) )
                    {
                        CheckStairs( false );
                    }
                    if ( state == HorizontalViewPlayerState.ToStairs || state == HorizontalViewPlayerState.Stairs )
                    {
                        break;
                    }

                    b_sprint = Input.GetKey( KeyCode.LeftShift );

                    float axisX = Input.GetAxis( "Horizontal" );
                    float axisY = Input.GetAxis( "Vertical" );
#endif
                    float _speed = speed * ( b_sprint ? sprintMultiply : 1f );
                    Move( axisX * _speed, axisY * _speed );
                }
                break;
            case HorizontalViewPlayerState.ToStairs:
                {
                    MovementAnimation( speed );
                    if ( Vector3.Distance( ai.destination, tr.position ) < 0.4f )
                    {
                        if ( isUpStairs )
                        {
                            UpStairs();
                        }
                        else
                        {
                            DownStairs();
                        }
                    }
                }
                break;
        }
    }

    private void CheckStairs( bool up )
    {
        if ( Physics.CheckSphere( tr.position, 0.4f, MASK_Stairs, QueryTriggerInteraction.Collide ) )
        {

            //找到一个正确的楼梯
            Collider[] colliders = Physics.OverlapSphere( tr.position, 0.4f, MASK_Stairs, QueryTriggerInteraction.Collide );
            Collider target = null;
            foreach ( var collider in colliders )
            {
                if ( up && collider.transform.position.y > tr.position.y )
                {
                    target = collider;
                    break;
                }
                else if ( !up && collider.transform.position.y < tr.position.y )
                {
                    target = collider;
                    break;
                }
            }

            //走到楼梯位置
            if ( null != target )
            {
                var stairsComponent = currentStairs = target.GetComponent<Stairs>();
                Vector3 dest = up ? stairsComponent.down.position : stairsComponent.up.position;
                isUpStairs = up;
                if ( Vector3.Distance( dest, tr.position ) <= 0.1f )
                {
                    if ( up )
                    {
                        UpStairs();
                    }
                    else
                    {
                        DownStairs();
                    }
                }
                else
                {
                    state = HorizontalViewPlayerState.ToStairs;
                    ai.destination = dest;
                }
            }
        }
    }


    private void Move( float velocityX, float velocityY )
    {
        //检测是否到达目的地
        if ( ai.reachedEndOfPath )
        {
            if ( !isAtDestination ) OnTargetReached();
            isAtDestination = true;
        }
        else isAtDestination = false;

        velocityX *= -1f;
        velocityY *= -1f;
        if ( velocityX != 0f || velocityY != 0f )
        {
            ai.destination = tr.position + Vector3.right * velocityX + Vector3.forward * velocityY;
        }
        MovementAnimation( velocityX + velocityY );
    }

    private void MovementAnimation( float speedVelocity )
    {
        Vector3 relVelocity = tr.InverseTransformDirection( ai.velocity );
        relVelocity.y = 0;

        if ( relVelocity.sqrMagnitude <= speedVelocity * speedVelocity )
        {
            animate.SetFloat( speedHashKey, 0f );
        }
        else
        {
            float speed = relVelocity.z;
            animate.SetFloat( speedHashKey, Mathf.Abs( speed * animationSpeed ) );
        }
    }



    private Vector3 lastTarget;
    //到达目的的
    private void OnTargetReached()
    {
        if ( Vector3.Distance( tr.position, lastTarget ) > 1f )
        {
            lastTarget = tr.position;
        }
    }


    private void UpStairs()
    {
        GetComponent<AIPath>().enabled = false;
        tr.localEulerAngles = Vector3.down * 180f;
        state = HorizontalViewPlayerState.Stairs;
        animate.SetTrigger( "stairs" );
        StartCoroutine( DoClimb( currentStairs.down.position, currentStairs.down.position + Vector3.up * 0.755579f, 1.2f, () =>
        {
            ActionCompleteFaceForward forward = isUpStairs ? currentStairs.toUpForward : currentStairs.toDownForward;
            tr.localEulerAngles = forward == ActionCompleteFaceForward.Right ? Vector3.down * 90f : Vector3.up * 90f;
        } ) );
    }

    private void DownStairs()
    {
        GetComponent<AIPath>().enabled = false;
        tr.localEulerAngles = Vector3.down * 180f;
        state = HorizontalViewPlayerState.Stairs;
        animate.SetBool( "climbing_down", true );
        StartCoroutine( DoClimb( currentStairs.up.position + Vector3.down * 0.78f, currentStairs.down.position, 1.2f, () =>
        {
            animate.SetBool( "climbing_down", false );
            GetComponent<AIPath>().enabled = true;
            state = HorizontalViewPlayerState.Idle;
        } ) );
    }

    private IEnumerator DoClimb( Vector3 src, Vector3 target, float duration = 1f, Action cb = null )
    {
        float tm = 0f;
        while ( tm <= duration )
        {
            tr.position = Vector3.Lerp( src, target, tm / duration );
            tm += Time.deltaTime;
            yield return 0;
        }
        tr.position = target;
        cb?.Invoke();
    }


    private void OnClimbCompleted()
    {
        Debug.Log( "攀爬结束" );
        animate.enabled = false;
        var root = animate.transform.GetChild( 0 );
        tr.localPosition += root.localPosition;
        tr.Rotate( root.localEulerAngles );
        root.localPosition = Vector3.zero;
        root.localEulerAngles = Vector3.zero;
        Timer.SetTimeout( 0.1f, () =>
        {
            animate.enabled = true;
            GetComponent<AIPath>().enabled = true;
            state = HorizontalViewPlayerState.Idle;
        } );
    }


    private void OnDestroy()
    {
        var animatorEventHandler = animate.GetComponent<AnimatorEventHandler>();
        animatorEventHandler.ClearAnimationEvent();
    }
}
