### Inspiration

Proteins have a complex 3D structure which is important for medical researchers to thoroughly understand in order to develop effective drugs and save lives. In particular, the 3D structure of new chimeric proteins (the result of fusing together parts from separate proteins) may have emergent properties which are not obvious without close visual inspection. Medical researchers need a way to visualize novel proteins in a natural 3D environment.

### What it does

FoldAR runs on the Lenovo ThinkReality Smartglasses, which connects to smartphones to provide a convenient way to interact with a 3D augmented reality environment. The phone interface has a textfield to allow for keyboard input, which can be either the name of a known protein (e.g. insulin) or an amino acid sequence which can generate an entirely new protein! We developed an API which interfaces with AlphaFold to return the 3D structure of a protein upon entering the amino acid sequence. Once the user provides input for their protein, it’s 3D structure appears in front of them in augmented reality. The phone provides buttons to control the position, rotation, and scale of the protein for detailed inspection.

### How we built it

We used the Snapdragon Spaces SDK for Unity to develop and build an android APK. For the 3D protein structures, we wrote a script to convert from PDB file format to OBJ file format to easily interface with Unity.

### Challenges

As is typical with XR development, the set-up stage took a long time. We also took a long time to set up Git and Github.

### Accomplishments

We were able to design a very easy and intuitive way to transform proteins for detailed inspection!

### What we learned

### Future steps
