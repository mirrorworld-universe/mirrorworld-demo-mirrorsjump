using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Entity
{
    public long ID;
    private List<BaseComponent> components = new List<BaseComponent>();

    public void AddComponent(BaseComponent component)
    {
        components.Add(component);
    }

    public BaseComponent GetBaseComponent<T>()
    {
        for(int i = 0; i < components.Count; i++)
        {
            BaseComponent baseComponent = components[i];
            if (baseComponent.GetType() == typeof(T))
            {
                return baseComponent;
            }
        }

        return null;
    }

    public void RemoveComponent(BaseComponent component)
    {
        components.Remove(component);
    }
}
