using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[RequireComponent(typeof(Animator))]
[RequireComponent(typeof(BoxCollider2D))]
public class QuestionBlock : MonoBehaviour 
{

	// Use this for initialization

	private bool isOkToBounce;
	private Animator _anim;

	private Vector3 currentPosition;
	private Vector3 _posBeforeBounce;

	public float _bounceYDist = 0.15f;
	public float _bounceVelocity = 1f;

	public enum BounceState 
	{
		None,
		Up,
		Down
	}

	public BounceState _bounceState;

	private void Start()
	{
		isOkToBounce = true;
		_anim = GetComponent<Animator>();
		_posBeforeBounce = transform.position;

	}


	private void Update()
	{
		if( _bounceState != BounceState.None && isOkToBounce )
		{
			Bounce();
		}
	}

	private void Bounce()
	{
		currentPosition = transform.position;

		if( _bounceState == BounceState.Up )
		{
				if( currentPosition.y <= _posBeforeBounce.y + _bounceYDist )
				{
					transform.Translate( _bounceVelocity * Vector2.up * Time.fixedDeltaTime );
				}
				else
				{
					_bounceState = BounceState.Down;
				}
		}
		else if( _bounceState == BounceState.Down )
		{
				if( currentPosition.y >= _posBeforeBounce.y )
				{
					transform.Translate( _bounceVelocity * Vector2.down * Time.fixedDeltaTime );
				}
				else
				{
					_bounceState = BounceState.None;
					transform.position = _posBeforeBounce;
					isOkToBounce = false;

					Rigidbody2D r2d = GetComponent<Rigidbody2D>();
					r2d.isKinematic = true;
					
				 

				}
		}

		

	}


	private void OnTriggerEnter2D( Collider2D other ) 
	{
		Debug.Log( "Collision Detected...." );

		if( other.transform.tag == "Player" )
		{
			Debug.Log( "Player" );
			_bounceState = BounceState.Up;
		}

	}


}
