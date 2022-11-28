using System;
using GoogleMobileAds.Api;
using UnityEngine;

public class RewardAdPlayer : MonoBehaviour
{
   public GameMenu GameMenu;
   
   public bool IsRewardProp = false;

   public UIManager UIManager;

   public GameObject RewardButton;

   public GameObject RespawnButton;
   
   
   
   
   
   
   public GoogleMobileAdsManager GoogleMobileAdsManager;

 
   
   
   private void Start()
   {
      
      
      if (null != RespawnButton)
      {
         RespawnButton.SetActive(false);
      }
      
      
      if (null != RewardButton)
      {
         RewardButton.SetActive(false);
      }
      
   
      GoogleMobileAdsManager.InstantiateRewardView();
         AddRewardAdEvent();
         GoogleMobileAdsManager.LoadRewardAd();
       
         
   }
   
   
   


   private void OnDestroy()
   {
      DestroyRewardAd();
   }

   public void ShowRewardAd()
   {
      if ( GoogleMobileAdsManager.GetRewardAd().IsLoaded()) {
           GoogleMobileAdsManager.GetRewardAd().Show();
           TAManager.Instance.ViewAdStart();
      }
      
      
   }

   public void DestroyRewardAd()
   {
      GoogleMobileAdsManager.GetRewardAd().Destroy();
   }
   
   
   public void AddRewardAdEvent()
   {
      Debug.Log("RewardAd:Add Event Start");
      // Called when an ad request has successfully loaded.
      GoogleMobileAdsManager.GetRewardAd().OnAdLoaded += HandleRewardedAdLoaded;
      // Called when an ad request failed to load.
      GoogleMobileAdsManager.GetRewardAd().OnAdFailedToLoad += HandleRewardedAdFailedToLoad;
      // Called when an ad is shown.
      GoogleMobileAdsManager.GetRewardAd().OnAdOpening += HandleRewardedAdOpening;
      // Called when an ad request failed to show.
      GoogleMobileAdsManager.GetRewardAd().OnAdFailedToShow += HandleRewardedAdFailedToShow;
      // Called when the user should be rewarded for interacting with the ad.
      GoogleMobileAdsManager.GetRewardAd().OnUserEarnedReward += HandleUserEarnedReward;
      // Called when the ad is closed.
      GoogleMobileAdsManager.GetRewardAd().OnAdClosed += HandleRewardedAdClosed;
      Debug.Log("RewardAd:Add Event End");
      
   }

   public void HandleRewardedAdLoaded(object sender, EventArgs args)
   {
      // if (null != BannerAdPlayer)
      // {
      //   BannerAdPlayer.LoadBanner();
      // }
      
      
      if (null != RespawnButton)
      {
         RespawnButton.SetActive(true);
      }
      
      
      if (null != RewardButton)
      {
         RewardButton.SetActive(true);
      }

      
      
   }

   public void HandleRewardedAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
   {
      Debug.Log("HandleRewardedAdFailedToLoad");
   }

   public void HandleRewardedAdOpening(object sender, EventArgs args)
   {
     
      Debug.Log("HandleRewardedAdOpening");
   }

   public void HandleRewardedAdFailedToShow(object sender, AdErrorEventArgs args)
   {
      Debug.Log("HandleRewardedAdFailedToShow");
   }

   public void HandleRewardedAdClosed(object sender, EventArgs args)
   {
      Debug.Log("HandleRewardedAdClosed");
      TAManager.Instance.ViewAd(true);
      
      if (null != UIManager)
      {  
         
         Debug.Log("OpenRewardAdvice");
         
         UIManager.OpenRewardAdvice();
       
      }
      else
      {
         GameMenu.GameRespawn();
      }
      
      GoogleMobileAdsManager.LoadRewardAd();
   }

   public void HandleUserEarnedReward(object sender, Reward args)
   {
      string type = args.Type;
      double amount = args.Amount;
      
      Debug.Log("HandleUserEarnedReward");
      
   }



   
   
   
}
