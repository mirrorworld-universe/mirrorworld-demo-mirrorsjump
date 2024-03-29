
using System;
using MirrorWorld;
using MirrorworldSDK;
using MirrorworldSDK.Models;
using TMPro;
using UnityEngine;
using UnityEngine.UI;



public class NftTrade : MonoBehaviour
{
    private NFTCellData CurrentNftCellData;
     
    // sell
    public GameObject SellRoot;
    public Image SellHeader;
    public PackageDetailsManager PackageDetailsManager;
    public TextMeshProUGUI SellNFTID;
    public MessageAdvice MessageAdvice;
    public TMP_InputField SellPrice;
    public TMP_InputField NewPrice;
    public TMP_InputField Address;
    public Button SellConfirmButton;
    public Button TransformConfirmButton;
    public Button UpdateConfirmButton;
    public GameObject SellMask;
    public GameObject TransformMask;
    public GameObject UpdateMask;
    public GameObject SellReceive;
    public GameObject NewSellReceive;
    public GameObject SellPriceLimit;
    public GameObject UpdatePriceLimit;
    public GameObject SellPriceAdvice;
    public GameObject UpdatePriceAdvice;
    
    private float InputSellPrice;

    private float InputUpdatePrice;

    private string InputTransferAddress;

    private string syncLockTransfer = "Transfer";
    
    private void Update()
    {
        if (SellRoot.activeSelf)
        {

            if (SellPrice.text.Length > 8)
            {
                string str1 = SellPrice.text.Substring(0,8);
                SellPrice.text = str1;
                
            }else if (SellPrice.text.Length == 8)
            {
                SellPriceAdvice.SetActive(false);
                SellPriceLimit.SetActive(true);
            }
            else
            {
                SellPriceLimit.SetActive(false);
                SellPriceAdvice.SetActive(true);
            }
            
         
            try
            {
                InputSellPrice = 0;
                SellReceive.SetActive(false);
                SellConfirmButton.interactable = false;
                SellMask.SetActive(true);
              
                InputSellPrice = float.Parse(SellPrice.text);
             
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
             
            }

            if (null != InputSellPrice && InputSellPrice != 0)
            {
                SellConfirmButton.interactable = true;
                SellMask.SetActive(false);
                SellReceive.SetActive(true);
                SellReceive.GetComponent<TextMeshProUGUI>().text = "you will receive" + " "+ CalculatePrice(InputSellPrice)+ " SOL";
            }
            else
            {
                SellConfirmButton.interactable = false;
                SellMask.SetActive(true);
            }
        }

        if (ManageRoot.activeSelf)
        {   
            if (NewPrice.text.Length > 8)
            {
                string str1=NewPrice.text.Substring(0,8);
                NewPrice.text = str1;
                
            }else if (NewPrice.text.Length == 8)
            {
                UpdatePriceAdvice.SetActive(false);
                UpdatePriceLimit.SetActive(true);
            }
            else
            {
                UpdatePriceLimit.SetActive(false);
                UpdatePriceAdvice.SetActive(true);
            }

            
            try
            {   
                InputUpdatePrice = 0;
                NewSellReceive.SetActive(false);
                UpdateConfirmButton.interactable = false;
                UpdateMask.SetActive(true);
                
                InputUpdatePrice = float.Parse(NewPrice.text);
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
            }

            if (null != InputUpdatePrice && InputUpdatePrice != 0)
            {
               UpdateConfirmButton.interactable = true;
               UpdateMask.SetActive(false);
               NewSellReceive.SetActive(true);
               NewSellReceive.GetComponent<TextMeshProUGUI>().text = "you will receive" + " " +CalculatePrice(InputUpdatePrice)+ " SOL";
               
            }
            else
            {
                UpdateConfirmButton.interactable = false;
                UpdateMask.SetActive(true);
            }
        }

        if (TransferRoot.activeSelf)
        {

            InputTransferAddress = Address.text;
        
            if (null != InputTransferAddress && InputTransferAddress!= "" )
            {
                TransformConfirmButton.interactable = true;
                TransformMask.SetActive(false);
            }
            else
            {
                TransformConfirmButton.interactable = false;
                TransformMask.SetActive(true);
                
            }
            
        }
    }
    

