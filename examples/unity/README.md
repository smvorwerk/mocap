1. Copy and paste everything into the Unity project.
2. Add Example.cs to an object in the scene. Run the scene.
3. Run the MP Motion Capture App locally.
4. Go to https://localhost/capture
5. Select WebSocket Mode, Unity and connect.
6. Now the values are available in Unity.

To include the library
```
using MPMotionCapture;
```

Start the server and set the port
```
server = new MPMotionCaptureServer();
server.StartServer(9912);
```

Blendshapes, Head Rotation and Eye Rotation are available as float arrays.
```
server.blendshapes
server.headRotation
server.leftEyeRotation
server.rightEyeRotation
```

Helper array are available for blendshape orders
```
int jawOpenIndex = Array.IndexOf(MPMotionCaptureServer.blendshapeNames, "jawOpen");
```
