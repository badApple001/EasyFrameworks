using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

public class PythonTranslator
{

    public delegate void CallPythonReturnHandler( string returnStringValue );
    public static void Run( string py_path, CallPythonReturnHandler callPythonReturnHandler, params string[] args )
    {
        Process p = new Process();
        string sArguments = py_path;
        foreach ( string arg in args )
        {
            sArguments += " " + arg;
        }
        p.StartInfo.FileName = @"python.exe";
        p.StartInfo.UseShellExecute = false;
        p.StartInfo.Arguments = sArguments;
        p.StartInfo.RedirectStandardOutput = true;
        p.StartInfo.RedirectStandardInput = true;
        p.StartInfo.RedirectStandardError = true;
        p.StartInfo.CreateNoWindow = true;
        p.Start();
        p.BeginOutputReadLine();
        p.OutputDataReceived += new DataReceivedEventHandler( ( object sender, DataReceivedEventArgs eventArgs ) =>
        {
            if ( !string.IsNullOrEmpty( eventArgs.Data ) )
            {
                callPythonReturnHandler?.Invoke( eventArgs.Data );
            }
        } );
        p.WaitForExit();
    }

}
