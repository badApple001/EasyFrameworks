using UnityEngine;

public static class GodExtend
{
    public static string[] defaultUnitArray = new string[]
   {
        "",
        "K",
        "M",
        "G",
        "T",
        "P",
        "E",
        "B"
   };

    public static string ToCurrency( this double num, string[] unitArray = null )
    {
        if ( null == unitArray )
        {
            unitArray = defaultUnitArray;
        }

        if ( num <= 1000 )
        {
            return Mathf.FloorToInt( ( float ) num ).ToString( );
        }

        double tempNum = num;
        long v = 1000;//几位一个单位
        int unitIndex = 0;
        while ( tempNum >= v )
        {
            unitIndex++;
            tempNum /= v;
        }
        return string.Format( "{0:F2}{1}", tempNum, unitArray[ Mathf.Clamp( unitIndex, 0, unitArray.Length - 1 ) ] );
    }

}
