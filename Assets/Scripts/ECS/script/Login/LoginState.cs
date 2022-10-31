public class LoginState:Singleton<LoginState>

{

    public static bool HasLogin = false;
    public static string Name = null;
    public static string Email = null;
    public static string WalletAddress = null;
    public static string ID = null;
    
    

    public static UserInfoPackageData defaultRoleData;
    public static UserInfoPackageData mintableRoleData;


}
