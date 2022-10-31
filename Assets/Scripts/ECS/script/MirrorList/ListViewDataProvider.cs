

using System.Collections.Generic;
using UnityEngine;


public class ListViewDataProvider : MonoBehaviour
{

        public ListView NFTListView;
        
        public RectTransform CellPrefab;
        
        public float TopRelativeDistance = 200;
        
        public float LeftRelativeDistance = 200 ;

        public float PageSpace = 420 ;
        
        public List<NFTCellData> DataSource = new List<NFTCellData>();
        

        public bool IsNFTPackage;
        
        public NFTDetailsManager nftDetailsManager;
        
        public PackageDetailsManager PackageDetailsManager;

        public Sprite DefaultSprite;

      
        
        
        
        public void AddMirrors(List<NFTCellData> Mirrors)
        {
            if (null == DataSource)
            {
                DataSource = new List<NFTCellData>();
            }
            
            DataSource.AddRange(Mirrors);
      
            // notify data update
            NFTListView.OnDataSourceChange();
        }


        public void AddSingleMirror(NFTCellData Mirror)
        {
            if (null == DataSource)
            {
                DataSource = new List<NFTCellData>();
            }
            
            DataSource.Add(Mirror);
            
            // notify data update
            NFTListView.OnDataSourceChange();
        }


        public void RemoveSingleMirrorByID(string name) 
        {
            if (null != DataSource)
            {
                foreach (var mirror in DataSource)
                {
                    if (mirror.DataParsingEntity.name == name)
                    {
                        DataSource.Remove(mirror);
                    }
                    
                }
            }
            
            // notify data update
            NFTListView.OnDataSourceChange();
        }
        
      
       
        
        public void SetCellData(GameObject gameObject, int index)
        {
            var NFTViewCell = gameObject.GetComponent<NFTViewCell>();
            
            NFTViewCell.OnDataBind(DataSource[index],DefaultSprite);
        }

        public int  GetCellCount()
        {
            return DataSource.Count;
        }


        public void DestroyItem(GameObject item)
        {
            Destroy(item);
        }


        
      
        


}
