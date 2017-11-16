using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RayCastTest : MonoBehaviour 
{

	public float distance = 0.05f;

	public bool isHit = false;
	void FixedUpdate()
    {
    
		RaycastHit2D hit = Physics2D.Raycast( transform.position , Vector2.up , 0.2f );

		if( hit.collider != null  )
		{
			
			if( hit.collider.name == "QuestionBlock" )
			{

				var q = hit.collider.GetComponent<QuestionBlock>();
			
				if( q != null && isHit == false )
				{
					q.TriggerBounce();
					isHit = true;
				}

			}
			
		}
		else
		{
			isHit = false;
		}


		
		Debug.DrawRay(transform.position, Vector2.up , Color.green);
    
    }

}
