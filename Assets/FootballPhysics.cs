using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FootballPhysics : MonoBehaviour
{
	public float extraOomph = 10;

	private void OnCollisionEnter(Collision other)
	{
		Debug.Log("Hit" + other.gameObject.tag);
		if (other.gameObject.tag == "Player")
		{
			Debug.Log("Bounce");
			Vector3 point = other.contacts[0].point;
			Vector3 direction = point - transform.position;
			GetComponent<Rigidbody>().AddForce(-direction * extraOomph, ForceMode.VelocityChange);
		}
	}
}
