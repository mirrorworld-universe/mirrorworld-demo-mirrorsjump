

    public static class Constant
    {   
        
        // shushu
        public static bool shushuSDKOpen = true;
        public static string shushuAppID = "b9e2c7f496e94936a3896728f7cf5617";
        public static string shushuReportUrl = "https://global-receiver-ta.mirrorworld.fun";
        public static string AppID = "MRJ";

        public static string NotSufficientFunds =
            "the wallet balance is sufficient.";
        
        // Call Api Limit
        public static int ExecuteMint = 1;
        public static int StopMint = 0;
        
        
        
        //Theme 
        public static int ThemeSpaceIndex = 0;
        public static int ThemeDesertIndex = 1;
        public static int ThemeSnowIndex = 2;
        public static int ThemeCyberpunkIndex = 3;
        public static int ThemePastureIndex = 4;

        public static string Theme_Pre = "Theme_";





        // Stairs Type
        public static int  GeneralStairs = 0;
        public static int  BreakageStairs = 1;
        public static int MovingStairs = 2;
        public static int BalanceStairs = 3;
        
        public static int   BreakageStairsTop = 4;
        public static int BreakageStairsLeft = 5;
        public static int BreakageStairsRight = 6;
        public static int BalanceStairsAxis = 7;
     
        
        
        
        
        
        
        
        
        //Rarity
        public static string Common = "Common";
        public static string Rare = "Rare";
        public static string Elite = "Elite";
        public static string Legendary = "Legendary";
        public static string Mythical =  "Mythical";
        
        
        // Role
        public static string CatMaid = "Cat Maid";

        public static string Samurai = "Samurai";
        
        public static string Zombie = "Zombie";

        public static string PirateCaptain = "Pirate Captain";
        
        public static string Astronaut=  "Astronaut";
        
        
        // url
        public static string ImagePrefix = "http://metadata-assets.mirrorworld.fun/mirror_jump/images/";
        

        public static string GetAstronautUrlByRarity(string rarity)
        {
            return ImagePrefix + rarity + Astronaut + ".png";
        }
        
        public static string GetPirateCaptainUrlByRarity(string rarity)
        {
            return ImagePrefix + rarity + PirateCaptain + ".png";
        }
        
        public static string GetZombieUrlByRarity(string rarity)
        {
            return ImagePrefix + rarity + Zombie + ".png";
        }
        
        public static string GetSamuraiUrlByRarity(string rarity)
        {
            return ImagePrefix + rarity +Samurai + ".png";
        }
        
        public static string GetCatMaidUrlByRarity(string rarity)
        {
            return ImagePrefix + rarity + CatMaid + ".png";
        }
        
    }
