//using System;
//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;

//public class BannerAdPlayer : MonoBehaviour
//{


//    public GoogleMobileAdsManager GoogleMobileAdsManager;
 
   
//   public void DestroyBanner()
//   {
//       GoogleMobileAdsManager.GetBannerView().Destroy();
//   }
   
//   public void ShowBanner()
//   {
//       GoogleMobileAdsManager.GetBannerView().Show();
//   }
    
//   public void HideBanner()
//   {
//       GoogleMobileAdsManager.GetBannerView().Hide();
//   }


//   private void OnDestroy()
//   {
//       DestroyBanner();
//   }
    
//   private void AddBannerEvent()
//   {   
//       //// Called when an ad request has successfully loaded.
//       //GoogleMobileAdsManager.GetBannerView().OnAdLoaded += this.HandleOnAdLoaded;
//       //// Called when an ad request failed to load.
//       //GoogleMobileAdsManager.GetBannerView().OnAdFailedToLoad += this.HandleOnAdFailedToLoad;
//       //// Called when an ad is clicked.
//       //GoogleMobileAdsManager.GetBannerView().OnAdOpening += this.HandleOnAdOpened;
//       //// Called when the user returned from the app after an ad click.
//       //GoogleMobileAdsManager.GetBannerView().OnAdClosed += this.HandleOnAdClosed;

//   }
    
//   public void HandleOnAdLoaded(object sender, EventArgs args)
//   {
//       ShowBanner();
//   }

//   //public void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
//   //{
//   //    print("HandleFailedToReceiveAd event received with message: "
//   //          + args.LoadAdError.GetMessage());
//   //}

//   public void HandleOnAdOpened(object sender, EventArgs args)
//   {
      
//   }

//   public void HandleOnAdClosed(object sender, EventArgs args)
//   {
//       DestroyBanner();
//   }

//   public void LoadBanner()
//   {   
//       GoogleMobileAdsManager.InstantiateBannerView();
//       AddBannerEvent();
//       GoogleMobileAdsManager.LoadBanner();
//   }
   
//}
