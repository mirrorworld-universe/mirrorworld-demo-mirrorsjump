using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public struct Tasks {
    public int Index;
}
    
    
public class ViewRectCell
{

    public Transform Item;
    public int Index;
   
}



public class RankListViewManager 
{
  
        private RankListView _rankListView;

        private bool _isVertical = true;

        //private bool _isGrid = false;
        
        
        private RankListDataProvider _dataProvider => _rankListView._dataProvider;
    
        private RectTransform RankListUnit => _dataProvider.RankListUnit ;
      
        
        private RectTransform _viewport => _rankListView.viewport;
        
        private RectTransform _content => _rankListView.content;
        


        
        
        
        private int _numOfRowOrCol = 1;
        private int _totalRowOrColCount = 0;
        private float _cellWidth;
        private float _cellHeight;
        
        
        // delay load Queue
        private Queue<Tasks> _allLoadingTasks = new Queue<Tasks>();
        
        // object pool
        private Stack<GameObject> _itemPool = new Stack<GameObject>();
        
        private HashSet<int> _allCellIds = new HashSet<int>();
        
        private Dictionary<int, ViewRectCell> _idToCells = new Dictionary<int, ViewRectCell>();
        
        private List<ViewRectCell> _allCells = new List<ViewRectCell>();
        
        
        // bound 
        private int _minIndex = 0;
        private int _maxIndex => Mathf.Min(_minIndex + _totalVisibleCellCount, _dataProvider.GetCellCount()) - 1;
        private int _totalVisibleCellCount => _totalRowOrColCount * _numOfRowOrCol;  
        
        
        // Asynchronous lazy loading Task
        private Coroutine _asyTask;
        
        public int MaxCellCreateCountPerFrame = 4;

        
        public void DoStart(RankListView rankListView) {
            
            _rankListView = rankListView;
            
            SetTopLeftAnchor(_content);
            
            OnReMeasure();
            
            
            var rawSize = _content.rect.size;
            int numOfRows = Mathf.CeilToInt(_dataProvider.GetCellCount() / _numOfRowOrCol) + 1;
            var sizeDelta = (_isVertical
                ? new Vector2(rawSize.x, numOfRows * _cellHeight)
                : new Vector2(numOfRows * _cellWidth, rawSize.y));
            sizeDelta += _rankListView.Padding;
            _content.sizeDelta = sizeDelta;
            
            ClearData();
            
            CheckVisibility();
            
            
            _asyTask = _rankListView.StartCoroutine(UpdateTasks());
            
        }
        private void ClearData()
        {
            
            
            DestroyCells(true);
            if (_asyTask != null) {
                _rankListView.StopCoroutine(_asyTask);
                _asyTask = null;
            }
            
            

            _allLoadingTasks.Clear();
            _allCellIds.Clear();
            _idToCells.Clear();
            _allCells.Clear();
            
        }
        public void DestroyCells(bool isClearPool= false)
        {
             _allLoadingTasks.Clear();
             _allCellIds.Clear();

             foreach (var cell in _allCells)
             {
                 CellCaching(cell);
             }
             
             _allCells.Clear();

             if (isClearPool)
             {
                 var count = _itemPool.Count;
                 while (count > 0)
                 {
                     var item = _itemPool.Pop();

                     if (null != item)
                     {
                         GameObject.Destroy(item);
                     }
                     count--;
                 }
                 _itemPool.Clear();
             }
             else
             {
                 // Auto shrink pool size
                 int maxCount = _totalRowOrColCount * _numOfRowOrCol;
                 var needDeleteCacheCount = _itemPool.Count - maxCount;
                 for (int i = 0; i < needDeleteCacheCount; i++) {
                     var item = _itemPool.Pop();
                     if (item != null) {
                         GameObject.Destroy(item);
                     }
                 }
                 
                 
             }
             
             
             
        }
        
