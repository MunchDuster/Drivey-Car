using UnityEngine;
using System.IO;
using System.Collections.Generic;
using System.Runtime.Serialization.Formatters.Binary;

public static class SaveSystem
{
    public static string FileName = "gameData.bin";
    
    private static string Path = Application.persistentDataPath + "/" + FileName;
    private static SaveDataList saveDataList;

    public static void Delete(int index)
    {
        saveDataList.savedDatas.RemoveAt(index);
    }
    public static int GetIndex(SaveData data)
    {
        
        for(int i=0; i<saveDataList.savedDatas.Count; i++)
        {
            if(saveDataList.savedDatas[i] == data)
            {
                return i;
            }
        }
        
        return -1;
    }
    public static void Setup()
    {
        if (File.Exists(Path))
        {
            BinaryFormatter formatter = new BinaryFormatter();
            FileStream stream = new FileStream(Path, FileMode.Open);

            SaveDataList results = formatter.Deserialize(stream) as SaveDataList;
            stream.Close();
            
            saveDataList = results;
        }
        else
        {
            saveDataList = new SaveDataList();
        }
    }
    public static void SaveNew(SaveData data)
    {
        saveDataList.savedDatas.Add(data);
    }
    public static void SaveOld(int index, SaveData data)
    {
        saveDataList.savedDatas[index] = data;
    }
    public static void Save()
    {
        BinaryFormatter formatter = new BinaryFormatter();
        FileStream stream = new FileStream(Path, FileMode.Create);

        formatter.Serialize(stream,saveDataList);
        stream.Close();
    }
    public static SaveData Load(int index)
    {
        return saveDataList.savedDatas[index];
    }
}
public class SaveDataList
{
    public List<SaveData> savedDatas;
}