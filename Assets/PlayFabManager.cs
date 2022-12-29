using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PlayFab;
using PlayFab.ClientModels;
using UnityEngine.UI;

public class PlayFabManager : MonoBehaviour
{
    public InputField email;
    // Start is called before the first frame update
    void Start()
    {
       
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
