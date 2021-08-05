using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class AITeacher : MonoBehaviour
{
    [Header("Batch and generation settings")]
    public int unitsPerBatch = 100;
    public int batchesPerGeneration = 20;
    public float timePerBatch = 15;
    public float timeIncreasePerGen = 1;
    public int toppersTakenPerBatch = 10;
    public int toppersTakenPerGeneration = 10;
    public int toppersTakenOverall = 10;
    [Header("Bot settings")]
    public int botMiddleLayers = 2;
    public int botMiddleLayerNeurons = 10;
    [Range(0f,1f)]
    public float mutationChance = .1f;
    public GameObject prefab;
    public SetupBotInput botSetupper;
    public Transform spawnPoint;
    public bool startWithSaved = true;
    [Header("UI")]
    public Text generationText;
    public Text batchText;
    public Transform botParent;
    private List<BotInput> Bots;
    private List<NeuralNetwork> OverallBestNets;
    private List<NeuralNetwork> GenerationBestNets;
    private List<NeuralNetwork> BatchBestNets;
    private List<NeuralNetwork> GenerationNets;
    private int batch = 0;
    private int generation = 1;
    
    private float batchRunTime;
    private float roundStartTime;
    //Start is called before the first frame
    void Start()
    {
        batchRunTime = timePerBatch;

        Bots = new List<BotInput>();

        OverallBestNets = new List<NeuralNetwork>();
        GenerationBestNets = new List<NeuralNetwork>();
        BatchBestNets = new List<NeuralNetwork>();
        GenerationNets = new List<NeuralNetwork>();
        if(startWithSaved)
        {
            List<NeuralNetwork> loadedData = SaveSystem.Load();
            Debug.Log("Loaded overall bests: ");
            for (int i = 0; i < loadedData.Count;i++)
            {
                Debug.Log(loadedData[i]);
            }
            Debug.Log("Finished loading..");
            if (loadedData != null)
                {
                    OverallBestNets = loadedData;
                    GenerateNewNets();
                }
                else
                {
                    GenerateRandomGeneration();
                }
        }
        else
        {
            GenerateRandomGeneration();
        }
        
        
        NextRound();
    }

    void GenerateRandomGeneration()
    {
        for (int i = 0; i < batchesPerGeneration * unitsPerBatch;i++)
        {
            //copy a reandom network crossed between two by a reandom amount in overall bests
            NeuralNetwork net = GenerateRandomNet();
            GenerationNets.Add(net);
        }
        for (int i = 0; i < toppersTakenOverall; i++)
        {
            OverallBestNets.Add(GenerationNets[i]);
        }
    }
    NeuralNetwork GenerateRandomNet()
    {
        //setup layering structure for nneural network
        int[] netLayers = new int[botMiddleLayers + 2];

        netLayers[0] = prefab.GetComponent<BotInput>().getInputLength();
        for (int i = 0; i < botMiddleLayers;i++)
        {
            netLayers[i + 1] = botMiddleLayerNeurons;
        }
        netLayers[botMiddleLayers + 1] = 2;

        //log the setup for neural network
        string layersStr = "";
        for (int i = 0; i < netLayers.Length;i++)
        {
            layersStr += " " + netLayers[i];
        }
        Debug.Log("LAYERS: " + layersStr);

        //ake the neural network
        NeuralNetwork net = new NeuralNetwork(netLayers);

        //assign random weights and biases
        float[][][] weights = net.GetWeights();

        for (int i = 0; i < weights.Length; i++)
        {
            for (int j = 0; j < weights[i].Length; j++)
            {
                for (int k = 0; k < weights[i][j].Length; k++)
                {
                    weights[i][j][k] = Random.Range(-1f, 1f);
                }
            }
        }
        net.CopyWeights(weights);

        float[] biases = net.GetBiases();
        for (int i = 0; i < biases.Length; i++)
        {
            biases[i] = Random.Range(-1f, 1f);
        }
        net.CopyBiases(biases);

        return net;
    }
    // Update is called once per frame
    void Update()
    {
        //if the time since the roundhas started is more than the allowed time, start new round.
        if(Time.time - roundStartTime >= batchRunTime)
        {
            NextRound();
        }
    }   
    //Starts next batch or generation
    void NextRound()
    {
        roundStartTime = Time.time;
        batch++;

        GetBestOfBatch();
        CompareBatchToGeneration();

        if(batch > batchesPerGeneration)
        {
            //start new generation
            batch = 1;
            generation++;
            Debug.Log("GENERATION " + generation);
            batchRunTime += timeIncreasePerGen;

            CompareGenerationToOverall();
            SaveSystem.Save(OverallBestNets);
            ClearLists();
            GenerateNewNets();
        }
        
        //start new batch
        Debug.Log("Starting Batch " + batch);

        generationText.text = "Generation: " + generation;
        batchText.text = "Batch: " + batch + "/" + batchesPerGeneration;
        ClearBots();
        SpawnBots();
    }
    void GenerateNewNets()
    {
        GenerationNets.Clear();
        for (int i = 0; i < batchesPerGeneration * unitsPerBatch;i++)
        {
            //copy a reandom network crossed between two by a reandom amount in overall bests
            NeuralNetwork net = new NeuralNetwork(OverallBestNets[Random.Range(0, toppersTakenOverall)]);//lerpNets(OverallBestNets[Random.Range(0, toppersTakenOverall)],OverallBestNets[Random.Range(0, toppersTakenOverall)],Random.Range(0f,1f));
            //mutate slightly
            MutateNet(ref net, mutationChance);

            GenerationNets.Add(net);
        }
    }
    NeuralNetwork lerpNets(NeuralNetwork a, NeuralNetwork b, float lerp)
    {
        if(a.layers != b.layers) Debug.LogException(new System.Exception("Cannot cross unmatching networks."));

        NeuralNetwork ans = new NeuralNetwork(a.layers);
        float[][][] aWeights = a.GetWeights();
        float[][][] bWeights = b.GetWeights();
        float[][][] lerpWeights = a.GetWeights();
        for (int i = 0; i < aWeights.Length; i++)
        {
            for (int j = 0; j < aWeights[i].Length; j++)
            {
                for (int k = 0; k < aWeights[i][j].Length; k++)
                {
                    lerpWeights[i][j][k] = Mathf.Lerp(aWeights[i][j][k], bWeights[i][j][k], lerp);
                }
            }
        }
        ans.CopyWeights(lerpWeights);
        
        float[] aBiases = a.GetBiases();
        float[] bBiases = b.GetBiases();
        float[] lerpBiases = a.GetBiases();
        for (int i = 0; i < aBiases.Length; i++)
        {
            lerpBiases[i] = Mathf.Lerp(aBiases[i], bBiases[i], lerp);
        }
        ans.CopyBiases(lerpBiases);

        return ans;
    }
    void ClearLists(){
        GenerationBestNets.Clear();
        BatchBestNets.Clear();
    }
    //goes through batch and get top (toppersTakenPerBatch) scoring nets
    void GetBestOfBatch()
    {

        BatchBestNets.Clear();
        for (int i = 0; i < toppersTakenPerBatch && i < Bots.Count; i++)
        {
            BatchBestNets.Add(Bots[i].network);
        }
        for (int batchIndex = 0; batchIndex < Bots.Count; batchIndex++)
        {   
            bool putIn = false;
            for (int bestOfBatchIndex = 0; bestOfBatchIndex < BatchBestNets.Count && !putIn; bestOfBatchIndex++)
            {
                if (Bots[batchIndex].network.fitness > BatchBestNets[bestOfBatchIndex].fitness)
                {
                    putIn = true;
                    BatchBestNets.Insert(bestOfBatchIndex, Bots[batchIndex].network);
                }
            }
        }
        TrimList(ref BatchBestNets, toppersTakenPerBatch - 2);

        if(BatchBestNets.Count > 0)
            Debug.Log("Batch best: " + BatchBestNets[0].fitness);
    }
    //goes through generation best and compare to overall bests
    void CompareBatchToGeneration()
    {
        GenerationBestNets.Clear();
        for (int i = 0; i < toppersTakenPerGeneration && i < Bots.Count; i++)
        {
            GenerationBestNets.Add(Bots[i].network);
        }
        for (int batchIndex = 0; batchIndex < BatchBestNets.Count; batchIndex++)
        {
            bool putIn = false;
            for (int genIndex = 0; genIndex < GenerationBestNets.Count && !putIn; genIndex++)
            {
                if (BatchBestNets[batchIndex].fitness > GenerationBestNets[genIndex].fitness)
                {
                    putIn = true;
                    GenerationBestNets.Insert(genIndex, BatchBestNets[batchIndex]);
                }
            }
        }
        TrimList(ref GenerationBestNets, toppersTakenPerGeneration);

        
    }
    //removes extra list items
    void TrimList(ref List<NeuralNetwork> networks, int lastIndex)
    {
        if(networks == null || networks.Count <= lastIndex) return;
        networks.RemoveRange(lastIndex + 1, (networks.Count - 1 - (lastIndex + 1)));
    }
    //goes through best of batch and compare to generation bests
    void CompareGenerationToOverall()
    {
        
        for (int genIndex = 0; genIndex < GenerationBestNets.Count; genIndex++)
        {
            bool putIn = false;
            for (int overIndex = 0; overIndex < OverallBestNets.Count && !putIn; overIndex++)
            {
                if (GenerationBestNets[genIndex].fitness > OverallBestNets[overIndex].fitness)
                {
                    putIn = true;
                    OverallBestNets.Insert(overIndex, GenerationBestNets[genIndex]);
                }
            }
        }
        TrimList(ref OverallBestNets, toppersTakenOverall);

        if(OverallBestNets.Count > 0)
            Debug.Log("OVERALL BESTNET: " + OverallBestNets[0].fitness);
    }
    //spawns bots into map with nueral networks based of overall bests
    void SpawnBots()
    {
        for (int i = 0; i < unitsPerBatch; i++)
        {
            int index = (batch - 1) * unitsPerBatch + i;
            NeuralNetwork net = GenerationNets[index];


            //create gameObject
            GameObject newBotObj = Instantiate(prefab, spawnPoint.position, spawnPoint.rotation, botParent);
            //assign net to bot and enable bot inputs to its car
            BotInput bot = newBotObj.GetComponent<BotInput>();
            bot.network = net;
            botSetupper.SetupBot(bot);
            bot.inputEnabled = true;
            //add bot to list
            Bots.Add(bot);
        }
    }
    //removes bots from map and clears bot list
    void ClearBots()
    {
        foreach(BotInput bot in Bots)
        {
            Destroy(bot.gameObject);
        }
        Bots.Clear();
    }
    //modify a neural network slightly (depending on chance)
    public void MutateNet(ref NeuralNetwork network, float chance)
    {
        if(chance <= 0) return;
        float[][][] weights = network.GetWeights();
        for (int i = 0; i < weights.Length; i++)
        {
            for (int j = 0; j < weights[i].Length; j++)
            {
                for (int k = 0; k < weights[i][j].Length; k++)
                {
                    float value = Random.Range(0f, 1f);
                    if(value <= chance)
                    {
                        Modify(ref weights[i][j][k]);
                    }
                }
            }
        }
        network.CopyWeights(weights);

        float[] biases = network.GetBiases();
        for (int i = 0; i < biases.Length; i++)
        {
            float value = Random.Range(0f, 1f);
            if(value <= chance)
            {
                Modify(ref biases[i]);
            }
        }
        network.CopyBiases(biases);
    }
    //modification used in mutateNet
    void Modify(ref float value)
    {
        float chance = Random.Range(0, 1);
        if(chance <= 0.2f)
            value += Random.Range(-1f, 1f);
        else if(chance <= 0.4f)
            value *= Random.Range(1f, 2f);
        else if(chance <= 0.6f)
            value *= Random.Range(-1f, -2f);
        else
            value /= Random.Range(1f, 2f);
    }
}
