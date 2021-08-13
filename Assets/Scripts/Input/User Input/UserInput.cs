using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;

public class UserInput : InputManager
{
	public void OnHorizontal(InputValue value)
	{
		horizontal = value.Get<float>();
	}
	public void OnVertical(InputValue value)
	{
		vertical = value.Get<float>();
	}
	public void OnEscape(InputValue value)
	{
		settingsPressed = value.isPressed;
		if (OnBrakePressed != null) OnSettingsPressed(value.isPressed);
	}
	public void OnDrift(InputValue value)
	{
		driftPressed = value.isPressed;
		if (OnBrakePressed != null) OnDriftPressed(value.isPressed);
	}
	public void OnBrake(InputValue value)
	{
		brakePressed = value.isPressed;
		if (OnBrakePressed != null) OnBrakePressed(value.isPressed);
	}
	public void OnReset(InputValue value)
	{
		resetPressed = value.isPressed;
		if (OnBrakePressed != null) OnResetPressed(value.isPressed);
	}
	public void OnRestart(InputValue value)
	{
		SceneManager.LoadScene(SceneManager.GetActiveScene().name);
	}
}
