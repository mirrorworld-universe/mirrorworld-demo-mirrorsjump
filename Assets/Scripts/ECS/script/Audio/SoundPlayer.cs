using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundPlayer : MonoBehaviour
{
    [SerializeField] private SoundName soundName;
    private void OnEnable()
    {
        SoundManager.Instance.PlaySound(soundName);
    }
}
