using UnityEngine;

[System.Serializable]
[CreateAssetMenu(fileName = "Race Bot Settings", menuName = "Bot Settings/Race Bot Settings", order = 1)]
public class RaceBotSettings : ScriptableObject
{
    public float showOnScore = 90;
    public float distanceScoreMultplier = 1;
    public int noOfRays = 5;
    public float maxLength = 30;
    public float spreadAngle = 180;
    public AnimationCurve downAngle;
    public float downAngleMultiplier = 20;
    public float checkpointBonus = 20;
    public bool drawRays = false;

    public LayerMask layerMask;

}