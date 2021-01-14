using UnityEngine;

public class KeepGameObjectStatic : MonoBehaviour
{
    // Start is called before the first frame update
    void Awake()
    {
        DontDestroyOnLoad(gameObject);
    }


}
