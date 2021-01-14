using UnityEngine;

public class MopubCallbacks : MonoBehaviour
{
    // 安卓插屏广告id
    public string androidInterstitialAdUnit;
    // 安卓激励视频广告id
    public string androidRewardedVideoAdUnit;
    // 安卓banner广告id
    public string androidBannerAdUnit;

    // ios插屏广告id
    public string IOSInterstitialAdUnit;
    // ios激励视频广告id
    public string IOSRewardedVideoAdUnit;
    // iosbanner广告id
    public string IOSBannerAdUnit;


    // 插屏广告id
    private string[] interstitialAdUnits;

    // 激励视频广告id
    private string[] rewardedVideoAdUnits;

    // banner广告id
    private string[] bannerAdUnits;

    public void SdkInitialized()
    {
#if UNITY_ANDROID
        interstitialAdUnits = new string[] { androidInterstitialAdUnit };
        rewardedVideoAdUnits = new string[] { androidRewardedVideoAdUnit };
        bannerAdUnits = new string[] { androidBannerAdUnit };

#elif UNITY_IPHONE || UNITY_IOS
        interstitialAdUnits = new string[] { IOSInterstitialAdUnit };
        rewardedVideoAdUnits = new string[] { IOSRewardedVideoAdUnit };
        bannerAdUnits = new string[] { IOSBannerAdUnit };
#else
        interstitialAdUnits = new string[] { "" };
        rewardedVideoAdUnits = new string[] { "" };
        bannerAdUnits = new string[] { "" };
#endif


        // 初始化插屏广告模块、激励视屏广告模块、Banner广告模块
        MoPub.LoadInterstitialPluginsForAdUnits(interstitialAdUnits);
        MoPub.LoadRewardedVideoPluginsForAdUnits(rewardedVideoAdUnits);
        MoPub.LoadBannerPluginsForAdUnits(bannerAdUnits);

        // 注册广告所有回调
        MoPubManager.OnInterstitialLoadedEvent += OnInterAdLoadedEvent;
        MoPubManager.OnInterstitialFailedEvent += OnInterAdFailedEvent;
        MoPubManager.OnInterstitialDismissedEvent += OnInterAdDismissedEvent;
        MoPubManager.OnRewardedVideoLoadedEvent += OnRewardedVideoLoadedEvent;
        MoPubManager.OnRewardedVideoFailedEvent += OnRewardedVideoFailedEvent;
        MoPubManager.OnRewardedVideoFailedToPlayEvent += OnRewardedVideoFailedToPlayEvent;
        MoPubManager.OnRewardedVideoReceivedRewardEvent += OnRewardedVideoReceivedRewardEvent;
        MoPubManager.OnRewardedVideoClosedEvent += OnRewardedVideoClosedEvent;
        MoPubManager.OnAdLoadedEvent += OnBannerAdLoadedEvent;
        MoPubManager.OnAdFailedEvent += OnBannerAdFailedEvent;
        MoPubManager.OnImpressionTrackedEvent += OnImpressionTrackedEvent;


    }

    //【插屏广告事件监听】插屏广告加载成功
    private void OnInterAdLoadedEvent(string adUnitId)
    {
        PrintLog("OnInterAdLoadedEvent:" + adUnitId);
    }

    //【插屏广告事件监听】插屏广告加载失败
    private void OnInterAdFailedEvent(string adUnitId, string error)
    {
        PrintLog(string.Format("OnInterAdFailedEvent:{0}  error:{1}", adUnitId, error));
    }

    //【插屏广告事件监听】插屏广告摒弃回调
    private void OnInterAdDismissedEvent(string adUnitId)
    {
        PrintLog(string.Format("OnInterAdDismissedEvent:{0} ", adUnitId));
    }

    //【激励视频广告事件监听】激励视频广告加载成功
    private void OnRewardedVideoLoadedEvent(string adUnitId)
    {
        PrintLog(string.Format("OnRewardedVideoLoadedEvent:{0} ", adUnitId));
    }

