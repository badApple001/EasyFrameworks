using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


/// <summary>
///
/// 多语言组件
/// 
/// 为什么不直接继承Text?
/// 答: 
///     1.如果你需要移植到其它框架 其它框架可能有继承Text的扩展类 这时候就冲突了
///     2.如果你的需求需要继承Text来实现一些效果 这时候这个组件继承它就不合适了 为什么不合适? 因为你继承了后两个逻辑就交叉了需要你手动去改！这是我不允许的 我希望组件之所以为组件 就应该托上去就能用不需要改 如果有Unity版本的问题也应该通过宏来解决并兼容 不让开发者改一行代码就说明它完善了
///     3.综合考虑 决定以一个挂件的方式 额外来处理
/// 
/// </summary>
[RequireComponent( typeof( Text ) )]
public class LanguageText : MonoBehaviour
{

    [SerializeField]
    private int m_mulID = 0;

    /// <summary>
    /// 切换多语言
    /// 切换的时候 如果目标语言没有配置则使用默认的
    /// </summary>
    public int mulID
    {
        get
        {
            return m_mulID;
        }
        set
        { 
            var newTextValue = LanguageManager.GetInstance().GetText( value );
            if ( !string.IsNullOrEmpty( newTextValue ) )
            {
                m_mulID = value;
                UpdateText( newTextValue );
            }
            else
            {
                Log.Error( $"当前多语言Key不存在: {value}" );
            }
        }
    }

    //UGUI Text 句柄
    Text textHandler = null;

    //可以指定内容
    public void UpdateText( string customContent = null )
    {
        if ( null == textHandler )
        {
            textHandler = GetComponent<Text>();
        }

        if( customContent == null )
        {
            customContent = LanguageManager.GetInstance().GetText( mulID );
        }

        textHandler.text = customContent;
    }

    private void Awake()
    {
        LanguageManager.GetInstance().___AddLanguageTextComponent( this );
    }

    private void OnEnable()
    {
        if ( !LanguageManager.GetInstance().inite )
        {
            //未初始完成 后续初始化完成后会由Manager再调用更新的 不用担心
            return;
        }
        UpdateText();
    }

    //有可能切出去修改了设备语言
    private void OnApplicationFocus( bool focus )
    {
        if ( focus ) UpdateText();
    }

    private void OnDestroy()
    {
        LanguageManager.GetInstance().___RemoveLanguageTextComponent( this );
    }
}
