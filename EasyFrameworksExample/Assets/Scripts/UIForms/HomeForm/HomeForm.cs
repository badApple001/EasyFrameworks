//==========================
// - FileName:      Assets/Frameworks/Editor/UIScriptTemplate/HomeForm.cs
// - CreateTime:    2023-08-14-15:43:00
// - UnityVersion:  2021.3.22f1
// - Version:       1.0
// - Description:   
//==========================
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// 
/// HomeForm做为UI的组件展示和用户交互控制类 
/// 
/// 它应该于对应的HomeFormManager来组合使用
/// 
/// enm... 此类的 事件和定时器是默认清理的 换人话就是 你只要负责注册定时器和注册事件 不需要关心清理 nice吧~ 嘿嘿
/// 
/// </summary>
public class HomeForm : UIForm
{

    ////////////////// 面板区域 ///////////////////////
    public Text gems, gods, level, camPrice, toiletPrice, camCount, toiletCount;
    public Image camPriceIcon, toiletPriceIcon;
    public Sprite godIcon, adIcon, hotAdIcon, hotButtonBg;


    ////////////////// 成员变量区域 ///////////////////////
    /// <summary>
    /// 仅调用一次
    /// </summary>
    private void Start( )
    {

    }

    /// <summary>
    /// 界面开启动画播放玩后调用
    /// </summary>
    protected override void OnShow( )
    {
        base.OnShow( );
    }

    /// <summary>
    /// 界面关闭动画播放玩后调用
    /// </summary>
    protected override void OnHide( )
    {
        base.OnHide( );
    }
    
}
