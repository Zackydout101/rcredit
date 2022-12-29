using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Destroyweb1 : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject now;

    public GameObject home;
    public GameObject setting;
    public GameObject support;

    void Start()
    {

    }
    public void clodese()
    {
        Destroy(GameObject.Find("go2"));
        now.SetActive(false);
        home.SetActive(true);
        setting.SetActive(true);
        support.SetActive(true);
       
    }
    // Update is called once per frame
    void Update()
    {

    }
}
