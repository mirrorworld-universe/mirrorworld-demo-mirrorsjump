using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RankListView : ScrollRect
{
    
    
    
    private RankListViewManager _rankListViewManager;

    public RankListDataProvider _dataProvider;

    public Vector2 Margin = new Vector2(0, 0);
    
    public Vector2 Padding = new Vector2(0, 0);
    
    
    
    
    public void OnDataSourceChange(RankListDataProvider dataProvider)
    {
        _dataProvider = dataProvider;
        
        if (null == _rankListViewManager)
        {
            _rankListViewManager = new RankListViewManager();
        }
        
        for (int i = 0; i < content.childCount; i++)
        {
            Destroy(content.GetChild(i).gameObject);
        }
        SetTopLeftAnchor(content);
        content.anchoredPosition = new Vector2(0, 0);
        onValueChanged.AddListener(OnGestureSliding);
        _rankListViewManager.DoStart(this);
        
    }
    

   private void OnGestureSliding(Vector2 normalizedPos)
    {
        _rankListViewManager.OnValueChanged();
    }

   
   private void SetTopLeftAnchor(RectTransform rectTransform) {
       SetAnchor(rectTransform, new Vector2(0, 1));
   }
        
   private void SetAnchor(RectTransform rectTransform, Vector2 pos) {
       float width = rectTransform.rect.width;
       float height = rectTransform.rect.height;
       rectTransform.anchorMin = pos;
       rectTransform.anchorMax = pos;
       rectTransform.pivot = pos;
       rectTransform.anchoredPosition = Vector2.zero;
       rectTransform.sizeDelta = new Vector2(width, height);
   }

    
      
}
