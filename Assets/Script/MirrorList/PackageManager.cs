using System;
using System.Collections;
using System.Collections.Generic;
using MirrorworldSDK;
using Newtonsoft.Json;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using Random = UnityEngine.Random;

public class PackageManager : MonoBehaviour
{
    public ListView ListView;

    public CanvasGroup LeftPageTurningCanvas;

    public CanvasGroup RightPageTurningCanvas;

    public GameObject Package;

    public ListViewDataProvider ListViewDataProvider;

    public TextMeshProUGUI PageNumber;

    private string GenerateUrl = "https://mirror-jump-json.mirrorworld.fun/api/v1/metadata/json";


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


    private void Start()
    {
        //GenerateRandomData();
    }

    public void OpenPackage()
    {
        SoundManager.Instance.PlaySound(SoundName.Pop);
        // 刷新逻辑
        ListViewDataProvider.NFTListView.SetDataProvider(ListViewDataProvider);

        ListViewDataProvider.DataSource.Clear();

        ListViewDataProvider.DataSource.Add(GenerateDefaultCellData());

        if (null != GenerateRandomCellData())
        {
            ListViewDataProvider.DataSource.Add(GenerateRandomCellData());
        }
        
        ListViewDataProvider.NFTListView.OnDataSourceChange();
        PageTurningStateUpdate(true);
        Package.SetActive(true);
        TAManager.Instance.OpenPackage();
        
    }


    
    public void RefreshPackage()
    {
        ListViewDataProvider.NFTListView.SetDataProvider(ListViewDataProvider);

        ListViewDataProvider.DataSource.Clear();

        ListViewDataProvider.DataSource.Add(GenerateDefaultCellData());

        if (null != GenerateRandomCellData())
        {
            ListViewDataProvider.DataSource.Add(GenerateRandomCellData());
        }
        
        ListViewDataProvider.NFTListView.OnDataSourceChange();
        PageTurningStateUpdate(true);
        Package.SetActive(true);
        
    }


    private NFTCellData GenerateDefaultCellData()
    {
        NFTCellData nftCellData = new NFTCellData();
        DataParsingEntity dataParsingEntity = new DataParsingEntity();
        nftCellData.DataParsingEntity = dataParsingEntity;

        // replaced default descripe
        nftCellData.DataParsingEntity.description =
            "Mirrors Jump is our tribute to Doodle Jump, powered by Mirror World SDK. We hope that this game will help players to better understand the fun aspects of Web3 games and help developers to better understand how to use the Mirror World SDK.";
        nftCellData.DataParsingEntity.attribute = new List<AttributeItem>();
        AttributeItem attributeItemRare = new AttributeItem();
        attributeItemRare.trait_type = "Rarity";
        AttributeItem attributeItemName = new AttributeItem();
        attributeItemName.trait_type = "Type";
        nftCellData.DataParsingEntity.attribute.Add(attributeItemRare);
        nftCellData.DataParsingEntity.attribute.Add(attributeItemName);

        nftCellData.DataParsingEntity.image = LoginState.defaultRoleData.image;
        nftCellData.DataParsingEntity.attribute[0].value = LoginState.defaultRoleData.rarity;
        nftCellData.DataParsingEntity.attribute[1].value = LoginState.defaultRoleData.type;

        return nftCellData;

    }

