using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenerateRoleSys : UpdateSystem
{
    public override void OnSystemUpdate(List<Entity> entities)
    {
        for(int i=0;i<entities.Count;i++)
        {
            Entity entity = entities[i];

            GenerateRoleCom generateRoleCom = (GenerateRoleCom)entity.GetBaseComponent<GenerateRoleCom>();

            if(generateRoleCom == null)
            {
                continue;
            }

            entities.RemoveAt(i--);

            GenerateRole(generateRoleCom);
        }
    }

    private void GenerateRole(GenerateRoleCom generateRoleCom)
    {
        Debug.Log("GenerateRole " + generateRoleCom);
    }
}
