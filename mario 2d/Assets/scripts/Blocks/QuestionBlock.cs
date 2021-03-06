﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[RequireComponent(typeof(Animator))]
[RequireComponent(typeof(BoxCollider2D))]
public class QuestionBlock : MonoBehaviour 
{

	// Use this for initialization

	[SerializeField]
	private int coinCount;

	[SerializeField]
	private int option;
	

	private bool isOkToBounce;

	private bool isBusy;
	private bool isFinishedBounce;
	private bool isCoin;
	private Animator _anim;

	private Vector3 currentPosition;
	private Vector3 _posBeforeBounce;

	[SerializeField]
	private Sprite _emptyBlock;

	[SerializeField]
	private GameObject coin;


	[SerializeField]
	private GameObject powerUp;

	public float _bounceYDist = 0.175f;
	public float _bounceVelocity = 1.5f;

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
		isFinishedBounce = true;

	
		isCoin = true;
		_anim = GetComponent<Animator>();
		_posBeforeBounce = transform.position;

	}


	private void Update()
	{
		
		
		
		if( Input.GetMouseButtonDown( 0 ) && _bounceState != BounceState.Up )
		{
			if( isBusy == false )
				_bounceState = BounceState.Up;	
		}
		
		
		if( _bounceState != BounceState.None && isOkToBounce )
		{
			if( coinCount > 0 )
			{
				Bounce();
				
			}
			else
			{
				if( isFinishedBounce )
				{
					_anim.enabled = false;
					SetSprite( _emptyBlock );
					isFinishedBounce = false;
				}
			}
		
		}
	}

	private void Bounce()
	{
		
		isBusy = true;
		currentPosition = transform.position;

		if( coinCount == 1 )
		{
				_anim.enabled = false;
				SetSprite( _emptyBlock );
				isFinishedBounce = false;
				
		}

		if( _bounceState == BounceState.Up )
		{
				if( currentPosition.y <= _posBeforeBounce.y + _bounceYDist )
				{
					transform.Translate( _bounceVelocity * Vector2.up * Time.fixedDeltaTime );
				}
				else
				{
					_bounceState = BounceState.Down;
					PowerUpType( option );
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
					if( coinCount == 1 )
						isOkToBounce = false;
						

					//Rigidbody2D r2d = GetComponent<Rigidbody2D>();
					//r2d.isKinematic = true;

					_bounceState = BounceState.None;
					transform.position = _posBeforeBounce;

					
				
				}
		}

		

	}

	private void SetSprite( Sprite sprite )
	{
		Debug.Log( "Sprite : " + sprite.name );
		gameObject.GetComponent<SpriteRenderer>().sprite = sprite;
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


	//Powerups
	private IEnumerator LoadPowerUps()
	{
		
		
		powerUp.SetActive( true );
		
		Debug.Log( "Power Up Active" );
		
		float yDist = 0.125f;
		float powerUpVelocity = 0.25f;
		
		Vector3 currentPosition = Vector3.zero;
		
		Transform powerUpTransform = powerUp.transform;
		
		Vector3 positionBefore = powerUpTransform.position;

		Debug.Log( "Before " + positionBefore.y  );

		while( true )
		{
			currentPosition = powerUp.transform.position;
			
			if( currentPosition.y <= positionBefore.y + yDist )
			{
				Debug.Log( currentPosition.y );
				powerUpTransform.Translate( powerUpVelocity * Vector2.up * Time.fixedDeltaTime );
			}
			else
			{
				isBusy = false;
				break;

			}

			yield return powerUpVelocity;
		}

		

	}


	//Coins 
	private IEnumerator LoadCoin()
	{
		

		float yDist = 1.5f;
		float coinVelocity = 6.0f;

		bool moveDown = false;

		Transform coinTransform = coin.transform;

		Vector3 currentPosition = Vector3.zero;
		Vector3 positionBefore = coinTransform.position;
		//Instantiate game object ( Coin ) at position of empty block. 

		//
		
		coin.SetActive( true );

		while( true )
		{
			currentPosition = coin.transform.position;

			
			if( currentPosition.y <= positionBefore.y + yDist  && !moveDown )
			{
				coinTransform.Translate( coinVelocity * Vector2.up * Time.fixedDeltaTime );
			}
			else
			{
				Debug.Log( "Thats as far as i go..." );
				moveDown = true;

			}


			if( moveDown )
			{
				if( currentPosition.y >= ( positionBefore.y + 0.5f ) )
				{
					coinTransform.Translate( coinVelocity * Vector2.down * Time.fixedDeltaTime );
				}
				else
				{
					
					
					coin.transform.position = gameObject.transform.position;
					coin.SetActive( false );

					break;
				}
			}

			yield return null;

		}

		isBusy = false;
		coinCount --;
		Debug.Log( "All Done.." );
	}


	private void PowerUpType( int option )
	{
		switch( option )
		{
			case 0:
						
				StartCoroutine( "LoadCoin" );
					
			break;

			case 1:
					
				StartCoroutine( "LoadPowerUps" );

			break;
		}
	}

	public void TriggerBounce()
	{
		if( isBusy == false )
		_bounceState = BounceState.Up;	
	}


}
