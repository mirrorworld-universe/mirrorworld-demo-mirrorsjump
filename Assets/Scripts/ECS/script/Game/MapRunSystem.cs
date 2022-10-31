using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public enum BackPanelTag
{
    Bottom,
    Middle,
    Top
}
public class MapRunSystem : MonoBehaviour
{

    public GameObject ButtomBack;
    
    public GameObject MiddleBack;
    
    public GameObject TopBack;
    
    
    
    // Theme
    public Sprite[] ThemeBackSprites = new Sprite[5];
    
    public Sprite[] ThemeGroudSprites = new Sprite[5];
    
    public Sprite[] ThemeCloudSprites = new Sprite[5];


    public SpriteRenderer TopSpriteRenderer;
    
    public SpriteRenderer MiddleSpriteRenderer;
    
    public SpriteRenderer BottomSpriteRenderer;
    
    public SpriteRenderer TopCloudSpriteRenderer;
    
    public SpriteRenderer MiddleCloudSpriteRenderer;
    
    public SpriteRenderer BottomCloudSpriteRenderer;
    
    public SpriteRenderer TopCloudSpriteRendererRight;
    
    public SpriteRenderer MiddleCloudSpriteRendererRight;
    
    public SpriteRenderer BottomCloudSpriteRendererRight;

    public SpriteRenderer GroudSpriteRenderer;


    private void Start()
    {
        RefreshTheme();
    }

    private void RefreshTheme()
    {

        int index = PlayerPrefs.GetInt("CurrentTheme");

        TopSpriteRenderer.sprite = ThemeBackSprites[index];
        MiddleSpriteRenderer.sprite = ThemeBackSprites[index];
        BottomSpriteRenderer.sprite = ThemeBackSprites[index];
        
        TopCloudSpriteRenderer.sprite = ThemeCloudSprites[index];
        MiddleCloudSpriteRenderer.sprite = ThemeCloudSprites[index];
        BottomCloudSpriteRenderer.sprite = ThemeCloudSprites[index];
        
        TopCloudSpriteRendererRight.sprite = ThemeCloudSprites[index];
        MiddleCloudSpriteRendererRight.sprite = ThemeCloudSprites[index];
        BottomCloudSpriteRendererRight.sprite = ThemeCloudSprites[index];

        GroudSpriteRenderer.sprite = ThemeGroudSprites[index];

    }
    
    
    


    private BackPanelTag backPanelTag = BackPanelTag.Bottom;
    
    private int TagIndex = 0;

    private float UnitDistance = 19.12f;
    
    public void MovingMap()
    {   

        if (backPanelTag == BackPanelTag.Bottom)
        {
            SetRotationAndPosition(ButtomBack);
            
        }else if (backPanelTag == BackPanelTag.Middle)
        {
            SetRotationAndPosition(MiddleBack);
        }else if (backPanelTag == BackPanelTag.Top)
        {
            SetRotationAndPosition(TopBack);
        }

        TagIndex++;

        SetTagByIndex();
    }

    public float BottomMapY()
    {
        if (backPanelTag == BackPanelTag.Bottom)
        {
            return ButtomBack.transform.position.y;
        }
        else if (backPanelTag == BackPanelTag.Middle)
        {
            return MiddleBack.transform.position.y;
        }
        else
        {
            return TopBack.transform.position.y;
        }
    }
    
    private void SetTagByIndex()
    {
        if (TagIndex == 3)
        {
            TagIndex = 0;
        }

        if (TagIndex == 0)
        {
            backPanelTag = BackPanelTag.Bottom;
            
        }else if (TagIndex == 1)
        {
            backPanelTag = BackPanelTag.Middle;
        }else if (TagIndex == 2)
        {
            backPanelTag = BackPanelTag.Top;
        }
        
    }

    private void SetRotationAndPosition(GameObject gameObject)
    {
        float RotationZ = 0f;
        float PositionY = gameObject.transform.position.y + 3 * UnitDistance;
        Vector3 Position = new Vector3(gameObject.transform.position.x, PositionY,
            gameObject.transform.position.z);
        
        
        if (gameObject.transform.localRotation.z >= 180)
        { 
            RotationZ = gameObject.transform.localEulerAngles.z -180;
            Vector3 Rotation = new Vector3(gameObject.transform.localEulerAngles.x,
                gameObject.transform.localEulerAngles.y, RotationZ);
            
            gameObject.transform.localEulerAngles = Rotation;
        }
        else
        {
            RotationZ = gameObject.transform.localEulerAngles.z +180;
            Vector3 Rotation = new Vector3(gameObject.transform.localEulerAngles.x,
                gameObject.transform.localEulerAngles.y, RotationZ);
            
            gameObject.transform.localEulerAngles = Rotation;
            
        }

        gameObject.transform.position = Position;

        // 设置高度线
        HeightDisplayManager.Instance.GenerateHeightNumber(gameObject.transform.position.y * GlobalDef.heightCoefficient);
    }


    public void ResetMapPosition(long initY = 0)
    {
        backPanelTag = BackPanelTag.Bottom;
        TagIndex = 0;

        Vector3 postion = ButtomBack.transform.position;

        ButtomBack.transform.position = new Vector3(postion.x, initY, postion.z);
        MiddleBack.transform.position = new Vector3(postion.x, initY + UnitDistance, postion.z);
        TopBack.transform.position = new Vector3(postion.x, initY + 2 * UnitDistance, postion.z);
        MiddleBack.transform.eulerAngles =
            new Vector3(MiddleBack.transform.eulerAngles.x, MiddleBack.transform.eulerAngles.y, 180);
        ButtomBack.transform.eulerAngles =
            new Vector3(ButtomBack.transform.eulerAngles.x, ButtomBack.transform.eulerAngles.y, 0);
        TopBack.transform.eulerAngles =
            new Vector3(TopBack.transform.eulerAngles.x,TopBack.transform.eulerAngles.y, 0);

        HeightDisplayManager.Instance.GenerateHeightNumber(ButtomBack.transform.position.y * GlobalDef.heightCoefficient);
        HeightDisplayManager.Instance.GenerateHeightNumber(MiddleBack.transform.position.y * GlobalDef.heightCoefficient);
        HeightDisplayManager.Instance.GenerateHeightNumber(TopBack.transform.position.y * GlobalDef.heightCoefficient);
    }
    
    
    
    
    
    
   
        
    
}
