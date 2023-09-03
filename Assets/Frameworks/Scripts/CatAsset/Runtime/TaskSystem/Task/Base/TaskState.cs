//==========================
// - FileName:      Assets/Frameworks/Scripts/CatAsset/Runtime/TaskSystem/Task/Base/TaskState.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
namespace CatAsset.Runtime
{
    /// <summary>
    /// 任务状态
    /// </summary>
    public enum TaskState
    {
        /// <summary>
        /// 空闲
        /// </summary>
        Free,

        /// <summary>
        /// 等待中
        /// </summary>
        Waiting,

        /// <summary>
        /// 运行中
        /// </summary>
        Running,

        /// <summary>
        /// 已结束
        /// </summary>
        Finished,
    }

}