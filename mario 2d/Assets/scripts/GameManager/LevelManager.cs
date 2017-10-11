using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public static class LevelManager 
{

	public static void LoadScene( string sceneName )
	{
		if( sceneName.Length > 0 )
			SceneManager.LoadScene( sceneName );
		else
			Debug.LogError( "No Scene Found..." );
	}

}
