//==========================
// - FileName:      Assets/Frameworks/Scripts/Event/FrameworkEvent.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================

/// <summary>
/// 框架内部的事件
/// </summary>
public class FrameworkEvent 
{
    /// <summary>
    /// AssetBundle已就绪
    /// </summary>
    public const string CheckAssetBunldeCompleted = "CheckAssetBunldeCompleted";

    /// <summary>
    /// 切换切后台时触发 用Frameworks Monobehavior生命周期方法触发及派发
    /// </summary>
    public const string SwtichFocusState = "SwtichFocusState";


    /// <summary>
    /// 运行时的数据存储到本地时 检测出了异常 
    /// 汇报当前数据文件
    /// 
    /// 当前数据出现了异常 过滤掉 避免坏数据覆盖本地
    /// 
    /// </summary>
    public const string RuntimeData2DiskFail = "RuntimeData2DiskFail";
}
