using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GMManager : MonoBehaviour
{
    private static GMManager instance;
    public static void Create( )
    {
        var obj = GameObject.Instantiate( Resources.Load<GameObject>( "GMPanel" ) );
        obj.name = nameof( GMManager );
        instance = obj.GetComponent<GMManager>( );
    }


    public void ShowDebugPanel( )
    {
        //HandlerManager.Find<InitSDKHandler>().sdkDebugGameObject.SetActive( true );
    }


    public void Close( )
    {
        GameObject.Destroy( gameObject );
    }

    public static void Destroy( )
    {
        instance?.Close( );
    }
}
