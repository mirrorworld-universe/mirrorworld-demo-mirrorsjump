
using UnityEngine;

public class RolePersistence : MonoBehaviour
{   
    
    

    public Sprite DefaultRole;

    public Sprite DefaultRoleJump;
    





    public Sprite GetRoleImage(string name,string rarity)
    {
        if (name == Constant.PirateCaptain)
        {
            return GetPirateCaptainByRarity(rarity);
            
        }else if (name == Constant.Zombie)
        {
            return GetZombieByRarity(rarity);
            
        }else if (name == Constant.Samurai)
        {
            return GetSamuraiByRarity(rarity);
            
        }else if (name == Constant.CatMaid)
        {
            return GetCatMaidByRarity(rarity);
        }

        return GetAstronautByRarity(rarity);
    }
    
    private Sprite GetPirateCaptainByRarity(string rarity)
    {
        if (rarity == Constant.Rare)
        {
            return ResourceManager.Instance.GetSprite("Pirate/1");

        }else if (rarity == Constant.Elite)
        {
            return ResourceManager.Instance.GetSprite("Pirate/2");
            
        }else if (rarity == Constant.Legendary)
        {
            return ResourceManager.Instance.GetSprite("Pirate/3");
            
        }else if (rarity == Constant.Mythical)
        {
            return ResourceManager.Instance.GetSprite("Pirate/4");
            
        }else if (rarity == Constant.Common)
        {
            return ResourceManager.Instance.GetSprite("Pirate/0");
        }

        return GetDefaultRole();
    }
    
    private Sprite GetZombieByRarity(string rarity)
    {
        if (rarity == Constant.Rare)
        {
            return ResourceManager.Instance.GetSprite("Zombie/1");

        }else if (rarity == Constant.Elite)
        {
            return ResourceManager.Instance.GetSprite("Zombie/2");
            
        }else if (rarity == Constant.Legendary)
        {
            return ResourceManager.Instance.GetSprite("Zombie/3");
            
        }else if (rarity == Constant.Mythical)
        {
            return ResourceManager.Instance.GetSprite("Zombie/4");
            
        }else if (rarity == Constant.Common)
        {
            return ResourceManager.Instance.GetSprite("Zombie/0");
        }

        return GetDefaultRole();
    }
    
    private Sprite GetSamuraiByRarity(string rarity)
    {
        if (rarity == Constant.Rare)
        {
            return ResourceManager.Instance.GetSprite("Samurai/1");

        }else if (rarity == Constant.Elite)
        {
            return ResourceManager.Instance.GetSprite("Samurai/2");
            
        }else if (rarity == Constant.Legendary)
        {
            return ResourceManager.Instance.GetSprite("Samurai/3");
            
        }else if (rarity == Constant.Mythical)
        {
            return ResourceManager.Instance.GetSprite("Samurai/4");
            
        }else if (rarity == Constant.Common)
        {
            return ResourceManager.Instance.GetSprite("Samurai/0");
        }

        return GetDefaultRole();
    }
    
    private Sprite GetCatMaidByRarity(string rarity)
    {
        if (rarity == Constant.Rare)
        {
            return ResourceManager.Instance.GetSprite("Catwoman/1");

        }else if (rarity == Constant.Elite)
        {
            return ResourceManager.Instance.GetSprite("Catwoman/2");
            
        }else if (rarity == Constant.Legendary)
        {
            return ResourceManager.Instance.GetSprite("Catwoman/3");
            
        }else if (rarity == Constant.Mythical)
        {
            return ResourceManager.Instance.GetSprite("Catwoman/4");
            
        }else if (rarity == Constant.Common)
        {
            return ResourceManager.Instance.GetSprite("Catwoman/0");
        }
        
        return GetDefaultRole();
        
    }
    
    private Sprite GetAstronautByRarity(string rarity) 
    {
        if (rarity == Constant.Rare)
        {
            return ResourceManager.Instance.GetSprite("Astronaut/1");

        }else if (rarity == Constant.Elite)
        {
            return ResourceManager.Instance.GetSprite("Astronaut/2");
            
        }else if (rarity == Constant.Legendary)
        {
            return ResourceManager.Instance.GetSprite("Astronaut/3");
            
        }else if (rarity == Constant.Mythical)
        {
            return ResourceManager.Instance.GetSprite("Astronaut/4");
            
        }else if (rarity == Constant.Common)
        {
            return ResourceManager.Instance.GetSprite("Astronaut/0");
        }

        return GetDefaultRole();
        
    }

    
    
    
    
    
    public Sprite GetRoleImageJump(string name,string rarity)
    {
        if (name == Constant.PirateCaptain)
        {
            return GetPirateCaptainJumpByRarity(rarity);
            
        }else if (name == Constant.Zombie)
        {
            return GetZombieJumpByRarity(rarity);
            
        }else if (name == Constant.Samurai)
        {
            return GetSamuraiJumpByRarity(rarity);
            
        }else if (name == Constant.CatMaid)
        {
            return GetCatMaidJumpByRarity(rarity);
        }

        return GetAstronautJumpByRarity(rarity);
    }
    
