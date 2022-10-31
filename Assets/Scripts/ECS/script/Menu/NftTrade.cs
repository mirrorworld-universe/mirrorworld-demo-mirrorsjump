
using System;
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
    
    private void Update()
    {
        if (SellRoot.activeSelf)
        {

            if (SellPrice.text.Length > 8)
            {
                string str1=SellPrice.text.Substring(0,8);
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

            if (null != InputSellPrice&&InputSellPrice != 0)
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
    
    private string CalculatePrice(float price)
    {
        double res = price * 0.9575;
        string str = res.ToString();
        
        int strLeng = str.Length;

        int  strLeng2 = str.IndexOf('.');
        if (strLeng - strLeng2 >= 7)
        {
            str = str.Substring(0, str.IndexOf('.') + 7);
        }
        return str;
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

        float price = float.Parse(SellPrice.text);

        if (ApiCallLimit.CallTradeLimit(CurrentNftCellData.NftData.mintAddress) == false)
        {
            MessageAdvice.OpenWaitPanel("Listing Now");
            return;
        }


        CallApiState callApiState = new CallApiState();
        callApiState.MintAddress = CurrentNftCellData.NftData.mintAddress;
        callApiState.name = CurrentNftCellData.NftData.name;
        callApiState.State = CallState.Listing;
        ApiCallLimit.AddItemState(callApiState.MintAddress,callApiState);
        
        MessageAdvice.OpenWaitPanel("Listing Now");
        
        TAManager.Instance.ListNFTStart(CurrentNftCellData.NftData.name);
        
        // Debug.Log("List_MintAddress:"+CurrentNftCellData.NftData.mintAddress);
        // Debug.Log("List_price:"+price);
        // Debug.Log("List_Action_House:"+ "6gysn49dh2tfwbqvLqWpJNwisjkZCJoX3AyjuyFUn89C" );
        MirrorSDK.ListNFT(CurrentNftCellData.NftData.mintAddress,price,"6gysn49dh2tfwbqvLqWpJNwisjkZCJoX3AyjuyFUn89C",Confirmation.Finalized,(result) =>
        {

            if (result.status == "success")
            {
                TAManager.Instance.ListNft(TAManager.Instance.GetNameByMintAddress(result.data.mint_address),result.data.id.ToString(),result.data.price,true);
            }

            ResultAdvice(result);
            
        });
        
    }
    
    
    // todo SDK Call  List Update
    public void UpdatePrice()
    {
        if (null != CurrentNftCellData)
        {   
            
            CloseUpdateDialog();

            float price = float.Parse(NewPrice.text);
            
            if (ApiCallLimit.CallTradeLimit(CurrentNftCellData.NftData.mintAddress) == false)
            {
                MessageAdvice.OpenWaitPanel("Changing New Price Now");
                return;
            }


            CallApiState callApiState = new CallApiState();
            callApiState.MintAddress = CurrentNftCellData.NftData.mintAddress;
            callApiState.name = CurrentNftCellData.NftData.name;
            callApiState.State = CallState.Update;
            ApiCallLimit.AddItemState(callApiState.MintAddress,callApiState);
            
            
            MessageAdvice.OpenWaitPanel("Changing New Price Now");
            
            TAManager.Instance.ChangeListPriceStart(CurrentNftCellData.NftData.listings[CurrentNftCellData.NftData.listings.Count - 1].price,CurrentNftCellData.NftData.name);
            // Debug.Log("UpdateList_MintAddress:"+CurrentNftCellData.NftData.mintAddress);
            // Debug.Log("UpdateList_price:"+price);
            // Debug.Log("Update_Action_House:"+ "6gysn49dh2tfwbqvLqWpJNwisjkZCJoX3AyjuyFUn89C" );
            MirrorSDK.UpdateNFTListing(CurrentNftCellData.NftData.mintAddress, price, "6gysn49dh2tfwbqvLqWpJNwisjkZCJoX3AyjuyFUn89C",Confirmation.Finalized,(result) =>
            {   
                if (result.status == "success")
                {
                    TAManager.Instance.ChangeListPrice(TAManager.Instance.GetNameByMintAddress(result.data.mint_address),result.data.id.ToString(),result.data.price);
                }

                ResultAdvice(result);

            });
            
            
        }
        
    }
    
    // todo SDK Call  Cancel List
    public void CancelList()
    {
        // call SDK
        CloseCancelDialog();

        if (null != CurrentNftCellData)
        {   
            
            if (ApiCallLimit.CallTradeLimit(CurrentNftCellData.NftData.mintAddress) == false)
            {
                MessageAdvice.OpenWaitPanel("Canceling List Now");
                return;
            }


            CallApiState callApiState = new CallApiState();
            callApiState.MintAddress = CurrentNftCellData.NftData.mintAddress;
            callApiState.name = CurrentNftCellData.NftData.name;
            callApiState.State = CallState.Cancel;
            ApiCallLimit.AddItemState(callApiState.MintAddress,callApiState);
            
            
            MessageAdvice.OpenWaitPanel("Canceling List Now");
            
            TAManager.Instance.CancelListStart(CurrentNftCellData.NftData.name);
            
               
            // Debug.Log("CancelList_MintAddress:"+CurrentNftCellData.NftData.mintAddress);
            // Debug.Log("CancelList_price:"+CurrentNftCellData.NftData.listings[CurrentNftCellData.NftData.listings.Count-1].price);
            // Debug.Log("Cancel_Action_House:"+ "6gysn49dh2tfwbqvLqWpJNwisjkZCJoX3AyjuyFUn89C" );
            MirrorSDK.CancelNFTListing(CurrentNftCellData.NftData.mintAddress,CurrentNftCellData.NftData.listings[CurrentNftCellData.NftData.listings.Count-1].price,"6gysn49dh2tfwbqvLqWpJNwisjkZCJoX3AyjuyFUn89C",Confirmation.Finalized,(result) =>
            {     
                if (result.status == "success")
                {
                    TAManager.Instance.CancelList(TAManager.Instance.GetNameByMintAddress(result.data.mint_address),result.data.id.ToString(),result.data.price);
                }
                  ResultAdvice(result);
                  
            });
        }
    }
    
    
    // todo SDK Call  Transfer
    public void ConfirmTransfer()
    {   
        
        CloseTransfer();
        
        string address = Address.text.ToString();
        
        if (ApiCallLimit.CallTradeLimit(CurrentNftCellData.NftData.mintAddress) == false)
        {
            MessageAdvice.OpenWaitPanel("Transfer now");
            return;
        }
       

        CallApiState callApiState = new CallApiState();
        callApiState.MintAddress = CurrentNftCellData.NftData.mintAddress;
        callApiState.name = CurrentNftCellData.NftData.name;
        callApiState.State = CallState.Transfer;
        ApiCallLimit.AddItemState(callApiState.MintAddress,callApiState);
        
        MessageAdvice.OpenWaitPanel("Transfer now");
        
        // Debug.Log("Transfer_MintAddress:"+CurrentNftCellData.NftData.mintAddress);
        // Debug.Log("Transfer_toAddress:"+address);
        MirrorSDK.TransferNFT(CurrentNftCellData.NftData.mintAddress,address,(result) =>
        {
            
           ResultAdvice(result);
           
        });
        
        
    }


    private void ResultAdvice(CommonResponse<ListingResponse> result)
    {

        string resultMintAddress = null;
                
        if (result.status == "success")
        {   
            string mintAddress = result.data.mint_address;
            resultMintAddress = mintAddress;

            CallApiState callApiStateResult = ApiCallLimit.GetStateItemByAddress(mintAddress);
            
            MessageAdvice.ConfrimCloseWaitPanel();
                    
            if (null != callApiStateResult && null != callApiStateResult.name)
            {
                //callApiStateResult.name+"\n"+
                MessageAdvice.OnSuccess(ApiCallLimit.GetStateByAddress(resultMintAddress)+"Successfully!");
            }
            else
            {
                MessageAdvice.OnSuccess("Successfully!");
            }
            
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

   
    
    
    
}
