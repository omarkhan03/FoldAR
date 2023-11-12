using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class OnTextEnter : MonoBehaviour
{
    public TMP_InputField sequenceText;

    string sequence;

    public GameObject redProtein;
    public GameObject blueProtein;
    public GameObject sphere;
    public GameObject cube;

    void Start() {
        clearEverything();
    }

    public void enterEvent() {
        sequence = sequenceText.text;
        Debug.Log("Show protein!" + sequence); 
        Debug.Log(sequence);
        Debug.Log("red");
        Debug.Log(sequence == "red"); 
        Debug.Log(sequence.Equals("red")); 



        if (sequence == "red") {
            Debug.Log("red worked"); 
            clearEverything();
            redProtein.SetActive(true);
        }
        if (sequence == "blue") {
            clearEverything();
            blueProtein.SetActive(true);
        } 
        if (sequence == "sphere") {
            clearEverything();
            sphere.SetActive(true);
        } 
        if (sequence == "cube") {
            clearEverything();
            cube.SetActive(true);
        } 
    }

    private void clearEverything() {
        redProtein.SetActive(false);
        blueProtein.SetActive(false);
        sphere.SetActive(false);
        cube.SetActive(false);
    }
}
