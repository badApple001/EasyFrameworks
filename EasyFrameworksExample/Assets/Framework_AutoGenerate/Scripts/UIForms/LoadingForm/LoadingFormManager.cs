//==========================
// - FileName:      Assets/Frameworks/Editor/UIScriptTemplate/LoadingFormManager.cs
// - CreateTime:    2023-08-14-14:54:22
// - UnityVersion:  2021.3.22f1
// - Version:       1.0
// - Description:   
//==========================
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 
/// FormManager是用来数据驱动UIForm展示的
/// 
/// 它应该于对应的UIForm来组合使用
/// 
/// enm... 此类的 事件和定时器是默认清理的 换人话就是 你只要负责注册定时器和注册事件 不需要关心清理 nice吧~ 嘿嘿
/// 
/// </summary>
public class LoadingFormManager
{

    /// <summary>
    /// 
    /// 定义你这个界面需要存储的数据
    /// 
    /// </summary>
    [System.Serializable]
    public class DiskData
    {
        //例如:
        public long firstOpenUTCTimestamp; //首次打开这个界面的时间
        public float lastStayTime; //上一次再这个界面停留的时间


        //你可以在这里自定义你当前界面的数据格式

    }

    private DiskData _data = null;
    /// <summary> 当前界面的数据 就算界面没有打开 你也可以获取这个数据</summary>
    public DiskData data
    {
        get
        {
            if ( null == _data )
            {
                //加载本地数据
                _data = DiskAgent.Load<DiskData>( );
            }
            return _data;
        }
    }


    private float openTime = 0f; //打开界面的时间
    public List<string> preloadAssets;
    public List<InitGameHandler.InitiaFunctor> initHandlers;
    public List<InitGameHandler.GetAwaitFunctor> getAwaitHandlers;
    public Action loadingCompletedHandler;
    
    /// <summary>
    ///  显示Loadingform
    /// </summary>
    /// <param name="preloadAssets"> 预加载的资源 </param>
    /// <param name="initHandlers"> 需要初始化的句柄 </param>
    /// <param name="getAwaitHandlers"> 需要等待的句柄 </param>
    /// <param name="loadingCompletedHandler"> 结束回调 </param>
    public void Open( 
        List<string> preloadAssets = null, 
        List<InitGameHandler.InitiaFunctor> initHandlers = null, 
        List<InitGameHandler.GetAwaitFunctor> getAwaitHandlers = null, 
        Action loadingCompletedHandler = null )
    {

        //首次打开
        if ( data.firstOpenUTCTimestamp == 0 )
        {
            data.firstOpenUTCTimestamp = DateTimeUtils.Convert2UTCTimestamp( System.DateTime.Now );
        }

        this.preloadAssets = preloadAssets;
        this.loadingCompletedHandler = loadingCompletedHandler;
        this.getAwaitHandlers = getAwaitHandlers;
        this.initHandlers = initHandlers;
        //打开界面
        var form = UIManager.Open<LoadingForm>( );
        openTime = Time.realtimeSinceStartup;
    }

    /// <summary>
    /// 关闭UI 
    /// </summary>
    /// <param name="clearAllTimer">要不要清理当前类的定时器</param>
    public void Close( bool clearAllTimer = false )
    {
        //从未打开过
        if ( data.firstOpenUTCTimestamp == 0 ) return;

        //计算这个界面的停留时间
        data.lastStayTime = Time.realtimeSinceStartup - openTime;

        ///////////////////// 这块代码基本固定 不要改 ////////////////////
        UIManager.Close<LoadingForm>( );//关闭界面
        DiskAgent.ToDisk<DiskData>( );//保存数据
        Fire.Off( this );//清理当前类的所有注册事件
        if ( clearAllTimer )//清理定时器
        {
            Timer.ClearTimer( this );
        }
    }


    //你可以通过 Timer.SetInterval( 1f, Update ); 来每秒更新这个方法
    //什么时候需要呢?  答: 如果界面不显示的情况下 也需要每秒对这个界面的数据进行更新
    //public void Update()
    //{

    //}



    /////////////////////////////////////////////// 以下内容尽量不要做修改 ////////////////////////////////////////////////////


    #region 绝对单例模式
    
    public static LoadingFormManager Instance { private set; get; } = new LoadingFormManager( );
    /// <summary>
    /// 私有化构造函数 约束开发者无法从外部直接 new
    /// </summary>
    LoadingFormManager( ) { }

    /// <summary>
    /// 析构方法 - 当对象释放的时候 或者GC真正回收这个类实例的时候调用
    /// </summary>
    ~LoadingFormManager( )
    {
        Timer.ClearTimer( this ); //无论有没有启用定时器 你都可以执行ClearTimer 它不会报错 且 它是你的兜底处理 防止忘记清理当前类的定时器
    }

    #endregion

}
