//==========================
// - FileName:      Assets/Frameworks/Modules/UI/UIManager.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-16-17:58:49
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using CatAsset.Runtime;
using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Assertions;
using UnityEngine.UI;


/// <summary>
/// 
/// 所有UI对象的管理 
/// 除了界面还包含Image等对象的快捷操作
/// </summary>
public class UIManager
{

    /// <summary>
    /// 
    /// CanvasGroup 枚举
    /// 
    /// Group 分为上中下三层 
    /// 
    /// Base: 为基础UI的展示层 如 游戏内的场景 Loading界面,登录界面,游戏场景血条UI,金币等UI  此层级特点 惰性高 偏向静态但不是纯静态 
    /// 
    /// Effect: 为特效层 展示UI特效的层级，如飞金币，飞道具 抽奖特效等  此层级的特点是活跃 重绘频繁
    /// 
    /// Top: 为顶部弹窗层 展示领奖活动 如七日登录，活动页面， 此层及的特点是 大开大合 要么没有 要么瞬间活跃到极点 关闭后开销需要立即回收
    /// 
    /// </summary>
    public enum CanvasGroup
    {

        /// <summary>
        /// 基础UI Canvas层
        /// </summary>
        Default = 0,

        /// <summary>
        /// UI特效层
        /// </summary>
        Effect,

        /// <summary>
        /// 顶部弹窗层
        /// </summary>
        Top,
    }

    /// <summary> Form实例缓存池 </summary>
    private static List<UIForm> List_CacheForms = new List<UIForm>( );

    /// <summary> 拥有显示权限的窗口 </summary>
    private static HashSet<string> HashSet_OpenPermissions = new HashSet<string>( );

    /// <summary> Form预设缓存池 </summary>
    private static Dictionary<string, GameObject> Dict_CacheFormPrefabs = new Dictionary<string, GameObject>( );

    /// <summary> 等待释放的Form和它的定时器ID </summary>
    private static Dictionary<UIForm, ulong> Dict_WaitReleaseFormsDict = new Dictionary<UIForm, ulong>( );

    /// <summary> 所有Cavans节点的父节点 </summary>
    public static Transform LayersRoot { private set; get; }

    /// <summary> Canvas模板预设 </summary>
    public static Canvas CanvasPrefab { private set; get; }

    /// <summary> 默认Canvas Transform实例 </summary>
    public static Transform DefaultCanvasTransform { private set; get; }

    /// <summary> 预置Canvas组 </summary>
    public static Dictionary<CanvasGroup, Canvas> CanvasPool { private set; get; }

    /// <summary> 菜单栈 </summary>
    public static StackList<UIForm> formStack = new StackList<UIForm>( );


    /// <summary>
    /// 获取不同group的Canvas
    /// </summary>
    /// <param name="group"></param>
    /// <returns></returns>
    public static Canvas GetCanvas( CanvasGroup group )
    {
        if ( null != CanvasPool )
        {
            if ( !CanvasPool.TryGetValue( group, out Canvas canvas ) )
            {
                canvas = GameObject.Instantiate( CanvasPrefab, LayersRoot );
                canvas.gameObject.name = $"Canvas - {group}";
                canvas.sortingOrder = ( int ) ( group + 1 ) * 1000;
                canvas.worldCamera = Framework.Instance.UICamera;
                CanvasPool.Add( group, canvas );
            }
            return canvas;
        }
        return null;
    }

    /// <summary>
    /// 初始化
    /// </summary>
    /// <param name="baseCanvasTransform"></param>
    /// <param name="canvas"></param>
    public static void Init( Transform baseCanvasTransform, Canvas CanvasPrefab )
    {
        Log.Assert( baseCanvasTransform != null, "baseCanvasTransform must not be null " );
        Log.Assert( baseCanvasTransform.GetComponent<Canvas>( ) != null, "baseCanvasTransform must a canvas node" );
        UIManager.LayersRoot = baseCanvasTransform.parent;
        UIManager.CanvasPool = new Dictionary<CanvasGroup, Canvas>( )
        {
            {
                CanvasGroup.Default,
                baseCanvasTransform.GetComponent<Canvas>( )
            }
        };
        UIManager.DefaultCanvasTransform = baseCanvasTransform;
        UIManager.CanvasPrefab = CanvasPrefab;
    }

