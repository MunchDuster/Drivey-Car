using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class DriveCar : MonoBehaviour
{
	//PUBLIC VARIABLES
	[Header("Main Settings")]
	public InputManager input;

	public float flipAngle = 60;
	public float turnSensitivity = 5;
	public float gravity = 9.81f;
	public float maxSpeed = 20;
	public float maxReverseSpeed = 10;
	public float brakePower = 5;
	public float collDownDist = 0.501f;
	public float maxTurnAngle = 20;
	public float accelerationTime = 5;
	public Vector3 down = -Vector3.up;
	public AnimationCurve acceleration;

	[Header("References")]
	public WheelCollider[] drivingWheels;
	public WheelCollider[] steeringWheels;

	[HideInInspector]
	public float speed = 0;
	[HideInInspector]
	public float turn = 0;

	//Private vars
	Rigidbody rb;
	bool isJumping = false;
	float xIn = 0;
	float yIn = 0;
	Vector3 GravDir;
	Vector3 Up;

	//Functions
	void Start()
	{
		GravDir = down;
		rb = GetComponent<Rigidbody>();
	}
	void LateUpdate()
	{

		xIn = input.horizontal;
		yIn = input.vertical;

		Up = transform.up;
		speed = Mathf.Clamp(speed + yIn * maxSpeed * Time.deltaTime, -maxReverseSpeed, maxSpeed);

		Vector3 gravForce = GravDir * gravity * Time.deltaTime * rb.mass;
		rb.AddForce(gravForce, ForceMode.Impulse);

		bool isGrounded = false;
		foreach (WheelCollider wheel in drivingWheels)
		{
			wheel.motorTorque = speed * Time.deltaTime;
			if (wheel.isGrounded)
			{
				isGrounded = true;
			}
		}
		foreach (WheelCollider wheel in steeringWheels)
		{
			wheel.steerAngle = turn;
			if (wheel.isGrounded)
			{
				isGrounded = true;
			}
		}

		float angle = Vector3.Angle(transform.up, Up);
		if (angle < flipAngle)
		{
			if (!isGrounded)
			{
				if (!isJumping)
				{
					isJumping = true;
					// Bit shift the index of the layer (8) to get a bit mask
					int layerMask = 1 << 8;

					// This would cast rays only against colliders in layer 8.
					// But instead we want to collide against everything except layer 8. The ~ operator does this, it inverts a bitmask.
					layerMask = ~layerMask;


					RaycastHit hit = Map(new Vector3(0, -9.8f, 0), 1000, 0.0333f, 30, layerMask);
					//if no collsion then map is an empty RayCastHit instance
					if (hit.collider != null)
					{
						//Debug.DrawLine(hit.point, hit.normal, Color.green, 30);
					}
					else
					{
						Debug.Log("PooPooPooP");
					}
				}
			}
			else
			{
				isJumping = false;
			}
		}
		else
		{
			rb.AddTorque(new Vector3());
		}

		turn = xIn * maxTurnAngle;
	}

	//Other functions
	RaycastHit Map(Vector3 grav, float maxDist, float deltaTime, float duration, int layermask)
	{

		Vector3 pos = transform.position;
		Vector3 velocity = rb.velocity;

		float totalDist = 0;
		while (totalDist < maxDist)
		{
			Vector3 nextpos = pos + velocity * deltaTime;

			RaycastHit hit;
			//public static bool Raycast(Vector3 origin, Vector3 direction, float maxDistance = Mathf.Infinity, int layerMask = DefaultRaycastLayers,

			Ray ray = new Ray(pos, nextpos);

			if (Physics.Raycast(ray, out hit))
			{
				if (hit.collider != null)
				{
					//Debug.DrawLine(pos, hit.point, Color.red, duration);
					//Debug.DrawLine(pos, nextpos, new Color(0, 1, 1, 1), duration);

					return hit;
				}
			}
			else
			{
				//Debug.DrawLine(pos, nextpos, Color.yellow, duration);
			}

			totalDist += (pos - nextpos).magnitude;
			pos = nextpos;
			velocity += grav * deltaTime;
		}
		return new RaycastHit();
	}
}
