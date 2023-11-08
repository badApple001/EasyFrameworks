//==========================
// - FileName:      Assets/Frameworks/Editor/UIScriptTemplate/LoadingForm.cs
// - CreateTime:    2023-08-14-14:54:22
// - UnityVersion:  2021.3.22f1
// - Version:       1.0
// - Description:   
//==========================
using CatAsset.Runtime;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR;

/// <summary>
/// 
/// LoadingForm做为UI的组件展示和用户交互控制类 
/// 
/// 它应该于对应的LoadingFormManager来组合使用
/// 
/// enm... 此类的 事件和定时器是默认清理的 换人话就是 你只要负责注册定时器和注册事件 不需要关心清理 nice吧~ 嘿嘿
/// 
/// </summary>
public class LoadingForm : UIForm
{

    ////////////////// 面板区域 ///////////////////////
    public Slider slider;
    public TMP_Text progress;

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
        StartCoroutine( VirtualProgressBar( ) );
    }


    private float f_progress = 0.0f;

    //约束最快Loading时间 1.4s
    private IEnumerator VirtualProgressBar( )
    {
        yield return 0;

        float signTime = Time.realtimeSinceStartup;
        if ( null != LoadingFormManager.Instance.preloadAssets && LoadingFormManager.Instance.preloadAssets.Count > 0 )
        {
            yield return CatAssetManager.BatchLoadAssetAsync( LoadingFormManager.Instance.preloadAssets );
        }
        yield return new WaitForSeconds( Mathf.Max( 0.01f, 0.4f + signTime - Time.realtimeSinceStartup ) );

        f_progress = 0.8f;
        var initHandlers = LoadingFormManager.Instance.initHandlers;
        if ( null != initHandlers )
        {
            for ( int i = 0; i < initHandlers.Count; i++ )
            {
                if ( null != initHandlers[ i ] )
                {
                    initHandlers[ i ]( );
                    yield return 0;
                }
            }
        }

        f_progress = 0.85f;
        var awaitHandler = LoadingFormManager.Instance.getAwaitHandlers;
        for ( int i = 0; i < awaitHandler.Count; i++ )
        {
            if ( null != awaitHandler[ i ] )
            {
                yield return new WaitWhile( ( ) => !awaitHandler[ i ]( ) );
                f_progress += i * 1.0f / awaitHandler.Count * 0.05f;
            }
        }
        yield return new WaitForSeconds( Mathf.Max( 0.01f, 1f + signTime - Time.realtimeSinceStartup ) );


        f_progress = 0.90f;
        LoadingFormManager.Instance.loadingCompletedHandler?.Invoke( );
        yield return new WaitForSeconds( Mathf.Max( 0.01f, 1.2f + signTime - Time.realtimeSinceStartup ) );

        f_progress = 0.99f;
        yield return new WaitForSeconds( 0.2f );

        Close( );
    }

    private void Update( )
    {
        progress.text = slider.value.ToString( "P" );
        slider.value = Mathf.Lerp( slider.value, f_progress, Time.deltaTime * 3f );
    }

    /// <summary>
    /// 界面关闭动画播放玩后调用
    /// </summary>
    protected override void OnHide( )
    {
        base.OnHide( );
    }

}
