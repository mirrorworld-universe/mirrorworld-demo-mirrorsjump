using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "SoundDetailList", menuName = "Sound/SoundDetailList")]
public class SoundDetailList : ScriptableObject
{
    public List<SoundDetails> soundDetailsList;

    public SoundDetails GetSoundDetails(SoundName name)
    {
        return soundDetailsList.Find(s => s.soundName == name);
    }
}

[System.Serializable]
public class SoundDetails
{
    public SoundName soundName;
    public AudioClip soundClip;
    [Range(0.1f, 1f)]
    public float soundVolme = 0.2f;
}