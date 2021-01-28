using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.Purchasing.Security;

public class PurchaseGameObject : MonoBehaviour, IStoreListener
{

    [Header("支付商品id")]
    public List<string> productIDs = new List<string>();

    private IStoreController controller;
    private IExtensionProvider extensions;


    public void Init()
    {
        var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());
        productIDs.ForEach((productId) =>
        {
            builder.AddProduct(productId, ProductType.Consumable, new IDs
            {
                {productId, GooglePlay.Name},
                {productId, MacAppStore.Name}
            });
        });

        UnityPurchasing.Initialize(this, builder);
    }

    /// &lt;summary>
    /// Unity IAP 准备好可以进行购买时调用。
    /// &lt;/summary>
    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        this.controller = controller;
        this.extensions = extensions;
        GFuncs.PrintLog("IAP 初始化成功");
    }

    /// &lt;summary>
    /// Unity IAP 遇到不可恢复的初始化错误时调用。
    ///
    /// 请注意，如果互联网不可用，则不会调用此项；Unity IAP
    /// 将尝试初始化，直到互联网变为可用。
    /// &lt;/summary>
    public void OnInitializeFailed(InitializationFailureReason error)
    {
        GFuncs.PrintLog("IAP 初始化失败 失败原因:" + error.ToString());
    }

    // 是否初始化成功（外部接口）
    public bool IsInitialized()
    {
        // Only say we are initialized if both the Purchasing references are set.
        return controller != null && extensions != null;
    }

    /// &lt;summary>
    /// 购买完成时调用。
    ///
    /// 可能在 OnInitialized() 之后的任何时间调用。
    /// &lt;/summary>
    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs e)
    {
        bool validPurchase = true; // 假设对没有收据验证的平台有效。

        //Unity IAP 的验证逻辑仅包含在这些平台上。
#if UNITY_ANDROID || UNITY_IOS || UNITY_STANDALONE_OSX
        //用我们在 Editor 混淆处理窗口中准备的密钥来
        // 准备验证器。
        var validator = new CrossPlatformValidator(GooglePlayTangle.Data(),
            AppleTangle.Data(), Application.identifier);

        try
        {
            //在 Google Play 上，结果中仅有一个商品 ID。
            //在 Apple 商店中，收据包含多个商品。
            var result = validator.Validate(e.purchasedProduct.receipt);
            //为便于参考，我们将收据列出
            Debug.Log("Receipt is valid. Contents:");
            foreach (IPurchaseReceipt productReceipt in result)
            {
                Debug.Log(productReceipt.productID);
                Debug.Log(productReceipt.purchaseDate);
                Debug.Log(productReceipt.transactionID);
            }
        }
        catch (IAPSecurityException)
        {
            Debug.Log("Invalid receipt, not unlocking content");
            validPurchase = false;
        }
#endif

        if (validPurchase)
        {
            // 在此处解锁相应的内容。
        }

        return PurchaseProcessingResult.Pending;
    }

    /// &lt;summary>
    /// 购买失败时调用。
    /// &lt;/summary>
    public void OnPurchaseFailed(Product i, PurchaseFailureReason p)
    {
        if (p == PurchaseFailureReason.PurchasingUnavailable)
        {
            // 可能在设备设置中禁用了 IAP。
        }
    }
}
