

using System;
using System.Collections.Generic;
using MirrorWorld;
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

    public void FetchNFTS()
    {
        if (!LoginState.HasLogin)
        {
            return;
        }

        List<string> creators = new List<string>();
        creators.Add(LoginState.WalletAddress);

        MWSDK.Solana.Asset.SearchNFTsByOwner(creators, 100, 0, (Mutiple) =>
        {
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
                //Debug.Log("MirrorSDK fetched mint address :"+ mintAddress);
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
    
    public void MintNFT (NFTCellData nftCellData)
    {
        NftCellData = nftCellData;
        
        if (LoginState.HasLogin)
        {
            if (LoginState.mintableRoleData == null)
            {
                return;
            }
            string name = "Mirrors Jump " + "#" + LoginState.mintableRoleData.token_id;
            TAManager.Instance.MintToNFTStart("random role");

            StartSDKRequest();
            DoMintNFT(name, () => {
                StartApproveAction();
                MessageAdvice.OpenWaitPanel("Mint Now");
            });

            return;
        }
    }




    private void StartSDKRequest()
    {
        //MessageAdvice.OpenWaitPanel("Please wait...");
    }

    private void StartApproveAction()
    {

    }


    private void DoMintNFT(string name,Action approveAction)
    {
        string wallet = PlayerCacheMgr.WalletAddress;
        string mintID = GlobalDef.AddMintableRoleToPackage?PlayerCacheMgr.GetMintID(): LoginState.mintableRoleData.token_id.ToString();
        string collection = GlobalDef.UserCollection;
        string nftJsonUrl = LoginState.mintableRoleData.token_url;
        MWSDK.Solana.Asset.MintNFT(collection, name, "MJNFT", nftJsonUrl, Confirmation.Confirmed, mintID,
            GlobalDef.ReceiveWallet,
            0.1,
            approveAction,
            (result) =>
            {
                if (result.status == "success")
                {
                    TAManager.Instance.MintToNft(result.data.name, 0.1f);
                    MintingFinish(true);
                }
                else
                {
                    MintingFinish(false);
                }
            });
    }

    private void MintingFinish(bool IsSuccess)
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
}
