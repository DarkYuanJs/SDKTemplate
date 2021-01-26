using System.Collections.Generic;
using System.Linq;
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
    // firend text
    public GameObject friendListLayout;

    public void UpdateNameAndUid(FacebookGameObject facebookGameObject)
    {
        uidText.text = "UID:" + facebookGameObject.uid;
        nameText.text = "名字:" + facebookGameObject.fbName;
    }

    public void UpdateHeadIcon(FacebookGameObject facebookGameObjec)
    {
        headImage.sprite = facebookGameObjec.headSprite;
    }

    public void UpdateFriendList(List<object> list)
    {
        var allLists = friendListLayout.GetComponentsInChildren<Text>().ToList();
        var friendCount = list.Count;
        for (int idx = allLists.Count; idx < friendCount; idx++)
        {
            var tempText = Instantiate(allLists[0].transform, friendListLayout.transform, false);
            allLists.Add(tempText.GetComponent<Text>());
        }

        for (int idx = 0; idx < allLists.Count; idx++)
        {
            if (idx < friendCount)
            {
                var friendsArray = (IDictionary<string, object>)list[idx];
                string fbID = (string)friendsArray["id"];
                string fbName = (string)friendsArray["name"];
                allLists[idx].text = string.Format("用户名：{0}  UID:{1}", fbName, fbID);
            }
            allLists[idx].gameObject.SetActive(idx < friendCount);
        }

    }

}
