using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Remove : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject self;
    public GameObject menu;
    void Start()
    {
        
    }
    public void appear()
    {
        self.SetActive(false);
        menu.SetActive(true);
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
