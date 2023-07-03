
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;

public class RuleConfig : MonoBehaviour
{
     [SerializeField] private TextAsset Groups ;
     
     public GameObject CameraObject;

     public Group CurrentGroup;



    private List<float> AreaIndex = new List<float>();
    
    private Dictionary<float, Group> MappingGroup = new Dictionary<float, Group>();
    
    
    private void Awake()
    {
        
        DeserializeGroupArray(Groups);
        
    }

    private void DeserializeGroupArray(TextAsset textAsset)
    {
        
        Group[] groupEntities = JsonConvert.DeserializeObject<Group[]>(textAsset.text);

        foreach (var group in groupEntities)
        {
            MappingGroup.Add(group.Height[1],group);
            AreaIndex.Add(group.Height[0]);
            AreaIndex.Add(group.Height[1]);
        }

    }


    private Group GetGroupByHeight()
    {
        float currentHeight = CameraObject.transform.position.y*4;
        
        float key = 0;
        
        for (int i = 0; i < AreaIndex.Count - 1; i++)
        {
            if (currentHeight >= AreaIndex[i] && currentHeight < AreaIndex[i + 1])
            {
                key = AreaIndex[i + 1];
                break;
            }
        }

        if (MappingGroup.ContainsKey(key))
        {
            return MappingGroup[key];
        }

        return null;

    }
    
    public StairsType GenerateStairsType()
    {
        CurrentGroup = GetGroupByHeight();
        int random =  Random.Range(1, 101);

        if (CurrentGroup.StairTypePercent.General > 0)
        {
            if (random < CurrentGroup.StairTypePercent.General)
            {
                return StairsType.General;
            }
        }
        
        
        if (CurrentGroup.StairTypePercent.Breakage > 0)
        {
            if (random < CurrentGroup.StairTypePercent.General+CurrentGroup.StairTypePercent.Breakage)
            {
                return StairsType.Breakage;
            }
        }
        
        if (CurrentGroup.StairTypePercent.Disposable > 0)
        {
            if (random < CurrentGroup.StairTypePercent.General+CurrentGroup.StairTypePercent.Breakage+CurrentGroup.StairTypePercent.Disposable)
            {
                return StairsType.Disposable;
            }
        }
        
        if (CurrentGroup.StairTypePercent.MoveHorizontal > 0)
        {
            if (random < CurrentGroup.StairTypePercent.General+CurrentGroup.StairTypePercent.Breakage+CurrentGroup.StairTypePercent.Disposable
                +CurrentGroup.StairTypePercent.MoveHorizontal)
            {
                return StairsType.MoveHorizontal;
            }
        }
        
        if (CurrentGroup.StairTypePercent.MoveVerticle > 0)
        {
            if (random < CurrentGroup.StairTypePercent.General+CurrentGroup.StairTypePercent.Breakage+CurrentGroup.StairTypePercent.Disposable
                +CurrentGroup.StairTypePercent.MoveHorizontal+CurrentGroup.StairTypePercent.MoveVerticle)
            {
                return StairsType.MoveVerticle;
            }
        }
        
        
        if (CurrentGroup.StairTypePercent.BlackRole > 0)
        {
            if (random < CurrentGroup.StairTypePercent.General+CurrentGroup.StairTypePercent.Breakage+CurrentGroup.StairTypePercent.Disposable
                +CurrentGroup.StairTypePercent.MoveHorizontal+CurrentGroup.StairTypePercent.MoveVerticle+CurrentGroup.StairTypePercent.BlackRole)
            {
                return StairsType.BlackRole;
            }
        }
        
        if (CurrentGroup.StairTypePercent.Balance > 0)
        {
            if (random < CurrentGroup.StairTypePercent.General+CurrentGroup.StairTypePercent.Breakage+CurrentGroup.StairTypePercent.Disposable
                +CurrentGroup.StairTypePercent.MoveHorizontal+CurrentGroup.StairTypePercent.MoveVerticle+CurrentGroup.StairTypePercent.BlackRole
                +CurrentGroup.StairTypePercent.Balance)
            {
                return StairsType.Balance;
            }
        }
        
        return StairsType.General;
    }
    
    public PropType GeneratePropType()
    {
        CurrentGroup = GetGroupByHeight();
        int random =  Random.Range(1, 101);
        
        if (CurrentGroup.PropPercent.Spring > 0)
        {
            if (random < CurrentGroup.PropPercent.Spring)
            {
                return PropType.Spring;
            }
        }
        
        if (CurrentGroup.PropPercent.SpringBoard > 0)
        {
            if (random < CurrentGroup.PropPercent.Spring+CurrentGroup.PropPercent.SpringBoard)
            {
                return PropType.SpringBoard;
            }
        }
        
        if (CurrentGroup.PropPercent.LowRocket > 0)
        {
            if (random < CurrentGroup.PropPercent.Spring+CurrentGroup.PropPercent.SpringBoard+CurrentGroup.PropPercent.LowRocket)
            {
                return PropType.LowRocket;
            }
        }
        
        if (CurrentGroup.PropPercent.LowRocket > 0)
        {
            if (random < CurrentGroup.PropPercent.Spring+CurrentGroup.PropPercent.SpringBoard+CurrentGroup.PropPercent.LowRocket+CurrentGroup.PropPercent.HeighRocket)
            {
                return PropType.HighRocket;
            }
            
        }

        return PropType.Empty;
    }


    public float GetSpaceYFloor()
    {
        CurrentGroup = GetGroupByHeight();
        return CurrentGroup.SpaceIntervalY.FloorValue;
    }
    
    public float GetSpaceYUpper()
    {
        CurrentGroup = GetGroupByHeight();
        return CurrentGroup.SpaceIntervalY.UpperValue;
    }
      
      
      
    
    
    
    
    
}
