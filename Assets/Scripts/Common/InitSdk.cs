using UnityEngine;

public class InitSdk : MonoBehaviour
{
    // firebase的初始化文件
    public FireabseInit fireabseInit;
    // firebase的报错测试文件
    public CrashlyticsTester crashlyticsTester;
    // appsflayer的初始化文件
    public AppsFlyerGameObject appsFlyerGameObject;
    // mopub manager
    public MoPubManager moPubManager;
    // mopub 的callback
    public MopubCallbacks mopubCallbacks;
    // facebook 的gameobject
    public FacebookGameObject facebookGameObject;


    void Start()
    {
        //  初始化appsflayer
        InitAppsflayerSdk();
        // 初始化firebase
        InitFirebaseSdk();
        // 初始化mopub
        InitMopubSdk();
        // 初始化facebook
        InitFacebookSdk();

    }

    private void InitAppsflayerSdk()
    {
        appsFlyerGameObject.Init();
    }

    private void InitFirebaseSdk()
    {
        fireabseInit.Init();
    }

    // 初始化mopub的sdk
    private void InitMopubSdk()
    {
        moPubManager.gameObject.SetActive(true);
        moPubManager.enabled = true;
    }

    // 初始化facebook
    private void InitFacebookSdk()
    {
        facebookGameObject.Init();
    }
}

public static class GFuncs
{
    public static void PrintLog(string log)
    {
        Debug.Log(string.Format("MopubLog : {0}", log));
    }
}
