//==========================
// - FileName:      Assets/Frameworks/Modules/Debugger/Component/DebuggerComponent.RuntimeMemoryInformationWindow.Sample.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-19 10:10:45
// - UnityVersion:  2019.4.35f1
// - Version:       1.0
// - Description:   
//==========================
﻿namespace Debugger
{
    public sealed partial class DebuggerComponent
    {
        private sealed partial class RuntimeMemoryInformationWindow<T> : ScrollableDebuggerWindowBase where T : UnityEngine.Object
        {
            private sealed class Sample
            {
                private readonly string m_Name;
                private readonly string m_Type;
                private readonly long m_Size;
                private bool m_Highlight;

                public Sample(string name, string type, long size)
                {
                    m_Name = name;
                    m_Type = type;
                    m_Size = size;
                    m_Highlight = false;
                }

                public string Name
                {
                    get
                    {
                        return m_Name;
                    }
                }

                public string Type
                {
                    get
                    {
                        return m_Type;
                    }
                }

                public long Size
                {
                    get
                    {
                        return m_Size;
                    }
                }

                public bool Highlight
                {
                    get
                    {
                        return m_Highlight;
                    }
                    set
                    {
                        m_Highlight = value;
                    }
                }
            }
        }
    }
}
