using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class RankListDataProvider : MonoBehaviour
{
     
        public RankListView RankListView;
        
        public RectTransform RankListUnit;
     
        public List<RankListDataItem> DataSource = new List<RankListDataItem>();
        public Sprite DefaultSprite;

        public void SetCellData(GameObject gameObject, int index)
        {
            var rankListUnit = gameObject.GetComponent<RankListUnit>();
            rankListUnit.OnDataBind(DataSource[index],DefaultSprite);
        }
        public int  GetCellCount()
        {
            return DataSource.Count;
        }


        
        
        
        public void RefreshData(List<RankListDataItem> dataItems)
        {
            DataSource.Clear();
            DataSource.AddRange(dataItems);
            RankListView.OnDataSourceChange(this);
        }
        
       
        
}
