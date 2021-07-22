using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerConnection : MonoBehaviour
{
	public GameObject disableOnJoin;

	private int players = 0;
	public void OnPlayerJoined(PlayerInput playerInput)
	{
		players++;
		if (players == 1)
			disableOnJoin.SetActive(false);
	}
	public void OnPlayerLeft(PlayerInput playerInput)
	{
		players--;
		if (players == 0)
			disableOnJoin.SetActive(true);
	}
}
