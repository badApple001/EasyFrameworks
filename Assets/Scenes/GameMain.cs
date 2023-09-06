using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameMain : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        //ClacTime( () =>
        //{
        //    for ( int i = 0; i < 1000000; i++ )
        //    {
        //        var t = DataTable.Load<DRADConfig>();
        //        var t2 = DataTable.Load<DRMultiLanguage>();
        //    }
        //} );

        var t = DataTable.Load<DRMultiLanguage>();

        Debug.Log( t.Find( 12020011 ).Japanese );
    }

    public void ClacTime( Action action )
    {
        long start_tm = DateTimeUtils.ConvertDateTimep( DateTime.Now );
        action();
        Debug.Log( $"use time: {DateTimeUtils.ConvertDateTimep( DateTime.Now ) - start_tm}" );
    }



    // Update is called once per frame
    void Update()
    {

    }
}
