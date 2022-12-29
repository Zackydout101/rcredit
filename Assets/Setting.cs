using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Setting : MonoBehaviour
{
    public GameObject close;
    public GameObject makesure;

    public GameObject home;
    public GameObject setting;
    public GameObject support;
    // Start is called before the first frame update
    void Start()
    {
        close.SetActive(false);
    }
    public static int yaw ;
    public static int yay;
    public void web()
    {
        home.SetActive(false);
        setting.SetActive(false);
        support.SetActive(false);
        GameObject go1 = new GameObject();
        go1.name = "go1";
        go1.AddComponent<Rigidbody>();
        // 1. Add a full-screen UniWebView component.
        var webView = go1.AddComponent<UniWebView>();
        Canvas canvas = FindObjectOfType<Canvas>();

        float h = canvas.GetComponent<RectTransform>().rect.height;
        

        webView.Frame = new Rect(0, 0, Screen.width, Screen.height - h/10);
        close.SetActive(true);

        // 2. Load a URL.
        //https://www.nike.com/ca/member/profile/login?continueUrl=https://www.nike.com/ca/
        webView.Load("https://www.nike.com/de/");
        //https://www.shoebot.ca/home-copy-Koke1mpFD995PKCZJnrZY
        // 3. Show it. 🎉
        webView.Show();
          
        webView.OnShouldClose += (view) => {
            webView = null;
            return true;
        };

        webView.OnMessageReceived += (view, message) => {
            if (message.Path == "close")
            {
                Destroy(webView);
                webView = null;
            }

        };

    }
    int moi = 0;
    // Update is called once per frame
    void Update()
    {
       
    }
}
