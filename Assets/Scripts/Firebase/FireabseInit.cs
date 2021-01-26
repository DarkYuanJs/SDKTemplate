/***************************************************************
 * (c) copyright 2019 - 2020, XTeamFramework.Game
 * All Rights Reserved.
 * -------------------------------------------------------------
 * filename:  FireabseInit.cs
 * author:    yuanjiashun
 * created:   2021/1/11
 * descrip:   firebase初始化cs文件
 ***************************************************************/
//using AppsFlyerSDK;
using UnityEngine;

public class FireabseInit : MonoBehaviour
{
    // firebase是否初始化成功
    public bool _firebaseInitSucc { get; set; } = false;

    public void Init()
    {
        // Initialize Firebase
        Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
        {
            var dependencyStatus = task.Result;
            if (dependencyStatus == Firebase.DependencyStatus.Available)
            {
                // Create and hold a reference to your FirebaseApp,
                // where app is a Firebase.FirebaseApp property of your application class.
                // Crashlytics will use the DefaultInstance, as well;
                // this ensures that Crashlytics is initialized.
                Firebase.FirebaseApp app = Firebase.FirebaseApp.DefaultInstance;
                // Set a flag here for indicating that your project is ready to use Firebase.
                // 开启debug模式
                Firebase.FirebaseApp.LogLevel = Firebase.LogLevel.Debug;
                // 确认crash 是否初始化成功并打开
                // Debug.LogWarning("yjs: IsCrashlyticsCollectionEnabled " + (Firebase.Crashlytics.Crashlytics.IsCrashlyticsCollectionEnabled ? "true" : "false"));
                //Debug.LogWarning("yjs: TokenRegistrationOnInitEnabled " + (Firebase.Messaging.FirebaseMessaging.TokenRegistrationOnInitEnabled ? "true" : "false"));

                Firebase.Messaging.FirebaseMessaging.TokenReceived += OnTokenReceived;
                //Firebase.Messaging.FirebaseMessaging.MessageReceived += OnMessageReceived;

                _firebaseInitSucc = true;

            }
            else
            {
                UnityEngine.Debug.LogWarning(System.String.Format(
                  "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
                // Firebase Unity SDK is not safe to use here.
            }
        });
    }


    public void OnTokenReceived(object sender, Firebase.Messaging.TokenReceivedEventArgs token)
    {
        //Debug.Log("YJS Received Registration Token: " + token.Token);
#if !UNITY_EDITOR && UNITY_ANDROID
       // AppsFlyerAndroid.updateServerUninstallToken(token.Token);
#endif
    }

    //public void OnMessageReceived(object sender, Firebase.Messaging.MessageReceivedEventArgs e)
    //{ 
    //    Debug.Log("YJS Received a new message from: " + e.Message.From);
    //    Debug.Log("YJS Message ID: " + e.Message.MessageId);
    //}


}