    //【激励视频广告事件监听】激励视频广告加载失败
    private void OnRewardedVideoFailedEvent(string adUnitId, string error)
    {
        PrintLog(string.Format("OnRewardedVideoFailedEvent:{0}  error:{1}", adUnitId, error));
    }


    //【激励视频广告事件监听】激励视频广告播放失败
    private void OnRewardedVideoFailedToPlayEvent(string adUnitId, string error)
    {
        PrintLog(string.Format("OnRewardedVideoFailedToPlayEvent:{0}  error:{1}", adUnitId, error));
    }

    //【激励视频广告事件监听】激励视频广告获得奖励
    private void OnRewardedVideoReceivedRewardEvent(string adUnitId, string reward, float amount)
    {
        PrintLog(string.Format("OnRewardedVideoReceivedRewardEvent:{0}  reward:{1}", adUnitId, reward));
    }

    //【激励视频广告事件监听】激励视频广告关闭
    private void OnRewardedVideoClosedEvent(string adUnitId)
    {
        PrintLog(string.Format("OnRewardedVideoClosedEvent:{0} ", adUnitId));
    }

    //【Banner广告事件监听】Banner广告加载成功
    private void OnBannerAdLoadedEvent(string adUnitId, float height)
    {
        PrintLog(string.Format("OnBannerAdLoadedEvent:{0} height:", adUnitId, height));
    }


    //【Banner广告事件监听】Banner广告加载失败
    private void OnBannerAdFailedEvent(string adUnitId, string error)
    {
        PrintLog(string.Format("OnBannerAdFailedEvent:{0}  error:{1}", adUnitId, error));
    }

    //【通用广告事件监听】广告填充事件
    private void OnImpressionTrackedEvent(string adUnitId, MoPub.ImpressionData impressionData)
    {
        PrintLog(string.Format("OnImpressionTrackedEvent:{0}", adUnitId));
    }


    // 请求激励视频广告
    public void RequestRewardVideoAd()
    {
        if (IsRewardVideoAdReady()) return;
        MoPub.RequestRewardedVideo(rewardedVideoAdUnits[0]);
    }


    // 激励视频广告当前是否已经成功加载
    public bool IsRewardVideoAdReady()
    {
        return MoPub.HasRewardedVideo(rewardedVideoAdUnits[0]);
    }

    // 播放激励视频广告
    public void ShowRewardVideoAd()
    {
        MoPub.ShowRewardedVideo(rewardedVideoAdUnits[0]);
    }

    // 请求Banner广告
    public void RequestBannerAd(MoPub.AdPosition position)
    {
        MoPub.RequestBanner(bannerAdUnits[0], position);
    }

    // 显示/ 隐藏 banner A bool with `true` to show the ad, or `false` to hide it
    public void SetBannerActive(bool shouldShow = true)
    {
        MoPub.ShowBanner(bannerAdUnits[0], shouldShow);
    }

    // 刷新banner
    public void RefreshBanner(string keywords = "")
    {
        MoPub.RefreshBanner(bannerAdUnits[0], keywords);
    }

    // 设置自动刷新banner
    public void SetAutorefresh(bool enabled)
    {
        MoPub.SetAutorefresh(bannerAdUnits[0], enabled);
    }

    // 强制刷新banner
    public void ForceRefresh()
    {
        MoPub.ForceRefresh(bannerAdUnits[0]);
    }

    // 删除banner
    public void DestroyBanner()
    {
        MoPub.DestroyBanner(bannerAdUnits[0]);
    }

    //请求插屏广告
    public void RequestInterAd()
    {
        MoPub.RequestInterstitialAd(interstitialAdUnits[0]);
    }

    // 展示插屏
    public void ShowInterstitialAd()
    {
        MoPub.ShowInterstitialAd(interstitialAdUnits[0]);
    }

    // 判断当前是否有插屏
    public void IsInterstitialReady()
    {
        MoPub.IsInterstitialReady(interstitialAdUnits[0]);
    }

    // 销毁插屏
    public void DestroyInterstitialAd()
    {
        MoPub.DestroyInterstitialAd(interstitialAdUnits[0]);
    }


    private void PrintLog(string log)
    {
        Debug.Log(string.Format("MopubLog : {0}", log));
    }
}
