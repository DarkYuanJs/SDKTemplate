using AppsFlyerSDK;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.Purchasing.Security;
using Newtonsoft.Json.Linq;
/* 自己存储的数据定义，消耗性商品中产品id和交易id可以唯一确定一笔订单
* 当一笔订单通过AF校验时，生成一个对应的产品信息
* 当产品被交付后，修改IsDelivered的状态*/
public class SaveProductData
{
    // 购买成功的产品ID
    public string ProductID = string.Empty;
    // 购买成功交易ID
    public string TransactionID = string.Empty;
    // 是否已经通过AF校验
    public bool IsValidated = false;
    // 是否已经给客户发放产品
    public bool IsDelivered = false;
    // 如果AF校验失败，保存失败原因
    public string ErrorInfo = string.Empty;
}

public enum IAPErrorType
{
    PurchasingUnavailable = 0,
    ExistingPurchasePending = 1,
    ProductUnavailable = 2,
    SignatureInvalid = 3,
    UserCancelled = 4,
    PaymentDeclined = 5,
    DuplicateTransaction = 6,
    Unknown = 7,
    /*下面是项目中自定义的失败原因*/
    AFValidateError = 10,

}
/*数据来源
 1 运行时用户点击发起购买的商品，一般配有回调函数
    1.1 在本次游戏运行期间购买成功，校验成功，发放成功
    1.2 在退出游戏期间购买成功，下次启动等待unity通知，继续处理
    1.3 在本次游戏运行期间购买失败，直接处理
    1.4 在退出游戏期间购买失败，后续不需要处理
 2 iap初始化成功后，unity 通知库存中的商品，属于购买成功的，属于1.2类型*/
public class PurchasingData
{
    // 当前购买的产品id
    public string ProductID = "";
    // 游戏中定义的产品来源
    public int ProductOrigine = -1;
    // 当前购买的产品回调Action<购买产品信息，失败类型,如果成功为-1>
    public Action<Product, int> BuyCallback = null;
}

[System.Serializable]
public class ProductLocalData
{
    public string ProductID;
    public string Name;
    public float Price;
}


public class IAPManager : MonoBehaviour, IStoreListener, IAppsFlyerValidateReceipt
{
    public GameObject _sceneObject;

    [Header("项目中的商品信息")]
    public ProductLocalData[] _localProductArray;
    public List<SaveProductData> _successProductList = new List<SaveProductData>();
    // 正在进行购买的商品和漏单unity重新通知的商品都放在这个里面，没有callback的就是漏单的商品
    public List<PurchasingData> _purchasingConsumeList = new List<PurchasingData>();

    // 内购系统需要的数据，初始化成功后会传回
    private static IStoreController m_StoreController = null;          // The Unity Purchasing system.
    private static IExtensionProvider m_StoreExtensionProvider = null; // The store-specific Purchasing subsystems.
    // 当前正在进行AF校验的商品
    private Product _validateProduct = null;
    private List<Product> _afWaitQueue = new List<Product>();


