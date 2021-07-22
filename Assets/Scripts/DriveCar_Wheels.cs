using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class DriveCar_Wheels : MonoBehaviour
{

	public float speed = 10;
	public float turnAngle = 20;
	public float antiRollForce = 4;
	public float brakeForce = 100000;
	public float turnTorque = 100;
	public Vector3 centerOfMass = Vector3.zero;
	public float antiSlideForce = 1000;
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
			wheel.steerAngle = steer * turnAngle;

		}
		//rb.AddTorque(steer * turnTorque * Vector3.up * Time.deltaTime, ForceMode.VelocityChange);
		rb.AddRelativeForce(steer * antiSlideForce * Time.deltaTime * transform.right);
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
		//move the car up a little bit
		transform.position += Vector3.up * 3;
		//make it face the same direction and unflip it
		Vector3 eulers = Vector3.up * transform.rotation.eulerAngles.y;
		transform.rotation = Quaternion.Euler(eulers);
		//remove angular velocity
		rb.AddTorque(-rb.angularVelocity, ForceMode.VelocityChange);
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

		input.OnResetPressed += Reset;
		input.OnBrakePressed += Brake;
		input.OnDriftPressed += Drift;


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