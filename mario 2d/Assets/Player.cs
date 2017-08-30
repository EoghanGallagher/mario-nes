using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[ RequireComponent( typeof ( Rigidbody2D ) ) ]

public class Player : MonoBehaviour 
{

	public float maxSpeed = 10;
	bool facingRight = true;
	private Rigidbody2D _rigidBody2d;

	private bool isGrounded;
	public Transform groundCheck;
	float groundRadius = 0.2f;

	[ SerializeField ]
	private float _jumpForce = 700f;

	public LayerMask whatIsGround;

	void Start()
	{
		_rigidBody2d = GetComponent<Rigidbody2D>();
	}

	void Update()
	{
		if( isGrounded && Input.GetKeyDown( KeyCode.Space ) )
		{
			_rigidBody2d.AddForce( new Vector2( 0 , _jumpForce ) );
		}
	}

	void FixedUpdate()
	{
		
		
		isGrounded = Physics2D.OverlapCircle( groundCheck.position , groundRadius, whatIsGround );
		
		
		
		float move = Input.GetAxis( "Horizontal" );
		_rigidBody2d.velocity = new Vector2( move * maxSpeed, _rigidBody2d.velocity.y );

		if( move > 0 && !facingRight )
			Flip();
		else if( move < 0 && facingRight )
			Flip();
	}


	void Flip()
	{
		facingRight = !facingRight;
		Vector3 scale = transform.localScale;
		scale.x *= -1;
		transform.localScale = scale;	
	}

	
	
}
