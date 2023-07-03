
using System;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class GroupRuleModule : MonoBehaviour
{
     private float TheTopStairsHeight;
     
     private float GenerateThreshold = 10;

     public GameObject CameraObject;

     public GameController GameController;

     public RuleConfig RuleConfig;


     public StairsFactory StairsFactory;

     private StairsRuleItem TheLastRuleItem = null;
     
     private List<StairsRuleItem> currentItems = new List<StairsRuleItem>(3);


     private float TheLeftBlackRoleX = -3.96f;
     
     private float TheRightBlackRoleX = 3.96f;
     
     



     public void SetLastRuleItem(StairsRuleItem ruleItem)
     {
         TheLastRuleItem = ruleItem;
     }

     
  
    private void FixedUpdate()
    {
        if (GameController.GetGameState() == GameState.Gaming)
        {   
           
            while (TheTopStairsHeight - CameraObject.transform.position.y <= GenerateThreshold)
            {
                 CallGenerate();
            }
        }
        
    }
    
    private Vector2 GenerateStairsCoordinate()
    {
        float VerticalCoordinate = TheTopStairsHeight + RandomSpaceY(RuleConfig.GetSpaceYFloor(),RuleConfig.GetSpaceYUpper());
        float HorizontalCoordinate = RandomX();
        TheTopStairsHeight = VerticalCoordinate;
        return new Vector2(HorizontalCoordinate, VerticalCoordinate);
    }
    
    private float RandomX()
    {
        Vector3 ScreenZero = Camera.main.ScreenToWorldPoint(new Vector3(0, 0, 0));
        return Random.Range(ScreenZero.x + 1f, -ScreenZero.x - 1f);
    }
    
    private float RandomSpaceY(float floorValue,float upperValue)
    {
        return  Random.Range(floorValue,upperValue);
    }


    public void SetTopStaisHeight(float height)
    {
        TheTopStairsHeight = height;
    }



    private float CrossingDetection(float value)
    {  
        
        Vector3 ScreenZero = Camera.main.ScreenToWorldPoint(new Vector3(0, 0, 0));
        if (value <= ScreenZero.x + 1f)
        {
            return ScreenZero.x + 1f;
        }
        
        if (value >= -ScreenZero.x - 1f)
        {
            return -ScreenZero.x - 1f;
        }

        return value;

    }
    
    


    private void CallGenerate()
    {   
        
        GenerateStairItemData();
        DetectionType();
        DetectionPositionBlackRole();

        for (int i = 0; i < currentItems.Count; i++)
        {
            StairsFactory.GenerateStairs(currentItems[i].pos,currentItems[i].StairsType);
            
        }

        TheLastRuleItem = currentItems[currentItems.Count - 1];
        currentItems.Clear();
    }


    private void GenerateStairItemData()
    {
        currentItems.Clear();
        for (int i = 0; i < 3; i++)
        {
            StairsRuleItem stairsRuleItem = new StairsRuleItem();
            stairsRuleItem.StairsType = RuleConfig.GenerateStairsType();
            stairsRuleItem.pos = GenerateStairsCoordinate();
            
            currentItems.Add(stairsRuleItem);
        }
    }
    
    
    private void DetectionPositionX()
    {
        // todo 处理 X 方向上的均匀随机分布
        
    }
    
    private void DetectionPositionBlackRole()
    {
        
        if (TheLastRuleItem.StairsType == StairsType.BlackRole)
        {
            if (Math.Abs(TheLastRuleItem.pos.x - currentItems[0].pos.x) < 3)
            {
                  // adjust
                  if (TheLastRuleItem.pos.x > 0)
                  {
                      
                      currentItems[0].pos.x = CrossingDetection(currentItems[0].pos.x -3);
                  }
                  else
                  {
                      currentItems[0].pos.x = CrossingDetection( currentItems[0].pos.x +3);
                  }
                  
            }
            
            
        }
        
        
        if ( currentItems[0].StairsType == StairsType.BlackRole)
        {   
            
            if (Math.Abs(TheLastRuleItem.pos.x - currentItems[0].pos.x) < 3)
            {
                // adjust
                if (TheLastRuleItem.pos.x > 0)
                {
                    currentItems[0].pos.x = CrossingDetection(currentItems[0].pos.x -5.6f);
                }
                else
                {
                    currentItems[0].pos.x = CrossingDetection(currentItems[0].pos.x + 5.6f);
                }
                  
            }



            if (Math.Abs( currentItems[0].pos.x  - currentItems[1].pos.x) < 3)
            {
                // adjust
                if (currentItems[0].pos.x > 0)
                {
                   
                    currentItems[1].pos.x = CrossingDetection( currentItems[1].pos.x -5.6f);
                }
                else
                {
                    currentItems[1].pos.x = CrossingDetection(   currentItems[1].pos.x +5.6f);
                }
                  
            }
            
            
        }
        
        
        if ( currentItems[1].StairsType == StairsType.BlackRole)
        {
            
            if (Math.Abs(currentItems[0].pos.x - currentItems[1].pos.x) < 3)
            {
                // adjust
                if (currentItems[0].pos.x > 0)
                {
                    currentItems[1].pos.x = CrossingDetection(currentItems[1].pos.x -5.6f);
                }
                else
                {
                    currentItems[1].pos.x = CrossingDetection( currentItems[1].pos.x +5.6f);
                }
                  
            }
            
            
            if (Math.Abs( currentItems[1].pos.x  - currentItems[2].pos.x) < 3)
            {
                // adjust
                if (currentItems[1].pos.x > 0)
                {
                    currentItems[2].pos.x =  CrossingDetection(currentItems[2].pos.x - 5.6f);
                }
                else
                {
                    
                    currentItems[2].pos.x =  CrossingDetection(currentItems[2].pos.x +5.6f);
                }
                  
            }
            
            
        }


        if (currentItems[2].StairsType == StairsType.BlackRole)
        {
            if (Math.Abs(currentItems[2].pos.x - currentItems[1].pos.x) < 3)
            {
                // adjust
                if (currentItems[1].pos.x > 0)
                {
                    
                    currentItems[2].pos.x =  CrossingDetection(currentItems[2].pos.x - 5.6f);
                }
                else
                {
                    currentItems[2].pos.x =  CrossingDetection(currentItems[2].pos.x + 5.6f);
                }
                  
            }
        }

        
    }
    
    private void DetectionType()
    {
        if (TheLastRuleItem.StairsType == StairsType.Breakage || TheLastRuleItem.StairsType == StairsType.BlackRole)
        {
            currentItems[0].StairsType = StairsType.General;
        }

        if (currentItems[0].StairsType == StairsType.Breakage || currentItems[0].StairsType == StairsType.BlackRole)
        {
            currentItems[1].StairsType = StairsType.General;
        }
        
        if (currentItems[1].StairsType == StairsType.Breakage || currentItems[1].StairsType == StairsType.BlackRole)
        {
            currentItems[2].StairsType = StairsType.General;
        }
        
    }

    
    

   
  
}
