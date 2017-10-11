using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class GameManager : MonoBehaviour 
{

	public static GameManager instance = null; //Static instance of GameManager which allows it to accessed by any other script.

	private string level;  //Current Level

	void Awake()
	{
		level = LevelNames.w_1_1;
		
		//Check if instance alreay exists
		if( instance == null )
			//if not set it to this
			instance = this;
		
		else if( instance != this )
			//Destroy this. Enforces singleton pattern. Only one instance exists.
			Destroy( gameObject );

		DontDestroyOnLoad( gameObject );

	}

	void Start()
	{
		StartCoroutine( "StartGame" );
	}


	private IEnumerator StartGame()
	{
		 
		yield return new WaitForSeconds( 2.0f );

		LevelManager.LoadScene( LevelNames.w_1_1 );

	}

}
