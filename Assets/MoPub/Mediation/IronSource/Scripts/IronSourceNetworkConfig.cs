#if mopub_manager
using UnityEngine;
using UnityEngine.Serialization;

public class IronSourceNetworkConfig : MoPubNetworkConfig
{
    public override string AdapterConfigurationClassName
    {
        get { return Application.platform == RuntimePlatform.Android
                  ? "com.mopub.mobileads.IronSourceAdapterConfiguration"
                  : "IronSourceAdapterConfiguration"; }
    }

    [Tooltip("Enter your application key to be used to initialize the IronSource SDK.")]
    [Config.Optional]
    [FormerlySerializedAs("appKey")]
    public PlatformSpecificString applicationKey;

    [Tooltip("Optional. Use only for side by side mediation (if you use MoPub mediation and ironSource mediation in the same project). \n " +
             "When using side by side mediation, if you're going to request interstitial ads on MoPub from ironSource as an ad network, then enter \"true\", if not \"false\" (lowercased).")]
    [Config.Optional]
    public PlatformSpecificString interstitial;

    [Tooltip("Optional. Use only for side by side mediation (if you use MoPub mediation and ironSource mediation in the same project). \n " +
             "When using side by side mediation, if you're going to request rewarded video ads on MoPub from ironSource as an ad network, then enter \"true\", if not \"false\" (lowercased).")]
    [Config.Optional]
    public PlatformSpecificString rewardedvideo;
}
#endif
