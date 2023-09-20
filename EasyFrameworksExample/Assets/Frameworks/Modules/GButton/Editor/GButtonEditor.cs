using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

[CustomEditor( typeof( GButton ) )]
public class GButtonEditor : UnityEditor.UI.ButtonEditor
{
    GButton GButton;

    protected override void OnEnable( )
    {
        base.OnEnable( );
        GButton = ( GButton ) target;
    }

    public override void OnInspectorGUI( )
    {
        base.OnInspectorGUI( );
        EditorGUILayout.Space( );
        serializedObject.Update( );

        EditorGUILayout.PropertyField( this.serializedObject.FindProperty( "penetrateEvent" ) );
        var prop_ScaleAnim = this.serializedObject.FindProperty( "scalable" );
        EditorGUILayout.PropertyField( prop_ScaleAnim );
        if ( prop_ScaleAnim.boolValue )
        {
            EditorGUILayout.PropertyField( this.serializedObject.FindProperty( "scaleMultiplyBy" ) );
        }

        EditorGUILayout.PropertyField( this.serializedObject.FindProperty( "sound" ) );
        EditorGUILayout.PropertyField( this.serializedObject.FindProperty( "dbtEvent" ) );

        
        //var prop_Sound = this.serializedObject.FindProperty( "sound" );
        //EditorGUILayout.PropertyField( prop_Sound );
        //if ( prop_Sound.boolValue )
        //{
        //    EditorGUILayout.PropertyField( this.serializedObject.FindProperty( "clickEffect" ) );
        //}
        serializedObject.ApplyModifiedProperties( );
    }

    [MenuItem( "GameObject/UI/GButton", false, 0 )]
    public static void GenGButton( )
    {

        if ( Selection.activeGameObject == null )
        {
            return;
        }


        var gbtnobj = new GameObject( nameof( GButton ) );
        gbtnobj.transform.SetParent( Selection.activeGameObject.transform, false );
        gbtnobj.AddComponent<GButton>( );
    }
}