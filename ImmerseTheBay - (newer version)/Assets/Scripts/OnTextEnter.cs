using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class OnTextEnter : MonoBehaviour
{
    public TMP_InputField sequenceText;

    string sequence;

    public GameObject influenza;
    public GameObject insulin;
    public GameObject testosterone;

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



        if (sequence == "influenza") {
            clearEverything();
            influenza.SetActive(true);
        }
        else if (sequence == "insulin") {
            clearEverything();
            insulin.SetActive(true);
        } 
        else {
            clearEverything();
            testosterone.SetActive(true);
        }
    }

    private void clearEverything() {
        influenza.SetActive(false);
        insulin.SetActive(false);
        testosterone.SetActive(false);
    }
}
