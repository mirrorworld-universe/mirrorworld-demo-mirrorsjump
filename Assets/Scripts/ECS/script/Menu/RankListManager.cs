using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class RankListManager : MonoBehaviour
{


    public RankListDataProvider RankListDataProvider;

    private List<RankListDataItem> datas;

   // public TextMeshProUGUI UserRank;

    public Image UserHeader;

    public TextMeshProUGUI UserName;

    public TextMeshProUGUI Address;

    public TextMeshProUGUI UserScore;

    public TextMeshProUGUI DateTime;
    


    private void Start()
    {
        datas = new List<RankListDataItem>();
        EventDispatcher.Instance.OnRankListResponse += OnRankListResponse;
        OpenDayRank();
    }

    private void OnDestroy()
    {
        EventDispatcher.Instance.OnRankListResponse -= OnRankListResponse;
    }

    public void OnRankListResponse(RankListResponse rankListResponse)
    {
        datas.Clear();
        
        for (int i = 0; i < rankListResponse.data.ranking.Count; i++)
        {
            RankListDataItem rankListDataItem = new RankListDataItem();
            rankListDataItem.Number = i + 1;
            rankListDataItem.Name = rankListResponse.data.ranking[i].user_name;
            rankListDataItem.Rank = i + 1 + "";
            
            string preFix = rankListResponse.data.ranking[i].user_id.Substring(0,3);
            string postFix = rankListResponse.data.ranking[i].user_id.Substring(rankListResponse.data.user_info.user_id.Length-3,2);
            rankListDataItem.Address = preFix + "***" + postFix;
            rankListDataItem.Score = rankListResponse.data.ranking[i].score.ToString();
            rankListDataItem.DateTime = rankListResponse.data.ranking[i].time;
            rankListDataItem.ImageUrl = rankListResponse.data.ranking[i].nft.image;
            
            datas.Add(rankListDataItem);
            
        }
        
        RankListDataProvider.RefreshData(datas);
        
        
      
       UserName.text = rankListResponse.data.user_info.userame;
       string preFixUser = rankListResponse.data.user_info.user_id.Substring(0,3);
       string postFixUser = rankListResponse.data.user_info.user_id.Substring(rankListResponse.data.user_info.user_id.Length-3,2);
       Address.text = preFixUser + "***" + postFixUser;
       UserScore.text = rankListResponse.data.user_info.score.ToString();
       DateTime.text = rankListResponse.data.user_info.time;

       string userImage = rankListResponse.data.user_info.nft.image;
       
       //todo loader image
       SetImage(userImage);
       
       LoadingPanel.Instance.SetLoadingPanelEnable(false);
       

    }
    

    public void OpenDayRank()
    {   
        
        NetworkManager.Instance.GetDailyRank(LoginState.WalletAddress,100);
        LoadingPanel.Instance.SetLoadingPanelEnable(true);
        
    }
    
    
    public void OpenWeekRank()
    {   
        NetworkManager.Instance.GetWeeklyRank(LoginState.WalletAddress,100);
        LoadingPanel.Instance.SetLoadingPanelEnable(true);
    }
    
    public void OpenHistoryRank()
    {
        NetworkManager.Instance.GetHistoryRank(LoginState.WalletAddress,100);
        LoadingPanel.Instance.SetLoadingPanelEnable(true);
    }
    
    
    private async void SetImage(string url)
    {  
        
        Sprite sprite = await ImageLoader.LoadSprite(url);
        if (null != sprite)
        {
            if (null !=  UserHeader && transform.gameObject.activeSelf)
            {
                UserHeader.sprite = sprite;
                //CanvasGroup.alpha = 1;
            }
        }else
        {
            UserHeader.sprite = null;
        }
    }
    

  
}
