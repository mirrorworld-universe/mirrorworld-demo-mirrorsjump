     
public enum CallState
{
    Listing,
    Update,
    Cancel,
    Transfer,
}

public class CallApiState
{
         public string MintAddress;
         public CallState State;
         public string name;
         
}
