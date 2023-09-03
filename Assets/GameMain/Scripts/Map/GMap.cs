//==========================
// - FileName:      Assets/GameMain - Tower Defence/Scripts/Map/GMap.cs      
// - Created:       ChenJC	
// - CreateTime:    2023-06-25-19:10:32
// - UnityVersion:  2021.3.22f1
// - Version:       1.0
// - Description:   
//==========================
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class GMap : MonoBehaviour
{

    public AstarPath astar;
    public Transform destination, origin, land, wave;

    
    [Tooltip("ѡ��Project����µ�Ŀ¼ ��סCtrl+Alt+C������ȡ·�� Ctrl+V����ճ��·��")]
    [SerializeField] 
    private string bgm = "Assets/BundleRes/Audios/bgm_mushroomFarm.mp3";//��ͬ��ͼ���Ų�ͬ������

    // Start is called before the first frame update
    void Start( )
    {
        AudioManager.GetInstance().PlayMusic( bgm );

        //�ȴ�1��
        Timer.SetTimeout( 1f, ( ) =>
        {
            Timer.SetInterval( 2f, SpawenMonster, true );
        } );
    }

    IEnumerator Transfer( Transform t )
    {
        float tm = 0;
        while ( tm < 1f )
        {
            tm += Time.deltaTime;
            t.position = Vector3.Lerp( origin.position, land.position, tm );
            yield return t;
        }
        t.position = land.position;
        t.GetComponent<Critters>( ).Go( );
    }


    private int spawnIndex = 0, spawnCount = 32;

    void SpawenMonster( )
    {
        //���ɲ���ʼ��
        var cirtter = PoolManager.GetInstance().Spawn( "Critters" );
        cirtter.SetParent( Framework.GetInstance( ).Entitys, false );
        cirtter.position = origin.position;
        cirtter.rotation = origin.rotation;
        cirtter.GetComponent<Critters>( ).Init( wave, destination );

        //��������
        StartCoroutine( Transfer( cirtter ) );

        //ˢ�¹ؿ�����
        Fire.Event( GEvent.Update_Game_Progress, ++spawnIndex * 1.0f / spawnCount );

        //����ʱ�� ��������
        if( spawnIndex == spawnCount )
        {
            Timer.ClearTimer( SpawenMonster );
        }
    }
}
