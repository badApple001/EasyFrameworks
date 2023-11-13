//==========================
// - FileName:      Assets/Frameworks/Modules/Audio/AudioManager.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:03:20
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using CatAsset.Runtime;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public class AudioManager : MonoBehaviour
{

    #region Propertys

    public enum AudioGroup
    {
        MUSIC,
        SFX
    }
    private EasyPool<AudioSource> audioSourcePool;
    private Dictionary<string, AudioClip> audioClipDict = new Dictionary<string, AudioClip>( );
    private List<AudioSource> actives = new List<AudioSource>( );
    private Dictionary<AudioSource, AudioGroup> audioGroup = new Dictionary<AudioSource, AudioGroup>( );
    private Dictionary<AudioSource, string> audioSourceNameDict = new Dictionary<AudioSource, string>( );
    private Dictionary<string, bool> playingDict = new Dictionary<string, bool>( );
    private float _soundVolume = 1.0f, _musicVolume = 1.0f;
    private bool _soundMute = false, _musicMute = false;

    #endregion


    #region Initialize

    public static AudioManager Instance { private set; get; } = null;

    [SerializeField] private bool InitOnAwake = true;

    /// <summary>
    /// 预加载音效配置
    /// </summary>
    private void Awake( )
    {
        if ( Instance != null && Instance != this )
        {
            DestroyImmediate( this );
            return;
        }
        Instance = this;
        _soundVolume = DiskAgent.GetFloat( $"{Application.productName}_soundVolume", 1f );
        _musicVolume = DiskAgent.GetFloat( $"{Application.productName}_musicVolume", 1f );
        _soundMute = DiskAgent.GetBool( $"{Application.productName}_soundMute", false );
        _musicMute = DiskAgent.GetBool( $"{Application.productName}_musicMute", false );
        audioSourcePool = new EasyPool<AudioSource>( 0,
            ac =>
            {
                ac.gameObject.SetActive( true );
            },
            ac =>
            {
                ac.gameObject.SetActive( false );
            },
            ( ) =>
            {
                var obj = new GameObject( nameof( AudioSource ) );
                obj.transform.SetParent( transform, true );
                var asource = obj.AddComponent<AudioSource>( );
                asource.loop = false;
                asource.volume = 0;
                asource.playOnAwake = false;
                asource.mute = false;
                return asource;
            }
            );
    }


    private void Start( )
    {
        if ( InitOnAwake )
        {
            if ( Framework.Instance.Completed )
            {
                Init( );
            }
            else
            {
                Fire.Once( FrameworkEvent.CheckAssetBunldeCompleted, Init );
            }
        }
    }

    #endregion


    #region Load

    private bool _initedLock = false;
    public bool Completed { private set; get; } = false;
    public const string AudioSettingPath = nameof( AudioSettingAsset );
    public void Init( )
    {
        if ( !_initedLock )
        {
            _initedLock = true;
            AudioSettingAsset audioSettingAsset = Resources.Load<AudioSettingAsset>( AudioSettingPath );
            Load( audioSettingAsset );
        }
    }

    /// <summary>
    /// 通过音效预设文件 加载新的音效到内存池中
    /// </summary>
    /// <param name="audioSettingAsset"></param>
    public async Task<Dictionary<string, AudioClip>> Load( AudioSettingAsset audioSettingAsset )
    {
        var result = await Load( audioSettingAsset.settings );
        Resources.UnloadAsset( audioSettingAsset );
        Completed = true;
        return result;
    }

    /// <summary>
    /// 加载音效到内存中
    /// </summary>
    /// <param name="audioSettingItems"></param>
    public async Task<Dictionary<string, AudioClip>> Load( List<AudioSettingItem> audioSettingItems )
    {
        List<string> files = new List<string>( );
        Dictionary<string, string> namemap = new Dictionary<string, string>( );
        audioSettingItems.ForEach( item =>
        {
            files.Add( item.file );
            namemap.Add( item.file, item.name );
        } );

        var result = await CatAssetManager.BatchLoadAssetAsync( files );
        Dictionary<string, AudioClip> clips = new Dictionary<string, AudioClip>( );
        if ( result.IsSuccess )
        {
            AssetHandler handler;
            for ( int i = 0; i < result.Handlers.Count; i++ )
            {
                handler = result.Handlers[ i ];
                var ac = handler.AssetAs<AudioClip>( );
                var name = namemap[ handler.Name ];
                audioClipDict[ name ] = ac;
                clips[ name ] = ac;
            }

            return clips;
        }
        else
        {
            Debug.LogError( $"加载音效配置失败 {result.Error}" );
            return null;
        }

    }

    #endregion


    #region Public fileds


    /// <summary>
    /// 设置 所有音效音量
    /// </summary>
    /// <param name="volume"> 0f ~ 1f </param>
    public float soundVolume
    {
        set
        {
            if ( _soundVolume == value ) return;

            _soundVolume = Mathf.Clamp( value, 0, 1 );
            DiskAgent.SetFloat( $"{Application.productName}_soundVolume", _soundVolume );

            foreach ( var source in actives )
            {
                if ( audioGroup[ source ] == AudioGroup.SFX )
                {
                    source.volume = _soundVolume;
                }
            }
        }
        get
        {
            return _soundVolume;
        }
    }


    /// <summary>
    /// 设置 所有音乐音量
    /// </summary>
    /// <param name="volume">0f ~ 1f</param>
    public float musicVolume
    {
        set
        {
            if ( _musicVolume == value ) return;

            _musicVolume = Mathf.Clamp( value, 0, 1 );
            DiskAgent.SetFloat( $"{Application.productName}_musicVolume", _musicVolume );

            foreach ( var source in actives )
            {
                if ( audioGroup[ source ] == AudioGroup.MUSIC )
                {
                    source.volume = _musicVolume;
                }
            }

        }
        get { return _musicVolume; }
    }



    /// <summary>
    /// 设置所有音效的静音状态
    /// </summary>
    /// <param name="isMute"></param>
    public bool soundMute
    {
        set
        {
            if ( _soundMute == value ) return;

            _soundMute = value;
            DiskAgent.SetBool( $"{Application.productName}_soundMute", value );

            foreach ( var source in actives )
            {
                if ( audioGroup[ source ] == AudioGroup.SFX )
                {
                    source.mute = value;
                }
            }
        }
        get { return _soundMute; }
    }



    /// <summary>
    /// 设置所有Music的静音状态
    /// </summary>
    /// <param name="isMute"></param>
    public bool musicMute
    {
        set
        {
            if ( value == _musicMute ) return;

            _musicMute = value;
            DiskAgent.SetBool( $"{Application.productName}_musicMute", value );

            foreach ( var source in actives )
            {
                if ( audioGroup[ source ] == AudioGroup.MUSIC )
                {
                    source.mute = value;
                }
            }
        }
        get { return _musicMute; }
    }

    #endregion


    #region Public methods

    /// <summary>
    /// 播放音乐 默认循环播放
    /// </summary>
    public void PlayMusic( string audioname, bool loop = true )
    {
        if ( IsPlaying( audioname ) )
        {
            return;
        }

        var audioSource = PlaySound( audioname, loop );
        if ( audioSource != null )
        {
            audioSource.volume = _musicVolume;
            audioSource.mute = _musicMute;
            audioGroup[ audioSource ] = AudioGroup.MUSIC;
        }
    }


    /// <summary>
    /// 播放音效 默认单次播放
    /// </summary>
    /// <param name="audioname"></param>
    /// <param name="volume"></param>
    /// <param name="loop"></param>
    public AudioSource PlaySound( string audioname, bool loop = false, float spatialBlend = 0f )
    {
        if ( !audioClipDict.TryGetValue( audioname, out AudioClip clip ) )
        {
            return null;

        }

        var audioSource = audioSourcePool.Get( );
        actives.Add( audioSource );

        audioSource.volume = _soundVolume;
        audioSource.mute = _soundMute;
        audioSource.loop = loop;
        audioSource.spatialBlend = spatialBlend;
        audioSource.clip = clip;
        audioSource.Play( );

        audioGroup[ audioSource ] = AudioGroup.SFX;
        audioSourceNameDict[ audioSource ] = audioname;
        playingDict[ audioname ] = true;
        return audioSource;
    }



    /// <summary>
    /// 3D世界播放一个音效  指定一个位置
    /// </summary>
    /// <param name="audioname"></param>
    /// <param name="position"></param>
    /// <param name="volume"></param>
    public void PlaySoundAtPoint( string audioname, Vector3 position, bool loop = false )
    {
        var audioSource = PlaySound( audioname, loop, 1f );
        if ( audioSource != null )
        {
            audioSource.gameObject.transform.position = position;
        }
    }



    /// <summary>
    /// 音乐/音效 是否在播放中
    /// </summary>
    public bool IsPlaying( string audioname )
    {
        bool playing = false;
        playingDict.TryGetValue( audioname, out playing );
        return playing;
    }


    public float GetAudioProgress( string audioname )
    {
        if ( playingDict.TryGetValue( audioname, out var playing ) && playing )
        {
            if ( audioClipDict.TryGetValue( audioname, out AudioClip clip ) )
            {
                for ( int i = 0; i < actives.Count; i++ )
                {
                    if ( actives[ i ].clip == clip && actives[ i ].isPlaying )
                    {
                        return actives[ i ].timeSamples * 1.0f / actives[ i ].clip.samples;
                    }
                }
            }
        }
        return 0f;
    }

    /// <summary>
    /// 停止播放
    /// </summary>
    /// <param name="audioname"></param>
    public void Stop( string audioname )
    {
        if ( playingDict.TryGetValue( audioname, out var playing ) && playing )
        {
            if ( audioClipDict.TryGetValue( audioname, out AudioClip clip ) )
            {
                for ( int i = 0; i < actives.Count; i++ )
                {
                    if ( actives[ i ].clip == clip && actives[ i ].isPlaying )
                    {
                        actives[ i ].Stop( );
                    }
                }
            }
        }
    }


    #endregion



    #region Realtime

    /// <summary>
    /// 检测音效的运行状态
    /// </summary>
    private void Update( )
    {
        for ( int i = 0; i < actives.Count; i++ )
        {
            if ( !actives[ i ].isPlaying )
            {
                var free = actives[ i ];
                audioSourcePool.Free( free );
                actives.RemoveAt( i-- );

                if ( audioSourceNameDict.TryGetValue( free, out var audioname ) )
                {
                    playingDict[ audioname ] = false;
                }
            }
        }
    }


    #endregion


}