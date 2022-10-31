
using UnityEngine;
using UnityEngine.UI;


public enum PageTurningState
{
    OnlyLeft,
    OnlyRight,
    Both,
    None
}
public class ListView : ScrollRect
{


    private ListViewManager ListViewManager;

    public ListViewDataProvider _dataProvider;

    public float TopRelativeDistance => _dataProvider.TopRelativeDistance;

    public float LeftRelativeDistance => _dataProvider.LeftRelativeDistance;

    public float PageSpace => _dataProvider.PageSpace;


    public RectTransform CellPrefab => _dataProvider.CellPrefab;

    public bool IsNFTPackage => _dataProvider.IsNFTPackage;

    public NFTDetailsManager NftDetailsManager => _dataProvider.nftDetailsManager;

    public PackageDetailsManager PackageDetailsManager => _dataProvider.PackageDetailsManager;

    public void SetDataProvider(ListViewDataProvider dataProvider)
    {
        if (null == ListViewManager)
        {
            ListViewManager = new ListViewManager();
            ListViewManager.SetListView(this);
        }

        _dataProvider = dataProvider;
    }

    public void OnDataSourceChange()
    {
        if (null == ListViewManager)
        {
            ListViewManager = new ListViewManager();
            ListViewManager.SetListView(this);
        }
        ListViewManager.OnStartMeasure();
    }

    public int GetTotalPageCount()
    {
        if (_dataProvider.GetCellCount() % 6 == 0)
        {
            return _dataProvider.GetCellCount() / ListViewManager.GetPageCount();
        }
        else
        {
            return _dataProvider.GetCellCount() / ListViewManager.GetPageCount() + 1;
        }
    }


    public PageTurningState GetPageTurningState(bool IsFirstIn)
    {

        if (IsFirstIn)
        {
            if (_dataProvider.GetCellCount() <= 6)
            {
                return PageTurningState.None;
            }

            return PageTurningState.OnlyRight;
        }

        if (ListViewManager.GetLastPage() == 1)
        {
            return PageTurningState.None;
        }

        if (ListViewManager.GetCurrentPage() == 1)
        {
            return PageTurningState.OnlyRight;
        }

        if (ListViewManager.GetCurrentPage() == ListViewManager.GetLastPage())
        {
            return PageTurningState.OnlyLeft;
        }

        return PageTurningState.Both;


    }


    public void ToLeftPage()
    {
        if (GetPageTurningState(false) == PageTurningState.Both || GetPageTurningState(false) == PageTurningState.OnlyLeft)
        {
            ListViewManager.ToLeftPage();
        }


    }


    public void ToRightPage()
    {
        if (GetPageTurningState(false) == PageTurningState.Both || GetPageTurningState(false) == PageTurningState.OnlyRight)
        {
            ListViewManager.ToRightPage();
        }
    }


    public void RecycleAllItems()
    {
        ListViewManager.RecycleAllItems();
    }

    public int GetCurrentPage()
    {
        return this.ListViewManager.GetCurrentPage();
    }
}
