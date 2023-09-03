//==========================
// - FileName:      Assets/GameMain - Tower Defence/Scripts/Critters/Critters.cs      
// - Created:       ChenJC	
// - CreateTime:    2023-06-26-12:28:12
// - UnityVersion:  2021.3.22f1
// - Version:       1.0
// - Description:   
//==========================
using Pathfinding;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Critters : MonoBehaviour
{

    public enum CritterState
    {
        Default,
        ToDestination,
        ReachedDestination,
    }
    public CritterState state { get; private set; } = CritterState.Default;
    public Animator animator { private set; get; }
    public AnimatorEventHandler animatorEventHandler { private set; get; }

    /// <summary>Minimum velocity for moving</summary>
    public float sleepVelocity = 0.4F;

    /// <summary>Speed relative to velocity with which to play animations</summary>
    public float animationSpeed = 0.2F;

    bool isAtDestination;

    IAstarAI ai;

    Transform tr;

    int speedKey = Animator.StringToHash( "Speed" );

    float maxSpeed = 3f;

    public virtual void Start( )
    {
        animator = GetComponentInChildren<Animator>( );
        animatorEventHandler = animator.GetComponent<AnimatorEventHandler>( );
        foreach ( var mr in GetComponentsInChildren<Renderer>( ) )
        {
            mr.material.renderQueue = 3002; //可以被门剔除
        }
        ai = GetComponent<IAstarAI>( );
        tr = GetComponent<Transform>( );
        maxSpeed = ai.maxSpeed;
    }

    protected Transform wavePoint, destinationPoint;
    public void Init( Transform wavePoint, Transform destinationPoint )
    {
        foreach ( var mr in GetComponentsInChildren<Renderer>( ) )
        {
            mr.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
        }
        this.wavePoint = wavePoint;
        this.destinationPoint = destinationPoint;
    }

    public void Go( )
    {
        foreach ( var mr in GetComponentsInChildren<Renderer>( ) )
        {
            mr.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.On;
        }
        state = CritterState.ToDestination;
        ai.destination = destinationPoint.position;


    }

    /// <summary>Point for the last spawn of <see cref="endOfPathEffect"/></summary>
    protected Vector3 lastTarget;

    /// <summary>
    /// Called when the end of path has been reached.
    /// An effect (<see cref="endOfPathEffect)"/> is spawned when this function is called
    /// However, since paths are recalculated quite often, we only spawn the effect
    /// when the current position is some distance away from the previous spawn-point
    /// </summary>
    void OnTargetReached( )
    {
        if ( state == CritterState.ToDestination && Vector3.Distance( tr.position, lastTarget ) > 1 )
        {
            state = CritterState.ReachedDestination;
            PoolManager.GetInstance().Despawn( transform );
        }
    }

    protected void Update( )
    {
        if ( state == CritterState.ToDestination )
        {

            if ( ai.reachedEndOfPath )
            {
                if ( !isAtDestination ) OnTargetReached( );
                isAtDestination = true;
            }
            else isAtDestination = false;

            // Calculate the velocity relative to this transform's orientation
            Vector3 relVelocity = tr.InverseTransformDirection( ai.velocity );
            relVelocity.y = 0;

            if ( relVelocity.sqrMagnitude <= sleepVelocity * sleepVelocity )
            {
                animator.SetFloat( speedKey, 0f );
            }
            else
            {
                animator.SetFloat( speedKey, relVelocity.z / maxSpeed );
            }

        }
    }

}
