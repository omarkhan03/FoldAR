using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Controls : MonoBehaviour
{
    public Transform influenza;
    public Transform insulin;
    public Transform testosterone;


    public void MoveUp() {
        ApplyTranslation(new Vector3(0.0f, 0.05f, 0.0f));
    }
    
    public void MoveDown() {
        ApplyTranslation(new Vector3(0.0f, -0.05f, 0.0f));

    }

    public void RotateRight() {
        ApplyRotation(new Vector3(0,10,0));
    }

    public void RotateLeft() {
        ApplyRotation(new Vector3(0,-10,0));
    } // new Vector3(1, 0, 1);

    public void ScaleUp() {
        ApplyScaling(true);
    }

    public void ScaleDown() {
        ApplyScaling(false);
    }

    private void ApplyTranslation(Vector3 transformation) {
        influenza.position += transformation;
        insulin.position += transformation;
        testosterone.position += transformation;

    }

    private void ApplyRotation(Vector3 transformation) {
        influenza.Rotate(transformation);
        insulin.Rotate(transformation);
        testosterone.Rotate(transformation);

    }

    private void ApplyScaling(bool pos) {
        if (pos) {
            influenza.localScale *= 1.1f;
            insulin.localScale *= 1.1f;
            testosterone.localScale *= 1.1f;
        } else {
            influenza.localScale *= 0.9f;
            insulin.localScale *= 0.9f;
            testosterone.localScale *= 0.9f;

        }

    }

}
