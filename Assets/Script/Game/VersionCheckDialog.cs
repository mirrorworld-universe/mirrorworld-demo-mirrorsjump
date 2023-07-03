
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class VersionCheckDialog : MonoBehaviour
{
    [SerializeField] protected TextMeshProUGUI titleText;
    [SerializeField] protected TextMeshProUGUI messageLabel;
    [SerializeField] protected Button confirmButton;
    [SerializeField] protected Button cancelButton;

    public event System.Action confirmClicked;
    public event System.Action cancelClicked;

    private void Awake()
    {
        if(cancelButton) cancelButton.gameObject.SetActive(false);
        if(confirmButton) confirmButton.gameObject.SetActive(false);
    }

    public void Start()
    {

        if (confirmButton) confirmButton.onClick.AddListener(OnConfirmClicked);
        if (cancelButton) cancelButton.onClick.AddListener(OnCancelClicked);
    }
    
    public void EnableCancelButton()
    {
        cancelButton.gameObject.SetActive(true);
    }
    
    public void EnableConfirmButton(string confirmButtonText = "")
    {
        confirmButton.gameObject.SetActive(true);

        if(confirmButtonText != "")
        {
            confirmButton.GetComponentInChildren<TextMeshProUGUI>().text = confirmButtonText;
        }
    }

    public virtual void displayMessage(string title, string msg)
    {
        titleText.text = title;
        messageLabel.text = msg;
        this.gameObject.SetActive(true);
    }

    public void OnConfirmClicked()
    {
        this.gameObject.SetActive(false);
        confirmClicked?.Invoke();
    }

    public void OnCancelClicked()
    {
        cancelClicked?.Invoke();
    }
}
