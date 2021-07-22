using UnityEngine;

public abstract class InputManager : MonoBehaviour
{
	[HideInInspector]
	public float horizontal;
	[HideInInspector]
	public float vertical;
	[HideInInspector]
	public bool brakePressed;

	[HideInInspector]
	public bool driftPressed;
	[HideInInspector]
	public bool resetPressed;
	[HideInInspector]
	public bool settingsPressed;

	public delegate void ButtonPressed(bool isPressed);
	public ButtonPressed OnResetPressed;
	public ButtonPressed OnDriftPressed;
	public ButtonPressed OnSettingsPressed;
	public ButtonPressed OnBrakePressed;
}