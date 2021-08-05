using UnityEngine;

public class SetupChaseBot : SetupBotInput
{
    public Transform target;
    public Rigidbody targetRb;
    public ChaseBotSettings settings;
    public override void SetupBot(BotInput genericBot)
    {
        
        ChaseBot bot = genericBot as ChaseBot;

        bot.target = target;
        bot.targetRb = targetRb;
        bot.settings = settings;
    }
}
