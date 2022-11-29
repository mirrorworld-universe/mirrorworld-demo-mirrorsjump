
using System;
using GoogleMobileAds.Api;
using UnityEngine;

public class GoogleMobileAdsManager:MonoBehaviour
{   
    
    private BannerView bannerView;

    
    public BannerView GetBannerView()
    {
        return bannerView;
    }
    
  
    
    public void  InitGoogleMobileAdsSDK()
    {
        MobileAds.Initialize(initStatus =>
        {
              
        });
     
    }


    public void PreloadRewardAd()
    {
        InstantiateRewardView();
        LoadRewardAd();
    }

    


    // Banner Ads

    public void InstantiateBannerView()
    {

        // ca-app-pub-3940256099942544/6300978111

        //ZHESH  ca-app-pub-8941705055545500/8436874789
#if UNITY_ANDROID
        string adUnitId = "ca-app-pub-8941705055545500/8436874789";
#elif UNITY_IPHONE
        //string adUnitId = "ca-app-pub-3940256099942544/2934735716";
        string adUnitId = "ca-app-pub-3940256099942544/2934735716";
#else
            string adUnitId = "unexpected_platform";
#endif

        bannerView = new BannerView(adUnitId,  AdSize.Banner, AdPosition.Top);
    }
    
    public void LoadBanner()
    {
        AdRequest request = new AdRequest.Builder().Build();
        bannerView.LoadAd(request);
        bannerView.Hide();
    }
    


  
    
    
    
    //   InterstitialAd
    private InterstitialAd interstitial;

    public InterstitialAd GetInterstitialAd()
    {
        return interstitial;
    }


    public void InstantiateInterstitialView()
    {


        //ca-app-pub-3940256099942544/1033173712

        // ZHESHI ca-app-pub-8941705055545500/6960480890
#if UNITY_ANDROID
        string adUnitId = "ca-app-pub-8941705055545500/6960480890";
#elif UNITY_IPHONE
        //string adUnitId = "ca-app-pub-3940256099942544/4411468910";
        string adUnitId = "ca-app-pub-8941705055545500/1394368991";

#else
        string adUnitId = "unexpected_platform";
#endif

        // Initialize an InterstitialAd.
        this.interstitial = new InterstitialAd(adUnitId);
    }

    public void LoadInterstitialAd()
    {
        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the interstitial with the request.
        this.interstitial.LoadAd(request);
    }
    
    
    
    // RewardedAd
    private RewardedAd rewardedAd;

    public RewardedAd GetRewardAd()
    {
        return rewardedAd;
    }

    public void InstantiateRewardView()
    {  
        
        //ca-app-pub-3940256099942544/5224354917
        
        // ZHENSH  ca-app-pub-8941705055545500/5247658562
        string adUnitId;
#if UNITY_ANDROID
        adUnitId = "ca-app-pub-8941705055545500/5247658562";
#elif UNITY_IPHONE
        //adUnitId = "ca-app-pub-3940256099942544/1712485313";
        adUnitId = "ca-app-pub-8941705055545500/7407498600";
#else
            adUnitId = "unexpected_platform";
#endif

        rewardedAd = new RewardedAd(adUnitId);
    }
    
    
    
    
    
    
    public void LoadRewardAd()
    {
        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        this.rewardedAd.LoadAd(request);
    }
    
    
}
