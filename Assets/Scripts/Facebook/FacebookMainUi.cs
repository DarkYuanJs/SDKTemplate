using UnityEngine;
using UnityEngine.UI;

public class FacebookMainUi : MonoBehaviour
{
    // 名字image
    public Image headImage;
    // uid
    public Text uidText;
    // 名字
    public Text nameText;

    public void UpdateNameAndUid(FacebookGameObject facebookGameObject)
    {
        uidText.text = "UID:" + facebookGameObject.uid;
        nameText.text = "名字:" + facebookGameObject.fbName;
    }

    public void UpdateHeadIcon(FacebookGameObject facebookGameObjec)
    {
        headImage.sprite = facebookGameObjec.headSprite;
    }

}
