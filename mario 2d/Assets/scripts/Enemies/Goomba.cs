using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Goomba : MonoBehaviour 
{

	private bool _isBlocked;
	private bool _isLeft;
	private bool _isRight;
	private bool _isAlive;

	[SerializeField]
	private LayerMask _enemyMask;

	[SerializeField]
	private float _myWidth;

	[SerializeField]
	private float _speed;


	private Rigidbody2D _myBody;
	
	private Animator _anim;

		
	private WaitForSeconds _delay;
	private Transform _transform;

	private Vector2 currentDirection;

	private float _verticalPos;


	// Use this for initialization
	void Start () 
	{
		
		_isAlive = true;
		_delay = new WaitForSeconds( 2.0f );
		_transform = gameObject.transform;
		_myBody = GetComponent<Rigidbody2D>();
		_myWidth = this.GetComponent<SpriteRenderer>().bounds.extents.x;
		_anim = GetComponent<Animator>();

		_isLeft = false;

	}

	private void Update()
	{
		if( Input.GetMouseButtonDown( 0 ) )
		{
			Debug.Log( "DEath" );
			
			StartCoroutine( "Death" );
		}
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
		
		if( hit.collider != null  )
		{
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

		//Check if falling
		/*RaycastHit2D vHit = Physics2D.Raycast( new Vector2( _transform.position.x , _transform.position.y - 0.16f ),   Vector2.down , 0.18f , _enemyMask );
		Debug.DrawRay(transform.position, Vector2.down , Color.green);

		if( vHit.collider == null )
		{
			anim.SetBool( "" )
		}*/

		//Move 
		
		if( _isAlive )
		{ 
			
Vector2 myVal = _myBody.velocity;
			myVal.x = -_transform.right.x * _speed;
			_myBody.velocity = myVal;
		}
	}




	private IEnumerator Move()
	{

		yield return _delay;
		
		while( true )
		{
			_transform.Translate ( Vector2.left * _speed * Time.deltaTime );

			yield return null;
		}

	}


	//Move to SuperClass
	private IEnumerator Death()
	{
		_isAlive = false;
		_anim.SetBool( "Death" , true );

		yield return new WaitForSeconds( 1.0f );
		Destroy( this.gameObject );



	}


	private void OnTriggerEnter( Collider other )
	{
		Debug.Log( other.name );
	}

	
	
}
