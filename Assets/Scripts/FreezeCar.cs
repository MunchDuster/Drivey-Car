using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FreezeCar : MonoBehaviour
{
    private void OnTriggerEnter(Collider other) {
        BotInput bot = other.gameObject.GetComponent<BotInput>();
        if(bot != null)
        {
            bot.Freeze();
        }
    }
}
