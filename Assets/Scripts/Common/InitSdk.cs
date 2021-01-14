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


    void Start()
    {
        //  初始化appsflayer
        InitAppsflayerSdk();
        // 初始化firebase
        InitFirebaseSdk();
        // 初始化mopub
        InitMopubSdk();
    }

    public void InitAppsflayerSdk()
    {
        appsFlyerGameObject.Init();
    }

    public void InitFirebaseSdk()
    {
        fireabseInit.Init();
    }

    // 初始化mopub的sdk
    public void InitMopubSdk()
    {
        moPubManager.gameObject.SetActive(true);
        moPubManager.enabled = true;
    }

}
