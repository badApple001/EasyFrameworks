namespace CatAsset.Runtime
{
    /// <summary>
    /// 资源管理器运行模式
    /// </summary>
    public enum RuntimeMode
    {
        /// <summary>
        /// Editor模式
        /// </summary>
        Editor,

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