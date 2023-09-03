//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/Misc/RuntimeMode.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
namespace CatAsset.Runtime
{
    /// <summary>
    /// 资源管理器运行模式
    /// </summary>
    public enum RuntimeMode
    {
        /// <summary>
        /// 单机模式
        /// </summary>
        PackageOnly,

        /// <summary>
        /// 可更新模式
        /// </summary>
        Updatable,
    }
}