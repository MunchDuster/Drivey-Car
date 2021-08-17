using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrainAI : MonoBehaviour
{
    public GameObject player;
    public int[] InnerNeuralNetworkLayers;
    public string trainFileName;
    public RaceBotSettings botSettings;
    [Range(0,1)]
    public float learnRate = 0.2f;
    
    private delegate void Function();
    private Function OnUpdate;
    
    private RaceBot bot;
    private NeuralNetwork net;
    [System.Serializable]
    public struct TrackingData {
        public float[] inputs;
        public float[] outputs;
        public TrackingData(float[] _inputs, float[] _outputs){
            inputs = _inputs;
            outputs = _outputs;
        }
    }
    private List<TrackingData> playerTrackedData;
    private UserInput userInput;
    //use   
    public void StartRecordingPlayer(UserInput _userInput)
    {
        userInput = _userInput;
        OnUpdate += UpdateTracker;
    }
    public void StopTrackingPlayer()
    {
        userInput = null;
        OnUpdate -= UpdateTracker;
    }
    private void UpdateTracker()
    {
        float[] inputs = bot.getInputs();
        float[] outputs = net.FeedForward(inputs);
        playerTrackedData.Add(new TrackingData(
            inputs,
            outputs
        ));
    }
    
    // Start is called before the first frame update
    void Start()
    {
        playerTrackedData = new List<TrackingData>();
        
        List<int> layers = new List<int>()  {bot.getInputLength()};
        for(int i=0; i<InnerNeuralNetworkLayers.Length; i++)
        {
            layers.Add(InnerNeuralNetworkLayers[i]);
        }
        layers.Add(2);
        net = new NeuralNetwork(layers.ToArray());
    }
    
    private void BackPropagate(TrackingData trackData)
    {
        float[][][] weights = net.GetWeights();
        float[][] biases = net.GetBiases();
        
        net.FeedForward(trackData.inputs);
        
        float[][] neurons = net.GetNeurons();
        /*
        for(int r = 0; r < weights.Length; r++)
        {
            for(int c = 0; c <  )
        }
        */
    }
    private void TrainTheAI()
    {
        
        foreach(TrackingData trackData in playerTrackedData)
        {
            BackPropagate(trackData);
        }
    }

    // Update is called once per frame
    void Update()
    {
        OnUpdate();
    }
}
