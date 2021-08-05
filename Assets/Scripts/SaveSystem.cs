using UnityEngine;
using System.IO;
using System.Collections.Generic;
using System.Runtime.Serialization.Formatters.Binary;

public static class SaveSystem
{
    public static string FileName = "gameData.bin";
    private static string Path = Application.persistentDataPath + "/" + FileName;

    public static void Save(List<NeuralNetwork> data)
    {
        BinaryFormatter formatter = new BinaryFormatter();
        FileStream stream = new FileStream(Path, FileMode.Create);

        SaveData saveData = new SaveData();
        saveData.data = data;

        formatter.Serialize(stream,saveData);
        stream.Close();
    }
    public static List<NeuralNetwork> Load()
    {
        if (File.Exists(Path))
        {
            BinaryFormatter formatter = new BinaryFormatter();
            FileStream stream = new FileStream(Path, FileMode.Open);

            SaveData results = formatter.Deserialize(stream) as SaveData;
            stream.Close();
            return results.data;
        }
        else
        {
            return null;
        }
    }
}
[System.Serializable]
class SaveData{
    public List<NeuralNetwork> data;
}