    // 初始化商品
    public void InitPurchase()
    {
        Debug.Log("IAP InitPurchase");
        var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());
        for (int i = 0; i < _localProductArray.Length; i++)
        {
            builder.AddProduct(_localProductArray[i].ProductID, ProductType.Consumable, new IDs
            {
                {_localProductArray[i].ProductID, GooglePlay.Name},
                {_localProductArray[i].ProductID, MacAppStore.Name}
            });

        }
        UnityPurchasing.Initialize(this, builder);
    }

    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        string ttt = System.Text.Encoding.Default.GetString(GooglePlayTangle.Data());
        Debug.Log("IAP OnInitialized publick = " + System.Convert.ToBase64String(GooglePlayTangle.Data()));
        m_StoreController = controller;
        m_StoreExtensionProvider = extensions;

    }
    public void OnInitializeFailed(InitializationFailureReason error)
    {
        Debug.Log("IAP OnInitializeFailed");
    }

    // IAP 购买失败回调
    public void OnPurchaseFailed(Product i, PurchaseFailureReason p)
    {
        Debug.Log("IAP OnInitializeFailed errorID = " + i.definition.id + "  errorType = " + p);
        if (p == PurchaseFailureReason.ExistingPurchasePending)
        {
            // 这里首先要区分为什么购买失败，如果是因为存在有未消耗的订单，一定不能调用complete接口完成订单
            Debug.Log("IAP OnPurchaseFailed errorID = PurchaseFailureReason.ExistingPurchasePending");
        }
        else
        {
            Debug.Log("IAP OnPurchaseFailed NotificationPurchaseResult");
            NotificationPurchaseResult(i.definition.id, false, (int)p);
        }
    }

    // IAP 购买成功回调
    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs e)
    {
        Debug.Log("IAP ProcessPurchase productid =  " + e.purchasedProduct.definition.id);
        Debug.Log("IAP ProcessPurchase e" + e.purchasedProduct);

        // 首先从本地获取商品状态
        SaveProductData savedData = GetSaveProductData(e.purchasedProduct.definition.id, e.purchasedProduct.transactionID);
        if (null != savedData)
        {
            Debug.Log("IAP null != savedData");
            if (savedData.IsValidated)
            {
                // 已经校验成功，通知发货
                Debug.Log("IAP savedData.IsValidated");
                NotificationPurchaseResult(e.purchasedProduct.definition.id, true, -1, false);
                Debug.Log("IAP 完成订单 " + e.purchasedProduct.definition.id);
                return PurchaseProcessingResult.Complete;
            }
            else if (savedData.IsDelivered)
            {
                // 已经发货成功
                // 如果处于支付过程，删除数据（这种出现的可能性不大）
                Debug.Log("IAP savedData.IsDelivered id =" + e.purchasedProduct);
                PurchasingData curData = _purchasingConsumeList.Find(pi => { return pi.ProductID == e.purchasedProduct.definition.id; });
                if (null != curData)
                {
                    _purchasingConsumeList.Remove(curData);
                }
                Debug.Log("IAP 完成订单 " + e.purchasedProduct.definition.id);
                return PurchaseProcessingResult.Complete;
            }
            else
            {
                //仅仅购买成功，还没有开始校验 去af校验 
                Debug.Log("IAP savedData.afvalidate  1");
                IPurchaseReceipt validateData = GetProductReceipt(e.purchasedProduct);
                if (null != validateData)
                {
                    Debug.Log("IAP  savedData.afvalidate  2");
                    // 添加购买中的数据
                    AddPurchasingData(e.purchasedProduct.definition.id, 1, (Product curID, int origine) =>
                    {
                        Debug.Log("IAP savedData.afvalidate3 BuySuccess id = " + curID);
                    });
                    // 去af校验
                    GotoAFValidateTranscation(validateData, e.purchasedProduct.receipt);
                }
                else
                {
                    // 初步校验失败，删除订单
                    Debug.Log("IAP 初步校验失败，完成订单 = " + e.purchasedProduct.receipt);
                    return PurchaseProcessingResult.Complete;
                }
            }
        }
        else
        {
            Debug.Log("IAP 初步校验订单");
            // 本地没有保存，首先进行初级校验
            IPurchaseReceipt validateData = GetProductReceipt(e.purchasedProduct);
            if (null != validateData)
            {
                Debug.Log("IAP  null != validateData");
                // 本地没有保存，说明是个新的订单
                SavePaymentSuccessfulDataToLocal(e.purchasedProduct.definition.id, e.purchasedProduct.transactionID);
                // 添加购买中的数据
                AddPurchasingData(e.purchasedProduct.definition.id, 1, (Product curID, int origine) =>
                {
                    Debug.Log("IAP BuySuccess id = " + curID);
                });
                // 去af校验
                GotoAFValidateTranscation(validateData, e.purchasedProduct.receipt);
            }
            else
            {
                // 初步校验失败，删除订单
                Debug.Log("IAP 初步校验失败，完成订单 = " + e.purchasedProduct.receipt);
                return PurchaseProcessingResult.Complete;
            }
        }
        Debug.Log("IAP ProcessPurchase PurchaseProcessingResult.Pending");
        return PurchaseProcessingResult.Pending;
    }

    /******************AF 添加校验接口***********************/
    /// <summary>
    /// The success callback for validateAndSendInAppPurchase API.
    /// For Android : the callback will return "Validate success".
    /// For iOS : the callback will return a JSON string from apples verifyReceipt API.
    /// </summary>
    /// <param name="result"></param>
    public void didFinishValidateReceipt(string result)
    {
        Debug.Log("IAP didFinishValidateReceipt  success = " + result);
        AFValidateConsumeCallback(true, _validateProduct.definition.id, string.Empty);
    }

    /// <summary>
    /// The error callback for validateAndSendInAppPurchase API.
    /// </summary>
    /// <param name="error">A string describing the error.</param>
    public void didFinishValidateReceiptWithError(string error)
    {
        Debug.Log("IAP didFinishValidateReceipt  error = " + error);
        AFValidateConsumeCallback(false, _validateProduct.definition.id, error);
    }


    /********************项目添加逻辑********************/
    // 获取IAP模块初始化状态，只有初始化成功后才可以进行IAP购买
    public bool IsInitialized()
    {
        return m_StoreController != null && m_StoreExtensionProvider != null;
    }

    public void OnBuyButtonClicked(int i)
    {
        //_localProductArray
        BuyProductByID(_localProductArray[i].ProductID, 1, (Product CurProduct, int result) =>
        {
            if (-1 == result)
            {
                Debug.Log("IAP 购买失败 i = " + i);
            }
        });
    }

    // 购买产品
    public void BuyProductByID(string productID, int origine, Action<Product, int> buyCallBackFunc)
    {
        if (IsInitialized())
        {
            Product product = m_StoreController.products.WithID(productID);

            // If the look up found a product for this device's store and that product is ready to be sold ... 
            if (null != product && product.availableToPurchase)
            {
                Debug.Log("IAP 商店中存在这个商品，开始购买");
                // 保存到运行时数据里面
                AddPurchasingData(productID, origine, buyCallBackFunc);
                m_StoreController.InitiatePurchase(product);
            }
            // Otherwise ...
            else
            {
                Debug.Log("IAP BuyProductID: FAIL. Not purchasing product, either is not found or is not available for purchase");
                if (null != buyCallBackFunc)
                {
                    buyCallBackFunc(null, (int)PurchaseFailureReason.ProductUnavailable);
                }
            }
        }
        // Otherwise ...
        else
        {
            // ... report the fact Purchasing has not succeeded initializing yet. Consider waiting longer or 
            // retrying initiailization.
            Debug.Log("IAP BuyProductID FAIL. Not initialized.");
            if (null != buyCallBackFunc)
            {
                buyCallBackFunc(null, (int)PurchaseFailureReason.PurchasingUnavailable);
            }

        }
    }

    public void GotoAFValidateTranscation(IPurchaseReceipt validateProduct, string strReceipt)
    {
        Product curProduct = m_StoreController.products.WithID(validateProduct.productID);
        if (null == _validateProduct)
        {
            _validateProduct = curProduct;
            // 从等待队列中删除对应商品如果有的话
            Product waitInQueue = _afWaitQueue.Find(pi => { return pi.definition.id == validateProduct.productID; });
            if (null != waitInQueue)
            {
                _afWaitQueue.Remove(waitInQueue);
            }
            // 开始校验
            // 下面数据用于AF 数据统计
            Dictionary<string, string> extraParams = new Dictionary<string, string>(){
                {AFInAppEvents.CONTENT_ID, validateProduct.productID},
                {AFInAppEvents.REVENUE, "0.01"},
                {AFInAppEvents.CURRENCY, curProduct.metadata.isoCurrencyCode},
                {AFInAppEvents.ORDER_ID, curProduct.transactionID},  // 订单号传入
            };
#if UNITY_IOS
        AppleInAppPurchaseReceipt apple = receiptData as AppleInAppPurchaseReceipt;
        AppsFlyeriOS.validateAndSendInAppPurchase(validateProduct.productID, curProduct.metadata.localizedPriceString, curProduct.metadata.isoCurrencyCode, curProduct.transactionID, extraParams, this);
#elif UNITY_ANDROID
            GooglePlayReceipt google = validateProduct as GooglePlayReceipt;
            JObject receiptObj = JObject.Parse(strReceipt);
            Debug.Log("IAP receiptObj = " + receiptObj);
            string purchaseData = (string)(JObject.Parse((string)receiptObj["Payload"])["json"]);
            string signature = (string)(JObject.Parse((string)receiptObj["Payload"])["signature"]);
            AppsFlyerAndroid.validateAndSendInAppPurchase(System.Convert.ToBase64String(GooglePlayTangle.Data()), signature, purchaseData, curProduct.metadata.localizedPriceString, curProduct.metadata.isoCurrencyCode, extraParams, this);
#endif
        }
        else
        {
            // 加入等待队列
            Debug.Log("IAP addQueue = " + strReceipt);
            _afWaitQueue.Add(curProduct);
        }

    }

    // AF校验订单回调函数
    public void AFValidateConsumeCallback(bool buySuccess, string productID, string errorInfo)
    {
        Debug.LogError("IAP AFValidateConsumeCallback buySuccess = " + buySuccess);
        _validateProduct = null;
        Product productData = m_StoreController.products.WithID(productID);
        if (buySuccess)
        {
            ModifyLocalDataValidateState(productID, productData.transactionID);
        }
        else
        {
            // 校验失败，在本地存档中保存失败原因
            AddLocalDataErrorInfo(productID, productData.transactionID, errorInfo);
        }
        // 如果校验结果不对的话，这一步必然属于AF校验错误
        Debug.LogError("IAP AFValidateConsumeCallback NotificationPurchaseResult = ");
        NotificationPurchaseResult(productID, buySuccess, (int)IAPErrorType.AFValidateError);
        // 开始下一个档单校验
        if (_afWaitQueue.Count > 0)
        {
            IPurchaseReceipt validateData = GetProductReceipt(_afWaitQueue[0]);
            // 能加到队列中的都是订单数据
            GotoAFValidateTranscation(validateData, _afWaitQueue[0].receipt);
        }
    }

    // 获取票据信息
    public IPurchaseReceipt GetProductReceipt(Product curProduct)
    {
        CrossPlatformValidator validator = new CrossPlatformValidator(GooglePlayTangle.Data(), AppleTangle.Data(), Application.identifier);
        var receipt = validator.Validate(curProduct.receipt);
        foreach (IPurchaseReceipt purchaseReceipt in receipt)
        {
            Debug.Log("IAP IPurchaseReceipt id= " + purchaseReceipt.productID);
            if (purchaseReceipt.productID == curProduct.definition.id)
            {
                if (Application.platform == RuntimePlatform.IPhonePlayer)
                {
                    AppleInAppPurchaseReceipt apple = purchaseReceipt as AppleInAppPurchaseReceipt;
                    if (null != apple)
                    {
                        return purchaseReceipt;
                    }
                    else
                    {
                        Debug.Log("IAP 没有拿到apple的支付票据！");
                    }
                }
                else if (Application.platform == RuntimePlatform.Android)
                {
                    GooglePlayReceipt google = purchaseReceipt as GooglePlayReceipt;
                    if (null != google)
                    {
                        return purchaseReceipt;
                    }
                    else
                    {
                        Debug.Log("IAP 没有拿到Google的支付票据！");
                    }
                }
                break;
            }
        }
        return null;
    }

    // 保存付费中的商品信息
    public void AddPurchasingData(string productID, int origine, Action<Product, int> buyCallBackFunc)
    {
        PurchasingData newData = new PurchasingData();
        newData.ProductID = productID;
        newData.ProductOrigine = origine;
        newData.BuyCallback = buyCallBackFunc;
        _purchasingConsumeList.Add(newData);
    }


    // 保存购买成功的订单信息
    public SaveProductData SavePaymentSuccessfulDataToLocal(string productID, string transactionID)
    {
        // 如果校验成功，在本地记录订单信息和发货状态
        SaveProductData successProduct = new SaveProductData();
        successProduct.ProductID = productID;
        successProduct.TransactionID = transactionID;
        successProduct.IsValidated = false;
        successProduct.IsDelivered = false;
        _successProductList.Add(successProduct);
        return successProduct;
    }

    // 修改本地购买成功订单的校验状态
    public void ModifyLocalDataValidateState(string productID, string transactionID)
    {
        SaveProductData localData = GetSaveProductData(productID, transactionID);
        if (null != localData)
        {
            localData.IsValidated = true;
        }
        else
        {
            Debug.LogError("IAP 出现了校验成功但是没有保存的订单 productID = ");
            Product logProduct = m_StoreController.products.WithID(productID); ;
            if (null != logProduct.receipt)
            {
                Debug.LogError("IAP 出现了校验成功但是没有保存的订单 receipt = " + logProduct.receipt);
            }
        }
    }

    // 修改本地购买成功订单的发货状态
    public void ModifyLocalDataDeliverState(string productID, string transactionID)
    {
        SaveProductData localData = GetSaveProductData(productID, transactionID);
        if (null != localData)
        {
            localData.IsValidated = true;
        }
        else
        {
            Debug.LogError("IAP 出现了发货成功但是没有保存的订单 productID = " + productID);
            Product logProduct = m_StoreController.products.WithID(productID);
            if (null != logProduct.receipt)
            {
                Debug.LogError("IAP 出现了发货成功但是没有保存的订单 receipt = " + logProduct.receipt);
            }
        }
    }

    // 给本地存档订单添加AF校验失败的原因
    public void AddLocalDataErrorInfo(string productID, string transactionID, string errorInfo)
    {
        SaveProductData localData = GetSaveProductData(productID, transactionID);
        if (null != localData)
        {
            localData.ErrorInfo = errorInfo;
        }
        else
        {
            Debug.LogError("IAP 出现了去AF校验但是没有保存在本地的订单 productID = " + productID);
            Product logProduct = m_StoreController.products.WithID(productID);
            if (null != logProduct.receipt)
            {
                Debug.LogError("IAP 出现了去AF校验但是没有保存在本地的订单 receipt = " + logProduct.receipt);
            }
        }
    }

    // 获取本地存档订单数据
    public SaveProductData GetSaveProductData(string productID, string transactionID)
    {
        return _successProductList.Find(pi => { return pi.ProductID == productID && pi.TransactionID == transactionID; });
    }


    // 通知购买方购买结果
    public void NotificationPurchaseResult(string productID, bool buySuccess, int errorType, bool needComplete = true)
    {
        //从unity中获取产品信息
        Product productData = m_StoreController.products.WithID(productID);
        // 如果启动时unity iap调用ProcessPurchase,则需要添加Purchsing数据
        PurchasingData buyProduct = _purchasingConsumeList.Find(pi => { return pi.ProductID == productID; });
        if (null != productData)
        {
            Debug.Log("IAP NotificationPurchaseResult product = " + productData);
        }
        if (null != buyProduct)
        {
            Debug.Log("IAP NotificationPurchaseResult buyProduct = " + buyProduct);
        }

        // 购买成功的一定是通过AF校验的，购买失败的会通知具体原因
        if (buySuccess)
        {
            if (null != buyProduct && null != buyProduct.BuyCallback)
            {
                buyProduct.BuyCallback(productData, -1);
            }
            else
            {
                // 没有回调，应该是漏单，做统一逻辑处理
            }
            // 从本地存档中查找对应的订单，修改发货状态
            ModifyLocalDataDeliverState(productID, productData.transactionID);
        }
        else
        {
            if (null != buyProduct && null != buyProduct.BuyCallback)
            {
                buyProduct.BuyCallback(productData, -1);
            }
            else
            {
                // 目前没有想到会走到这个逻辑的操作方式
            }
        }
        // 修改Unity IAP库存订单信息
        if (productData.hasReceipt && needComplete)
        {
            Debug.Log("IAP 当前商品有订单数据，完成 product = " + productData);
            m_StoreController.ConfirmPendingPurchase(productData);
        }
        // 删除运行时数据
        if (null != buyProduct)
        {
            _purchasingConsumeList.Remove(buyProduct);
        }
    }

}
