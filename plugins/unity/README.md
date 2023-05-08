MP Motion Capture Unity Plugin 

Version: 0.0.1

**Make sure you are running the latest version to prevent error.**

How to use
1. Copy and paste everything into the Unity project.
2. Add Example.cs to an object in the scene. Run the scene.
3. Go to https://mocap.robotrebellion.xyz/capture.
4. Select WebSocket Mode, Unity and connect.
5. Now the values are available in Unity.

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

Websocket-sharp is included in this plugin for websocket communication.
- https://github.com/sta/websocket-sharp