    public void OpenSell(NFTCellData nftCellData)
    {

        CurrentNftCellData = nftCellData;
        SellRoot.SetActive(true);
        SellDataParse();

        SellPrice.text = "";
        SellConfirmButton.interactable = false;
        InputSellPrice = 0f;
        SellReceive.SetActive(false);
        SellReceive.GetComponent<TextMeshProUGUI>().text = "";

    }

    private void SellDataParse()
    {
        if (null == CurrentNftCellData)
        {
            return;
        }
        else
        {   
            SetImage(CurrentNftCellData.NftData.image,SellHeader);
            if (null != CurrentNftCellData.NftData.name)
            {
                SellNFTID.text = CurrentNftCellData.NftData.name;
            }
        }
        
    }
    
    public void CloseSell()
    {
        SellRoot.SetActive(false);
        
    }
    
    //manage list
    public GameObject ManageRoot;

    public Image ManageHeader;

    public TextMeshProUGUI ManageReceiveTips;
    
    public TextMeshProUGUI CurrentPrice;

    public TextMeshProUGUI ManageNFTID;

    public GameObject CancelDialog;

    public GameObject UpdateDialog;

    public TextMeshProUGUI UpdateDialogTips;
    
    
    
    public void OpenManageList(NFTCellData nftCellData)
    {

        CurrentNftCellData = nftCellData;
        ManageRoot.SetActive(true);
     
        ManageDataParse();
        
        NewPrice.text = "";
        UpdateConfirmButton.interactable = false;
        InputUpdatePrice = 0f;
        NewSellReceive.SetActive(false);
        NewSellReceive.GetComponent<TextMeshProUGUI>().text = "";

    }

    private void ManageDataParse()
    {
        if (null == CurrentNftCellData)
        {
            return;
        }
        else
        {  
            SetImage(CurrentNftCellData.NftData.image,ManageHeader);
            
            if (null != CurrentNftCellData.NftData.name)
            {
               ManageNFTID.text = CurrentNftCellData.NftData.name;
            }

            if (null != CurrentNftCellData.NftData)
             {
                 CurrentPrice.text = CurrentNftCellData.NftData.listings[CurrentNftCellData.NftData.listings.Count - 1]
                     .price.ToString();
             }
            
        }
        
        
    }
    
    public void CloseManageList()
    {
        ManageRoot.SetActive(false);
    }


    public void OpenCancelDialog()
    {   
        ManageRoot.SetActive(false);
        CancelDialog.SetActive(true);
    }

    public void OpenUpdateDialog()
    {
        ManageRoot.SetActive(false);
        UpdateDialog.SetActive(true);
        UpdateDialogTips.text = "Are you want to change\n the price to " + InputUpdatePrice.ToString() + " SOL?";
    }

    public void CloseCancelDialog()
    {
        CancelDialog.SetActive(false);
    }

    public void CloseUpdateDialog()
    {
        UpdateDialog.SetActive(false);
    }
    
    // transfer NFT
    public GameObject TransferRoot;

    public GameObject NFTDetailRoot;
    
    public Image TransferHeader;

    public TextMeshProUGUI TransferNFTID;



    public void OpenTransfer(NFTCellData nftCellData)
    {
        CurrentNftCellData = nftCellData;
        TransferRoot.SetActive(true);
        
        TransferDataParse();
        Address.text = "";
        TransformConfirmButton.interactable = false;
        InputTransferAddress = null;

    }
    private void TransferDataParse()
    {
        if (null == CurrentNftCellData)
        {
            return;
        }
        else
        {  
            SetImage(CurrentNftCellData.NftData.image,TransferHeader);
            
            if (null != CurrentNftCellData.NftData.name)
            {
               TransferNFTID.text = CurrentNftCellData.NftData.name;
            }
        }
    }
    
    public void CloseTransfer()
    {
        TransferRoot.SetActive(false);
    }

    public void BackToDetails()
    {
        TransferRoot.SetActive(false);
        NFTDetailRoot.SetActive(true);
    }
    
    
    
    public void ListBackToDetails()
    {
        SellRoot.SetActive(false);
        NFTDetailRoot.SetActive(true);
    }
    
    public void ManageBackToDetails()
    {
        ManageRoot.SetActive(false);
        NFTDetailRoot.SetActive(true);
    }
    