    /// <summary>
    /// 将一个对象加入默认Canvas舞台 
    /// </summary>
    /// <param name="child"></param>
    public static void AddChild2DefaultCanvas( UnityEngine.Object child )
    {
        Log.Assert( child != null, "AddChild2DefaultCanvas(child)  child is null" );

        if ( child is RectTransform rectTransform )
        {
            rectTransform.SetParent( DefaultCanvasTransform, false );
        }
        else if ( child is Transform trans )
        {
            trans.parent = DefaultCanvasTransform;
        }
        else if ( child is GameObject obj )
        {
            obj.transform.parent = DefaultCanvasTransform;
        }
        else
        {
            try
            {
                Type type = child.GetType( );
                System.Reflection.PropertyInfo f = type.GetProperty( "parent" );
                if ( null != f )
                {
                    f.SetValue( child, DefaultCanvasTransform );
                }
                else
                {
                    Log.Info( $"{child.name} not contain \"parent\" property." );
                }
            }
            catch ( Exception ex )
            {
                Debug.LogException( ex );
            }
        }
    }


    /// <summary>
    /// 快捷生成一个Image对象
    /// </summary>
    /// <param name="assetName"></param>
    /// <param name="parent"></param>
    /// <returns></returns>
    public static Image GenImage( string assetName, Transform parent = null )
    {
        GameObject obj = new GameObject( Path.GetFileNameWithoutExtension( assetName ), typeof( Image ) );
        Image img = obj.GetComponent<Image>( );
        //Sprite sp = Loader.Load<Sprite>( assetName, obj );
        parent = parent == null ? CanvasPool[ CanvasGroup.Default ].transform : parent;
        obj.transform.SetParent( parent, false );
        //if ( sp != null )
        //{
        //    img.sprite = sp;
        //    img.SetNativeSize( );
        //}
        return img;
    }

    /// <summary>
    /// 找到同类型Form
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <returns></returns>
    public static T Find<T>( ) where T : UIForm
    {
        var uiForm = List_CacheForms.Find( form =>
        {
            return form is T;
        } );
        return ( T ) uiForm;
    }

    /// <summary>
    /// 获取同类型的Form列表
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <returns></returns>
    public static T[] FindAll<T>( ) where T : UIForm
    {
        var forms = List_CacheForms.FindAll( form =>
        {
            return form is T;
        } );

        return Array.ConvertAll( forms.ToArray( ), FormConverter<T> );
    }

    /// <summary> 向派生类的转换器 </summary>
    private static T FormConverter<T>( UIForm input ) where T : UIForm
    {
        return ( T ) input;
    }

    /// <summary>
    /// 打开一个界面  
    /// 
    /// 如果界面已经在缓存中 从缓存中获取
    /// 如果界面不存在实例缓存 从本地加载
    /// 
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <returns></returns>
    public static async Task<T> Open<T>( ) where T : UIForm
    {
        return await Open<T>( CanvasGroup.Default );
    }

