using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;


/// <summary>
///
/// Multilingual components
/// Why not just inherit Text?
/// Answer:
/// 1. If you need to port to another framework, another framework may have an extension class that inherits Text
/// 2. If you need to inherit Text to implement some effect, then it is not appropriate for this component to inherit it. Because you inherited the latter two logic will cross the need for you to manually change! This is something that I don't allow. I want components that are components to be trusted to work without changes. If there is a Unity version of the problem, it should be solved by macros and compatible
/// 3. After comprehensive consideration, decide to handle it in the form of a pendant
/// 
/// </summary>

//[RequireComponent( typeof( Text ) )]
[RequireComponent( typeof( TextMeshProUGUI ) )]
public class I18nText : MonoBehaviour
{

    [SerializeField]
    private int m_mulID = 0;

    /// <summary>
    /// 修改当前多语言ID
    /// </summary>
    public int mulID
    {
        get
        {
            return m_mulID;
        }
        set
        {
            var newTextValue = I18n.Instance.GetText( value );
            if ( !string.IsNullOrEmpty( newTextValue ) )
            {
                m_mulID = value;
                text = newTextValue;
            }
        }
    }

    /// <summary>
    /// 修改文本
    /// </summary>
    public string text
    {
        get
        {
            return textHandler.text;
        }

        set
        {
            textHandler.text = value;
        }
    }

    //UGUI Text 句柄
    //Text textHandler = null;
    private TextMeshProUGUI textHandler = null;

    /// <summary>
    /// 更新多语言
    /// </summary>
    public void UpdateText()
    {
        if ( mulID != 0 )
        {
            textHandler.text = I18n.Instance.GetText( mulID );
        }
    }


    private void OnEnable()
    {
        if ( !I18n.Instance.inite )
        {
            //未初始完成 后续初始化完成后会由Manager再调用更新的 不用担心
            return;
        }
        UpdateText();
    }


    private void Awake()
    {
        textHandler = GetComponent<TextMeshProUGUI>();
        I18n.Instance.___AddLanguageTextComponent( this );
    }

    private void OnDestroy()
    {
        I18n.Instance.___RemoveLanguageTextComponent( this );
    }
}
