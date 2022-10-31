using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class CameraTracking : MonoBehaviour
{  
   
   public GameObject MirrorRole;
   
   public MapRunSystem MapRunSystem;

   public GameObject GameController;

   public CloundMoveManager CloundMoveManager;
   
    // 当最下面一张地图与相机位置相差多少时，移动地图
   private float MapChangeDelta = 19.20f;
   
   
   private bool IsGameOver = false;
   
   // Track the threshold
   private float UpperTrackThreshold = 2f;

   private float FloorTrackThreshold = 5.5f;
   
   private bool IsStartFall = false;
   
  

   private void Start()
   {
      int index = PlayerPrefs.GetInt("CurrentTheme");

      transform.gameObject.GetComponent<AudioSource>().clip =SoundManager.Instance.Clips[index];

      transform.gameObject.GetComponent<AudioSource>().mute = SoundManager.Instance.GetSoundState();
      

   }

   private void FixedUpdate()
   {
      if (GameController.GetComponent<GameController>().GetGameState() == GameState.Gaming)
      {
         // driver map move 
         if (transform.position.y - MapRunSystem.BottomMapY() >= MapChangeDelta)
         {
            MapRunSystem.MovingMap();
            CloundMoveManager.ReplaceClound();
         }
      }
      
}

   private void LateUpdate () 
   {
      if(!IsGameOver)
      {
         if (MirrorRole.transform.position.y -  transform.position.y> UpperTrackThreshold)
         {   
            
            if (IsStartFall)
            {
               IsStartFall = false;
               MirrorRole.GetComponent<MirrorJump>().FallStateNotify(IsStartFall);
            }
            Vector3 TrackPosition = new Vector3(transform.position.x, MirrorRole.transform.position.y - UpperTrackThreshold, transform.position.z);
            transform.position =TrackPosition;
            return;
         }


         if (transform.position.y - MirrorRole.transform.position.y > FloorTrackThreshold || transform.position.y == 0)
         {
              // notify 
              if (!IsStartFall)
              {
                 IsStartFall = true;
                 // call method and notify
                 MirrorRole.GetComponent<MirrorJump>().FallStateNotify(IsStartFall);
              }

             
              // cancel tracking   
              // if (transform.position.y >= 0.1)
              // {
              //    // tracking
              //    float distance = Math.Abs(MirrorRole.transform.position.y - FloorTrackThreshold);
              //    Vector3 TrackPosition = new Vector3(transform.position.x, transform.position.y - distance, transform.position.z);
              //    
              //    if (TrackPosition.y <= 0)
              //    {
              //       return;
              //    }
              //    transform.position =TrackPosition;
              //    
              // }
           
            
         }
         
         
      }
   }

   public void ResetCameraPosition(long initY = 0)
   {
      Vector3 pos = transform.position;
      transform.position = new Vector3(pos.x, initY, pos.z);
   }
   
   
   
}
