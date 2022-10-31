

using System;
using System.Collections.Generic;
using MirrorworldSDK;
using MirrorworldSDK.Models;
using UnityEngine;

public class CallSDK : MonoBehaviour
{

    private string ParentCollection = "7Vv68CarFpqn291aTeeUz65Uxk1tp8X7gfR8CDMZo2gw";
   //private string ParentCollection = "7Vv68CarFpqn291aTeeUz65Uxk1tp8X7g";
    
    
    
    public MessageAdvice MessageAdvice;


    public RoleChange RoleChange;

    public NFTPackageManager NftPackageManager;

    private NFTCellData NftCellData;


    public PackageManager PackageManager;

    private void OnEnable()
    {
        EventDispatcher.Instance.updateMintReceived += OnUpdateMint;
    }

    private void OnDisable()
    {
        EventDispatcher.Instance.updateMintReceived -= OnUpdateMint;
    }

    private void OnUpdateMint(UpdateMintStateData arg0)
    {
        LoginState.mintableRoleData = null;
        LoadingPanel.Instance.SetLoadingPanelEnable(false);
    }

    private string GetNameNumber(string target)
    {
     
        string res = "";
        int j = 59;
        while (j<target.Length)
        {   
            j++;
            
            if (target[j] == '.')
            {
                break;
            }
            res += target[j];
           
        }

        return res;
    }

    // todo SDK Call  Fetch NFTS
    public void FetchNFTS()
    {
        if (LoginState.HasLogin)
        {
            List<string> creators = new List<string>();
            creators.Add(LoginState.WalletAddress);
            
            // Debug.Log("FetchNFTS_OwnerAddress:"+LoginState.WalletAddress);
            // Debug.Log("FetchNFTS_OwnerAddressArray0:"+creators[0]);
           
            
            MirrorSDK.GetNFTsOwnedByAddress(creators, 100,0,(Mutiple) =>
            {    
                
                // Debug.Log("FetchNFTS_Result:"+Mutiple.message);
                // Debug.Log("FetchNFTS_ResponseCode:"+Mutiple.code);
                // Debug.Log("FetchNFTS_OwnerStatus:"+Mutiple.status);
                
                
                 List<NFTCellData> datas = new List<NFTCellData>();
                 for (int i = 0; i < Mutiple.data.nfts.Count; i++)
                 {
                     NFTCellData nftCellData = new NFTCellData();
                     SingleNFTResponseObj NftData = Mutiple.data.nfts[i];
                     
                     
                     nftCellData.NftData = NftData;
                     datas.Add(nftCellData);
                     
                 }
                 
                 
                 TAManager.Instance.MappingToAddress(datas);
                 
                 NftPackageManager.RefreshData(datas);
                 
            });
        }
    }
    
    private void FinishedMint(bool IsSuccess)
    {

        if (IsSuccess)
        {
            string name = null;
            string rarity = null;
            foreach (var item in NftCellData.DataParsingEntity.attribute)
            {
                if (item.trait_type == "Rarity")
                {
                    rarity = item.value;
                    
                }else if (item.trait_type == "Type")
                {
                    name = item.value;
                }
            } 
            
           // RoleChange.OnRoleChange(name,rarity);
            
            PlayerPrefs.SetString("HasMintRandom", "true");
            
            PlayerPrefs.SetString("HasMintNFT","true");
            
            MessageAdvice.ConfrimCloseWaitPanel();
            MessageAdvice.OnSuccess("Mint Successful!");
            PackageManager.RefreshPackage();


            UpdateMintStatusReq req = new UpdateMintStatusReq();
            req.user_id = LoginState.WalletAddress;
            req.token_id = LoginState.mintableRoleData.token_id;
            NetworkManager.Instance.UpdateMintStatusReq(req);
            LoadingPanel.Instance.SetLoadingPanelEnable(true);
            
        }
        else
        {   
            MessageAdvice.ConfrimCloseWaitPanel();
            MessageAdvice.OnFailure();
        }
        
        
        //  todo 解锁  Mint Api 限制状态
        ApiCallLimit.SetMintApiLimit(Constant.StopMint);
        
        
    }
    
