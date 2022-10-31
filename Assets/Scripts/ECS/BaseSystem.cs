using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class BaseSystem
{
    public SystemEnum systemEnum;
}

public enum SystemEnum
{
    UpdateSystem,
    OnceSystem,
}

