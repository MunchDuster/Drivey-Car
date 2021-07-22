using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WheelFollowCollider : MonoBehaviour
{
	public WheelCollider wheelC;
	private Vector3 wheelCCenter;
	private Quaternion wheelCForward;
	private RaycastHit hit;
	float rotation;

	void Update()
	{
		wheelCCenter = wheelC.transform.TransformPoint(wheelC.center);
		wheelCForward = wheelC.transform.rotation;
		float steerAngle = wheelC.steerAngle;
		rotation += Mathf.Rad2Deg * (2 * Mathf.PI * wheelC.rpm / 60 * Time.deltaTime);
		Quaternion rot = new Quaternion();
		rot = Quaternion.Euler(rotation, steerAngle, 0);

		if (Physics.Raycast(wheelCCenter, -wheelC.transform.up, out hit, wheelC.suspensionDistance + wheelC.radius))
		{
			transform.position = hit.point + (wheelC.transform.up * wheelC.radius);
			transform.rotation = wheelCForward * rot;
		}
		else
		{
			transform.position = wheelCCenter - (wheelC.transform.up * wheelC.suspensionDistance);
			transform.rotation = wheelCForward * rot;
		}
	}
}