public abstract class SetupRaceBot : SetupBotInput
{
    public ChaseBotSettings settings;
    public override void SetupBot(BotInput genericBot)
    {
        ChaseBot bot = genericBot as ChaseBot;
        bot.settings = settings;
    }
}
