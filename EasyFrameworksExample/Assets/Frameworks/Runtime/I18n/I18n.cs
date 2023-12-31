//==========================
// - FileName:      Assets/Frameworks/Modules/MultiLanguage/I18n.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using System.Collections.Generic;
using UnityEngine;


public class I18n
{
    public static I18n Instance { private set; get; } = new I18n();
    private I18n() { Init(); }



    public const string mulLocalDataKey = nameof(I18n);

    public const string dataTableName = "DRMultiLanguage";

    public bool inite { private set; get; } = false;
    /// <summary>
    /// 字符串形式的
    /// 
    /// 推荐使用  GetCurrentLanguage() 枚举类型
    /// </summary>
    public string CurrentLanguage { private set; get; }
    private Dictionary<string, Dictionary<int, string>> languageDict = new Dictionary<string, Dictionary<int, string>>();
    private List<I18nText> textComponents = new List<I18nText>();
    private void Init()
    {
        if ( inite ) return;
        float time_load_begin = Time.realtimeSinceStartup;

        #region 新版解析二进制buffer
        var dataTable = DataTable.Load( dataTableName );
        var cells = dataTable.Item2;
        var fileds = dataTable.Item1;
        if ( cells == null || fileds == null )
        {
            Log.Warning( "多语言数据没有准备好" );
            return;
        }
        for ( int i = 0; i < cells.Count; i++ )
        {
            var dataline = cells[ i ];
            int ID = ( int ) cells[ i ][ 0 ];
            for ( int j = 0; j < dataline.Count; j++ )
            {
                var data = dataline[ j ];
                var filed = fileds[ j ];

                if ( !languageDict.TryGetValue( filed, out Dictionary<int, string> langGroupDict ) )
                {
                    langGroupDict = new Dictionary<int, string>();
                    languageDict.Add( filed, langGroupDict );
                }
                langGroupDict.Add( ID, data.ToString() );
            }
        }

        #endregion

        #region 解析CSV
        //var content = mulSource.text;
        //var lines = content.Split( new char[ 2 ] { '\r', '\n' } );
        //Dictionary<int, string> langTypeDict = new Dictionary<int, string>();
        //Dictionary<int, string> langGroupDict = null;
        //string lineContent = null;
        //for ( int i = 0; i < lines.Length; i++ )
        //{
        //    lineContent = lines[ i ];
        //    if ( string.IsNullOrEmpty( lineContent ) || string.IsNullOrWhiteSpace( lineContent ) )
        //        continue;

        //    //单词组
        //    string[] chars = lineContent.Split( '\t' );

        //    //建立语种
        //    if ( i == 0 || chars[ 0 ].Equals( "Key" ) )
        //    {
        //        for ( int j = 2; j < chars.Length; j++ )
        //        {
        //            if ( !languageDict.ContainsKey( chars[ j ] ) )
        //            {
        //                languageDict.Add( chars[ j ], new Dictionary<int, string>() );
        //                langTypeDict.Add( j, chars[ j ] );
        //            }
        //        }
        //    }
        //    else
        //    {
        //        //ID
        //        int keyID = Convert.ToInt32( chars[ 0 ] );

        //        //多语言新增
        //        for ( int j = 2; j < chars.Length; j++ )
        //        {
        //            string langType = langTypeDict[ j ];
        //            if ( languageDict.TryGetValue( langType, out langGroupDict ) )
        //            {
        //                langGroupDict.Add( keyID, chars[ j ] );
        //            }
        //        }
        //    }
        //}
        #endregion

#if UNITY_EDITOR || ENABLE_LOG
        Log.Info( $"<color=#ffff00>load mulLanguage file useTime: {Time.realtimeSinceStartup - time_load_begin} seconds</color>" );
#endif

        //本地记录上次设置的语言
        CurrentLanguage = PlayerPrefs.GetString( mulLocalDataKey, string.Empty );
        //首次读取系统语言
        if ( string.IsNullOrEmpty( CurrentLanguage ) )
        {
            CurrentLanguage = Application.systemLanguage.ToString();
            PlayerPrefs.SetString( mulLocalDataKey, CurrentLanguage );
        }

        inite = true;

        //初次调用时 会获取系统语言 如果系统语言不存在多语言 会优先默认英语 如果英语也没有 默认第一个多语言...
        SetCurrentLanguage( CurrentLanguage );
    }

