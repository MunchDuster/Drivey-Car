using UnityEngine;

public class TargetMovement : MonoBehaviour
{
    public float radiusBounds = 100;
    public float speed = 10;
    public float turnSpeed = 90;
    public float maxTurnAngle = 20;


    private float turnAngle = 0;
    private float turnAngleVel = 1;
    private float timeUntilNextTurn;

    private void Start() {
        timeUntilNextTurn = Time.time + Random.Range(0.3f, 3f);
    }
    // Update is called once per frame
    void Update()
    {
        if(Time.time >= timeUntilNextTurn)
        {
            turnAngleVel *= -1;
            timeUntilNextTurn = Time.time + Random.Range(0.3f, 3f);
        }
        
        turnAngle += turnAngleVel * turnSpeed * Time.deltaTime;

        turnAngle = Mathf.Clamp(turnAngle, -maxTurnAngle, maxTurnAngle);

        transform.Rotate(new Vector3(0, turnAngle * Time.deltaTime, 0));
        transform.position += transform.forward * speed * Time.deltaTime;

        if(transform.position.magnitude > radiusBounds)
        {
            transform.Rotate(new Vector3(0, 180, 0));
        }
    }
}
