using System;
using GoogleMobileAds.Api;
using UnityEngine;

public class RewardAdPlayer : MonoBehaviour
{
   public GameMenu GameMenu;
   
   public bool IsRewardProp = false;

   public UIManager UIManager;

   public GameObject RewardButton;
   
   public GoogleMobileAdsManager GoogleMobileAdsManager;

   public BannerAdPlayer BannerAdPlayer;
   
   
   private void Start()
   {
      GoogleMobileAdsManager.InstantiateRewardView();
      AddRewardAdEvent();
      GoogleMobileAdsManager.LoadRewardAd();
      if (null != RewardButton)
      {
         RewardButton.SetActive(true);
      }
   }


   private void OnDestroy()
   {
      DestroyRewardAd();
   }

   public void ShowRewardAd()
   {
      
      if ( GoogleMobileAdsManager.GetRewardAd().IsLoaded()) {
           GoogleMobileAdsManager.GetRewardAd().Show();
      }
   }

   public void DestroyRewardAd()
   {
      GoogleMobileAdsManager.GetRewardAd().Destroy();
   }
   
   
   public void AddRewardAdEvent()
   {
      
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
      
   }

   public void HandleRewardedAdLoaded(object sender, EventArgs args)
   {
      if (null != BannerAdPlayer)
      {
        BannerAdPlayer.LoadBanner();
      }
   }

   public void HandleRewardedAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
   {
       
   }

   public void HandleRewardedAdOpening(object sender, EventArgs args)
   {
       
   }

   public void HandleRewardedAdFailedToShow(object sender, AdErrorEventArgs args)
   {
        
   }

   public void HandleRewardedAdClosed(object sender, EventArgs args)
   {

      if (IsRewardProp)
      {
         UIManager.OpenRewardAdvice();
         RewardButton.SetActive(false);
      }
      else
      {
         GameMenu.GameRespawn();
      }
      
      
   }

   public void HandleUserEarnedReward(object sender, Reward args)
   {
      string type = args.Type;
      double amount = args.Amount;
   }



   
   
   
}
