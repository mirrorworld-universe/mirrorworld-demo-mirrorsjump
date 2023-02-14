

using System;
using System.Collections.Generic;
using MirrorworldSDK;
using MirrorworldSDK.Models;
using UnityEngine;

public class CallSDK : MonoBehaviour
{
    
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


                Debug.Log("MirrorSDK fetched count :" + Mutiple.data.nfts.Count);
                List<NFTCellData> datas = new List<NFTCellData>();
                 for (int i = 0; i < Mutiple.data.nfts.Count; i++)
                 {   
                     // 空地址排除
                     if (Mutiple.data.nfts[i].collection == null)
                     {
                         continue;
                     }
                         
                     if (Mutiple.data.nfts[i].collection.mintAddress == null)
                     {
                         continue;
                     }


                    string mintAddress = Mutiple.data.nfts[i].collection.mintAddress;
                    Debug.Log("MirrorSDK fetched mint address :"+ mintAddress);
                     // 根据环境筛选
                     if (GlobalDef.IsMainNet)
                     {
                         if (!mintAddress.Equals(GlobalDef.ParentCollectionMainNet))
                         {
                             continue;
                             
                         }
                     }
                     else
                     {
                         if (!mintAddress.Equals(GlobalDef.ParentCollectionDevNet))
                         {
                             continue;
                         }
                         
                     }
                     
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
        PackageManager.ClosePackage();
        MessageAdvice.ConfrimCloseWaitPanel();

        if (IsSuccess)
        {
            //clear transfer sol result
            PlayerCacheMgr.ClearTransferSOLResult();
            //clear Mint apiCallLimit
            PlayerCacheMgr.StopMinting();

            MessageAdvice.OnSuccess("Mint Successful!");
            //PackageManager.RefreshPackage();
            UpdateMintStatusReq req = new UpdateMintStatusReq();
            req.user_id = LoginState.WalletAddress;
            req.token_id = LoginState.mintableRoleData.token_id;
            NetworkManager.Instance.UpdateMintStatusReq(req);
            LoadingPanel.Instance.SetLoadingPanelEnable(true);
            
        }
        else
        {
            //clear Mint apiCallLimit
            PlayerCacheMgr.StopMinting();

            MessageAdvice.OnFailure();
        }
        
    }
    
    // todo SDK Call MintNFT
    public void MintNFT (NFTCellData nftCellData)
    {

        NftCellData = nftCellData;
        
        if (LoginState.HasLogin)
        {
            if (PlayerPrefs.GetString("TokenId", "empty") == "empty")
            {
                return;
            }
            string name = "Mirrors Jump " + "#" + PlayerPrefs.GetString("TokenId");
            TAManager.Instance.MintToNFTStart("random role");

            DoMintNFT(name, () => {
                MessageAdvice.OpenWaitPanel("Mint Now");
            });

            return;
        }
    }
    
    private void DoMintNFT(string name,Action approveAction)
    {
        MirrorSDK.MintNFT(GlobalDef.UserCollection, name, "MJNFT", PlayerPrefs.GetString("MintUrl"), Confirmation.Confirmed,
            PlayerPrefs.GetString("TokenId"),
            "qS6JW1CKQgpwZU6jG5JpXL3Q4EDMoDD5DWacPEsNZoe",
            0.1,
            approveAction,
            (result) =>
            {
                if (result.status == "success")
                {
                    TAManager.Instance.MintToNft(result.data.name, 0.1f);
                    FinishedMint(true);
                }
                else
                {
                    FinishedMint(false);
                }

            });
    }
}
