using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine;
using System.Collections.Generic;

[RequireComponent( typeof( Image ) )]
public class GButton : Button, IPointerDownHandler, IPointerUpHandler
{

    public bool scalable = true;
    public Vector3 scaleMultiplyBy = new Vector3( 0.95f, 0.95f, 0.95f );
    private Vector3 normalScale = Vector3.one, downScale;

    public string sound = "click";
    public string dbtEvent = string.Empty;
    public bool penetrateEvent = false;

    protected override void OnEnable( )
    {
        base.OnEnable( );
        normalScale = transform.localScale;
        downScale = new Vector3( scaleMultiplyBy.x * normalScale.x, scaleMultiplyBy.y * normalScale.y, scaleMultiplyBy.z * normalScale.z );
    }


    public override void OnPointerDown( PointerEventData eventData )
    {
        base.OnPointerDown( eventData );

        if ( scalable )
            transform.localScale = downScale;

        if ( penetrateEvent )
        {
            PassEvent( eventData, ExecuteEvents.pointerDownHandler );
        }
    }

    public override void OnPointerEnter( PointerEventData eventData )
    {
        base.OnPointerEnter( eventData );

        if ( penetrateEvent )
        {
            PassEvent( eventData, ExecuteEvents.pointerEnterHandler );
        }
    }

    public override void OnPointerExit( PointerEventData eventData )
    {
        base.OnPointerExit( eventData );

        if ( penetrateEvent )
        {
            PassEvent( eventData, ExecuteEvents.pointerExitHandler );
        }
    }

    public override void OnPointerUp( PointerEventData eventData )
    {
        base.OnPointerUp( eventData );

        if ( scalable )
            transform.localScale = normalScale;

        if ( penetrateEvent )
        {
            PassEvent( eventData, ExecuteEvents.pointerUpHandler );
        }
    }

    public override void OnPointerClick( PointerEventData eventData )
    {
        base.OnPointerClick( eventData );

        if ( !string.IsNullOrEmpty( sound ) )
        {
            AudioManager.Instance.PlaySound( sound );
        }

        if ( !string.IsNullOrEmpty( dbtEvent ) )
        {
            //AnalyticsController.UploadOpenUI( dbtEvent );
            Timer.SetTimeout( 0.2f, ( ) =>
            {
                //AdsController.PlayInsertAd( dbtEvent );
            } );
        }

        if ( penetrateEvent )
        {
            PassEvent( eventData, ExecuteEvents.pointerClickHandler );
        }
    }


    public void PassEvent<T>( PointerEventData data, ExecuteEvents.EventFunction<T> function )
   where T : IEventSystemHandler
    {
        List<RaycastResult> results = new List<RaycastResult>( );
        EventSystem.current.RaycastAll( data, results );
        GameObject current = data.pointerCurrentRaycast.gameObject;
        for ( int i = 0; i < results.Count; i++ )
        {
            if ( current != results[ i ].gameObject )
            {
                ExecuteEvents.Execute( results[ i ].gameObject, data, function );
            }
        }
    }

}