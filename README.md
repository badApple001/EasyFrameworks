# EasyFrameworks
Unity automation frameworks


# Bilibili视频
https://space.bilibili.com/453528870


# csdn
https://blog.csdn.net/qq_39162566?type=blog


#include

UI模块<脚本自动生成,自动回收,复用,菜单栈>
音效模块<复用+回收, 2d/3d都支持>
对象池<一种TransformPool PoolManager简化版本,性能更高 更轻量 序列化面板更符合国人审美,  一种EasyPool A*插件里抽出来的 做了部分优化>
读表<二进制存储格式,反射类型处理,生成cs脚本>  使用方式 DateTable.Load<T>()
多语言<面板支持 实时看到数据变化>
本地存储<支持 常规的 SetInt,SetString... 也支持Object类型存储 最重要的是 全程不适用字符串 要求类型的方式去读取  DiskAgent.Load<GameData>().loginGameTime,   DiskAgent.Save<T>();..保存  DiskAgent.SaveAll()  保存所有的存储数据
AssetBundle-Loader 由CatAssetManager魔改而来 在原有的基础上增加了同步加载,同步批量加载,同步原生加载
debug窗口-将UGF里面的debug窗口从Ugf框架里连根拔起剥离原有的30多个文件的依赖 独立出来运行 可以在任何框架中跑起来
Timer-定时器 非常棒的定时器库 可以在任意地方调用 高性能 高精度 迭代了4个版本 做了全网对比 https://blog.csdn.net/qq_39162566/article/details/113105351
Fire-事件派发 非常棒的事件派发系统 

