using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SetupPaypal : MonoBehaviour
{
    public GameObject background;
    public InputField check;
    // Start is called before the first frame update
    void Start()
    {
        background.SetActive(false);
    }
    public void setup()
    {
        if(check.text.Length> 4)
        {
            background.SetActive(true);
        }
        
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
