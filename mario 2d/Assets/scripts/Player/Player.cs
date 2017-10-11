using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[ RequireComponent( typeof ( Rigidbody2D ) ) ]
[ RequireComponent( typeof ( Animator ) ) ]

public class Player : MonoBehaviour 
{

	public Transform groundCheck;

	public float timer = 0;

	public float jumpForce;
	public float jumpTime = 0.5f;

	public float fallMultiplier = 3.0f;
	public float lowFallMultiplier = 2.0f;

	public float maxSpeed;
	public float groundRadius; 
	public LayerMask whatIsGround;

	public float gravityModifier;  
	private Vector3 _moveDirection = Vector3.zero;
	private CharacterController _controller;

	private Vector2 _velocity;

	
	private bool _facingRight;
	public bool isGrounded;
	
	[SerializeField]
	private bool _isOkToMove;

	private Rigidbody2D _rigidBody2d;
	private Animator _animator;

	void Start()
	{
		_rigidBody2d = GetComponent<Rigidbody2D>();	
		_animator = GetComponent<Animator>();
		_facingRight = true;

		_isOkToMove = true;
	}

	void FixedUpdate()
	{

		if( !_isOkToMove  )
		{
			Debug.Log( "Not ok to move..." );
			return;
		} 
	
		isGrounded = Physics2D.OverlapCircle( groundCheck.position , groundRadius, whatIsGround );
			
		float move = Input.GetAxis( "Horizontal" );

		_rigidBody2d.velocity = new Vector2( move * maxSpeed, _rigidBody2d.velocity.y );

		if( isGrounded && move != 0 )
		{
			_animator.SetBool( "Walk" , true );
			
		}
		else if( !isGrounded || move == 0  )
		{
			_animator.SetBool( "Walk" , false );
			
		}

		//Flip Sprite based on movement direction
		if( move > 0 && !_facingRight )
			Flip();
		else if( move < 0 && _facingRight )
			Flip();

		if( _rigidBody2d.velocity.y < 0 )
			_rigidBody2d.velocity += Vector2.up * Physics2D.gravity.y *( fallMultiplier - 1 ) * Time.deltaTime;
		else if( _rigidBody2d.velocity.y > 0 && !Input.GetKey( KeyCode.Space ) )	
			_rigidBody2d.velocity += Vector2.up * Physics2D.gravity.y *( lowFallMultiplier - 1 ) * Time.deltaTime;


		if( isGrounded )
		{
			_animator.SetBool( "Jump" , false );
		}
		else
		{
			_animator.SetBool( "Jump" , true );
		}	
		
	}

	void Update()
	{
		if( !_isOkToMove )
		{
			return;
		}


		if( isGrounded && Input.GetKeyDown( KeyCode.Space ) )
		{
			_rigidBody2d.AddForce( new Vector2( 0, jumpForce  ) );
			_animator.SetBool( "Jump" , true );
		}
		
	}


	void Flip()
	{
		_facingRight = !_facingRight;
		Vector3 scale = transform.localScale;
		scale.x *= -1;
		transform.localScale = scale;	
	}


	public bool IsOkToMove
	{
		get{ return _isOkToMove; }
		set{ _isOkToMove = value; }
	}

	
	
}
