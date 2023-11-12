using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Controls : MonoBehaviour
{
    public Transform redProtein;
    public Transform blueProtein;
    public Transform sphere;
    public Transform cube;

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
        redProtein.position += transformation;
        blueProtein.position += transformation;
    }

    private void ApplyRotation(Vector3 transformation) {
        redProtein.Rotate(transformation);
        blueProtein.Rotate(transformation);
    }

    private void ApplyScaling(bool pos) {
        if (pos) {
            redProtein.localScale *= 1.1f;
            blueProtein.localScale *= 1.1f;
        } else {
            redProtein.localScale *= 0.9f;
            blueProtein.localScale *= 0.9f;
        }

    }

}
