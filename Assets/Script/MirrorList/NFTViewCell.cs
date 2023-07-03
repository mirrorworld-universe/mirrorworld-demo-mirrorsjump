
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class NFTViewCell : MonoBehaviour
{
    
    public Image Image;

    private Sprite defaultSprite;

    public NFTCellData NftCellData;

    public CanvasGroup CanvasGroup;
    
    public void OnDataBind(NFTCellData nftCellData,Sprite sprite)
    {
        NftCellData = nftCellData;
        defaultSprite = null;
        
        if (null != NftCellData.NftData)
        {
            SetImage(NftCellData.NftData.image);
            

        }
        else
        {
            SetImage(NftCellData.DataParsingEntity.image);
           
        }
        
    }
    
    private async void SetImage(string url)
    {  
        
        Sprite sprite = await ImageLoader.LoadSprite(url);
        if (null != sprite)
        {
            if (null != Image && transform.gameObject.activeSelf)
            {
                Image.sprite = sprite;
                CanvasGroup.alpha = 1;
            }
        }else
        {
            Image.sprite = null;
        }
        
    }
    
}
