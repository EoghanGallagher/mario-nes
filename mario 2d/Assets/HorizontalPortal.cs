using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HorizontalPortal : MonoBehaviour 
{

	void OnTriggerEnter2D( Collider2D other ) 
	{
        if( other.name.Equals( "Player" ) )
		{
			StartCoroutine( "Teleport" );
		}
    }


	private IEnumerator Teleport()
	{
		yield return new WaitForSeconds( 2.0f );

		Debug.Log( "Teleporting" );

	}

	
	
}
