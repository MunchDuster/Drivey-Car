using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class DriveCar_Wheels : MonoBehaviour
{

	public float speed = 10;
    public float jumpForce = 1;
    public float turnSpeed = 5;
    public float turnAngle = 20;
	public float brakeForce = 100000;
	public Vector3 centerOfMass = Vector3.zero;
	public InputManager input;
	public WheelCollider[] driveWheels;
	public WheelCollider[] steerWheels;

	private Vector3[] wheelpoints;
	private Rigidbody rb;
	private float throttle = 0;
	private float steer = 0;
	private Dictionary<WheelCollider, WheelFrictionCurve> originalCurves = new Dictionary<WheelCollider, WheelFrictionCurve>();

	void Throttle()
	{
		//THROTTLE - forward, backward and brakes
		foreach (WheelCollider wheel in driveWheels)
		{
			wheel.motorTorque = throttle * speed;
		}
	}
	void Steer()
	{
		foreach (WheelCollider wheel in steerWheels)
		{
            //if user not pressing side key then return to center if wheel is turned    
            float steerDirection = (Mathf.Abs(steer) > 0.5f) ? steer : (Mathf.Abs(wheel.steerAngle) > 1f)?-wheel.steerAngle/Mathf.Abs(wheel.steerAngle):0;
            wheel.steerAngle = Mathf.Clamp(wheel.steerAngle + Time.deltaTime * turnSpeed * steerDirection * turnAngle,-turnAngle,turnAngle);
		}
	}
	void Brake(bool isPressed)
	{
		if (isPressed)
		{
			foreach (WheelCollider wheel in driveWheels)
			{
				wheel.brakeTorque = brakeForce;
			}
		}
		else
		{
			foreach (WheelCollider wheel in driveWheels)
			{
				wheel.brakeTorque = 0;
			}
		}
	}
	void Reset(bool isPressed)
	{
		if (!isPressed)
			return;
		//go back to start position
		transform.position = Vector3.up * 3;
        transform.rotation = Quaternion.identity;
        //remove velocity
        rb.AddForce(-rb.velocity, ForceMode.VelocityChange);
        //remove angular velocity
        rb.AddTorque(-rb.angularVelocity, ForceMode.VelocityChange);
	}
    void Jump(bool isPressed)
    {
        if (!isPressed)
			return;

        rb.AddForce(Vector3.up * jumpForce, ForceMode.VelocityChange);
    }
	void Drift(bool isPressed)
	{
		if (isPressed)
		{
			foreach (WheelCollider wheel in driveWheels)
			{
				WheelFrictionCurve wheelSlideCurve = new WheelFrictionCurve();
				wheelSlideCurve.asymptoteSlip = 1;
				wheelSlideCurve.asymptoteValue = 1;
				wheelSlideCurve.extremumSlip = 1;
				wheelSlideCurve.extremumValue = 1;
				wheelSlideCurve.stiffness = 1;
				wheel.sidewaysFriction = wheelSlideCurve;
			}
		}
		else
		{
			foreach (WheelCollider wheel in driveWheels)
			{
				wheel.sidewaysFriction = originalCurves[wheel];
			}
		}
	}

	// Main functions
	void Start()
	{
		rb = GetComponent<Rigidbody>();

		rb.centerOfMass = centerOfMass;

		foreach (WheelCollider wheel in driveWheels)
		{
			originalCurves.Add(wheel, wheel.sidewaysFriction);
		}

		input.OnJumpPressed += Jump;
		input.OnBrakePressed += Brake;
		input.OnDriftPressed += Drift;
        input.OnResetPressed += Reset;


		List<Vector3> wheelpointsList = new List<Vector3>();
		foreach (WheelCollider wheel in driveWheels)
		{
			Vector3 point = transform.position - wheel.gameObject.transform.position;
			if (!wheelpointsList.Contains(point)) wheelpointsList.Add(point);
		}
		foreach (WheelCollider wheel in steerWheels)
		{
			Vector3 point = transform.position - wheel.gameObject.transform.position;
			if (!wheelpointsList.Contains(point)) wheelpointsList.Add(point);
		}
		wheelpoints = wheelpointsList.ToArray();
	}
	void FixedUpdate()
	{
		//Player input
		throttle = input.vertical;
		steer = input.horizontal;

		//Apply main physics
		Throttle();
		Steer();
	}
}