    private Sprite GetPirateCaptainJumpByRarity(string rarity)
    {
        if (rarity == Constant.Rare)
        {
            return ResourceManager.Instance.GetSprite("Pirate/1j");

        }else if (rarity == Constant.Elite)
        {
            return ResourceManager.Instance.GetSprite("Pirate/2j");
            
        }else if (rarity == Constant.Legendary)
        {
            return ResourceManager.Instance.GetSprite("Pirate/3j");
            
        }else if (rarity == Constant.Mythical)
        {
            return ResourceManager.Instance.GetSprite("Pirate/4j");
            
        }else if (rarity == Constant.Common)
        {
            return ResourceManager.Instance.GetSprite("Pirate/0j");
        }

        return GetDefaultRoleJump();
                
    }
    
    private Sprite GetZombieJumpByRarity(string rarity)
    {
        if (rarity == Constant.Rare)
        {
            return ResourceManager.Instance.GetSprite("Zombie/1j");

        }else if (rarity == Constant.Elite)
        {
            return ResourceManager.Instance.GetSprite("Zombie/2j");
            
        }else if (rarity == Constant.Legendary)
        {
            return ResourceManager.Instance.GetSprite("Zombie/3j");
            
        }else if (rarity == Constant.Mythical)
        {
            return ResourceManager.Instance.GetSprite("Zombie/4j");
            
        }else if (rarity == Constant.Common)
        {
            return ResourceManager.Instance.GetSprite("Zombie/0j");
        }
        return GetDefaultRoleJump();
    }
    
    private Sprite GetSamuraiJumpByRarity(string rarity)
    {
        if (rarity == Constant.Rare)
        {
            return ResourceManager.Instance.GetSprite("Samurai/1j");

        }else if (rarity == Constant.Elite)
        {
            return ResourceManager.Instance.GetSprite("Samurai/2j");
            
        }else if (rarity == Constant.Legendary)
        {
            return ResourceManager.Instance.GetSprite("Samurai/3j");
            
        }else if (rarity == Constant.Mythical)
        {
            return ResourceManager.Instance.GetSprite("Samurai/4j");
            
        }else if (rarity == Constant.Common)
        {
            return ResourceManager.Instance.GetSprite("Samurai/0j");
        }
        return GetDefaultRoleJump();
    }
    
    private Sprite GetCatMaidJumpByRarity(string rarity)
    {
        if (rarity == Constant.Rare)
        {
            return ResourceManager.Instance.GetSprite("Catwoman/1j");

        }else if (rarity == Constant.Elite)
        {
            return ResourceManager.Instance.GetSprite("Catwoman/2j");
            
        }else if (rarity == Constant.Legendary)
        {
            return ResourceManager.Instance.GetSprite("Catwoman/3j");
            
        }else if (rarity == Constant.Mythical)
        {
            return ResourceManager.Instance.GetSprite("Catwoman/4j");
            
        }else if (rarity == Constant.Common)
        {
            return ResourceManager.Instance.GetSprite("Catwoman/0j");
        }

        return GetDefaultRoleJump();
    }
    
    private Sprite GetAstronautJumpByRarity(string rarity)
    {
        if (rarity == Constant.Rare)
        {
            return ResourceManager.Instance.GetSprite("Astronaut/1j");

        }else if (rarity == Constant.Elite)
        {
            return ResourceManager.Instance.GetSprite("Astronaut/2j");
            
        }else if (rarity == Constant.Legendary)
        {
            return ResourceManager.Instance.GetSprite("Astronaut/3j");
            
        }else if (rarity == Constant.Mythical)
        {
            return ResourceManager.Instance.GetSprite("Astronaut/4j");
            
        }else if (rarity == Constant.Common)
        {
            return ResourceManager.Instance.GetSprite("Astronaut/0j");
        }

        return GetDefaultRoleJump();
        
    }


    
    
    
    
    
    
    
    
    
    
    public Sprite GetDefaultRole()
    {
        return DefaultRole;
    }


    public Sprite GetDefaultRoleJump()
    {
        return DefaultRoleJump;
    }
    
    
    
    
    
    
    
}
