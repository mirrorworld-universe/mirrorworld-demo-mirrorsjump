
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class NFTDetailsManager : MonoBehaviour
{
    
    // nft package
    public Image nftHeader;

    public TextMeshProUGUI nftID;

    public TextMeshProUGUI nftContent;

    public TextMeshProUGUI nftRarity;

    private NFTCellData CurrentMirror;
    
    public GameObject NFTDetails;

    public NFTPackageManager NFTPackageManager;
    
    public CallSDK CallSDK;


    public NftTrade NftTrade;


    public TextMeshProUGUI ListContent;
    
  
    public void OpenNFTPackageDetails(NFTCellData nftCellData)
    {
        SoundManager.Instance.PlaySound(SoundName.Pop);
        NFTPackageManager.Package.SetActive(false);
        SoundManager.Instance.PlaySound(SoundName.Close);
        NFTDetails.SetActive(true);
        DataParser(nftCellData);
        
        
        if (CurrentMirror.NftData.listings.Count <= 0)
        {
           // list
           ListContent.text = "List";

        }
        else
        {
           // manage list
           ListContent.text = "Manage List";

        }

        
    }

    public void BackToNFToPackage()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);
        NFTPackageManager.Package.SetActive(true);
        NFTDetails.SetActive(false);
        
    }

    public void ExitNFTPackage()
    {
        NFTPackageManager.ClosePackage();
        NFTDetails.SetActive(false);
    }


  


    private void DataParser(NFTCellData nftCellData)
    {
        CurrentMirror = nftCellData;
        SetImage(nftCellData.NftData.image,nftHeader);

        nftID.text = nftCellData.NftData.name;

        nftContent.text = nftCellData.NftData.description;


        foreach (var item in nftCellData.NftData.attributes)
        {
            if (item.trait_type == "Rarity")
            {
                nftRarity.text = item.value;
            }
            
        }
     

    }
    
    private async void SetImage(string url,Image header)
    {  
        
        Sprite sprite = await ImageLoader.LoadSprite(url);
        if (null != sprite)
        {
            if (null != header && transform.gameObject.activeSelf)
            {
               header.sprite = sprite;
            }
        }else
        {
            header.sprite = null;
        }
        
    }

    public void NFTSetToBattle()
    {
        foreach (var item in CurrentMirror.NftData.attributes)
        {
            if (item.trait_type == "Type")
            {
                PlayerPrefs.SetString("CurrentRole",item.value);
                
            }else if (item.trait_type == "Rarity")
            {
                PlayerPrefs.SetString("CurrentRarity",item.value);
            }
            
        }
        
        TAManager.Instance.SelectToBattle(CurrentMirror.NftData.name);
        
        EventDispatcher.Instance.roleChanged?.Invoke();
     
    }
    
    
    
    public void WaitBackNFTPackage()
    {
        SoundManager.Instance.PlaySound(SoundName.Close);
        NFTDetails.SetActive(false);
    }
    
    
    
    public void ListNFT()
    {
      
        WaitBackNFTPackage();

        if (CurrentMirror.NftData.listings.Count <= 0)
        {
            NftTrade.OpenSell(CurrentMirror);
        }
        else
        {
            NftTrade.OpenManageList(CurrentMirror);
        }

    
        
        
    }
    
    
    public void TransferNFT()
    {
        WaitBackNFTPackage();
        NftTrade.OpenTransfer(CurrentMirror);
    }
    
    
 

   
    
    
    
    
}
