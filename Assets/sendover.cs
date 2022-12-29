using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using PlayFab;
using PlayFab.ClientModels;

public class sendover : MonoBehaviour {

    public InputField check;
    // Start is called before the first frame update
    void Start()
    {
        Login();
    }

    // Update is called once per frame
    void Login()
    {
        var request = new LoginWithCustomIDRequest
        {
            CustomId = SystemInfo.deviceUniqueIdentifier,
            CreateAccount = true
        };
        PlayFabClientAPI.LoginWithCustomID(request, OnSuccess, OnError);
    }

    public void SaveAppearance()
    {
        var request = new UpdateUserDataRequest
        {
            Data = new Dictionary<string, string>
            {
                {"Hat1", check.text }
                
            }
        };
        PlayFabClientAPI.UpdateUserData(request, OnDataSend, OnError);
    }
    void OnDataSend(UpdateUserDataResult result)
    {
        Debug.Log("Successful user data sent!");
    }
    void OnSuccess(LoginResult result)
    {
        Debug.Log("Successfull login/account create!");
    }
    void OnError(PlayFabError error)
    {
        Debug.Log("erorr!");
        Debug.Log(error.GenerateErrorReport());
    }
}
