//==========================
// - FileName:      Assets/CommonModule/ListView.cs
// - Created:       ChenJC
// - CreateTime:    2023-08-06-02:32:42
// - UnityVersion:  2021.3.26f1c1
// - Version:       1.0
// - Description:   
//==========================
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ListView : MonoBehaviour
{

    [SerializeField] private Transform root; 
    [SerializeField] private Transform template;

    private void Awake()
    {
        if ( null != template ) template.gameObject.SetActive( false );
    }

    /// <summary>
    /// ��̬����Item
    /// </summary>
    /// <param name="count"> ���� </param>
    /// <param name="itemHandler"> ����Item�Ĵ����� </param>
    public void CreateItems( int count, Action<Transform, int> itemHandler )
    {
        for ( int i = 0; i < count; i++ )
        {
            Transform instance = i == 0 ? template : GameObject.Instantiate( template, root );
            instance.gameObject.SetActive( true );
            itemHandler?.Invoke( instance, i );
        }
    }
}
