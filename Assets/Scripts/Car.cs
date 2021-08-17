using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class Car : MonoBehaviour
{
	public Transform[] wheelPoints;
	[Header("Spring")]
	public float wheelNormalDistance = 1;
	public float wheelMaxDistance = 2;
	public float wheelMinDistance = 0.6f;
	public float springConstant = 1;
	public float maxSpringForce = 100;
	public float springDamper = .9f;
	public bool pauseOnMin = true;
	[Header("Main")]
	public Vector3 down;

	[Header("Anti Roll")]
	public float antiRollForce = 10;

	private Rigidbody rb;
	// Start is called before the first frame update
	void Start()
	{
		rb = GetComponent<Rigidbody>();
	}

	// Update is called once per frame
	void FixedUpdate()
	{
		rb.AddForce(down * rb.mass, ForceMode.Acceleration);
		foreach (Transform wheelpoint in wheelPoints)
		{
			//SPRING FORCES
			RaycastHit hit;
			if (Physics.Raycast(wheelpoint.position, wheelpoint.forward, out hit, wheelMaxDistance))
			{

				float distance = wheelNormalDistance - hit.distance;


				Vector3 force = -wheelpoint.forward * Mathf.Min(springConstant * Time.fixedDeltaTime / hit.distance, maxSpringForce);
				rb.AddForceAtPosition(force / springDamper, wheelpoint.position);

				/*
				if (hit.distance <= wheelMinDistance && Vector3.Dot(rb.GetPointVelocity(wheelpoint.position), -transform.up) > 0)
				{
					
					/*
					Vector3 bounceforce = 0.5f * Vector3.Reflect(rb.GetPointVelocity(wheelpoint.position), transform.up);
					
					//Debug.DrawRay(wheelpoint.position, Vector3.Project)
					Debug.DrawRay(wheelpoint.position, bounceforce, Color.white, 10);
					rb.AddForceAtPosition(bounceforce, wheelpoint.position, ForceMode.VelocityChange);

					if(pauseOnMin)Debug.Break();
					
				}
				else
				{
					Vector3 force = wheelpoint.forward * Mathf.Min(springConstant * Time.fixedDeltaTime / distance, maxSpringForce);
					rb.AddForceAtPosition(force / springDamper, wheelpoint.position);

				}
				*/

				Debug.DrawLine(wheelpoint.position, hit.point, Color.Lerp(Color.red, Color.yellow, (distance - wheelMinDistance) / wheelMaxDistance));
			}
			else
			{
				Debug.DrawRay(wheelpoint.position, wheelpoint.forward * wheelMaxDistance, Color.green);
			}
			//Friction stuff

		}
	}
}