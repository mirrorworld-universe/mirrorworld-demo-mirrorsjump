using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGMPlayer : MonoBehaviour
{
    private void Start()
    {
        if(PlayerPrefs.GetInt(GlobalDef.isMute) == 0)
        {
            GetComponent<AudioSource>().Play();
        }
    }
}
