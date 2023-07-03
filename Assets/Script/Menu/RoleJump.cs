using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;
using System;

public class RoleJump : MonoBehaviour
{
    public RolePersistence rolePersistence;
    [SerializeField] float interval = 3;
    [SerializeField] float downInterval = 3;
    [SerializeField] float wait = 2;
    [SerializeField] float height = 10;
    [SerializeField] Transform shadow;

    private Vector3 initPos;

    private Image img;
    private Sprite spriteJump;
    private Sprite spriteIdle;
    private bool isIdle = false;
    private float initShadowScale;
    void Start()
    {
        initPos = transform.position;
        img = GetComponent<Image>();

        LoadAsset();

        EventDispatcher.Instance.roleChanged += OnRoleChanged;

        StartCoroutine(JumpLoop());
    }

    private void OnDestroy()
    {
        EventDispatcher.Instance.roleChanged -= OnRoleChanged;
    }

    private void LoadAsset()
    {
        if (null == PlayerPrefs.GetString("CurrentRole") || null == PlayerPrefs.GetString("CurrentRarity"))
        {
            spriteJump = rolePersistence.GetDefaultRoleJump();
            spriteIdle = rolePersistence.GetDefaultRole();
        }
        else
        {
            spriteJump = rolePersistence.GetRoleImageJump(PlayerPrefs.GetString("CurrentRole"),
                    PlayerPrefs.GetString("CurrentRarity"));
            spriteIdle = rolePersistence.GetRoleImage(PlayerPrefs.GetString("CurrentRole"),
                    PlayerPrefs.GetString("CurrentRarity"));
        }
    }

    private void OnRoleChanged()
    {
        LoadAsset();

        img.sprite = isIdle ? spriteIdle : spriteJump;
    }

    IEnumerator JumpLoop()
    {
        while (true)
        {
            isIdle = false;
            img.sprite = spriteJump;
            transform.DOMoveY(initPos.y + height, interval).SetEase(Ease.OutQuart);

            initShadowScale = shadow.localScale.x;
            shadow.DOScale(new Vector3(initShadowScale*0.8f, initShadowScale*0.8f, initShadowScale*0.8f), interval).SetEase(Ease.OutQuart);

            yield return new WaitForSeconds(interval);

            transform.DOMoveY(initPos.y, downInterval).SetEase(Ease.InQuart);
            shadow.DOScale(new Vector3(initShadowScale, initShadowScale, initShadowScale), downInterval).SetEase(Ease.InQuart);

            yield return new WaitForSeconds(downInterval);

            isIdle = true;
            img.sprite = spriteIdle;
            yield return new WaitForSeconds(wait);
        }
    }
}
