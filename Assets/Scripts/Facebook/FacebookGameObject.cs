using Facebook.Unity;
using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class FacebookGameObject : MonoBehaviour
{
    // 用户uid
    public string uid { get; set; } = string.Empty;
    // 用户名
    public string fbName { get; set; } = string.Empty;
    // 用户头像
    public Sprite headSprite { get; set; } = null;

    public void Init()
    {
        if (!FB.IsInitialized)
        {
            FB.Init(() => { GFuncs.PrintLog("Facebook初始化成功"); }, (isUnityShown) => { });
        }
    }

    // facebook 登录
    public void FBLogin(Action action1 = null, Action action2 = null)
    {
        if (FBIsInitialized() && FBTokenIsNull())
        {

            FB.LogInWithReadPermissions(new List<string>() { "public_profile" }, (result) =>
               {
                   if (FB.IsLoggedIn)
                   {
                       GFuncs.PrintLog(string.Format("Facebook Login : {0}", result.ToString())); ;
                       FBQuereUidAndName(action1);
                       FBUpdateHeadIcon(action2);
                   }
                   else
                   {
                       GFuncs.PrintLog("Facebook Login Fail");
                   }
               });
        }
    }

    // 查询uid
    public void FBQuereUidAndName(Action action = null)
    {
        if (FBIsInitialized() && !FBTokenIsNull())
        {
            FB.API("me?fields=id,name", HttpMethod.GET, (result) =>
            {
                if (result != null && !string.IsNullOrEmpty(result.RawResult))
                {
                    GFuncs.PrintLog(result.RawResult);
                    uid = (string)result.ResultDictionary["id"];
                    fbName = (string)result.ResultDictionary["name"];
                }
                if (action != null) action();
            });
        }
    }

    // 更新头像
    public void FBUpdateHeadIcon(Action action = null)
    {
        if (FBIsInitialized() && !FBTokenIsNull())
        {
            FB.API("me/picture?type=large", HttpMethod.GET, (result) =>
            {
                if (null != result && string.IsNullOrEmpty(result.Error) && result.Texture != null)
                {
                    //保存在本地
                    byte[] pngData = result.Texture.EncodeToPNG();
                    string pngPath = AccessToken.CurrentAccessToken.UserId + ".png";
                    if (File.Exists(pngPath))
                    {
                        File.Delete(pngPath);
                    }
                    File.WriteAllBytes(pngPath, pngData);
                    headSprite = Sprite.Create(result.Texture, new Rect(0, 0, result.Texture.width, result.Texture.height), new Vector2(0, 0));
                    if (action != null) action();
                }
            });
        }
    }

    // 得到头像head
    public void GetHeadSprite(Action action = null)
    {
        if (FBIsInitialized() && !FBTokenIsNull())
        {
            if (headSprite == null) // 本地加载
            {
                string pngPath = AccessToken.CurrentAccessToken.UserId + ".png";
                if (File.Exists(pngPath))
                {
                    headSprite = DownLoadSprite(pngPath);
                }
                else
                {
                    FBUpdateHeadIcon(action);
                }
                return;
            }
        }
        action();
    }

    // 获得好友列表
    public void GetFirendList(Action<List<object>> action = null)
    {
        FB.API("me/friends?fields=id,name,picture", HttpMethod.GET, (result) =>
        {
            if (result.Error != null)
            {
                Debug.Log("friends " + result.Error);
            }
            if (result != null && !string.IsNullOrEmpty(result.RawResult))
            {
                Debug.Log(result.RawResult);
                if (null != result.ResultDictionary["data"] && ((List<object>)result.ResultDictionary["data"]).Count > 0)
                {
                    var count = ((List<object>)result.ResultDictionary["data"]).Count;
                    for (int i = 0; i < count; i++)
                    {
                        var friendsArray = (IDictionary<string, object>)((List<object>)result.ResultDictionary["data"])[i];
                        string fbID = (string)friendsArray["id"];
                        string fbName = (string)friendsArray["name"];

                        Debug.Log("friend Name " + fbName + "  UID:" + fbID);
                    }
                    if (action != null)
                    {
                        action((List<object>)result.ResultDictionary["data"]);
                    }

                }
            }
            else
            {
                Debug.Log("get friend null");
            }
        });

    }



    // facebook 是否初始化成
    public bool FBIsInitialized()
    {
        return FB.IsInitialized;
    }

    // facebook 是否token过期
    public bool FBTokenIsNull()
    {
        return AccessToken.CurrentAccessToken == null;
    }

    public Sprite DownLoadSprite(string path)
    {

        WWW www = new WWW(path);

        Texture2D texture2D = www.texture;
        Sprite sprite = Sprite.Create(texture2D, new Rect(0, 0, texture2D.width, texture2D.height), Vector2.zero);

        if (sprite == null)
            Debug.LogError("加载失败");

        return sprite;

    }
}
