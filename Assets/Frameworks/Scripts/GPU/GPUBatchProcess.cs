//==========================
// - FileName:      Assets/Frameworks/Scripts/GPU/GPUBatchProcess.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-16-17:58:49
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class GPUBatchProcess
{
    ComputeShader computeShader = null;

    //隐藏构造方法
    private GPUBatchProcess( ComputeShader shader ) { computeShader = shader; }
    
    /// <summary>
    /// 可以加载不同的ComputeShader
    /// </summary>
    /// <param name="shader"></param>
    /// <returns></returns>
    public static GPUBatchProcess Load( ComputeShader shader )
    {
        if( null != shader )
        {
            return new GPUBatchProcess( shader );
        }
        return null;
    }

    /// <summary>
    /// ComputeShader内的默认方法应该为CSMain 且至少有一个方法名叫CSMain
    /// 并且传递数据的class类型和传入的结构体类似
    /// 同时在ComputeShader中需要处理的数据数组名称因为dataBuffer
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="inputData"></param>
    /// <returns></returns>
    public T[] SendData2GPU<T>( T[] inputData ) where T : struct
    {
        T[] output = new T[ inputData.Length ];
        int kernel = computeShader.FindKernel( "CSMain" );
        int byteLength = Marshal.SizeOf( inputData[ 0 ] );
        ComputeBuffer buffer = new ComputeBuffer( output.Length, byteLength );
        computeShader.SetBuffer( kernel, "dataBuffer", buffer );
        buffer.SetData( inputData );
        computeShader.Dispatch( kernel, output.Length, 1, 1 );
        buffer.GetData( output );
        return output;
    }

}
