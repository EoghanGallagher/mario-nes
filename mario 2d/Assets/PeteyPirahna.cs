using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PeteyPirahna : MonoBehaviour {

	[SerializeField]
	private bool flipY;
	private Vector2 _currentPosition;
	private Vector2  _posBeforeMove;

	[SerializeField]
	private float _speed;

	[SerializeField]
	private Transform _targetPosition;
	// Use this for initialization
	private void Start () 
	{
		_posBeforeMove = transform.localPosition;

		StartCoroutine( "Move" );
	}


	private IEnumerator Move()
	{

		WaitForSeconds delay = new WaitForSeconds( 5.0f );

		while( true )
		{
		
		    
			 yield return delay;

			while( true )
			{
				_currentPosition = transform.localPosition;

				if( _currentPosition.y >= _targetPosition.localPosition.y )
				{
					break;
				}

				transform.Translate ( Vector2.up * _speed * Time.deltaTime );
				
				yield return null;

			}

			yield return delay;

			while( true )
			{
				_currentPosition = transform.localPosition;

				if( _currentPosition.y <= _posBeforeMove.y)
				{
					break;
				}

				transform.Translate ( Vector2.down * _speed * Time.deltaTime );

				yield return null;
			}

		}

	}	

}
	


