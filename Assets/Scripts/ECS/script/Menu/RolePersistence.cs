
using UnityEngine;

public class RolePersistence : MonoBehaviour
{   
    
    
    public Sprite[] CatMaid = new Sprite[5];
    
    public Sprite[] Samurai = new Sprite[5];
    
    public Sprite[] Zombie = new Sprite[5];
    
    public Sprite[] PirateCaptain = new Sprite[5];
    
    public Sprite[] Astronaut = new Sprite[5];
    
    
    public Sprite[] CatMaidJump = new Sprite[5];
    
    public Sprite[] SamuraiJump = new Sprite[5];
    
    public Sprite[] ZombieJump = new Sprite[5];
    
    public Sprite[] PirateCaptainJump = new Sprite[5];
    
    public Sprite[] AstronautJump = new Sprite[5];


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
            return PirateCaptain[1];
            
        }else if (rarity == Constant.Elite)
        {
            return PirateCaptain[2];
            
        }else if (rarity == Constant.Legendary)
        {
            return PirateCaptain[3];
            
        }else if (rarity == Constant.Mythical)
        {
            return PirateCaptain[4];
            
        }else if (rarity == Constant.Common)
        {
            return PirateCaptain[0];
        }

        return GetDefaultRole();
    }
    
    private Sprite GetZombieByRarity(string rarity)
    {
        if (rarity == Constant.Rare)
        {
            return Zombie[1];
            
        }else if (rarity == Constant.Elite)
        {
            return Zombie[2];
            
        }else if (rarity == Constant.Legendary)
        {
            return Zombie[3];
            
        }else if (rarity == Constant.Mythical)
        {
            return Zombie[4];
            
        }else if (rarity == Constant.Common)
        {
            return Zombie[0];
        }

        return GetDefaultRole();
    }
    
    private Sprite GetSamuraiByRarity(string rarity)
    {
        if (rarity == Constant.Rare)
        {
            return Samurai[1];
            
        }else if (rarity == Constant.Elite)
        {
            return Samurai[2];
            
        }else if (rarity == Constant.Legendary)
        {
            return Samurai[3];
            
        }else if (rarity == Constant.Mythical)
        {
            return Samurai[4];
            
        }else if (rarity == Constant.Common)
        {
            return Samurai[0];
        }

        return GetDefaultRole();
    }
    
    private Sprite GetCatMaidByRarity(string rarity)
    {
        if (rarity == Constant.Rare)
        {
            return CatMaid[1];
            
        }else if (rarity == Constant.Elite)
        {
            return CatMaid[2];
            
        }else if (rarity == Constant.Legendary)
        {
            return CatMaid[3];
            
        }else if (rarity == Constant.Mythical)
        {
            return CatMaid[4];
            
        }else if (rarity == Constant.Common)
        {
            return CatMaid[0];
        }

        return GetDefaultRole();
        
    }
    
    private Sprite GetAstronautByRarity(string rarity)
    {
        if (rarity == Constant.Rare)
        {
            return Astronaut[1];
            
        }else if (rarity == Constant.Elite)
        {
            return Astronaut[2];
            
        }else if (rarity == Constant.Legendary)
        {
            return Astronaut[3];
            
        }else if (rarity == Constant.Mythical)
        {
            return Astronaut[4];
            
        }else if (rarity == Constant.Common)
        {
            return Astronaut[0];
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
            return PirateCaptainJump[1];
            
        }else if (rarity == Constant.Elite)
        {
            return PirateCaptainJump[2];
            
        }else if (rarity == Constant.Legendary)
        {
            return PirateCaptainJump[3];
            
        }else if (rarity == Constant.Mythical)
        {
            return PirateCaptainJump[4];
            
        }else if (rarity == Constant.Common)
        {
            return PirateCaptainJump[0];
        }

        return GetDefaultRoleJump();
                
    }
    
    private Sprite GetZombieJumpByRarity(string rarity)
    {
        if (rarity == Constant.Rare)
        {
            return ZombieJump[1];
            
        }else if (rarity == Constant.Elite)
        {
            return ZombieJump[2];
            
        }else if (rarity == Constant.Legendary)
        {
            return ZombieJump[3];
            
        }else if (rarity == Constant.Mythical)
        {
            return ZombieJump[4];
            
        }else if (rarity == Constant.Common)
        {
            return ZombieJump[0];
        }

        return GetDefaultRoleJump();
    }
    
    private Sprite GetSamuraiJumpByRarity(string rarity)
    {
        if (rarity == Constant.Rare)
        {
            return SamuraiJump[1];
            
        }else if (rarity == Constant.Elite)
        {
            return SamuraiJump[2];
            
        }else if (rarity == Constant.Legendary)
        {
            return SamuraiJump[3];
            
        }else if (rarity == Constant.Mythical)
        {
            return SamuraiJump[4];
            
        }else if (rarity == Constant.Common)
        {
            return SamuraiJump[0];
        }

        return GetDefaultRoleJump();
    }
    
    private Sprite GetCatMaidJumpByRarity(string rarity)
    {
        if (rarity == Constant.Rare)
        {
            return CatMaidJump[1];
            
        }else if (rarity == Constant.Elite)
        {
            return CatMaidJump[2];
            
        }else if (rarity == Constant.Legendary)
        {
            return CatMaidJump[3];
            
        }else if (rarity == Constant.Mythical)
        {
            return CatMaidJump[4];
            
        }else if (rarity == Constant.Common)
        {
            return CatMaidJump[0];
        }

        return GetDefaultRoleJump();
    }
    
    private Sprite GetAstronautJumpByRarity(string rarity)
    {
        if (rarity == Constant.Rare)
        {
            return AstronautJump[1];
            
        }else if (rarity == Constant.Elite)
        {
            return AstronautJump[2];
            
        }else if (rarity == Constant.Legendary)
        {
            return AstronautJump[3];
            
        }else if (rarity == Constant.Mythical)
        {
            return AstronautJump[4];
            
        }else if (rarity == Constant.Common)
        {
            return AstronautJump[0];
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
