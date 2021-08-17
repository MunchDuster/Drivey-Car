using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SaveData
{
    public NeuralNetwork[] overallBestNets;
    public int batch;
    public int generation;
    public string saveName;
}