    private NFTCellData GenerateRandomCellData()
    {
        if (LoginState.mintableRoleData != null)
        {
            NFTCellData nftCellData = new NFTCellData();
            DataParsingEntity dataParsingEntity = new DataParsingEntity();
            nftCellData.DataParsingEntity = dataParsingEntity;

            nftCellData.DataParsingEntity.description =
                "Mirrors Jump is our tribute to Doodle Jump, powered by Mirror World SDK. We hope that this game will help players to better understand the fun aspects of Web3 games and help developers to better understand how to use the Mirror World SDK.";
            nftCellData.DataParsingEntity.attribute = new List<AttributeItem>();
            AttributeItem attributeItemRare = new AttributeItem();
            attributeItemRare.trait_type = "Rarity";
            AttributeItem attributeItemName = new AttributeItem();
            attributeItemName.trait_type = "Type";
            nftCellData.DataParsingEntity.attribute.Add(attributeItemRare);
            nftCellData.DataParsingEntity.attribute.Add(attributeItemName);


            // http://metadata-assets.mirrorworld.fun/mirror_jump/images/Rare_Pirate%20Captain.png
            string imageUrl = LoginState.mintableRoleData.image;
            nftCellData.DataParsingEntity.image = imageUrl;
            nftCellData.DataParsingEntity.attribute[0].value = LoginState.mintableRoleData.rarity;
            nftCellData.DataParsingEntity.attribute[1].value = LoginState.mintableRoleData.type;

            return nftCellData;
          
        }

        return null;
    }

    private void GenerateRandomData()
    {
        if ("false" == PlayerPrefs.GetString("HasGenerate", "false"))
        {
            RandomData();
            PlayerPrefs.SetString("HasGenerate", "true");
        }
        
        if ("false" == PlayerPrefs.GetString("HasGetMintUrl", "false"))
        {
            MintEntity mintEntity = new MintEntity();
                
            mintEntity.Rarity = PlayerPrefs.GetString("Rarity");
            mintEntity.TypeName = PlayerPrefs.GetString("name");
                
            var param =  JsonConvert.SerializeObject(mintEntity);
                
            StartCoroutine(Post(GenerateUrl, param, (result) =>
            {
                    
                ResultRoot resultRoot =   JsonConvert.DeserializeObject<ResultRoot>(result);
                     
                PlayerPrefs.SetString("HasGetMintUrl","true");
                     
                PlayerPrefs.SetString("MintUrl",resultRoot.data.json_path);
                     
            }));
        }
        
        
    }



    private void RandomData()
    {
        int rate = Random.Range(1, 101);

        if (rate < 40)
        {
            PlayerPrefs.SetString("Rarity", "Common");

        }
        else if (rate < 70)
        {
            PlayerPrefs.SetString("Rarity", "Rare");

        }
        else if (rate < 85)
        {
            PlayerPrefs.SetString("Rarity", "Elite");

        }
        else if (rate < 95)
        {
            PlayerPrefs.SetString("Rarity", "Legendary");
        }
        else
        {
            PlayerPrefs.SetString("Rarity", "Mythical");
        }


        int type = Random.Range(1, 6);

        switch (type)
        {
            case 1:
                PlayerPrefs.SetString("name", "Cat Maid");
                break;
            case 2:
                PlayerPrefs.SetString("name", "Samurai");
                break;
            case 3:
                PlayerPrefs.SetString("name", "Zombie");
                break;
            case 4:
                PlayerPrefs.SetString("name", "Pirate Captain");
                break;
            case 5:
                PlayerPrefs.SetString("name", "Astronaut");
                break;
        }


    }


    public void ClosePackage()
    {
        SoundManager.Instance.PlaySound(SoundName.Close);
        Package.SetActive(false);

        ListView.RecycleAllItems();
    }


    public void RecycleItems()
    {
        ListView.RecycleAllItems();
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
    
    private IEnumerator Post(string url, string messageBody, Action<string> callBack)
    {
        UnityWebRequest request = new UnityWebRequest(url, "POST");
        MirrorUtils.SetContentTypeHeader(request);
        byte[] rawRequestBodyToSend = new System.Text.UTF8Encoding().GetBytes(messageBody);
        request.uploadHandler = new UploadHandlerRaw(rawRequestBodyToSend);
        request.downloadHandler = new DownloadHandlerBuffer();

        yield return request.SendWebRequest();

        string rawResponseBody = request.downloadHandler.text;

        request.Dispose();

        callBack(rawResponseBody);
    }
    
    
    
    

}
