//==========================
// - FileName:      Assets/Frameworks/Editor/UIScriptTemplate/XXXForm.cs
// - CreateTime:    #CreateTime#
// - UnityVersion:  #UnityVersion#
// - Version:       #Version#
// - Description:   
//==========================
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 
/// XXXForm做为UI的组件展示和用户交互控制类 
/// 
/// 它应该于对应的XXXFormManager来组合使用
/// 
/// enm... 此类的 事件和定时器是默认清理的 换人话就是 你只要负责注册定时器和注册事件 不需要关心清理 nice吧~ 嘿嘿
/// 
/// </summary>
public class XXXForm : UIForm
{

    ////////////////// 面板区域 ///////////////////////
    public Transform xxxTransform;
    public UnityEngine.UI.Button xxxButton;


    ////////////////// 成员变量区域 ///////////////////////
    private string str_memberVar;
    private int int_memberVar;

    /// <summary>
    /// 仅调用一次
    /// </summary>
    private void Start()
    {
        //获取这个界面的持久化数据
        //持久化数据 加载后和通用数据访问效率是一样的 
        //不同的是 持久化数据会在程序关闭切后台或者即将断电时 写入到本地磁盘 下次加载的时候能还原回来
        var data = XXXFormManager.Instance.data;

        //通用数据 我们称为运行中的数据 这类数据 不会在界面关闭时保存到本地 仅运行在内存中
        //如:
        str_memberVar = "hello world";
    }

    /// <summary>
    /// 界面开启动画播放玩后调用
    /// </summary>
    protected override void OnShow()
    {
        base.OnShow();

        Log.Info( "XXXForm 界面显示了" );
    }

    /// <summary>
    /// 界面关闭动画播放玩后调用
    /// </summary>
    protected override void OnHide()
    {
        base.OnHide();

        Log.Info( "XXXForm 界面隐藏了" );
    }

}