    // 获取当前地区语言
    public SystemLanguage GetCurrentLanguage()
    {
        return ( SystemLanguage ) System.Enum.Parse( typeof( SystemLanguage ), CurrentLanguage );
    }


    /// <summary>
    /// 获取当前本地区域语言
    /// 这个静态方法  编辑器扩展中要用到
    /// 当然 你也可以在有特殊需求的情况下使用它
    /// </summary>
    public static SystemLanguage Current
    {
        get
        {
            var CurrentLanguage = PlayerPrefs.GetString( mulLocalDataKey, string.Empty );
            //首次读取系统语言
            if ( string.IsNullOrEmpty( CurrentLanguage ) )
            {
                CurrentLanguage = Application.systemLanguage.ToString();
                PlayerPrefs.SetString( mulLocalDataKey, CurrentLanguage );
            }
            return ( SystemLanguage ) System.Enum.Parse( typeof( SystemLanguage ), CurrentLanguage );
        }
    }

    //设置当前地区语言 true 设置成功   false: 当前语言不存在 自动填充默认语言
    public bool SetCurrentLanguage( SystemLanguage language )
    {
        return SetCurrentLanguage( language.ToString() );
    }

    //设置当前地区语言 true 设置成功   false: 当前语言不存在 自动填充默认语言
    public bool SetCurrentLanguage( string language )
    {
        if ( !inite )
        {
            Log.Error( "Do not call before initialization." );
            return false;
        }

        //修改当前语言
        if ( HasLanguage( language ) )
        {
            Log.PINK( $"[{nameof( I18n )}] Set current game-language: {language}" );
            CurrentLanguage = language;
            PlayerPrefs.SetString( mulLocalDataKey, CurrentLanguage );
            foreach ( var text in textComponents )
            {
                text?.UpdateText();
            }

            return true;
        }
        else
        {
            //默认语言处理
            if ( HasLanguage( SystemLanguage.English ) )
            {
                //优先英语
                SetCurrentLanguage( SystemLanguage.English );
            }
            else
            {
                //不存在英语的时候 优选选择第一个语种
                string[] keys = new string[ languageDict.Count ];
                if ( keys.Length > 0 )
                {
                    languageDict.Keys.CopyTo( keys, 0 );
                    SetCurrentLanguage( keys[ 0 ] );
                }
                else
                {
                    Log.PINK( $"[{nameof( I18n )}] 不存在多语言配置资源" );
                }
            }
        }
        return false;
    }

    //是否存在指定多语言
    public bool HasLanguage( SystemLanguage language )
    {
        return HasLanguage( language.ToString() );
    }

    //是否存在指定多语言
    public bool HasLanguage( string language )
    {
        return languageDict.ContainsKey( language );
    }

    //通过ID获取当前系统语言文本  
    public string GetText( int key )
    {
        return GetText( key, CurrentLanguage );
    }

    //获取已缓存的多语言列表
    public List<string> GetLanguageList()
    {
        return new List<string>( languageDict.Keys );
    }

    //获取自定参数多语言
    public string Format( int key, params object[] args )
    {
        return string.Format( GetText( key ), args );
    }

    //通过ID获取指定系统语言文本 枚举
    public string GetText( int key, SystemLanguage language )
    {
        return GetText( key, language.ToString() );
    }

    //通过ID获取指定系统语言文本 字符串
    public string GetText( int key, string language )
    {
        if ( string.IsNullOrEmpty( language ) )
        {
            return "多语言配置miss";
        }
        Dictionary<int, string> languageGroup = null;
        if ( languageDict.TryGetValue( language, out languageGroup ) )
        {
            string textValue = null;
            if ( languageGroup.TryGetValue( key, out textValue ) )
            {
                return textValue;
            }
        }
        return string.Empty;
    }


    #region Don't try to modify it

    public void ___AddLanguageTextComponent( I18nText languageText )
    {
        if ( !textComponents.Contains( languageText ) )
        {
            textComponents.Add( languageText );
        }
    }
    public void ___RemoveLanguageTextComponent( I18nText languageText )
    {
        if ( textComponents.Contains( languageText ) )
        {
            textComponents.Remove( languageText );
        }
    }

    #endregion
}
