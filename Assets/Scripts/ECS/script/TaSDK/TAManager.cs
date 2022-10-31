
using System.Collections.Generic;
using ThinkingAnalytics;
using UnityEngine;

public class TAManager :Singleton<TAManager>
{


    private Dictionary<string, string> NameMapping = new Dictionary<string, string>();

    
    
    public void MappingToAddress(List<NFTCellData> datas)
    {   
        
        for (int i = 0; i < datas.Count; i++)
        {
            if (!NameMapping.ContainsKey(datas[i].NftData.mintAddress))
            {
                NameMapping.Add(datas[i].NftData.mintAddress,datas[i].NftData.name); 
            }
        }
    }
    
    public string GetNameByMintAddress(string mintAddress)
    {
        if (NameMapping.ContainsKey(mintAddress))
        {
            return NameMapping[mintAddress];
        }

        return null;
    }

    public void InitShuShuSDK()
    {
        
        Debug.Log("[ThinkingSDK Unity_PC_V" + "InitShuShuSDK");
      
        new GameObject("ThinkingAnalytics", typeof(ThinkingAnalyticsAPI));

     
        string appId = Constant.shushuAppID;
        string serverUrl = Constant.shushuReportUrl;
        ThinkingAnalyticsAPI.TAMode mode = ThinkingAnalyticsAPI.TAMode.NORMAL;
        ThinkingAnalyticsAPI.TATimeZone timeZone = ThinkingAnalyticsAPI.TATimeZone.Local;
        ThinkingAnalyticsAPI.Token token = new ThinkingAnalyticsAPI.Token(appId, serverUrl, mode, timeZone);
        ThinkingAnalyticsAPI.StartThinkingAnalytics(token);
        ThinkingAnalyticsAPI.EnableAutoTrack(AUTO_TRACK_EVENTS.ALL);
        
        Dictionary<string, object> superProperties = new Dictionary<string, object>()
        {
            {"AppID", Constant.AppID}
        };
        ThinkingAnalyticsAPI.SetSuperProperties(superProperties);
        
        
    }

    public void AccountLogin(string walletAddress)
    {

        string accountId = walletAddress + "_Mjump";
        ThinkingAnalyticsAPI.Login(accountId);

        DeviceFirst(accountId,ThinkingAnalyticsAPI.GetDeviceId());
        
        
    }
    
    public void DeviceFirst(string accountID,string deviceID)
    {
        Dictionary<string, object> properties = new Dictionary<string, object>()
        {
            {"first_check_id", accountID},
            {"device_id", deviceID}
        };

        ThinkingAnalyticsAPI.Track(new TDFirstEvent("device_add", properties));
    }
    
    public void RecieveToken(bool hasReceived)
    {   
        
        Dictionary<string, object> properties = new Dictionary<string, object>(){
            {"HasReceived",hasReceived}
        };
        ThinkingAnalyticsAPI.Track("recieve_token",properties);  
    }
    
    
    public void  StartGame()
    {   
        Dictionary<string, object> properties = new Dictionary<string, object>(){};   
        ThinkingAnalyticsAPI.Track("start_game",properties);  
    }
     
    
    // todo name 替换为 nft id
    public void SelectToBattle(string nftID)
    {
        Dictionary<string, object> properties = new Dictionary<string, object>(){
            {"nft_id",nftID}
        };   
        ThinkingAnalyticsAPI.Track("select_to_battle",properties);
    }


    public void OpenPackage()
    {   
        Dictionary<string, object> properties = new Dictionary<string, object>(){};   
        ThinkingAnalyticsAPI.Track("open_package",properties);
    }
    
    public void OpenNFTPackage()
    {   
        Dictionary<string, object> properties = new Dictionary<string, object>(){};   
        ThinkingAnalyticsAPI.Track("open_nft_package",properties);
    }


    public void ChangeSound(string status)
    {
        Dictionary<string, object> properties = new Dictionary<string, object>(){
            {"status_after_change",status}
        };   
        ThinkingAnalyticsAPI.Track("change_sound",properties);
    }
    
    public void GiveFeedback()
    {   
        Dictionary<string, object> properties = new Dictionary<string, object>(){};   
        ThinkingAnalyticsAPI.Track("give_feedback",properties);
    }
    
    public void  ViewFAQ()
    {   
        Dictionary<string, object> properties = new Dictionary<string, object>(){};   
        ThinkingAnalyticsAPI.Track("view_FAQ",properties);
    }
    
