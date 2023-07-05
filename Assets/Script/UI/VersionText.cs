using System.Collections;
using System.Collections.Generic;
using MirrorWorld;
using MirrorworldSDK;
using TMPro;
using UnityEngine;

public class VersionText : MonoBehaviour
{
    public TextMeshProUGUI versionText;
    public TextMeshProUGUI chainText;

    private void Awake()
    {
        string versionStr = GlobalDef.IsIOSEnv?"iOS":(GlobalDef.IsGoogleEnv?"Google":"Android");
        versionStr += ": ";
        versionStr += GlobalDef.GetCurrentVersion();
        versionText.text = versionStr;

        MirrorChain chain = MWSDK.GetChain();
        string chainStr;
        if(chain == MirrorChain.Solana)
        {
            chainStr = "Solana";
        }
        else if (chain == MirrorChain.SUI)
        {
            chainStr = "SUI";
        }
        else
        {
            chainStr = "UnknownChain";
        }
        chainStr += ": ";
        MirrorEnv env = MWSDK.GetEnvironment();
        if(env == MirrorEnv.Mainnet)
        {
            chainStr += "MainNet";
        }
        else
        {
            chainStr += "DevNet";
        }
        chainText.text = chainStr;
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
