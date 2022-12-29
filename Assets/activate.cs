using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class activate : MonoBehaviour
{
    public GameObject select1;
    public GameObject select2;
    public GameObject select3;
    public GameObject select4;
    public GameObject select5;
    public GameObject select6;
    public GameObject bar;
    public GameObject oldbar;
    // Start is called before the first frame update
    void Start()
    {
        bar.SetActive(false);
    }
    public void select11()
    {
        select1.SetActive(true);
        select2.SetActive(false);
        select3.SetActive(false);
        select4.SetActive(false);
        select5.SetActive(false);
        select6.SetActive(false);
        bar.SetActive(true);
        oldbar.SetActive(false);
    }
    public void select12()
    {
        select1.SetActive(false);
        select2.SetActive(true);
        select3.SetActive(false);
        select4.SetActive(false);
        select5.SetActive(false);
        select6.SetActive(false);
        bar.SetActive(true);
        oldbar.SetActive(false);
    }
    public void select13()
    {
        select1.SetActive(false);
        select2.SetActive(false);
        select3.SetActive(true);
        select4.SetActive(false);
        select5.SetActive(false);
        select6.SetActive(false);
        bar.SetActive(true);
        oldbar.SetActive(false);
    }
    public void select14()
    {
        select1.SetActive(false);
        select2.SetActive(false);
        select3.SetActive(false);
        select4.SetActive(true);
        select5.SetActive(false);
        select6.SetActive(false);
        bar.SetActive(true);
        oldbar.SetActive(false);
    }
    public void select15()
    {
        select1.SetActive(false);
        select2.SetActive(false);
        select3.SetActive(false);
        select4.SetActive(false);
        select5.SetActive(true);
        select6.SetActive(false);
        bar.SetActive(true);
        oldbar.SetActive(false);
    }
    public void select16()
    {
        select1.SetActive(false);
        select2.SetActive(false);
        select3.SetActive(false);
        select4.SetActive(false);
        select5.SetActive(false);
        select6.SetActive(true);
        bar.SetActive(true);
        oldbar.SetActive(false);
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
