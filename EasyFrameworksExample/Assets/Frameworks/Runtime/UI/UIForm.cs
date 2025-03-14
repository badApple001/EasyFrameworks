using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 
/// UIForm
/// 
/// Form的基础类 你应该使用统一的UIManager来管理它 使用Open或者Close来操作它的显示和隐藏
/// 
/// </summary>
public class UIForm : MonoBehaviour
{
    /// <summary> 窗口有限状态机 </summary>
    public enum UIFormState
    {
        /// <summary>
        /// 创建完成
        /// </summary>
        Created,

        /// <summary>
        /// 关闭动画播放中
        /// </summary>
        Closeing,

        /// <summary>
        /// 已关闭
        /// </summary>
        Closed,

        /// <summary>
        /// 打开动画播放中。。。
        /// </summary>
        Opening,

        /// <summary>
        /// 已打开
        /// </summary>
        Open,
    }

    /// <summary> 窗口的状态 </summary>
    [HideInInspector] public UIFormState State { protected set; get; } = UIFormState.Created;

    /// <summary> 5分钟 窗口未重新Open就会被释放 </summary>
    [HideInInspector] public float DeferSconds = 5 * 60f;

    /// <summary> UI Animation instance. </summary>
    [HideInInspector] public Animation Anima;

    /// <summary> 关闭窗口的动画名称 </summary>
    public const string CloseFormAnimation = "CloseUIForm";

    /// <summary> 打开窗口的动画名称 </summary>
    public const string OpenFormAnimation = "OpenUIForm";

    /// <summary> 延时调度一次 </summary>
    public void ScheduleOnce( float delay, System.Action handler )
    {
        Timer.Delay( delay, handler );
    }

    /// <summary> 间隔多少秒调度一次 </summary>
    public void ScheduleUpdate( float interval, System.Action handler, bool immediately = false )
    {
        Timer.Loop( interval, handler, immediately );
    }

    /// <summary> 取消调度 忘记取消了? 别怕! 当前窗口关闭的时候会自动清理所有定时器 </summary>
    public void UnShedule( System.Action handler )
    {
        Timer.Kill( handler );
    }

    /// <summary> 关闭窗口 执行关闭动画后隐藏 </summary>
    public void Close()
    {

        if ( State == UIFormState.Closed || State == UIFormState.Closeing )
        {
            return;
        }

        //清理自身的定时器
        Timer.Kill( this );

        //清理事件
        Fire.Off( this );

        //关闭中
        State = UIFormState.Closeing;

        if ( null == Anima )
        {
            Anima = GetComponent<Animation>();
        }

        if ( !Anima[ CloseFormAnimation ] )
        {

            OnHide( );
        }
        else
        {

            //关闭动画
            Anima.Play( CloseFormAnimation, PlayMode.StopAll );
        }
    }

    protected virtual void OnEnable()
    {
        State = UIFormState.Opening;
        if ( null == Anima )
        {
            Anima = GetComponent<Animation>();
        }

        if( !Anima[ OpenFormAnimation ] )
        {

            OnShow( );
        }
        else
        {

            Anima.Play( OpenFormAnimation, PlayMode.StopAll );
        }
    }

    /// <summary> 关闭动画播放完后调用 </summary>
    protected virtual void OnHide()
    {
        if ( State != UIFormState.Closed )
        {
            State = UIFormState.Closed;
            UIManager.ReleaseDefer( this );
        }
    }

    /// <summary> 打开动画播放完后调用 </summary>
    protected virtual void OnShow()
    {
        State = UIFormState.Open;
    }
}
