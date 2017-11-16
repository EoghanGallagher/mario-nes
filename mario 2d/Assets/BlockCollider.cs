using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockCollider : MonoBehaviour 
{

	void OnTriggerEnter2D( Collider2D other ) 
	{
       
	   if( other.name == "QuestionBlock" )
	   {
			Debug.Log( "Name : " + other.name );
			QuestionBlock qB = other.GetComponent<QuestionBlock>();
			qB.TriggerBounce();
	   }
    }
	
}