    // header  Image loader
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
    
    
    // todo SDK Call ListNFT
    public void SellConfirm()
    {
        CloseSell();

        double price = double.Parse(SellPrice.text);

        //if (ApiCallLimit.CallTradeLimit(CurrentNftCellData.NftData.mintAddress) == false)
        //{
        //    MessageAdvice.OpenWaitPanel("Listing Now");
        //    return;
        //}

        CallApiState callApiState = new CallApiState();
        callApiState.MintAddress = CurrentNftCellData.NftData.mintAddress;
        callApiState.name = CurrentNftCellData.NftData.name;
        callApiState.State = CallState.Listing;
        
        //TAManager.Instance.ListNFTStart(CurrentNftCellData.NftData.name);
        
        Debug.Log("MirrorSDK Start Listing:"+CurrentNftCellData.NftData.mintAddress+ " price:"+ price);
        StartSDKRequest();
        MWSDK.Solana.Asset.ListNFT(CurrentNftCellData.NftData.mintAddress,price, GlobalDef.marketAuctionHouse, Confirmation.Confirmed,
            () =>
            {
                StartApproveAction();
                MessageAdvice.OpenWaitPanel("Listing Now");

                ApiCallLimit.AddItemState(callApiState.MintAddress, callApiState);
            },
            (result) =>
            {
                if (result.status == "success")
                {
                    //TAManager.Instance.ListNft(TAManager.Instance.GetNameByMintAddress(result.data.mint_address),result.data.id.ToString(),float.Parse(result.data.price),true);
                }

                ResultAdvice("Listing  ",result);
            }
        );
        
    }
    
    
    // todo SDK Call  List Update
    public void UpdatePrice()
    {
        if (null != CurrentNftCellData)
        {   
            CloseUpdateDialog();

            double price = double.Parse(NewPrice.text);
            Debug.Log("MirrorSDK updatePrice input price is:"+price);
            
            //if (ApiCallLimit.CallTradeLimit(CurrentNftCellData.NftData.mintAddress) == false)
            //{
            //    MessageAdvice.OpenWaitPanel("Changing New Price Now");
            //    return;
            //}


            CallApiState callApiState = new CallApiState();
            callApiState.MintAddress = CurrentNftCellData.NftData.mintAddress;
            callApiState.name = CurrentNftCellData.NftData.name;
            callApiState.State = CallState.Update;
            
            //TAManager.Instance.ChangeListPriceStart(CurrentNftCellData.NftData.listings[CurrentNftCellData.NftData.listings.Count - 1].price,CurrentNftCellData.NftData.name);
            StartSDKRequest();

            MWSDK.Solana.Asset.ListNFT(CurrentNftCellData.NftData.mintAddress, price, GlobalDef.marketAuctionHouse, Confirmation.Confirmed,
                () =>
                {
                    StartApproveAction();
                    MessageAdvice.OpenWaitPanel("Changing New Price Now");

                    ApiCallLimit.AddItemState(callApiState.MintAddress, callApiState);
                },
                (result) =>
                {   
                    if (result.status == "success")
                    {
                        //TAManager.Instance.ChangeListPrice(TAManager.Instance.GetNameByMintAddress(result.data.mint_address),result.data.id.ToString(),float.Parse(result.data.price));
                    }

                    ResultAdvice("Changing New Price  ", result);

                }
            );
            
            
        }
        
    }
    
    // todo SDK Call  Cancel List
    public void CancelList()
    {
        // call SDK
        CloseCancelDialog();

        if (null != CurrentNftCellData)
        {   
            //if (ApiCallLimit.CallTradeLimit(CurrentNftCellData.NftData.mintAddress) == false)
            //{
            //    MessageAdvice.OpenWaitPanel("Canceling List Now");
            //    return;
            //}

            CallApiState callApiState = new CallApiState();
            callApiState.MintAddress = CurrentNftCellData.NftData.mintAddress;
            callApiState.name = CurrentNftCellData.NftData.name;
            callApiState.State = CallState.Cancel;
            
            //TAManager.Instance.CancelListStart(CurrentNftCellData.NftData.name);
        StartSDKRequest();

            MWSDK.Solana.Asset.CancelListing(CurrentNftCellData.NftData.mintAddress,CurrentNftCellData.NftData.listings[CurrentNftCellData.NftData.listings.Count-1].price, GlobalDef.marketAuctionHouse, Confirmation.Confirmed,
                () =>
                {
                    StartApproveAction();
                    MessageAdvice.OpenWaitPanel("Canceling List Now");

                    ApiCallLimit.AddItemState(callApiState.MintAddress, callApiState);
                },
                (result) =>
                {     
                    if (result.status == "success")
                    {
                        //TAManager.Instance.CancelList(TAManager.Instance.GetNameByMintAddress(result.data.mint_address),result.data.id.ToString(),float.Parse(result.data.price));
                    }

                    ResultAdvice("Canceling List  ", result);
                }
            );
        }
    }
    
