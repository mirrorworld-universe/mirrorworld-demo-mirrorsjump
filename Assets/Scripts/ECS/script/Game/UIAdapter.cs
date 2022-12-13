
using UnityEngine;

public class UIAdapter : MonoBehaviour
{
    public GameObject Wallet;

    public GameObject RankList;

    public GameObject BottomRoot;


    private void Start()
    {
        if (GlobalDef.IsShowPackage)
        {
            Wallet.SetActive(true);
            RankList.SetActive(true);
            BottomRoot.SetActive(true);
        }
        else
        {
            Wallet.SetActive(false);
            RankList.SetActive(false);
            BottomRoot.SetActive(false);
        }
    }
    
    
}
