# Video Demo

https://github.com/omarkhan03/FoldAR/assets/106503860/73015cf6-0f8c-48cc-9f22-74d43c116693



## Inspiration
Modern biological innovation leverages "chimeric proteins": remixes of existing amino acid sequences to create new proteins. If scientists had an easy way to create and view new proteins, they would be able to rapidly discover new molecules. However, the current process is very clunky for two reasons. First, it's not at all easy for a scientist to rapidly iterate through different hypotheses. Second, current visualisations are limited to a 2D screen, making it difficult to understand the potential of new generations.

## What it does
FoldAR runs on the Lenovo ThinkReality Smartglasses. This platform connects to smartphones to provide a convenient way to interact with a 3D AR environment. The phone interface has a textfield for keyboard input, which can be either the name of a known protein (e.g. insulin) or an amino acid sequence for a novel protein. Then, we developed an API to interface with DeepMind's AlphaFold protein prediction model. This returns the 3D structure of a protein based on an amino acid sequence. Our app then enables visualisation and inspection in space of the molecule, with phone buttons to control the position, rotation, and scale.

## How we built it
We used the Snapdragon Spaces SDK with Dual Fender Fusion for Unity to develop and build an Android APK. For the 3D protein structures, we wrote a script to generate a new molecule using DeepMind's AlphaFold, and a separate script to convert from PDB to OBJ for use in Unity.

## Challenges we ran into
As is typical with XR development, the set-up stage took a long time. We also faced some difficulty in running AlphaFold in a reasonable time window on the cloud (<1 minute). Finally, it took a long time to set up Git/Github as well as file conversion from PDB to OBJ.

## Accomplishments that we're proud of
We were able to design a very easy and intuitive product that could fit into scientist workflows. Additionally, we were able to complete the build process very efficiently, with minimal pivoting or rework required.

## What we learned
First, hand-tracking for smartglasses is not accurate enough at this point in time for precise work. Therefore, we defaulted to a phone-based interface for finer control. Additionally, we had to move much of the backend computation to the cloud to make our application versatile across mobile platforms. Finally, we gained a great deal of experience in working with the Spaces platform and Unity more generally.

## What's next for FoldAR
With further optimisation, we would like to build a real-time workflow for all-in-one protein generalisation and visualisation. This would require work to connect the app to our AlphaFold server (which is already built), and then stream the resulting 3D file back to the phone interface.

