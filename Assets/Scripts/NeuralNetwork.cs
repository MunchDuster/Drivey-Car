using System.Collections.Generic;
using System;

/// <summary>
/// Neural Network C# (Unsupervised)(Evolutionary)
/// </summary>
[Serializable]
public class NeuralNetwork : IComparable<NeuralNetwork>
{
    public int[] layers; //layers
    private float[][] neurons; //neuron matix
    private float[][][] weights; //weight matrix
    private float[] biases;
    public float fitness; //fitness of the network

    /// <summary>
    /// Initilizes and neural network with random weights
    /// </summary>
    /// <param name="layers">layers to the neural network</param>
    public NeuralNetwork(int[] layers)
    {
        //deep copy of layers of this network 
        this.layers = new int[layers.Length];
        for (int i = 0; i < layers.Length; i++)
        {
            this.layers[i] = layers[i];
        }


        //generate matrix
        InitNeurons();
        InitWeights();
        InitBiases();
        
    }
    /// <summary>
    /// Changes a few weights depending on chance
    /// </summary>
    
    /// <summary>
    /// Deep copy constructor 
    /// </summary>
    /// <param name="copyNetwork">Network to deep copy</param>
    public NeuralNetwork(NeuralNetwork copyNetwork)
    {
        this.layers = new int[copyNetwork.layers.Length];
        for (int i = 0; i < copyNetwork.layers.Length; i++)
        {
            this.layers[i] = copyNetwork.layers[i];
        }

        InitNeurons();
        InitWeights();
        CopyWeights(copyNetwork.weights);
        InitBiases();
        CopyBiases(copyNetwork.biases);

    }

    public float[][][] GetWeights()
    {
        return weights;
    }
    public float[] GetBiases()
    {
        return biases;
    }
    public void CopyBiases(float[] copyBiases)
    {
        for (int i = 0; i < biases.Length - 1; i++)
        {
            biases[i] = copyBiases[i];
        }
    }
    public void CopyWeights(float[][][] copyWeights)
    {
        for (int i = 0; i < weights.Length; i++)
        {
            for (int j = 0; j < weights[i].Length; j++)
            {
                for (int k = 0; k < weights[i][j].Length; k++)
                {
                    weights[i][j][k] = copyWeights[i][j][k];
                }
            }
        }

        
    }

    /// <summary>
    /// Create neuron matrix
    /// </summary>
    private void InitNeurons()
    {
        //Neuron Initilization
        List<float[]> neuronsList = new List<float[]>();

        for (int i = 0; i < layers.Length; i++) //run through all layers
        {
            neuronsList.Add(new float[layers[i]]); //add layer to neuron list
        }

        neurons = neuronsList.ToArray(); //convert list to array
    }
    /// <summary>
    /// Create weights matrix.
    /// </summary>
    private void InitBiases()
    {
        biases = new float[layers.Length - 1];
    }


    /// <summary>
    /// Create weights matrix.
    /// </summary>
    private void InitWeights()
    {

        List<float[][]> weightsList = new List<float[][]>(); //weights list which will later will converted into a weights 3D array

        //itterate over all neurons that have a weight connection
        for (int i = 1; i < layers.Length; i++)
        {
            List<float[]> layerWeightsList = new List<float[]>(); //layer weight list for this current layer (will be converted to 2D array)

            int neuronsInPreviousLayer = layers[i - 1];

            //itterate over all neurons in this current layer
            for (int j = 0; j < neurons[i].Length; j++)
            {
                float[] neuronWeights = new float[neuronsInPreviousLayer]; //neruons weights

                //itterate over all neurons in the previous layer and set the weights randomly between 0.5f and -0.5
                for (int k = 0; k < neuronsInPreviousLayer; k++)
                {
                    //give random weights to neuron weights
                    neuronWeights[k] = UnityEngine.Random.Range(-0.5f, 0.5f);
                }

                layerWeightsList.Add(neuronWeights); //add neuron weights of this current layer to layer weights
            }

            weightsList.Add(layerWeightsList.ToArray()); //add this layers weights converted into 2D array into weights list
        }

        weights = weightsList.ToArray(); //convert to 3D array
    }
    //public List<float> oldScores;

	private float sigmoid(float x){
		return 2f / (1f + (float)Math.Exp(-x)) - 1f;
	}
	private float sigmoidDerivative(float x){
		return (0.5f + sigmoid(x)/2)*(1-(0.5f + sigmoid(x) / 2));
	}
    public float[][] GetNeurons()
    {
        return neurons;
    }
    public float[] FeedForward(float[] inputs)
    {
        //Add inputs to the neuron matrix
        for (int i = 1; i < inputs.Length; i++)
        {
            neurons[0][i] = inputs[i];
        }

        //itterate over all neurons and compute feedforward values 
        for (int i = 1; i < layers.Length; i++)
        {
            for (int j = 0; j < neurons[i].Length; j++)
            {
                float value = 0f;

                for (int k = 0; k < neurons[i - 1].Length; k++)
                {
                    value += weights[i - 1][j][k] * neurons[i - 1][k]; //sum off all weights connections of this neuron weight their values in previous layer
                }
                value += biases[i - 1];//add bias

                neurons[i][j] = sigmoid(value); //NEW:Sigmoid function OLD:Hyperbolic tangent activation
            }
        }

        float[] outputs = neurons[neurons.Length - 1];

        return outputs; //return output layer
    }

    /// <summary>
    /// Mutate neural network weights
    /// </summary>
    

    
	/// <summary>
	/// all of the weights are calculated like a dimension in a graph, with up and down as the C (cost) , the lower the better.
	/// 
	/// </summary>
    public void AddFitness(float fit)
    {
        fitness += fit;
    }

    public void SetFitness(float fit)
    {
        fitness = fit;
    }

    public float GetFitness()
    {
        return fitness;
    }

    /// <summary>
    /// Compare two neural networks and sort based on fitness
    /// </summary>
    /// <param name="other">Network to be compared to</param>
    /// <returns></returns>
    public int CompareTo(NeuralNetwork other)
    {
        if (other == null) return 1;

        if (fitness > other.fitness)
            return 1;
        else if (fitness < other.fitness)
            return -1;
        else
            return 0;
    }
}
