using System.Collections.Generic;
using System;
using UnityEngine;

[Serializable]
public class NeuralNetwork : IComparable<NeuralNetwork>
{
    private int[] layers; //layers

    private float[][][] weights; //weight matrix
    private float[][] neurons; //neuron matix
    private float[][] biases;

    private float fitness; //fitness of the network

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
    public NeuralNetwork(NeuralNetwork copyNetwork)
    {
        this.layers = new int[copyNetwork.layers.Length];
        for (int i = 0; i < copyNetwork.layers.Length; i++)
        {
            this.layers[i] = copyNetwork.layers[i];
        }

        InitNeurons();
        InitWeights();
        InitBiases();
        CopyWeights(copyNetwork.weights);
        CopyBiases(copyNetwork.biases);

    }

    public float[][][] GetWeights()
    {
        return weights;
    }
    public float[][] GetBiases()
    {
        return biases;
    }
    public float[][] GetNeurons()
    {
        return neurons;
    }
    public float GetFitness()
    {
        return fitness;
    }
    public int[] GetLayers()
    {
        return layers;
    }

    public void CopyBiases(float[][] copyBiases)
    {
        for (int i = 0; i < biases.Length - 1; i++)
        {
            for (int j = 0; j < biases[i].Length - 1; j++)
            {
                biases[i][j] = copyBiases[i][j];
            }
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
    private void InitBiases()
    {
        List<float[]> biasesList = new List<float[]>();

        for (int i = 0; i < layers.Length; i++) //run through all layers
        {
            biasesList.Add(new float[layers[i]]); //add layer to neuron list
        }

        biases = biasesList.ToArray(); //convert list to array
    }
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
                    neuronWeights[k] = getBellRandom();
                }

                layerWeightsList.Add(neuronWeights); //add neuron weights of this current layer to layer weights
            }

            weightsList.Add(layerWeightsList.ToArray()); //add this layers weights converted into 2D array into weights list
        }
        weights = weightsList.ToArray(); //convert to 3D array
    }

    private float getBellRandom()
    {
        return (UnityEngine.Random.Range(-1f, 1f));
    }
    private float sigmoid(float x)
    {
        return (float)Math.Tanh(x);
    }
    private float sigmoidDerivative(float x)
    {
        return 1 - Mathf.Pow((float)Math.Tanh(x), 2);
    }

    public float[] FeedForward(float[] inputs)
    {
        //Add inputs to the neuron matrix
        for (int j = 1; j < inputs.Length; j++)
        {
            neurons[0][j] = inputs[j];
        }

        //itterate over all neurons and compute feedforward values 
        for (int i = 1; i < layers.Length; i++)
        {
            for (int j = 0; j < layers[i]; j++)
            {
                float value = 0f;

                for (int k = 0; k < layers[i - 1]; k++)
                {
                    value += weights[i - 1][j][k] * neurons[i - 1][k]; //sum off all weights connections of this neuron weight their values in previous layer
                }
                value += biases[i - 1][j];//add bias

                neurons[i][j] = sigmoid(value);
            }
        }

        float[] outputs = neurons[neurons.Length - 1];

        return outputs; //return output layer
    }
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

    public void AddFitness(float fit)
    {
        fitness += fit;
    }
    public void SetFitness(float fit)
    {
        fitness = fit;
    }
}
