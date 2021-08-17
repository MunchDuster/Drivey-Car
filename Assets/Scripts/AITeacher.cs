using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class AITeacher : MonoBehaviour
{
    [Header("Batch and generation settings")]
    public int botsPerBatch = 100;
    public int batches = 20;
    public float timePerBatch = 15;
    public float timeIncreasePerGen = 1;
    public int toppersTakenPerBatch = 10;
    public int toppersTakenPerGeneration = 10;
    public int toppersTakenOverall = 10;

    [Header("Bot settings")]
    public int botMiddleLayers = 2;
    public int botMiddleLayerNeurons = 10;
    [Range(0f, 1f)]
    public float mutationChance = .1f;
    
    public Transform spawnPoint;
    public Transform botParent;
    
    public GameObject prefab;
    public SetupBotInput botSetupper;

    [Header("UI")]
    public TMP_Text generationText;
    public TMP_Text batchText;
    public TMP_Text botsText;
    public TMP_Text timeText;
    
    public TMP_InputField botsPerBatchInput;
    public TMP_InputField batchesPerGenerationInput;
    
    
    //private vars
    
    private BotInput[] BatchBots;
    private NeuralNetwork[][] GenerationNets;
    
    private NeuralNetwork[] OverallBestNets;
    private NeuralNetwork[] GenerationBestNets;
    
    private int batch;
    private int generation;

    private float batchRunTime;
    private float roundStartTime = 10000000000;//Set to big number so that round doesn't start before use starts it

    private int[] netLayers;
    GameSettings gameSettings;
    
    private SaveData loadedData;
    
    //Start is called before the first frame
    void Start()
    {
        //add Input listeners
        botsPerBatchInput.onEndEdit.AddListener(delegate{SetBotsperBatch(botsPerBatchInput.text);});
        batchesPerGenerationInput.onEndEdit.AddListener(delegate{SetBatchesPerGen(batchesPerGenerationInput.text);});
        //get game settings
        gameSettings = GameObject.Find("Settings").GetComponent<GameSettings>();
        
        if (!gameSettings.isAIActive)
        {
            Debug.Log("YEET");
            Destroy(gameObject);
        }
        
    }
    // Update is called once per frame
    void Update()
    {
        //if the time since the roundhas started is more than the allowed time, start new round.
        if (Time.time - roundStartTime >= batchRunTime)
        {
            NextRound();
        }
        else
        {
            float timeleft = (int)(batchRunTime - (Time.time - roundStartTime));
            timeText.text = "Time left: " + timeleft;
        }
    }
    
    
    void SetBotsperBatch(string text)
    {
        try
        {
            botsPerBatch = int.Parse(botsPerBatchInput.text);
        }
        catch (System.Exception)
        {
            Debug.Log("Unable to parse.");
        }
    }
    void SetBatchesPerGen(string text)
    {
        try
        {
            batches = int.Parse(batchesPerGenerationInput.text);
        }
        catch (System.Exception)
        {
            Debug.Log("Unable to parse.");
        }
    }
    
    
    public void BeginTeaching()
    {
        batchRunTime = timePerBatch;

        //setup layering structure for neural networks
        netLayers = new int[botMiddleLayers + 2];

        netLayers[0] = prefab.GetComponent<BotInput>().getInputLength();
        for (int i = 0; i < botMiddleLayers; i++)
        {
            netLayers[i + 1] = botMiddleLayerNeurons;
        }
        netLayers[botMiddleLayers + 1] = 2;
        
        //Lists init
        BatchBots = new BotInput[batches];
        GenerationNets = new NeuralNetwork[batches][];
        
        OverallBestNets = new NeuralNetwork[toppersTakenOverall];
        GenerationBestNets = new NeuralNetwork[toppersTakenPerGeneration];
        
        //Init generation
        if (gameSettings.startWithSaved)
        {
            loadedData = SaveSystem.Load(gameSettings.loadIndex);
            if (loadedData != null)
            {
                //Load success, use loaded nets
                OverallBestNets = loadedData.overallBestNets;
                //Set gen and batch
                generation = loadedData.generation;
                batch = loadedData.batch;
                //Mutate and go
                GenerateNewNets();
            }
            else
            {   
                //Load failed, generate fresh batch
                GenerateRandomGeneration();
            }
        }
        else
        {
            //Start gen from fresh
            GenerateRandomGeneration();
        }
        
        //Start batch
        roundStartTime = Time.time;
        SpawnBots();
        
        updateText();
        
        //Fill the generation best
        for(int i=0;i < toppersTakenPerGeneration; i++)
        {
            GenerationBestNets[i] = GenerationNets[batch][i];
        }
    }

    void GenerateRandomGeneration()
    {
        //Init gen and batch
        generation = 0;
        batch = 0;
    
        for (int b = 0; b < batches; b++)
        {
            NeuralNetwork[] batchNets = new NeuralNetwork[botsPerBatch];
            for (int i = 0; i < botsPerBatch; i++)
            {
                //copy a reandom network crossed between two by a reandom amount in overall bests
                NeuralNetwork net = GenerateRandomNet();
                batchNets[i] = net;
            }
            GenerationNets[b] = batchNets;
        }
        for (int i = 0; i < toppersTakenOverall; i++)
        {
            OverallBestNets[i] = GenerationNets[0][i];
        }
    }
    
    NeuralNetwork GenerateRandomNet()
    {
        //make the neural network
        NeuralNetwork net = new NeuralNetwork(netLayers);
        return net;
    }
    //Starts next batch or generation
    void NextGeneration()
    {
        //Reset batch number
        batch = 0;
        //increment generation number
        generation++;
        
        Debug.Log("GENERATION " + generation);
        
        //increase batch run time
        batchRunTime += timeIncreasePerGen;
        
        //Update Overall Bests
        CompareGenerationToOverall();
        
        //Clear generation best list
        System.Array.Clear(GenerationBestNets,0,GenerationBestNets.Length);
        
        //Populate Generatinon nets
        GenerateNewNets();
        
        //Fill the generation best
        for(int i=0;i < toppersTakenPerGeneration; i++)
        {
            GenerationBestNets[i] = GenerationNets[0][i];
        }
    }
    void SaveCurrentOveralls()
    {
        loadedData.batch = batch;
        loadedData.generation = generation;
        loadedData.overallBestNets = OverallBestNets;
        //Save
        SaveSystem.SaveOld(gameSettings.loadIndex,loadedData);
    }
    void NextRound()
    {
        CompareBatchToGeneration();
        
        batch++;
        if (batch > batches)
        {
            //start new generation
           NextGeneration();
        }

        //start new batch
        Debug.Log("Starting Batch " + batch);

        updateText();
        
        roundStartTime = Time.time;
        DestroyBots();
        SpawnBots();
    }
    void updateText()
    {
        generationText.text = "Generation: " + generation;
        batchText.text = "Batch: " + batch + "/" + batches;
        botsText.text = "Bots per batch: " + botsPerBatch;
    }
    //generate a new genereation of nets mutated off the best overalls
    void GenerateNewNets()
    {
        for(int b = 0; b < batches; b++)
        {
            NeuralNetwork[] batchNets = new NeuralNetwork[botsPerBatch];
            
            for (int i = 0; i < botsPerBatch; i++)
            {
                //copy a reandom network crossed between two by a reandom amount in overall bests
                NeuralNetwork net = new NeuralNetwork(OverallBestNets[Random.Range(0, toppersTakenOverall - 1)]);//lerpNets(OverallBestNets[Random.Range(0, toppersTakenOverall)],OverallBestNets[Random.Range(0, toppersTakenOverall)],Random.Range(0f,1f));

                //mutate
                MutateNet(ref net, mutationChance);
                
                //add to batch
                batchNets[i] = net;
            }
            GenerationNets[b] = batchNets;
        }
    }
    NeuralNetwork lerpNets(NeuralNetwork a, NeuralNetwork b, float lerp)
    {
        if (a.GetLayers() != b.GetLayers()) Debug.LogException(new System.Exception("Cannot cross unmatching networks."));

        NeuralNetwork ans = new NeuralNetwork(a.GetLayers());
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

        float[][] aBiases = a.GetBiases();
        float[][] bBiases = b.GetBiases();
        float[][] lerpBiases = a.GetBiases();
        for (int i = 0; i < aBiases.Length; i++)
        {
            for (int j = 0; j < aBiases.Length; j++)
            {
                lerpBiases[i][j] = Mathf.Lerp(aBiases[i][j], bBiases[i][j], lerp);
            }
        }
        ans.CopyBiases(lerpBiases);

        return ans;
    }
    //goes through batch and get top (toppersTakenPerBatch) scoring nets
    void SortBatch()
    {
        //organise batch
        for (int i = 0; i < toppersTakenPerBatch; i++)
        {
            int replacementIndex = -1;
            for(int indexInBatch = i + 1; indexInBatch < botsPerBatch; indexInBatch++)
            {
                if(BatchBots[indexInBatch].network.GetFitness() > BatchBots[i].network.GetFitness())
                {
                    replacementIndex = indexInBatch;
                }
            }
            if(replacementIndex != -1)
            {
                BotInput temp = BatchBots[replacementIndex];
                BatchBots[replacementIndex] = BatchBots[i];
                BatchBots[i] = temp;
                
                Debug.Log("Batch " + i + ": " + BatchBots[i].network.GetFitness());
            }
        }
    }
    
    //goes through generation best and compare to overall bests
    void CompareBatchToGeneration()
    {        
        for (int i = 0; i < toppersTakenPerGeneration; i++)
        {   
                bool placed = false;
                for(int g = 0; g < toppersTakenPerGeneration && !placed; g++)
                {
                    if(BatchBots[i].network.GetFitness() > GenerationBestNets[g].GetFitness())
                    {
                        placed = true;
                        Insert(ref GenerationBestNets, g, BatchBots[i].network);
                    }
                }
                Debug.Log("Generation " + i + ": " + GenerationBestNets[i].GetFitness());
            
        }  
    }
    void Insert(ref NeuralNetwork[] array, int index, NeuralNetwork net)
    {
        for(int i = index + 1; i < array.Length; i++)
        {
            array[i] = array[i - 1];
        }
        array[index] = net;
    }
    //goes through best of batch and compare to generation bests
    void CompareGenerationToOverall()
    {
        /////////////////////////
        for (int genIndex = 0; genIndex < toppersTakenPerGeneration; genIndex++)
        {
            bool putIn = false;
            for (int overIndex = 0; overIndex < toppersTakenOverall && !putIn; overIndex++)
            {
                if (GenerationBestNets[genIndex].GetFitness() > OverallBestNets[overIndex].GetFitness())
                {
                    putIn = true;
                    Insert(ref OverallBestNets, overIndex, GenerationBestNets[genIndex]);
                }
            }
        }

        for(int i=0; i<toppersTakenOverall; i++)
        {
            Debug.Log("OVERALL BESTNET: " + OverallBestNets[0].GetFitness());
        }
    }
    //spawns bots into map with nueral networks based of overall bests
    void SpawnBots()
    {
        Debug.Log("SPaWING");
        BotInput[] batchBots = new BotInput[botsPerBatch];
            
            for (int i = 0; i < botsPerBatch; i++)
            {
                NeuralNetwork net = GenerationNets[batch][i];

                //create gameObject
                GameObject newBotObj = Instantiate(prefab, spawnPoint.position, spawnPoint.rotation, botParent);
                
                //assign net to bot and enable bot inputs to its car
                BotInput bot = newBotObj.GetComponent<BotInput>();
                bot.network = net;
                botSetupper.SetupBot(bot);
                bot.inputEnabled = true;
                
                //add bot to list
                batchBots[i] = bot;
            }
    }
    //removes bots from map and clears bot list
    void DestroyBots()
    {
        foreach (BotInput bot in BatchBots)
            {
                Destroy(bot.gameObject);
            }
    }
    //modify a neural network slightly (depending on chance)
    public void MutateNet(ref NeuralNetwork network, float chance)
    {
        //no chance of mutation, leave as be
        if (chance <= 0) return;

        //adjust weights
        float[][][] weights = network.GetWeights();
        for (int i = 0; i < weights.Length; i++)
        {
            for (int j = 0; j < weights[i].Length; j++)
            {
                for (int k = 0; k < weights[i][j].Length; k++)
                {
                    float value = Random.Range(0f, 1f);
                    if (value <= chance)
                    {
                        Modify(ref weights[i][j][k]);
                    }
                }
            }
        }
        network.CopyWeights(weights);

        //adjust biases
        float[][] biases = network.GetBiases();
        for (int i = 0; i < biases.Length; i++)
        {
            for (int j = 0; j < biases[i].Length; j++)
            {
                float value = Random.Range(0f, 1f);
                if (value <= chance)
                {
                    Modify(ref biases[i][j]);
                }
            }
        }
        network.CopyBiases(biases);
    }
    //modification used in mutateNet
    void Modify(ref float value)
    {
        float chance = Random.Range(0f, 1f);
        if (chance <= 0.2f)
            value += Random.Range(0f, 1f);
        else if (chance <= 0.4f)
            value -= Random.Range(-1f, 0f);
        else if (chance <= 0.6f)
            value *= Random.Range(1f, 2f);
        else if (chance <= 0.8f)
            value *= -1;
        else
            value /= Random.Range(1f, 2f);
    }
}
