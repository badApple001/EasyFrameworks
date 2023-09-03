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

    
    [Tooltip("选中Project面板下的目录 按住Ctrl+Alt+C即可提取路径 Ctrl+V即可粘贴路径")]
    [SerializeField] 
    private string bgm = "Assets/BundleRes/Audios/bgm_mushroomFarm.mp3";//不同地图播放不同的音乐

    // Start is called before the first frame update
    void Start( )
    {
        AudioManager.GetInstance().PlayMusic( bgm );

        //等待1秒
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
        //生成并初始化
        var cirtter = PoolManager.GetInstance().Spawn( "Critters" );
        cirtter.SetParent( Framework.GetInstance( ).Entitys, false );
        cirtter.position = origin.position;
        cirtter.rotation = origin.rotation;
        cirtter.GetComponent<Critters>( ).Init( wave, destination );

        //开启传送
        StartCoroutine( Transfer( cirtter ) );

        //刷新关卡进度
        Fire.Event( GEvent.Update_Game_Progress, ++spawnIndex * 1.0f / spawnCount );

        //清理定时器 不再生成
        if( spawnIndex == spawnCount )
        {
            Timer.ClearTimer( SpawenMonster );
        }
    }
}
