

public static class StringExtend
{

    public static string[] defaultUnitArray = new string[]
    {
        "K",
        "M",
        "B",
        "T",
        "AA",
        "BB",
        "CC",
        "DD"
    };

    public static string ToCurrency( this double num, string[] unitArray = null )
    {
        if ( null == unitArray )
        {
            unitArray = defaultUnitArray;
        }
        double tempNum = num;
        if ( tempNum < 10000 )
        {
            return num.ToString( "0" );
        }

        int unitIndex = 0;
        while ( tempNum / 10000 / 100 >= 1 )
        {
            unitIndex++;
            if ( unitIndex >= unitArray.Length )
            {
                unitIndex = unitArray.Length - 1;
                break;
            }
            tempNum /= 100;
        }
        return ( tempNum / 1000 ).ToString( "0.00" ) + unitArray[ unitIndex ];
    }
}
