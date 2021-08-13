using UnityEngine;

public class SetupRaceBot : SetupBotInput
{
    public RaceBotSettings settings;
    public override void SetupBot(BotInput genericBot)
    {
        RaceBot bot = genericBot as RaceBot;
        bot.settings = settings;
    }
}
