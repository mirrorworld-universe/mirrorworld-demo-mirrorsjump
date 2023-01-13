

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
                    
                     
                     // 根据环境筛选
                     if (GlobalDef.IsMainNet)
                     {
                         if (!Mutiple.data.nfts[i].collection.mintAddress.Equals(GlobalDef.ParentCollectionMainNet))
                         {
                             continue;
                             
                         }
                         
                     }
                     else
                     {
                         if (!Mutiple.data.nfts[i].collection.mintAddress.Equals(GlobalDef.ParentCollectionDevNet))
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
            PackageManager.RefreshPackage();
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
            UserResponse user = MirrorSDK.GetWallet();
            string walletAddress = user.wallet.sol_address;
            if ("true" == PlayerPrefs.GetString("HasTransferSol" + walletAddress, "false"))
            {
               
                if (PlayerPrefs.GetString("TokenId", "empty") == "empty")
                {
                    return;
                } 
                string name = "Mirrors Jump " + "#" +PlayerPrefs.GetString("TokenId");
                TAManager.Instance.MintToNFTStart("random role");

                DoMintNFT(name,()=> {
                    MessageAdvice.OpenWaitPanel("Mint Now");
                });

                return;
            }

            MirrorSDK.TransferSol(100000000,"qS6JW1CKQgpwZU6jG5JpXL3Q4EDMoDD5DWacPEsNZoe",Confirmation.Confirmed, null, (result) =>
                {
                    if (result.status == "success")
                    {
                        UserResponse user = MirrorSDK.GetWallet();
                        string walletAddress = user.wallet.sol_address;
                        Debug.Log("MirrorSDK TransferSol finished, wallet is:" + walletAddress) ;
                        PlayerPrefs.SetString("HasTransferSol" + walletAddress, "true");

                        if (PlayerPrefs.GetString("TokenId", "empty") == "empty")
                        {
                            return;
                        }
                        string name = "Mirrors Jump " + "#" +PlayerPrefs.GetString("TokenId");
            
                        TAManager.Instance.MintToNFTStart("random role");

                        DoMintNFT(name,()=> {
                            if (ApiCallLimit.MintLimit() == false)
                            {
                                MessageAdvice.OpenWaitPanel("Mint Now");
                                return;
                            }

                            ApiCallLimit.SetMintApiLimit(Constant.ExecuteMint);
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
    
    private void DoMintNFT(string name,Action approveAction)
    {
        MirrorSDK.MintNFT(GlobalDef.ParentCollectionDevNet, name, "MJNFT", PlayerPrefs.GetString("MintUrl"), Confirmation.Confirmed,
            PlayerPrefs.GetString("TokenId"),
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
