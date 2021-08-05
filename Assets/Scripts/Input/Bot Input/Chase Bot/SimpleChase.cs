using UnityEngine;
using UnityEngine.InputSystem;

public class SimpleChase : InputManager
{
    public Transform target;
    
    public Transform rightRaycastPoint;
    public Transform leftRaycastPoint;
    public float maxLength = 100;
    public bool drawRays = true;
    public LayerMask layerMask;
    public float waitUntilBackOut = 2;
    public int rays = 5;
    public float minimumDistance = 3;
    float lastDistance;
    public PlayerConnection playerConnection;
    private float timeSinceStoppedMoving = 0;
    private bool isTimingSinceStopped = false;
    private Rigidbody rb;
    private void Start() 
    {
        rb = GetComponent<Rigidbody>();
        playerConnection.OnPlayerJoin += OnPlayerJoin;
    }
    void OnPlayerJoin(PlayerInput input)
    {
        target = input.gameObject.transform;
        lastDistance = (target.position - transform.position).magnitude;
    }
    public float backingOutTime = 1.5f;
    bool backingOut = false;
    private float timeSinceStartedBackingOut = 0;
    private void Update() {
        if(target == null) return;


        if(backingOut)
        {
            timeSinceStartedBackingOut += Time.deltaTime;
            if(timeSinceStartedBackingOut >= backingOutTime)
            {
                backingOut = false;
            }
            else
            {
                vertical = -1;
                horizontal = 0;

                return;
            }
            
        }
        
        bool blockedLeft = Physics.Raycast(leftRaycastPoint.position, transform.forward, maxLength, layerMask);
        bool blockedRight = Physics.Raycast(rightRaycastPoint.position, transform.forward, maxLength, layerMask);
        if(blockedLeft && blockedRight)
        {
            //find another way
            bool foundWay = false;
            for (int i = 0; i < rays; i++)
            {
                float yAngle = i * 180 / (rays - 1) - 90;
                Vector3 rawDirection = Quaternion.Euler(0, yAngle, 0) * Vector3.forward;//new Vector3(-settings.maxLength, Mathf.Cos(180 * (i - 1) * Mathf.Deg2Rad),0);
                Vector3 direction = transform.TransformDirection(rawDirection);

                //Vector3 direction = (Quaternion.Euler(0, 180 * (i - 1) - 90, 0) * transform.forward);
                Vector3 raycastPos = Vector3.Lerp(leftRaycastPoint.position, rightRaycastPoint.position, 0.5f);
                if (Physics.Raycast(raycastPos, direction, out RaycastHit hit, maxLength, layerMask))
                {
                    if(drawRays)Debug.DrawRay(raycastPos, hit.distance * direction,Color.red);
                    //No path here
                }
                else
                {
                    if(drawRays)Debug.DrawRay(raycastPos, direction * maxLength,Color.green );
                    //Bingo
                    if(i > rays/2f)
                        horizontal = -1;
                    else
                        horizontal = 1;
                    vertical = 1;
                    foundWay = true;
                    break;
                }
                if(!foundWay)
                {
                    backingOut = true;
                }
            }
        }
        else if(!blockedLeft && !blockedLeft)
        {
            Vector3 raycastPos = Vector3.Lerp(leftRaycastPoint.position, rightRaycastPoint.position, 0.5f);
            if(drawRays)Debug.DrawRay(raycastPos, transform.forward * maxLength,Color.blue );

            //eyes on the prize
            Vector3 targetDir = (target.position - transform.position).normalized;
            float angle = Vector3.SignedAngle(targetDir, transform.forward, Vector3.up);

            if(angle >= 5)
                horizontal = -1;//Mathf.Lerp(0,-1,Mathf.Clamp(angle/20,0,1));
            else if(angle <= 5)
                horizontal = 1;//Mathf.Lerp(0,1,Mathf.Clamp(angle/20,-1,0));
            else
                horizontal = 0;

            float distance = (target.position - transform.position).magnitude;

            if(distance > minimumDistance)
            {
                if(distance > lastDistance)// distance is increasing
                    vertical = 1;
                else
                    vertical = 0;
            }
            else
            {
                vertical = -1;
            }
        }
        else if(blockedLeft)
        {
            //blocked Left Side only
            vertical = 1;
            horizontal = -1;
        }
        else
        {
            //blocked Right side only
            vertical = 1;
            horizontal = 1;
        }
        if(rb.velocity.magnitude < 0.1f)
        {
            if(isTimingSinceStopped)
            {
                timeSinceStoppedMoving += Time.deltaTime;
            }
            else
            {
                isTimingSinceStopped = true;
                timeSinceStoppedMoving = 0;
            }
            if(timeSinceStoppedMoving >= waitUntilBackOut)
            {
                backingOut = true;
                isTimingSinceStopped = false;
                timeSinceStartedBackingOut = 0;
            }
        }
    }
}
