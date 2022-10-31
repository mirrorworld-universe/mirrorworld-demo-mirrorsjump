using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class NFTPackageManager : MonoBehaviour
{
    public ListView ListView;

    public CanvasGroup LeftPageTurningCanvas;

    public CanvasGroup RightPageTurningCanvas;

    public GameObject Package;

    public GameObject ListViewRoot;
    
    public GameObject PageRoot;
    

    public ListViewDataProvider ListViewDataProvider;

    public CallSDK CallSDK;

    public TextMeshProUGUI PageNumber;

    public GameObject FecthNow;

    public GameObject NoNFT;
    

    public void OnTurningLeft()
    {
        SoundManager.Instance.PlaySound(SoundName.TurnPage);
        ListView.ToLeftPage();
        PageTurningStateUpdate(false);
    }

    public void OnTurningRight()
    {
        SoundManager.Instance.PlaySound(SoundName.TurnPage);
        ListView.ToRightPage();
        PageTurningStateUpdate(false);
    }

    public void OpenPackage()
    {
    
        SoundManager.Instance.PlaySound(SoundName.Pop);
        CallSDK.FetchNFTS();
        ListViewRoot.SetActive(false);
        PageRoot.SetActive(false);
        Package.SetActive(true);
        FecthNow.SetActive(true);
        NoNFT.SetActive(false);
        
        TAManager.Instance.OpenNFTPackage();
        
    }


    public void RefreshData( List<NFTCellData> datas)
    {

        ListViewDataProvider.NFTListView.SetDataProvider(ListViewDataProvider);
        ListViewDataProvider.DataSource.Clear();
        
        if (null != datas && datas.Count > 0)
        {
           ListViewDataProvider.DataSource.AddRange(datas);
           ListViewDataProvider.NFTListView.OnDataSourceChange();
        }
        PageTurningStateUpdate(true);
      
       ListViewRoot.SetActive(true);
       PageRoot.SetActive(true);
       FecthNow.SetActive(false);

       if (ListViewDataProvider.DataSource.Count <= 0)
       {
           NoNFT.SetActive(true);
       }
       else
       {
           NoNFT.SetActive(false);
       }
       
    }
    
    
    
    
    
    
    


    public void ClosePackage()
    {
        SoundManager.Instance.PlaySound(SoundName.Close);
        Package.SetActive(false);
        ListView.RecycleAllItems();
        ListViewDataProvider.DataSource.Clear();
        
    }

    public void PageTurningStateUpdate(bool IsFirst)
    {
        PageTurningState State = ListView.GetPageTurningState(IsFirst);

        if (State == PageTurningState.Both)
        {
            LeftPageTurningCanvas.alpha = 1;
            RightPageTurningCanvas.alpha = 1;

            PageNumber.text = ListView.GetCurrentPage().ToString();


        }
        else if (State == PageTurningState.None)
        {
            LeftPageTurningCanvas.alpha = 0;
            RightPageTurningCanvas.alpha = 0;

            PageNumber.text = "";



        }
        else if (State == PageTurningState.OnlyLeft)
        {
            LeftPageTurningCanvas.alpha = 1;
            RightPageTurningCanvas.alpha = 0.5f;

            PageNumber.text = ListView.GetCurrentPage().ToString();

        }
        else if (State == PageTurningState.OnlyRight)
        {
            LeftPageTurningCanvas.alpha = 0.5f;
            RightPageTurningCanvas.alpha = 1;

            PageNumber.text = ListView.GetCurrentPage().ToString();
        }



    }
}