    public void ConfirmTransfer()
    {   
        CloseTransfer();
        string address = Address.text.ToString();
        
        //if (ApiCallLimit.CallTradeLimit(CurrentNftCellData.NftData.mintAddress) == false)
        //{
        //    MessageAdvice.OpenWaitPanel("Transfer now");
        //    return;
        //}
       
        CallApiState callApiState = new CallApiState();
        callApiState.MintAddress = CurrentNftCellData.NftData.mintAddress;
        callApiState.name = CurrentNftCellData.NftData.name;
        callApiState.State = CallState.Transfer;

        StartSDKRequest();
        MirrorChain chain = MWSDK.GetChain();
        if(chain == MirrorChain.SUI)
        {
            //MWSDK.SUI.Asset.TransferNFT(CurrentNftCellData.NftData.mintAddress, address,
            //() =>
            //{
            //    StartApproveAction();
            //    //ApiCallLimit.AddItemState(callApiState.MintAddress, callApiState);

            //    MessageAdvice.OpenWaitPanel("Transfer now");
            //},
            //(result) =>
            //{

            //    ResultAdvice("Transfer Successfully!", result.status == "success", syncLockTransfer);

            //});
        }
        else if (chain == MirrorChain.Solana)
        {
            MWSDK.Solana.Asset.TransferNFT(CurrentNftCellData.NftData.mintAddress, address,
            () =>
            {
                StartApproveAction();
                //ApiCallLimit.AddItemState(callApiState.MintAddress, callApiState);

                MessageAdvice.OpenWaitPanel("Transfer now");
            },
            (result) =>
            {

                ResultAdvice("Transfer Successfully!", result.status == "success", syncLockTransfer);

            });
        }
        else
        {
            LogUtils.LogWarn("Unsupported");
        }
        
    }



    private void StartSDKRequest()
    {
        //MessageAdvice.OpenWaitPanel("Please wait...");
    }

    private void StartApproveAction()
    {

    }

    private void ResultAdvice(string message, CommonResponse<ListingResponse> result)
    {
        if (result.status == "success")
        {
            string mintAddress = result.data.mint_address;

            MessageAdvice.ConfrimCloseWaitPanel();

            MessageAdvice.OnSuccess(message + "Successfully!");//ApiCallLimit.GetStateByAddress(mintAddress)

            ApiCallLimit.DeleteItemState(mintAddress);

        }
        else
        {
            MessageAdvice.ConfrimCloseWaitPanel();
            MessageAdvice.OnFailure();

            // todo 等待处理异步回调问题
            ApiCallLimit.DeleteAllItem();
        }
    }

    private void ResultAdvice(string successMsg, bool isSuccess, string syncLockString)
    {
        if (isSuccess)
        {
            MessageAdvice.ConfrimCloseWaitPanel();

            MessageAdvice.OnSuccess(successMsg);//ApiCallLimit.GetStateByAddress(mintAddress)

            ApiCallLimit.DeleteItemState(syncLockString);

        }
        else
        {
            MessageAdvice.ConfrimCloseWaitPanel();
            MessageAdvice.OnFailure();

            // todo 等待处理异步回调问题
            ApiCallLimit.DeleteAllItem();
        }
    }

    private string CalculatePrice(float price)
    {
        double res = price * 0.9575;
        string str = res.ToString();

        int strLeng = str.Length;

        int strLeng2 = str.IndexOf('.');
        if (strLeng - strLeng2 >= 7)
        {
            str = str.Substring(0, str.IndexOf('.') + 7);
        }
        return str;
    }

}