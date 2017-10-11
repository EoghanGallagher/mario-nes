using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Portal : MonoBehaviour 
{

	[SerializeField]
	private bool isOkToTeleport;
	private bool isOkToMove;

	public GameObject player;
	public GameObject target;
	public GameObject pipe;

	[SerializeField]
	private float _speed;


	void Start()
	{
		isOkToTeleport = false;
	}

	void OnTriggerEnter2D( Collider2D other ) 
	{
        if( other.name.Equals( "Player" ) )
		{
			Debug.Log( "Player Detected" );
			player = other.transform.gameObject;
			isOkToTeleport = true;
		}
    }

	void OnTriggerExit2D( Collider2D other )
	{
		if( other.name.Equals( "Player" ) )
		{
			isOkToTeleport = false;
			isOkToMove = false;
		}
	}


	void Update()
	{ 
		 
		 if( Input.GetKeyDown( KeyCode.DownArrow ) )
		 {
			
			Debug.Log( "DownArrow" );
			isOkToMove = true;
			//pipe.GetComponent<Collider2D>().enabled = false;
			player.GetComponent<Rigidbody2D>().isKinematic = true;
			player.GetComponent<Player>().IsOkToMove = false;
		 }
		 
		 if( isOkToTeleport && isOkToMove  )
		 {
			 player.transform.Translate ( Vector2.down * _speed * Time.deltaTime );
			
			 if( player.transform.position.y <= target.transform.position.y )
			 {
				Debug.Log( "Made IT" );
				isOkToTeleport = false;
				isOkToMove = false;

				LevelManager.LoadScene( LevelNames.w_1_1a );
			 }
		 }
	}

	
}
