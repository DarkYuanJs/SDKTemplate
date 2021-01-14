using UnityEngine;
using UnityEngine.UI;

public class CanvasTemplate : MonoBehaviour
{
    // 初始化的sdk
    public InitSdk initSdk;

    // 崩溃按钮上的显示
    public Text firebaseCrashTextButtontext;


    void Start()
    {

    }

    // firebase的崩溃上传开关
    public void FirebaseCrashTestButtonClicked()
    {
        initSdk.crashlyticsTester.enabled = !initSdk.crashlyticsTester.enabled;
        if (initSdk.crashlyticsTester.enabled)
        {
            firebaseCrashTextButtontext.text = "Firebase崩溃开关(开)";
        }
        else
        {
            firebaseCrashTextButtontext.text = "Firebase崩溃开关(关)";
        }
    }

    // 请求mopub的激励视频广告
    public void MopubRewardAdRespButtonClicked()
    {
        initSdk.mopubCallbacks.RequestRewardVideoAd();
    }

    // 播放mopub的激励视频广告
    public void MopubRewardAdPlayButtonClicked()
    {
        initSdk.mopubCallbacks.ShowRewardVideoAd();
    }

    // 请求banner
    public void RequestBannerAdButtonClicked()
    {
        initSdk.mopubCallbacks.RequestBannerAd(MoPub.AdPosition.BottomCenter);
    }
    // 显示/ 隐藏 banner
    public void ShowBannerActiveButtonClicked()
    {
        initSdk.mopubCallbacks.SetBannerActive(true);
    }

    // 刷新banner
    public void RefreshBannerButtonClicked()
    {
        initSdk.mopubCallbacks.RefreshBanner();
    }

    //移除banner
    public void DestroyBannerButtonClicked()
    {
        initSdk.mopubCallbacks.DestroyBanner();
    }

    //请求插屏广告
    public void RequestInterAdButtonClicked()
    {
        initSdk.mopubCallbacks.RequestInterAd();
    }

    // 展示插屏
    public void ShowInterstitialAdButtonClicked()
    {
        initSdk.mopubCallbacks.ShowInterstitialAd();
    }

}
