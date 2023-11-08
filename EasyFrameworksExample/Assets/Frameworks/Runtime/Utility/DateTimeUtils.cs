//==========================
// - FileName:      Assets/Frameworks/Modules/Utility/DateTimeUtils.cs
// - Created:       ChenJC	
// - CreateTime:    2023-06-21-17:36:50
// - UnityVersion:  2021.3.22f1
// - Version:       1.0
// - Description:   
//==========================
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DateTimeUtils 
{
    /// <summary>
    /// ��ȡʱ�������ȷ���룩
    /// TimeTool.ConvertDateTimep(DateTime.Now)
    /// </summary>
    /// <param name="time">ʱ��</param>
    public static long ConvertDateTimep( DateTime time )
    {
        return ( ( time.ToUniversalTime( ).Ticks - 621355968000000000 ) / 10000000 );
        //�ȼ��ڣ�
        //return ((time.ToUniversalTime().Ticks - new DateTime(1970, 1, 1, 0, 0, 0, 0).Ticks) / 10000000) * 1000;
    }

    /// <summary>
    /// ʱ���תΪC#��ʽʱ��
    /// TimeTool.GetTime(TimeTool.ConvertDateTiemp(DateTime.Now).ToString())
    /// </summary>
    /// <param name="timeStamp">ʱ���</param>
    /// <returns></returns>
    public static DateTime GetTime( long timeStamp )
    {
        return new DateTime( 1970, 1, 1, 0, 0, 0 ).AddSeconds( timeStamp );
    }

}
