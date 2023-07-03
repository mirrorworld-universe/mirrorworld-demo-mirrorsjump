public class Data
{
    /// <summary>
    /// 
    /// </summary>
    public string json_path { get; set; }
}
 
public class ResultRoot
{
    /// <summary>
    /// 
    /// </summary>
    public int code { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string status { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string message { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public Data data { get; set; }
    
}