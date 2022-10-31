using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class ListViewManager
{

    private ListView _listView;
    private RectTransform _cellPrefab => _listView.CellPrefab;

    private RectTransform _content => _listView.content;

    private ListViewDataProvider _dataProvider => _listView._dataProvider;

    private Stack<GameObject> _itemPool = new Stack<GameObject>();

    private int CurrentPage = 0;

    private int PageNumber = 0;

    private Queue<GameObject> CurrentItems = new Queue<GameObject>();

    public float TopRelativeDistance => _listView.TopRelativeDistance;

    public float LeftRelativeDistance => _listView.LeftRelativeDistance;

    public float PageSpace => _listView.PageSpace;

    private bool IsNFTPackage => _listView.IsNFTPackage;

    private NFTDetailsManager NftDetailsManager => _listView.NftDetailsManager;

    private PackageDetailsManager PackageDetailsManager => _listView.PackageDetailsManager;




    private List<Transform> AllTransforms = new List<Transform>();


    public void SetListView(ListView listView)
    {
        _listView = listView;

    }



    private void SetTopLeftAnchor(RectTransform rectTransform)
    {
        SetAnchor(rectTransform, new Vector2(0, 1));
    }

    private void SetAnchor(RectTransform rectTransform, Vector2 pos)
    {
        float width = rectTransform.rect.width;
        float height = rectTransform.rect.height;
        rectTransform.anchorMin = pos;
        rectTransform.anchorMax = pos;
        rectTransform.pivot = pos;
        rectTransform.anchoredPosition = Vector2.zero;
        rectTransform.sizeDelta = new Vector2(width, height);
    }

    public void OnStartMeasure()
    {
        CurrentPage = 0;
        _cellPrefab.gameObject.SetActive(true);
        SetTopLeftAnchor(_cellPrefab);
        _cellPrefab.gameObject.SetActive(false);
        SetTopLeftAnchor(_content);
        CalculateContentSize();
        _itemPool.Clear();
        InitItemPool();
        CurrentPage = 1;
        OnMeasureSinglePage(CurrentPage);
    }


    private void CalculateContentSize()
    {
        var rawSize = _content.sizeDelta;
        float SizeWidth = GetLastPage() * PageSpace;
        float SizeHeight = 600f;
        rawSize.x = SizeWidth;
        rawSize.y = SizeHeight;
        _content.sizeDelta = rawSize;
    }


    private void OnMeasureSinglePage(int PageNumber)
    {
        AllTransforms.Clear();
        int ItemNumber = GetCurrentPageNumber(PageNumber);

        for (int i = 0; i < ItemNumber; i++)
        {
            var item = GetCellFromPool();
            item.anchoredPosition = GetAnchorPosition(i, (PageNumber - 1) * PageSpace);
            CurrentItems.Enqueue(item.gameObject);
            _dataProvider.SetCellData(item.gameObject, OriginIndexMapping(PageNumber, i));


            item.gameObject.GetComponent<Button>().name = "item" + i;
            AllTransforms.Add(item);
            item.gameObject.GetComponent<Button>().onClick.AddListener(delegate
            {
                OnButtonClick();

            });


        }

        ScrollContent((PageNumber - 1) * PageSpace);
    }


    private void OnButtonClick()
    {
        var button = UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject;

        for (int i = 0; i < AllTransforms.Count; i++)
        {
            if (AllTransforms[i].GetComponent<Button>().name == button.name)
            {

                int index = OriginIndexMapping(CurrentPage, i);
                NFTCellData nftCellData = _dataProvider.DataSource[index];

                if (button.name == "item0")
                {
                    MirrorDetails(false, nftCellData);
                }
                else
                {
                    MirrorDetails(true, nftCellData);
                }

                break;
            }
        }
    }

    private void MirrorDetails(bool IsCanMint, NFTCellData nftCellData)
    {
        if (IsNFTPackage)
        {
            // call NFT Details
            NftDetailsManager.OpenNFTPackageDetails(nftCellData);
        }
        else
        {
            PackageDetailsManager.OpenPackageDetails(nftCellData, IsCanMint);
        }

    }






    private Vector2 GetAnchorPosition(int index, float LeftReferenceAxis)
    {
        Vector2 pos = new Vector2(0, 0);


        if (index % 2 == 0)
        {
            pos.x = LeftReferenceAxis;
        }
        else
        {

            pos.x = LeftReferenceAxis + LeftRelativeDistance;
        }

        float posY = (index / 2) * TopRelativeDistance;

        pos.y = -posY;

        return pos;
    }


    private int OriginIndexMapping(int PageNumber, int index)
    {
        if (PageNumber < 1)
        {
            return 0;
        }
        return (PageNumber - 1) * 6 + index;
    }

    private void ScrollContent(float posX)
    {
        Vector2 pos = _content.anchoredPosition;
        pos.x = -posX;
        _content.anchoredPosition = pos;
    }

    private int GetCurrentPageNumber(int CurrentPage)
    {
        if (CurrentPage == GetLastPage())
        {
            return GetLastPageNumber();
        }

        return 6;
    }

    // 一页显示多少个item
    public int GetPageCount()
    {
        return 6;
    }

    public int GetLastPage()
    {
        if (_dataProvider.GetCellCount() % 6 == 0)
        {
            return _dataProvider.GetCellCount() / 6;
        }

        return 1 + (_dataProvider.GetCellCount() / 6);

    }

    private int GetLastPageNumber()
    {
        if (_dataProvider.GetCellCount() % 6 == 0)
        {
            return 6;
        }

        return _dataProvider.GetCellCount() % 6;
    }

    private int GetMaxCacheSize()
    {
        if (_dataProvider.GetCellCount() >= 12)
        {
            return 12;
        }

        return _dataProvider.GetCellCount();
    }


    private void InitItemPool()
    {
        //  int MaxSize = GetMaxCacheSize();

        // for (int i = 0; i < MaxSize; i++)
        // {
        //     var tran = (UnityEngine.Object.Instantiate(_cellPrefab.gameObject)).GetComponent<RectTransform>();
        //     tran.gameObject.SetActive(true);
        //     tran.SetParent(_content, false);
        //     tran.gameObject.SetActive(false);
        //     _itemPool.Push(tran.gameObject);
        // }

    }

    RectTransform GetCellFromPool()
    {

        // if (_itemPool.Count > 0) {
        //     var item = _itemPool.Pop();
        //     if (item != null) {
        //         item.gameObject.SetActive(true);
        //         item.gameObject.GetComponent<NFTViewCell>().Image.sprite = null;
        //         return item.transform as RectTransform;
        //     }
        // }

        var tran = (UnityEngine.Object.Instantiate(_cellPrefab.gameObject)).GetComponent<RectTransform>();
        tran.gameObject.SetActive(true);
        tran.SetParent(_content, false);
        return tran;

    }

    public void ToLeftPage()
    {
        if (CurrentPage == 1)
        {
            return;
        }
        OnMeasureSinglePage(CurrentPage - 1);
        RecycleItem(CurrentPage);
        CurrentPage -= 1;

    }

    public void ToRightPage()
    {
        if (CurrentPage == GetLastPage())
        {
            return;
        }

        OnMeasureSinglePage(CurrentPage + 1);
        RecycleItem(CurrentPage);
        CurrentPage += 1;

    }

    public int GetCurrentPage()
    {
        return CurrentPage;

    }

    public void RecycleAllItems()
    {
        for (int i = 0; i < CurrentItems.Count; i++)
        {
            var item = CurrentItems.Dequeue();
            item.gameObject.GetComponent<NFTViewCell>().Image.sprite = null;
            item.SetActive(false);
            _dataProvider.DestroyItem(item);
        }
    }

    private void RecycleItem(int PagePosition)
    {
        int number = GetCurrentPageNumber(PagePosition);

        for (int i = 0; i < number; i++)
        {
            var item = CurrentItems.Dequeue();
            item.gameObject.GetComponent<NFTViewCell>().Image.sprite = null;
            item.SetActive(false);
            _dataProvider.DestroyItem(item);
            // _itemPool.Push(item);
        }


    }




}
