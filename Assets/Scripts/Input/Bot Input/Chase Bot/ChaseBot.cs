using UnityEngine;

public class ChaseBot : BotInput
{
    public ChaseBotSettings settings;
    public Transform target;
    public Rigidbody targetRb;
    public override float[] getInputs()
    {
        Vector3 directionToTarget = target.position - transform.position;
        float dotProduct = Vector3.Dot(transform.forward, directionToTarget.normalized);
        float angleToTarget = Mathf.Acos(dotProduct);

        float distanceToTarget = directionToTarget.magnitude;

        float[] inputs = new float[4];
        
        inputs[0] = rb.angularVelocity.y;
        inputs[1] = rb.velocity.magnitude;
        inputs[2] = angleToTarget;
        inputs[3] = distanceToTarget;

        return inputs;
    }
    public override void UpdateFitness()
    {
        
        //not moving fast enough to stabily calculate dotproduct 
        if(rb.velocity.magnitude < 1) return;

        //get dot product of movement dirction compared to car forward direction
        Vector3 movementDirection = Vector3.Scale(rb.velocity.normalized, new Vector3(1, 0, 1));
        Vector3 directionTarget = Vector3.Scale((target.position - transform.position).normalized, new Vector3(1, 0, 1));
        float dotProduct = Vector3.Dot(movementDirection, directionTarget);

        //if dot product is less than zero car is moving backwards
        //I will only reward car if it is moving forwards (or sideways for them sweet drifts)
        if(dotProduct > 0)
        {
            float distance = (target.position - transform.position).magnitude;
            network.AddFitness(settings.scoreMultiplier * dotProduct / distance);
            if(network.fitness > settings.activateBeaconScore)
                beacon.SetActive(true);
        }
    }
    public override int getInputLength()
    {
        return 4;
    }
}
