using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Blackhole_init : MonoBehaviour
{
    public GameObject blackhole;
    float time = 0;
    bool flag = true;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        time += Time.deltaTime;
        if (time > 10 && flag)
        {
            blackhole.transform.position = this.transform.forward * 0.4f;
            blackhole.SetActive(true);
            flag = false;
        }
    }
}