    public static async Task<T> Open<T>( CanvasGroup group ) where T : UIForm
    {
        //找到已经缓存的且处于自由或者关闭状态下的窗口
        var cacheForm = List_CacheForms.Find( form =>
        {
            return form is T && form.State == UIForm.UIFormState.Closed || form.State == UIForm.UIFormState.Created;
        } );
        if ( null != cacheForm )
        {
            //销毁 延期释放的定时器操作
            if ( Dict_WaitReleaseFormsDict.TryGetValue( cacheForm, out ulong timerId ) )
            {
                Dict_WaitReleaseFormsDict.Remove( cacheForm );
                Timer.ClearTimer( timerId );
            }

            //入栈
            Push( cacheForm );

            //并返回实例
            return ( T ) cacheForm;
        }

        //添加打开权限
        string formClsName = typeof( T ).ToString( );
        if ( HashSet_OpenPermissions.Contains( formClsName ) )
        {
            Log.Error( $"[UIManager] 请不要在 {formClsName} 还未加载成功之前再次调用Open" );
        }
        else
        {
            HashSet_OpenPermissions.Add( formClsName );
        }

        //从本地加载实例化
        string assetPath = $"Assets/AssetBundle/UI/Form/{formClsName}.prefab";
        GameObject instance = await CatAssetManager.InstantiateAsync( assetPath, GetCanvas( group ).transform );


        //获取或创建Component并记录
        if ( !instance.TryGetComponent<T>( out T Component ) )
        {
            Component = instance.AddComponent<T>( );
        }
        List_CacheForms.Add( Component );

        //没有打开的权限 我们应该及时关闭它
        if ( !HashSet_OpenPermissions.Contains( formClsName ) )
        {
            //隐藏并假如待销毁队列
            ReleaseDefer( Component );
        }
        else
        {
            //从打开权限列表中移除 直到下次加载
            HashSet_OpenPermissions.Remove( formClsName );
            //入栈
            Push( Component );
        }
        //返回实例
        return Component;
    }


    /// <summary>
    /// 关闭指定类型的界面 所有同类型的界面都会被关闭 包括还在加载的
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public static void Close<T>( ) where T : UIForm
    {
        //关闭缓存中的Form
        List_CacheForms.ForEach( form =>
        {
            if ( form is T f )
            {
                if ( formStack.Contains( f ) )
                {
                    formStack.Remove( f );
                }

                f.Close( );
            }
        } );

        //如果关闭的Form还在加载状态 取消它的Open权限
        string formName = typeof( T ).ToString( );
        if ( HashSet_OpenPermissions.Contains( formName ) )
        {
            HashSet_OpenPermissions.Remove( formName );
        }
    }


    /// <summary>
    /// 延期回收 延期时间由Form.DeferSconds决定
    /// </summary>
    /// <param name="uIForm"></param>
    public static void ReleaseDefer( UIForm uIForm )
    {
        if ( uIForm == null ) return;

        //暂时隐藏对象
        uIForm.gameObject.SetActive( false );

        //菜单栈中的元素不会释放 直到出栈
        if ( formStack.Contains( uIForm ) )
        {
            return;
        }

        ////////////////////////等待释放/////////////////////////////
        if ( Dict_WaitReleaseFormsDict.ContainsKey( uIForm ) )
        {
            ulong timerId = Dict_WaitReleaseFormsDict[ uIForm ];
            Timer.ClearTimer( timerId );
        }

        ulong timerHandler = Timer.SetTimeout( uIForm.DeferSconds, ( ) =>
        {
            List_CacheForms.Remove( uIForm );

            //对象资源释放时 从菜单栈中移除
            if ( formStack.Contains( uIForm ) )
            {
                formStack.Remove( uIForm );
            }

            GameObject.Destroy( uIForm.gameObject );
        } );
        Dict_WaitReleaseFormsDict[ uIForm ] = timerHandler;
    }


    /// <summary>
    /// 入栈并显示
    /// </summary>
    /// <param name="uIForm"></param>
    private static void Push( UIForm uIForm )
    {
        //展示UI
        uIForm.gameObject.SetActive( true );

        //隐藏
        if ( formStack.Count > 0 )
        {
            formStack.Peek( )?.Close( );
        }

        //压入栈
        formStack.Push( uIForm );
    }


    /// <summary>
    /// 弹出顶部UIForm 展示底部UIForm
    /// </summary>
    public static void Pop( )
    {
        if ( formStack.Count == 0 )
        {
            return;
        }

        var current = formStack.Pop( );
        current.Close( );

        if ( formStack.Count > 0 )
        {
            formStack.Peek( )?.gameObject.SetActive( true );
        }
    }
}
