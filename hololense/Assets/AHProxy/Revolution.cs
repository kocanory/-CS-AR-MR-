using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Revolution : MonoBehaviour
{
    
    // Start is called before the first frame update
    public float Revolution_period;
    public GameObject Planet;

    private void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        Revolve();
    }

    void Revolve()
    {
        transform.RotateAround(Planet.transform.position, Vector3.down, 365 / Revolution_period  * Time.deltaTime);
    }
}