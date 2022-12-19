using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;


public enum RankState{
     DayRank,
     WeekRank,
     HistoryRank,
     Default,
}

public class RankListManager : MonoBehaviour
{


    public RankListDataProvider RankListDataProvider;

    private List<RankListDataItem> datas;

    public TextMeshProUGUI UpdateTime;

    private RankState _rankState = RankState.Default;


    public Sprite BorderImage;

    public Sprite DefaultHeader;
    
    [SerializeField] private Color Black;
    [SerializeField] private Color Yellow;

    public Image DayBg;
    public Image WeekBg;
    public Image HistoryBg;

    public TextMeshProUGUI DayText;
    
    public TextMeshProUGUI WeekText;
    
    public TextMeshProUGUI HistoryText;

    public GameObject UpdateTimeIcon;

    public GameObject Header;


    public GameObject TimeIcon;

    public Image UserHeaderContent;

    public Sprite DefaultSprite;
    




    public GameObject RankViewport;
    

    public TextMeshProUGUI UserRank;

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


        DayBg.sprite = BorderImage;
        WeekBg.sprite = BorderImage;
        HistoryBg.sprite = BorderImage;

        DayText.color = Black;
        WeekText.color = Black;
        HistoryText.color = Black;
        
        
    }

    private void OnDestroy()
    {
        EventDispatcher.Instance.OnRankListResponse -= OnRankListResponse;
    }

    public void OnRankListResponse(RankListResponse rankListResponse)
    {

        GlobalDef.RankUserID = rankListResponse.data.user_info.user_id;
        UpdateTimeIcon.SetActive(false);
        if (_rankState == RankState.DayRank)
        {

            RankViewport.GetComponent<RectTransform>().anchoredPosition =
                new Vector3( RankViewport.GetComponent<RectTransform>().anchoredPosition.x, -476);
            DayBg.sprite = null;
            WeekBg.sprite = BorderImage;
            HistoryBg.sprite = BorderImage;

            DayText.color = Yellow;
            WeekText.color = Black;
            HistoryText.color = Black;
            
            TimeIcon.SetActive(true);
            
          //  Leaderboard resets in 3 days and 16 hours!
          //  Leaderboard resets in xx hours and xx minutes

          string hours = "";

          string minutes = "";
          
          if (rankListResponse.data.count_down.hour > 1)
          {
              hours = "hours";
          }
          else
          {
              hours = "hour";
          }
          
          if (rankListResponse.data.count_down.minute > 1)
          {
              minutes = "minutes";
          }
          else
          {
              minutes = "minute";
          }

          
          string updateTime = "Leaderboard resets in " +rankListResponse.data.count_down.hour +" "+hours + " and " + rankListResponse.data.count_down.minute + " "+minutes;
          UpdateTime.text = updateTime;
          UpdateTimeIcon.SetActive(true);
        }else if (_rankState == RankState.WeekRank)
        {   
            
            RankViewport.GetComponent<RectTransform>().anchoredPosition =
                new Vector3( RankViewport.GetComponent<RectTransform>().anchoredPosition.x, -476);
            DayBg.sprite = BorderImage;
            WeekBg.sprite = null;
            HistoryBg.sprite = BorderImage;

            DayText.color = Black;
            WeekText.color = Yellow;
            HistoryText.color = Black;
            TimeIcon.SetActive(true);
            
            string hours = "";

            string day = "";
          
            if (rankListResponse.data.count_down.day > 1)
            {
                day = "days";
            }
            else
            {
                day = "day";
            }
          
            if (rankListResponse.data.count_down.hour > 1)
            {
                hours = "hours";
            }
            else
            {
                hours = "hour";
            }
            string updateTime = "Leaderboard resets in " +rankListResponse.data.count_down.day +" "+day + " and " + rankListResponse.data.count_down.hour + " "+hours;
            UpdateTime.text = updateTime;
            
            UpdateTimeIcon.SetActive(true);

        }else if (_rankState == RankState.HistoryRank)
        {   
            RankViewport.GetComponent<RectTransform>().anchoredPosition =
                new Vector3( RankViewport.GetComponent<RectTransform>().anchoredPosition.x, -406);
            TimeIcon.SetActive(false);
            DayBg.sprite = BorderImage;
            WeekBg.sprite = BorderImage;
            HistoryBg.sprite = null;

            DayText.color = Black;
            WeekText.color = Black;
            HistoryText.color =Yellow;

            UpdateTime.text = "";
            UpdateTimeIcon.SetActive(false);
        }
        
        datas.Clear();
        
        for (int i = 0; i < rankListResponse.data.ranking.Count; i++)
        {
            RankListDataItem rankListDataItem = new RankListDataItem();
            rankListDataItem.Number = i + 1;
            rankListDataItem.Name = rankListResponse.data.ranking[i].username;
            rankListDataItem.Rank = i + 1 + "";

            if (null != rankListResponse.data.ranking[i].user_id && rankListResponse.data.ranking[i].user_id !="")
            {
                string preFix = rankListResponse.data.ranking[i].user_id.Substring(0,3);
                string postFix = rankListResponse.data.ranking[i].user_id.Substring(rankListResponse.data.user_info.user_id.Length-3,2);
                rankListDataItem.Address = preFix + "***" + postFix;
            }
            else
            {
                rankListDataItem.Address = "";
            }
            
          
            
            rankListDataItem.Score = rankListResponse.data.ranking[i].score.ToString();
            rankListDataItem.DateTime = rankListResponse.data.ranking[i].time;
            rankListDataItem.ImageUrl = rankListResponse.data.ranking[i].nft.image;
            rankListDataItem.UserId = rankListResponse.data.ranking[i].user_id;
            datas.Add(rankListDataItem);
            
        }
        
        RankListDataProvider.RefreshData(datas);
        
        
      
       UserName.text = rankListResponse.data.user_info.username;


       if (null != rankListResponse.data.user_info.user_id && rankListResponse.data.user_info.user_id != "" )
       {
           string preFixUser = rankListResponse.data.user_info.user_id.Substring(0,3);
           string postFixUser = rankListResponse.data.user_info.user_id.Substring(rankListResponse.data.user_info.user_id.Length-3,2);
           Address.text = preFixUser + "***" + postFixUser;
       }
       else
       {
           Address.text = "";
       }
       
       UserScore.text = rankListResponse.data.user_info.score.ToString();
       DateTime.text = rankListResponse.data.user_info.time;

       string userImage = rankListResponse.data.user_info.nft.image;
       
       
       LoadingPanel.Instance.SetLoadingPanelEnable(false);

      
       if (rankListResponse.data.user_info.rank != null && rankListResponse.data.user_info.rank != "" )
       {
           UserRank.text = rankListResponse.data.user_info.rank;
       }
       else
       {
           UserRank.text = "100+";
       }


       if (null != rankListResponse.data.user_info.score && rankListResponse.data.user_info.score == 0)
       {
           UserRank.text = "--";
       }
<<<<<<< HEAD
           
=======
       
>>>>>>> Google-Dev1
       
       Header.SetActive(true);

       UserHeader.sprite = DefaultHeader;

       if (UserName.text == null)
       {
           UserName.text = "-";
       }
       
       if (DateTime.text == null)
       {
           DateTime.text = "-";
       }
       
       
       if (null == rankListResponse.data.user_info.nft.image ||
           "" == userImage)
       {
           UserHeader.sprite = DefaultHeader;
           return;
       }

       UserHeaderContent.sprite = DefaultSprite;
       
       //todo loader image
       SetImage(userImage);
       
    
       
      // Leaderboard resets in 3 days and 16 hours!
    }
    

    public void OpenDayRank()
    {
        _rankState = RankState.DayRank;
        NetworkManager.Instance.GetDailyRank(LoginState.WalletAddress,100);
        LoadingPanel.Instance.SetLoadingPanelEnable(true);
        
    }
    
    
    public void OpenWeekRank()
    {
        _rankState = RankState.WeekRank;
        NetworkManager.Instance.GetWeeklyRank(LoginState.WalletAddress,100);
        LoadingPanel.Instance.SetLoadingPanelEnable(true);
    }
    
    public void OpenHistoryRank()
    {
        _rankState = RankState.HistoryRank;
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
