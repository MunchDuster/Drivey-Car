using UnityEngine;

[System.Serializable]
[CreateAssetMenu(fileName = "Chase Bot Settings", menuName = "Bot Settings/Chase Bot Settings", order = 1)]
public class ChaseBotSettings : ScriptableObject
{

    public float scoreMultiplier = 1;
    public float activateBeaconScore = 100;
}