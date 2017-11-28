using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OneUpMushroom : MonoBehaviour 
{

	private bool _isBlocked;
	private bool _isLeft;
	private bool _isRight;
	private bool _isAlive;

	[SerializeField]
	private float _speed;

	[SerializeField]
	private float _myWidth;

	[SerializeField]
	private LayerMask _enemyMask;

	private Rigidbody2D _myBody;

	private WaitForSeconds _delay;
	private Transform _transform;

	private Vector2 currentDirection;

	private float _verticalPos;



	private void OnEnable()
	{
		

		StartCoroutine( "Activate" );
	}

	private void Start()
	{
		_transform = transform;
		_myBody = GetComponent<Rigidbody2D>();
	}

	private void FixedUpdate()
	{
		
		//Check movement direction
		if( _isLeft )
		{
			currentDirection = Vector2.left;
			
		}
		else
		{
			currentDirection = Vector2.right;	
		}

		//Fire Raycast in current movement direction
		RaycastHit2D hit = Physics2D.Raycast( new Vector2( _transform.position.x , _transform.position.y - 0.16f ), currentDirection , 0.18f ,_enemyMask );
		
		if( hit.collider != null && hit.collider.name != "QuestionBlock"  )
		{
			Debug.Log( "HTI " + hit.collider.name );
			_isBlocked = true;
		}


		//If collision occurs that is not the player or another enemy then change direction.
		if( _isBlocked )
		{
			Vector3 currentRotation = _transform.eulerAngles;
			currentRotation.y  += 180;
			_transform.eulerAngles = currentRotation;
			_isBlocked = false;
			
			if( _isLeft )
			{
				_isLeft = false;
				_isRight = true;
			}
			else
			{
				_isRight = false;
				_isLeft = true;
			}
			
			_isBlocked = false;	
		}

	
		//Move 
		
		if( _isAlive )
		{ 
			Vector2 myVal = _myBody.velocity;
			myVal.x = -_transform.right.x * _speed;
			_myBody.velocity = myVal;
		}
	}

	private IEnumerator Activate()
	{
		
		yield return new WaitForSeconds( 1.0f );
		
		
		_isAlive  = true;
		_isLeft = true;
		transform.parent = null;
	}


	

	
}
