using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Checkpoint : MonoBehaviour
{
    public float checkpointNumber = 1;
    private void OnTriggerEnter(Collider other) {
        RaceBot bot = other.gameObject.GetComponent<RaceBot>();
        if(bot == null)return;
        bot.CheckPoint(checkpointNumber);
    }
}