        private void CellCaching(ViewRectCell cell)
        {
            var gone = cell.Item.gameObject;
            if (gone == null) return;
            gone.SetActive(false);
            _itemPool.Push(gone);
        }
        
        private void AddTask(int index) {
            _allLoadingTasks.Enqueue(new Tasks() {Index = index});
        }
        
        // the method will loading Task
        private IEnumerator UpdateTasks() {
            while (true) {
                for (int i = 0; i < MaxCellCreateCountPerFrame;) {
                    
                    if (_allLoadingTasks.Count == 0) {
                        break;
                    }
                    var task = _allLoadingTasks.Dequeue();
                    
                    if (IsInRange(task.Index) && !_allCellIds.Contains(task.Index)) {
                        
                        var item = GetOrCreateCell();
                        item.anchoredPosition = GetAnchorPos(task.Index);
                        _allCells.Add(new ViewRectCell() {Item = item, Index = task.Index});
                        _allCellIds.Add(task.Index);
                        _dataProvider.SetCellData(item.gameObject, task.Index);
                        i++;
                    }
                }
                yield return null;
            }
        }

    
        
        private bool IsInRange(int index) {
            return index >= _minIndex && index <= _maxIndex;
        }
        
        RectTransform GetOrCreateCell() {
            
            // if has cached  item
            if (_itemPool.Count > 0) {
                var item = _itemPool.Pop();
                if (item != null) {
                    item.gameObject.SetActive(true);
                    return item.transform as RectTransform;
                }
            }
           
            var tran = (UnityEngine.Object.Instantiate(RankListUnit.gameObject)).GetComponent<RectTransform>();
            tran.gameObject.SetActive(true);
            tran.SetParent(_content, false);
            return tran;
        }
        
        private Vector2 GetAnchorPos(int index) {
            
            
            var row = index / _numOfRowOrCol;
            var col = index % _numOfRowOrCol;
            if (!_isVertical) {
                row = index % _numOfRowOrCol;
                col = index / _numOfRowOrCol;
            }
     
            return new Vector2(col * _cellWidth, -row * _cellHeight) +
                   new Vector2(_rankListView.Padding.x, -_rankListView.Padding.y);
        }
        
        
        // Update bound info,when OnChangeValue is happen the anchor position of content will change need to remeasure and update visibility area 
        private void OnReMeasure() {
            
            // onReMeasure
            _cellWidth = RankListUnit.sizeDelta.x + _rankListView.Margin.x;
            _cellHeight = RankListUnit.sizeDelta.y + _rankListView.Margin.y;
            
            _totalRowOrColCount = (_isVertical
                ? Mathf.CeilToInt(_viewport.rect.height / _cellHeight)
                : Mathf.CeilToInt(_viewport.rect.width / _cellWidth)) + 1;
            
            // The minimum index is inferred from the current anchor
            var curContentAnchor = _content.anchoredPosition;
            var count = (_isVertical
                ? Mathf.CeilToInt(curContentAnchor.y / _cellHeight)
                : Mathf.CeilToInt(-curContentAnchor.x / _cellWidth));
            _minIndex = Mathf.Max(0, count - 1) * _numOfRowOrCol;
           
        }
        
       


        
        // Checking Visibility
        private void CheckVisibility() {
            _idToCells.Clear();
            
            
            // all visibility cell before OnValueChange Callback
            foreach (var cell in _allCells) {
                _idToCells[cell.Index] = cell;
            }
            _allCells.Clear();


            for (int i = _minIndex; i <= _maxIndex; i++) {
                if (!_idToCells.ContainsKey(i)) {
                    AddTask(i);
                }
                else {
                    _allCells.Add(_idToCells[i]);
                }
                
                _idToCells.Remove(i);
            }

         
            // the rest of item will be caching
            foreach (var pair in _idToCells) {
                var cell = pair.Value;
                _allCellIds.Remove(pair.Key);
                CellCaching(cell);
               
            }
        }
        
        
        public void OnValueChanged()
        {
            OnReMeasure();
            CheckVisibility();
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
