using System;
using System.Collections;
using System.Collections.Generic;
using GoogleMobileAds.Api;
using UnityEngine;
using UnityEngine.SceneManagement;
using Random = UnityEngine.Random;

public class InterstitialAdPlayer : MonoBehaviour
{   
    
    public GoogleMobileAdsManager GoogleMobileAdsManager;
    
    private void Start()
    {
       LoadInterstitial();
    }
    
    

    private void OnDestroy()
    {
        DestroyInterstitial();
    }

    public void ShowInterstitialAd()
    {

        if (GlobalDef.CanUserGoogleAdMob)
        {
            SoundManager.Instance.PlaySound(SoundName.Close);
            int random =  Random.Range(1, 101);

            if (random < 80)
            {   
                TAManager.Instance.EndGame("user_end");
                SceneManager.LoadScene("Menu");
                return;
            }
        
            if ( GoogleMobileAdsManager.GetInterstitialAd().IsLoaded()) {
                GoogleMobileAdsManager.GetInterstitialAd().Show();
            }
        }
    }
    
    public void DestroyInterstitial()
    {
        GoogleMobileAdsManager.GetInterstitialAd().Destroy();
    }

    public void LoadInterstitial()
    {
        if (GlobalDef.CanUserGoogleAdMob)
        {
            GoogleMobileAdsManager.InstantiateInterstitialView();
            AddInterstitialAdEvent();
            GoogleMobileAdsManager.LoadInterstitialAd();
        }
    }


    public void AddInterstitialAdEvent()
    {
        // Called when an ad request has successfully loaded.
        GoogleMobileAdsManager.GetInterstitialAd().OnAdLoaded += HandleOnAdLoaded;
        // Called when an ad request failed to load.
        GoogleMobileAdsManager.GetInterstitialAd().OnAdFailedToLoad += HandleOnAdFailedToLoad;
        // Called when an ad is shown.
        GoogleMobileAdsManager.GetInterstitialAd().OnAdOpening += HandleOnAdOpening;
        // Called when the ad is closed.
        GoogleMobileAdsManager.GetInterstitialAd().OnAdClosed += HandleOnAdClosed;
    }
    
    public void HandleOnAdOpening(object sender, EventArgs args)
    {
        
    }
    public void HandleOnAdLoaded(object sender, EventArgs args)
    {
       
    }
    public void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
       
    }
    
    public void HandleOnAdClosed(object sender, EventArgs args)
    {   
        TAManager.Instance.EndGame("user_end");
        SceneManager.LoadScene("Menu");
    }


}
