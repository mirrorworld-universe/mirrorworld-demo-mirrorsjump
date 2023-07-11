
using MirrorWorld;
using MirrorworldSDK;
using UnityEngine;

public class UIAdapter : MonoBehaviour
{
    //public static bool ShowWallet = false;
    //public static bool ShowMarket = false;
    //public static bool ShowItems = false;
    //public static bool ShowRewards = false;

    public GameObject Wallet;

    public GameObject RankList;

    public GameObject BottomRoot;


    private void Start()
    {
        if (GlobalDef.IsShowPackage)
        {
            MirrorChain chain = MWSDK.GetChain();
            if (chain == MirrorChain.SUI)
            {
                Wallet.SetActive(false);
                RankList.SetActive(true);
                BottomRoot.SetActive(true);//todo
            }
            else
            {
                Wallet.SetActive(true);
                RankList.SetActive(true);
                BottomRoot.SetActive(true);
            }
        }
        else
        {
            Wallet.SetActive(false);
            RankList.SetActive(false);
            BottomRoot.SetActive(false);
        }
    }
    
    
}
