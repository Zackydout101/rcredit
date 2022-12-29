using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PlayFab;
using PlayFab.ClientModels;
using UnityEngine.UI;
using System.Threading;

public class StoreManager : MonoBehaviour
{
    public InputField email;
    public GameObject success;
    public GameObject error1;
     void Start()
    {
        success.SetActive(false);
        error1.SetActive(false);
    }

    // Update is called once per frame
    
    
    
  
   public void PayPal1()
    {
        var request1 = new LoginWithCustomIDRequest
        {
            CustomId = SystemInfo.deviceUniqueIdentifier,
            CreateAccount = true
        };
        PlayFabClientAPI.LoginWithCustomID(request1, OnSuccessPaypal1, OnError);

        


    }
    
    public void PayPal5()
    {
        var request1 = new LoginWithCustomIDRequest
        {
            CustomId = SystemInfo.deviceUniqueIdentifier,
            CreateAccount = true
        };
        PlayFabClientAPI.LoginWithCustomID(request1, OnSuccessPaypal5, OnError);
    }
    public void PayPal10()
    {
        var request1 = new LoginWithCustomIDRequest
        {
            CustomId = SystemInfo.deviceUniqueIdentifier,
            CreateAccount = true
        };
        PlayFabClientAPI.LoginWithCustomID(request1, OnSuccessPaypal10, OnError);
    }
    public void PayPal20()
    {
        var request1 = new LoginWithCustomIDRequest
        {
            CustomId = SystemInfo.deviceUniqueIdentifier,
            CreateAccount = true
        };
        PlayFabClientAPI.LoginWithCustomID(request1, OnSuccessPaypal20, OnError);
    }
    public void PayPal50()
    {
        var request1 = new LoginWithCustomIDRequest
        {
            CustomId = SystemInfo.deviceUniqueIdentifier,
            CreateAccount = true
        };
        PlayFabClientAPI.LoginWithCustomID(request1, OnSuccessPaypal50, OnError);
    }
    public void PayPal100()
    {
        var request1 = new LoginWithCustomIDRequest
        {
            CustomId = SystemInfo.deviceUniqueIdentifier,
            CreateAccount = true
        };
        PlayFabClientAPI.LoginWithCustomID(request1, OnSuccessPaypal100, OnError);
    }
    void OnDataSend(UpdateUserDataResult result)
    {
        Debug.Log("Successful user data sent!");
        
    }
    void OnSuccess(LoginResult result)
    {
        Debug.Log("Successfull login/account create!");
    }
    void OnSuccessPaypal1(LoginResult result)
    {
        PlayerPrefs.SetInt("storage", PlayerPrefs.GetInt("storage") + 1);
        var request = new UpdateUserDataRequest
        {
            Data = new Dictionary<string, string>
            {
                {"email"+PlayerPrefs.GetInt("storage").ToString(), email.text+" 1$" }
            }
        };
        PlayFabClientAPI.UpdateUserData(request, OnDataSend, OnError);
        Debug.Log("Successfull login/account create!");
        success.SetActive(true);
    }
    void OnSuccessPaypal5(LoginResult result)
    {

        PlayerPrefs.SetInt("storage", PlayerPrefs.GetInt("storage") + 1);
        var request = new UpdateUserDataRequest
        {
            Data = new Dictionary<string, string>
            {
                {"email"+PlayerPrefs.GetInt("storage").ToString(), email.text+" 5$" }
            }
        };
        PlayFabClientAPI.UpdateUserData(request, OnDataSend, OnError);

        Debug.Log("Successfull login/account create!");
        success.SetActive(true);
    }
    void OnSuccessPaypal10(LoginResult result)
    {

        PlayerPrefs.SetInt("storage", PlayerPrefs.GetInt("storage") + 1);
        var request = new UpdateUserDataRequest
        {
            Data = new Dictionary<string, string>
            {
                {"email"+PlayerPrefs.GetInt("storage").ToString(), email.text+" 10$" }
            }
        };
        PlayFabClientAPI.UpdateUserData(request, OnDataSend, OnError);
        Debug.Log("Successfull login/account create!");
        success.SetActive(true);
    }

    void OnSuccessPaypal20(LoginResult result)
    {

        PlayerPrefs.SetInt("storage", PlayerPrefs.GetInt("storage") + 1);
        var request = new UpdateUserDataRequest
        {
            Data = new Dictionary<string, string>
            {
                {"email"+PlayerPrefs.GetInt("storage").ToString(), email.text+" 20$" }
            }
        };
        PlayFabClientAPI.UpdateUserData(request, OnDataSend, OnError);
        Debug.Log("Successfull login/account create!");
        success.SetActive(true);
    }
    void OnSuccessPaypal50(LoginResult result)
    {

        PlayerPrefs.SetInt("storage", PlayerPrefs.GetInt("storage") + 1);
        var request = new UpdateUserDataRequest
        {
            Data = new Dictionary<string, string>
            {
                {"email"+PlayerPrefs.GetInt("storage").ToString(), email.text+" 50$" }
            }
        };
        PlayFabClientAPI.UpdateUserData(request, OnDataSend, OnError);
        Debug.Log("Successfull login/account create!");
        success.SetActive(true);
    }
    void OnSuccessPaypal100(LoginResult result)
    {

        PlayerPrefs.SetInt("storage", PlayerPrefs.GetInt("storage") + 1);
        var request = new UpdateUserDataRequest
        {
            Data = new Dictionary<string, string>
            {
                {"email"+PlayerPrefs.GetInt("storage").ToString(), email.text+" 100$" }
            }
        };
        PlayFabClientAPI.UpdateUserData(request, OnDataSend, OnError);
        Debug.Log("Successfull login/account create!");
        success.SetActive(true);
    }
    void OnError(PlayFabError error)
    {
        Debug.Log("erorr!");
        Debug.Log(error.GenerateErrorReport());
        error1.SetActive(true);
    }

}
