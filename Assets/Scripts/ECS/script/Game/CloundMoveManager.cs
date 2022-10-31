using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public enum CloundPanelTag
{
    Bottom,
    Middle,
    Top
}
public class CloundMoveManager : MonoBehaviour
{
    public GameObject ButtomClound;
    
    public GameObject MiddleClound;
    
    public GameObject TopClound;
    
    private CloundPanelTag backPanelTag = CloundPanelTag.Bottom;
    
    private int TagIndex = 0;

    private float UnitDistance = 19.12f;


    
    
    
    
    
    public void ReplaceClound()
    {   

        if (backPanelTag == CloundPanelTag.Bottom)
        {
            SetPosition(ButtomClound);
            
        }else if (backPanelTag == CloundPanelTag.Middle)
        {
            SetPosition(MiddleClound);
            
        }else if (backPanelTag == CloundPanelTag.Top)
        {
            SetPosition(TopClound);
        }

        TagIndex++;

        SetTagByIndex();
    }
    
    
    private void SetTagByIndex()
    {
        if (TagIndex == 3)
        {
            TagIndex = 0;
        }

        if (TagIndex == 0)
        {
            backPanelTag = CloundPanelTag.Bottom;
            
        }else if (TagIndex == 1)
        {
            backPanelTag = CloundPanelTag.Middle;
        }else if (TagIndex == 2)
        {
            backPanelTag = CloundPanelTag.Top;
        }
        
    }

    private void SetPosition(GameObject gameObject)
    {
     
        float PositionY = gameObject.transform.position.y + 3 * UnitDistance;
        Vector3 Position = new Vector3(gameObject.transform.position.x, PositionY,
            gameObject.transform.position.z);
        
        gameObject.transform.position = Position;
        
    }
    
    
    public void ResetCloundPosition()
    {
        backPanelTag = CloundPanelTag.Bottom;
        TagIndex = 0;
        ButtomClound.transform.position = new Vector3(0, 0, 0);
        MiddleClound.transform.position = new Vector3(0, 0+ UnitDistance, 0);
        TopClound.transform.position = new Vector3(0, 0+ 2 * UnitDistance,0);
        
        ButtomClound.transform.gameObject.GetComponent<ScrollSceneItem>().SetSpeed(0.5f);
        
        MiddleClound.transform.gameObject.GetComponent<ScrollSceneItem>().SetSpeed(0.5f);
        
        TopClound.transform.gameObject.GetComponent<ScrollSceneItem>().SetSpeed(0.5f);
        
    }

}
