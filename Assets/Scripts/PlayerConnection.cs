using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.InputSystem;

[RequireComponent(typeof(PlayerInputManager))]
public class PlayerConnection : MonoBehaviour
{
    public GameObject disableOnJoin;
    public delegate void Function(PlayerInput input);
    public Function OnPlayerJoin;
    private PlayerInputManager inputManager;
    private void Start() {
        inputManager = GetComponent<PlayerInputManager>();
        
        /*
        foreach(InputDevice device in InputSystem.devices)
        {
            
            
            inputManager.JoinPlayer(-1,-1,"Gameplay",device);
        }
        */
    }
    void OnPlayerJoined(PlayerInput input)
    {
        OnPlayerJoin(input);
        disableOnJoin.SetActive(false);
    }
}
