using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Blackhole : MonoBehaviour
{
    GameObject[] stars;
    float time;
    Vector3 dir;
    void Start()
    {
        stars = GameObject.FindGameObjectsWithTag("Star");
    }

    // Update is called once per frame
    void Update()
    {
        time += Time.deltaTime;
        foreach (GameObject star in stars)
        {
            float dis = Vector3.Distance(this.transform.position, star.transform.position);

            if (time > 1)
            {
                dir = this.transform.position - star.transform.position;
                star.transform.position += dir * 0.1f * Time.deltaTime;
            }
            if (dis <= 0.3f)
            {
                star.transform.position += dir * 0.2f * Time.deltaTime;
            }
            if (dis <= 0.05f)
            {
                star.transform.position += dir * 0.5f * Time.deltaTime;
                star.transform.localScale *= 0.9f;
            }
            if (time >= 10)
            {
                this.gameObject.SetActive(false);
            }
        }
    }
}