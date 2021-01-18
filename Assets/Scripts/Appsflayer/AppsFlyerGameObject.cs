using AppsFlyerSDK;
using System.Collections.Generic;
using UnityEngine;

public class AppsFlyerGameObject : MonoBehaviour, IAppsFlyerConversionData
{
    public bool _tokenSent = false;
    // These fields are set from the editor so do not modify!
    //******************************//
    public string devKey;
    public string appID;
    public bool isDebug;
    //******************************//

    public void Init()
    {

        AppsFlyer.setIsDebug(isDebug);
        AppsFlyer.initSDK(devKey, appID, this);
        AppsFlyer.startSDK();


        // ios 卸载监听
#if !UNITY_EDITOR && UNITY_IOS
            AppsFlyeriOS.setUseReceiptValidationSandbox(isDebug);
            UnityEngine.iOS.NotificationServices.RegisterForNotifications(UnityEngine.iOS.NotificationType.Alert | UnityEngine.iOS.NotificationType.Badge | UnityEngine.iOS.NotificationType.Sound);
#endif
    }

    void Update()
    {
#if UNITY_IOS
            if (!_tokenSent)
            {
                byte[] token = UnityEngine.iOS.NotificationServices.deviceToken;
                if (token != null)
                {
                    AppsFlyeriOS.registerUninstall(token);
                    _tokenSent = true;
                }
            }
#endif
    }

    // af数据归因转换成功回调
    public void onConversionDataSuccess(string conversionData)
    {
        AppsFlyer.AFLog("AppsFlyerTrackerCallbacks", "didReceiveConversionData:: " + conversionData);
        Dictionary<string, object> conversionDataDictionary = AppsFlyer.CallbackStringToDictionary(conversionData);
        // add deferred deeplink logic here
    }

    // af数据归因转换失败回调
    public void onConversionDataFail(string error)
    {
        AppsFlyer.AFLog("AppsFlyerTrackerCallbacks", "didReceiveConversionDataWithError:: " + error);
    }

    // 深度连接的成功回调
    public void onAppOpenAttribution(string attributionData)
    {
        AppsFlyer.AFLog("AppsFlyerTrackerCallbacks", "onAppOpenAttribution:: " + attributionData);
        Dictionary<string, object> attributionDataDictionary = AppsFlyer.CallbackStringToDictionary(attributionData);
    }

    // 深度连接的失败回调
    public void onAppOpenAttributionFailure(string error)
    {
        AppsFlyer.AFLog("AppsFlyerTrackerCallbacks ", "onAppOpenAttributionFailure:: " + error);
    }


    //af内购校验成功后，ios调用此接口
    public void didFinishValidateReceipt(string validateResult)
    {
        AppsFlyer.AFLog("AppsFlyerTrackerCallbacks", "AppsFlyerTrackerCallbacks:: didFinishValidateReceipt  = " + validateResult);

    }

    //af内购校验失败后，ios调用此接口
    public void didFinishValidateReceiptWithError(string error)
    {
        AppsFlyer.AFLog("AppsFlyerTrackerCallbacks", "AppsFlyerTrackerCallbacks:: got idFinishValidateReceiptWithError error = " + error);
    }

    //af内购校验成功后，android调用此接口
    public void onInAppBillingSuccess()
    {
        AppsFlyer.AFLog("AppsFlyerTrackerCallbacks", "AppsFlyerTrackerCallbacks:: got onInAppBillingSuccess succcess");

    }
    //af内购校验失败后，android调用此接口
    public void onInAppBillingFailure(string error)
    {
        AppsFlyer.AFLog("AppsFlyerTrackerCallbacks", "AppsFlyerTrackerCallbacks:: got onInAppBillingFailure error = " + error);
    }
}
