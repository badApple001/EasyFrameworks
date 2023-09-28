using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class EditorAssetUtils
{

    public static List<T> FindAsset<T>( string filter, params string[] search_dirs ) where T : Object
    {
        var guids = AssetDatabase.FindAssets( filter, search_dirs );
        List<T> result = new List<T>( );
        foreach ( var guid in guids )
        {
            var path = AssetDatabase.GUIDToAssetPath( guid );
            var asset = AssetDatabase.LoadAssetAtPath<T>( path );
            result.Add( asset );
        }
        return result;
    }


    public static string FindScriptDirFromName( string script_name )
    {
        var script_guid = AssetDatabase.FindAssets( script_name );
        return AssetDatabase.GUIDToAssetPath( script_guid[ 0 ] ).Replace( ( @"/" + script_name + ".cs" ), "" );
    }
}