    public void  ExploreSDK()
    {   
        Dictionary<string, object> properties = new Dictionary<string, object>(){};   
        ThinkingAnalyticsAPI.Track("explore_SDK",properties);
    }
    
    public void AboutMirrorjump()
    {   
        Dictionary<string, object> properties = new Dictionary<string, object>(){};   
        ThinkingAnalyticsAPI.Track("about_mirrorjump",properties);
    }


    public void EndGame(string reason)
    {   //game_over/user_end
        Dictionary<string, object> properties = new Dictionary<string, object>(){
            {"end_reason",reason}
        };   
        ThinkingAnalyticsAPI.Track("end_game",properties);
    }


    public void MintToNft(string nft_id,float sol_test_token_cost)
    {
        Dictionary<string, object> properties = new Dictionary<string, object>(){
            {"nft_id",nft_id},
            {"sol_test_token_cost",sol_test_token_cost}
        };   
        ThinkingAnalyticsAPI.Track("mint_to_nft",properties);
        
    }
    
    public void ListNft(string nft_id,string order_id,float token_price,bool if_succeed)
    {
        Dictionary<string, object> properties = new Dictionary<string, object>(){
            {"nft_id",nft_id},
            {"order_id",order_id},
            {"token_price",token_price},
            {"if_succeed",if_succeed}
        };   
        ThinkingAnalyticsAPI.Track("list_nft",properties);
        
    }
    
    public void ChangeListPrice(string nft_id,string order_id,float nft_price_after)
    {
        Dictionary<string, object> properties = new Dictionary<string, object>(){
            {"nft_id",nft_id},
            {"order_id",order_id},
            {"nft_price_after",nft_price_after},
        };   
        ThinkingAnalyticsAPI.Track("change_list_price",properties);
    }
    
    public void CancelList(string nft_id,string order_id,float nft_price)
    {
        Dictionary<string, object> properties = new Dictionary<string, object>(){
            {"nft_id",nft_id},
            {"order_id",order_id},
            {"nft_price",nft_price},
        };   
        ThinkingAnalyticsAPI.Track("cancel_list",properties);
    }
    
    
    
    
    // nft manager 前置打点
    
    
    // mint_to_nft_start    change_list_price_start   list_nft_start  cancel_list_start

    public void MintToNFTStart(string nft_id)
    {
        Dictionary<string, object> properties = new Dictionary<string, object>(){
            {"nft_id",nft_id}
        };   
        
        ThinkingAnalyticsAPI.Track("mint_to_nft_start",properties);
    }

    public void ChangeListPriceStart(float beforePrice,string nft_id)
    {
        Dictionary<string, object> properties = new Dictionary<string, object>(){
            {"nft_price_before",beforePrice},
            {"nft_id",nft_id}
        };
        
        ThinkingAnalyticsAPI.Track("change_list_price_start",properties);
    }


    public void ListNFTStart(string nft_id)
    {
        Dictionary<string, object> properties = new Dictionary<string, object>(){
            {"nft_id",nft_id}
        };   
        ThinkingAnalyticsAPI.Track("list_nft_start",properties);
    }

    public void CancelListStart(string nft_id)
    {
        Dictionary<string, object> properties = new Dictionary<string, object>(){
            {"nft_id",nft_id}
        };   
        ThinkingAnalyticsAPI.Track("cancel_list_start",properties);
    }
    
    public void UserSet(string  userEmail)
    {
        ThinkingAnalyticsAPI.UserSet(new Dictionary<string, object>()
            {
                {"email_address", userEmail}
            }
        );
        
    }
    
    //login  email_address

    public void LoginEvent(string emailAddress)
    {
        Dictionary<string, object> properties = new Dictionary<string, object>(){
            {"email_address",emailAddress}
        };   
        ThinkingAnalyticsAPI.Track("login",properties);
    }
    

    public void OpenMarketPlace()
    {
        Dictionary<string, object> properties = new Dictionary<string, object>(){
          
        };   
        ThinkingAnalyticsAPI.Track("open_marketplace",properties);
    }


    public void OpenWallet()
    {
        Dictionary<string, object> properties = new Dictionary<string, object>(){
          
        };   
        ThinkingAnalyticsAPI.Track("open_wallet",properties);
    }
    
    
    
    
    
    
}
