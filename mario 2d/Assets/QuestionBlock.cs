using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[RequireComponent(typeof(Animator))]
[RequireComponent(typeof(BoxCollider2D))]
public class QuestionBlock : MonoBehaviour 
{

	// Use this for initialization

	private bool isOkToBounce;
	private bool isFirstBounce;

	private bool isPrize;

	private bool isCoin;
	private Animator _anim;

	private Vector3 currentPosition;
	private Vector3 _posBeforeBounce;

	[SerializeField]
	private Sprite _emptyBlock;

	[SerializeField]
	private GameObject coin;

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
		isFirstBounce = true;

		isPrize = true;
		isCoin = true;
		_anim = GetComponent<Animator>();
		_posBeforeBounce = transform.position;

	}


	private void Update()
	{
		if( _bounceState != BounceState.None && isOkToBounce )
		{
			if( isFirstBounce )
			{
				_anim.enabled = false;
				SetSprite( _emptyBlock );
				isFirstBounce = false;
			}
			
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

					StartCoroutine( "LoadCoin" );
			
			
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

	private IEnumerator LoadCoin()
	{
		

		float yDist = 1.25f;
		float coinVelocity = 4.0f;

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
					coin.SetActive( false );

					coinTransform = gameObject.transform;


					yield break;
				}
			}

			yield return null;

		}

		Debug.Log( "All Done.." );
	}


}
