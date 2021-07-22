using UnityEngine;

public class CameraFollow : MonoBehaviour
{
	public float camLerp = 0.95f;
	public Vector3 camOffset = new Vector3(0, 3, -5);
	public Transform cam;
	public Rigidbody rb;
	void Start()
	{
		cam.position = transform.TransformPoint(camOffset * 2);
		cam.LookAt(transform);
	}

	// Update is called once per frame
	void LateUpdate()
	{
		/*
		if (rb.velocity.magnitude > 0.1f)
		{
			Vector3 directionOffset = Vector3.Scale((transform.forward - rb.velocity.normalized), new Vector3(1, 0, 1));
			Debug.DrawRay(transform.position, rb.velocity);
			Quaternion rotationOffset = Quaternion.LookRotation(directionOffset, Vector3.up);
			Vector3 transformApplied = transform.TransformPoint(camOffset);//Vector3.Lerp(cam.position, transform.TransformPoint(camOffset), camLerp);
			cam.position = transform.position + rotationOffset * transformApplied;
		}
		else
		{
			Vector3 transformApplied = Vector3.Lerp(cam.position, transform.TransformPoint(camOffset), camLerp * Time.deltaTime);
			cam.position = transformApplied;
		}
		*/
		Vector3 transformApplied = Vector3.Lerp(cam.position, transform.TransformPoint(camOffset), camLerp * Time.deltaTime);
		cam.position = transformApplied;
		cam.LookAt(transform);
	}
}