以上！ 全部都有池化管理 防呆设计 可以在任何地方 ClearAll 来清理 或者 回收  避免内存泄漏(不是传统意义的内存泄漏C#有自带GC, 这里的泄漏是指 场景节点对象不用了但是没有回收也没有SetActive(fasle)的情况 这些节点会在开发中容易遗漏 导致性能不可控


以下是飞书文档 后续整理..

项目结构

启动
暂时无法在飞书文档外展示此内容

Framework runtime
暂时无法在飞书文档外展示此内容


项目初始化
首次打开重置项目目录
[图片]
视频展示
暂时无法在飞书文档外展示此内容

UI
UIForm自动生成目录 ”Assets/BundleRes/UI/Form“
[图片]
视频展示
暂时无法在飞书文档外展示此内容

UIForm在生成的Form的同时 生成两个脚本 一个Monobehavior类 自动挂载到Form对象上 另外一个是窗口的数据类 负责维护窗口的持久化静态数据 
每个窗口 享有单独的文件夹 自动化生成
[图片]
如何打开刚刚的那个UIForm
生成UIForm的同时 存在两个伴生类  XXXUIForm 和 XXXUIFormManager
你可以直接使用 XXXUIFormManager 就可以打开刚刚的界面
Open默认使用的是菜单栈的方式 当当前页面还存在一个UIForm时 新的Form入栈 老的Form出栈

[图片]
暂时无法在飞书文档外展示此内容

如何关闭刚刚那个UI
UIForm的意义是维护一个全屏界面
当你切换一个全屏界面的时候 你需要关闭上一个  返回上一层的时候关闭上一个显示

你拥有两个窗口的方式 
1 :  UIManager.Pop();  //使用内部的菜单栈维护开启  推荐!
2 : UIManager.Close<GameForm>();//关闭指定的一个UI  不推荐这么做

UIManager.Pop(); 会关闭当前界面 显示上一个界面
UIManager.Open(); 默认就是菜单栈的操作 打开新的UI 会关闭老的UI

暂时无法在飞书文档外展示此内容

我该如何自定义 UIForm的两个伴生模板类？
模板类路径： Assets/Frameworks/Editor/UIScriptTemplate
[图片]

我该如何自定义UIForm的入场和出场动画
UI模组默认动画文件夹: Assets/BundleRes/UI/Animations
[图片]
我该如何在UIForm里实现自己的逻辑?
答： 你可以和常规UI 自己写的脚本一样去使用它   该拖拽拖拽  该改就改
我个人是不推荐 开发者使用Awake方法 在业务逻辑中尽量避免使用Awake来降低 跨平台引擎适配性
如: 有一些框架或者插件以及Unity内部的初始化实现 大多数都会在Awake阶段 或者说 构造函数阶段来实现  所以为了代码的稳定性和健壮性 我们应当避免业务代码出现在Awake中

我们应当将执行一次的游戏代码写在Start中 
将需要等待入场动画播放完的代码写在 OnShow中
将需要等待出场动画播放完的代码写在 OnHide中
 
本质上 它还是个Monobehavior的继承类 你可以使用它的所有方法 包含 Update, FixedUpdate,LateUpdate,OnReset 等等... 

同时 有一些方法我们希望你能继承使用 并推荐尽量不要去更改它
OnEnable:  我们会把开始的动画与这个方法绑定 所以如果你迫切需要OnEnable 请一定要再重写的同时 调用它的父类
 
另外一UI框架内部提供了一些好用的定时方法
你可以在任何一个 UIForm子类中 使用  this.ScheduleOnce( float delay, System.Action handler ) 来延迟一段时间调用一个方法
也可以使用 this.ScheduleUpdate( float interval, System.Action handler, bool immediately = false ) 来间隔一段时间调用一次

关于窗口关闭的自动回收时长:
this.DeferSconds = 1 * 60;  //你可以在任何UIForm的子类中使用这个来设置窗口关闭后多少秒h后执行Destory
在此期间它依旧可以被重复利用且刷新关闭时间 
在未被释放期间再次加载它会直接走缓存不会从本地进行加载实例化 速度会快很多 
你可以按照规范 将需要面板拖拽的变量写在面板区域 将常规成员变量写在成员变量区域
[图片]
XXXFormManager 伴生数据类是干什么用的?
答：是管理 XXXForm 窗口用的  它本质是一个绝对单例的class
什么是绝对单例？ 
答: 即真单例设计模式  在内存中永远只有一份 
如何做到绝对单例 它和常规单例模板继承的方式 有何不同?
答: 我们将class的构造方法私有 使之不能在外部new申请出来  与单例模板继承的方式不同在于 单例模板继承的单例 还是可以从外部创建一份新的实体出来  存在新员工交替风险 存在后期维护风险

每一个伴生类都自带一份数据格式 你不需要关心它的存储 你只需要关心 它存储什么类型 
[图片]
如何访问?
你可以完全不考虑窗口是否加载 它会在获取的时候判断是否需要从本地加载
[图片]
你也可以在外部直接获取
[图片]

为何如此设计?
我们使用一个类来管理和维护一个UIForm 
1. 界面的任何数据 位置,缩放,停留时间,点击按钮 你都可以使用持久化数据 就算关机退出游戏 你也可以在下次进入游戏时 就算没打开UIForm 你也知道UIForm上次的暂留数据 你可以选择还原界面的所有一切
2. 如 七日活动，新手签到 等活动 就算界面没打开 你也要维护其活动所需要的数据  
[图片]
音效
音效的添加方式一

你可以通过拖拽面板来修改 也可以更改Assets/Resources/AudioSettingAsset.asset 来修改
名称可以自定义 作为播放音乐的KEY
[图片]
[图片]
音效的添加方式二
代码动态添加
[图片]
[图片]
怎么播放音乐

AudioManager.GetInstance().PlayMusic
AudioManager.GetInstance().PlayAudio
[图片]

内部支持禁音等  静音不会暂停播放 只是没有声音  播放后会从对应时间点继续播放

设置音量:
除了 播放的时候设置音量 
你还可以通过 更改 soundVolue 来修改整体的音量    是保持比率的修改那种

举个栗子:
 a.mp3   文件的原始音量 为100
 b.mp3   文件的原始音量 为80
 a 播放的时候设置音量大小为 1
 b 播放的时候设置音量大小为 0.8
此时 a和b的实际音量 都为 80
这时候 我们修改 soundVolume（soundVolume默认为1）  设置为 0.8
那 a,b音量就集体变成了 64
那这时候 我们修改了 soundVolume 修改回 1
那 a,b音量 又就还原成了当时的 80

当然 soundVolume只能控制 音效
我们还有musicVolume来控制音乐




[图片]


World
目前 Entity 和 Environment 只是挂载不同节点下的GameObject
使用Frameworks.CreateEntity 只是将本地的预制体实例化并挂在Entity节点下
不会约束你的其它行为 仅在对象上搭载了一个 AssetBinder 来维护对象  

[图片]
如何创建一个Entity
[图片]
创建一个Environment
[图片]
批量回收Entity和Environment
批量回收的时候 先检测是否是对象池的元素进行回收
其次再进行常规回收
[图片]
使用EasyPool对象池
EasyPool是提供给常规节点对象池 服务于Transform节点
由原型PoolManager5.0改装而成 使用方法保留PoolManager的方式
面板的方式 新增预设 
你可以通过新增预设在游戏加载阶段进行预处理
[图片]
代码的方式 新增预设
Framework.GetInstance().PoolComponent.Add( gameObject, 100 );
获取对象池实例 当剩余空闲对象不足1时 自动扩容
 //只要 Key没有错 transInstance 一定不为null  返回Transform类型
 var transInstance = Framework.GetInstance().PoolComponent.Spawn( "AudioVisual" );
回收对象池实例 
Framework.GetInstance().PoolComponent.Despawn( transInstance );//回收单个对象 Transform类型
Framework.GetInstance().PoolComponent.Despawn( transInstance, 0.1f );//延时0.1秒回收
Framework.GetInstance().PoolComponent.Despawn( "AudioVisual" );//回收整个 AudioVisual的池子

批量回收
/// <summary>
    /// 回收自己的子节点 如果子节点是对象池元素的话
    /// </summary>
    /// <param name="root"> 父节点 </param>
    /// <param name="includeSelf"> 本次回收是否包含父节点 </param>
    /// <param name="force"> true: 遍历所有的孩子节点  false: 仅遍历一层 </param>
    public void DespawnChildren( Transform root, bool includeSelf = false, bool force = false )
    

包含自身 回收所有自身及子节点包含指定Component的组件 如果是对象池元素的话进行回收
Framework.GetInstance().PoolComponent.DespawnSelfAny<MonoBehaviour>( root );

AB测
在GameFlow项目启动类中的Go方法里 根据当前的AB测试环境修改 游戏Excel数据默认加载路径 
[图片]
读表
[图片]

[图片]
多语言
LanguageManager # 可以通过个来获取多语言文本  修改这个能更改同步所有 挂了LanguageText上的文本
LanguageText  # 这个挂到Text上 

用户数据本地存储
DiskAgent ： 非常的方便用起来 



AssetBundle  - Loader

同步加载

public static T Load<T>( string path, GameObject owner = null ) where T : UnityEngine.Object
/// <summary>
    /// 同步加载AssetBundle资源
    /// </summary>
    /// <typeparam name="T"> 类型：Unity资源类型 继承自 UnityEngine.Object </typeparam>
    /// <param name="path"> 项目路径 </param>
    /// <param name="owner"> 拥有者 跟随拥有者销毁而计数减1 当计数为0时销毁资源 </param>
    /// <returns></returns>
 public static byte[] Load( string path )
/// <summary>
    /// 加载原生 byte[]
    /// </summary>
    /// <param name="path"></param>
    /// <returns></returns>
异步加载
public static AssetHandler<T> LoadAssetAsync( string assetName, CancellationToken token = default,TaskPriority priority = TaskPriority.Low )
 /// <summary>
    /// 异步加载资源
    /// </summary>

public static BatchAssetHandler BatchLoadAssetAsync( List<string> assetNames, CancellationToken token = default,TaskPriority priority = TaskPriority.Low )
/// <summary>
    /// 异步批量加载资源
    /// </summary>

异步加载场景
public static SceneHandler LoadSceneAsync( string sceneName, CancellationToken token = default, TaskPriority priority = TaskPriority.Low )
/// <summary>
    /// 异步加载场景
    /// </summary>


异步实例化对象
 public static async Task<GameObject> InstantiateAsync( string prefabName, Transform parent = null )
    /// <summary>
    /// 异步加载预制体并实例化，会自行将Handler绑定至实例化出的游戏物体上
    /// </summary>

[图片]
[图片]
[图片]
Debug窗口 - Debug模式下才会显示 打包Release后自动隐藏 
[图片]
[图片]
[图片]
