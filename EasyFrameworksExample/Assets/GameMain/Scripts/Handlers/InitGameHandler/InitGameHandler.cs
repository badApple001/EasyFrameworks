using System.Collections.Generic;
using System.Threading.Tasks;

public class InitGameHandler : IHandler
{
    public delegate bool GetAwaitFunctor();
    public delegate Task<float> InitiaFunctor();
    public void Do()
    {
        LoadingFormManager.Instance.Open( new List<string>()
        {

        },
        new List<InitiaFunctor>()
        {
            PoolManager.Instance.Init,
            AudioManager.Instance.Init
        }
        ,
        new List<GetAwaitFunctor>()
        {
            HandlerManager.Find<OnLineConfigHandler>().done,
            ()=>PoolManager.Instance.Completed,
            ()=>AudioManager.Instance.Completed,
        }, OnInitCompleted );
    }


    private void OnInitCompleted()
    {
        //GMapManager.LoadMap( );
        HomeFormManager.Instance.Open();
    }

    public void Undo()
    {

    }

}