    // todo SDK Call MintNFT
    public void MintNFT (NFTCellData nftCellData)
    {

        NftCellData = nftCellData;
        
        if (LoginState.HasLogin)
        {

            if ("true" == PlayerPrefs.GetString("HasTransferSol", "false"))
            {
                // 直接 mint 
                if (PlayerPrefs.GetString("TokenId", "empty") == "empty")
                {
                    return;
                }
                string name = "Mirrors Jump " + "#" +PlayerPrefs.GetString("TokenId");
            
                if (ApiCallLimit.MintLimit() == false)
                {
                    MessageAdvice.OpenWaitPanel("Mint Now");
                    return;
                }
            
                ApiCallLimit.SetMintApiLimit(Constant.ExecuteMint);
            
                MessageAdvice.OpenWaitPanel("Mint Now");
                        
                TAManager.Instance.MintToNFTStart("random role");
                // Debug.Log("MintNFTParentCollection:"+ParentCollection);
                // Debug.Log("MintNFTName:"+name);
                // Debug.Log("MintNFTSymbol:"+"MJNFT");
                // Debug.Log("MintNFTUrl:"+PlayerPrefs.GetString("MintUrl"));
                
                //7Vv68CarFpqn291aTeeUz65Uxk1tp8X7gfR8CDMZo2gw
                MirrorSDK.MintNFT(ParentCollection,name,"MJNFT",PlayerPrefs.GetString("MintUrl"),Confirmation.Confirmed,
                    (result) =>
                    {   
                                
                       // Debug.Log("MintNFTResult:" + result.message);
                        if (result.status == "success")
                        {   
                            TAManager.Instance.MintToNft(result.data.name,0.1f);
                            FinishedMint(true);
                        }
                        else
                        {
                            FinishedMint(false);
                        }
                   
                    });


                return;

            }
            
            // 2ge0
            // transfer token
                MirrorSDK.TransferSol(100000000,"qS6JW1CKQgpwZU6jG5JpXL3Q4EDMoDD5DWacPEsNZoe",Confirmation.Confirmed, (result) =>
                {
                    if (result.status == "success")
                    {

                        PlayerPrefs.SetString("HasTransferSol", "true");

                        if (PlayerPrefs.GetString("TokenId", "empty") == "empty")
                        {
                            return;
                        }
                        string name = "Mirrors Jump " + "#" +PlayerPrefs.GetString("TokenId");
            
                        if (ApiCallLimit.MintLimit() == false)
                        {
                            MessageAdvice.OpenWaitPanel("Mint Now");
                            return;
                        }
            
                        ApiCallLimit.SetMintApiLimit(Constant.ExecuteMint);
            
                        MessageAdvice.OpenWaitPanel("Mint Now");
                        
                        TAManager.Instance.MintToNFTStart("random role");
                        // Debug.Log("MintNFTParentCollection:"+ParentCollection);
                        // Debug.Log("MintNFTName:"+name);
                        // Debug.Log("MintNFTSymbol:"+"MJNFT");
                        // Debug.Log("MintNFTUrl:"+PlayerPrefs.GetString("MintUrl"));
                        
                        // 7Vv68CarFpqn291aTeeUz65Uxk1tp8X7gfR8CDMZo2gw
                        MirrorSDK.MintNFT(ParentCollection,name,"MJNFT",PlayerPrefs.GetString("MintUrl"),Confirmation.Confirmed,
                            (result) =>
                            {   
                                
                              //  Debug.Log("MintNFTResult:" + result.message);
                                if (result.status == "success")
                                {   
                                    TAManager.Instance.MintToNft(result.data.name,0.1f);
                                    FinishedMint(true);
                                }
                                else
                                {
                                    FinishedMint(false);
                                }
                   
                            });

                        
                    }
                    else
                    {
                        //FinishedMint(false);
                        if (result.message == Constant.NotSufficientFunds)
                        {
                            // 余额不足
                            MessageAdvice.ConfrimCloseWaitPanel();
                            MessageAdvice.OnSufficientAdvice();
                        }
                        else
                        {
                            MessageAdvice.ConfrimCloseWaitPanel();
                            MessageAdvice.OnFailure();
                        }
                        
                    }
                
                });
                
        }
    }
    
    
}
