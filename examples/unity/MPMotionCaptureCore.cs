using UnityEngine;
using UnityEditor;
using VVVV_OSC;
using WebSocketSharp;
using WebSocketSharp.Server;
using System;

namespace MPMotionCapture
{
    public class MPMotionCaptureServer
    {
        private WebSocketServer wssv;
        public bool autoStartServer = false;

        private float[] _blendshapes = new float[52];
        private float[] _headRotation = new float[4];
        private float[] _leftEyeRotation = new float[4];
        private float[] _rightEyeRotation = new float[4];
        public static readonly string[] blendshapeNames ={
            "browInnerUp",
            "browDownLeft",
            "browDownRight",
            "browOuterUpLeft",
            "browOuterUpRight",
            "eyeLookUpLeft",
            "eyeLookUpRight",
            "eyeLookDownLeft",
            "eyeLookDownRight",
            "eyeLookInLeft",
            "eyeLookInRight",
            "eyeLookOutLeft",
            "eyeLookOutRight",
            "eyeBlinkLeft",
            "eyeBlinkRight",
            "eyeSquintLeft",
            "eyeSquintRight",
            "eyeWideLeft",
            "eyeWideRight",
            "cheekPuff",
            "cheekSquintLeft",
            "cheekSquintRight",
            "noseSneerLeft",
            "noseSneerRight",
            "mouthFunnel",
            "mouthPucker",
            "mouthRollUpper",
            "mouthRollLower",
            "mouthShrugUpper",
            "mouthShrugLower",
            "mouthClose",
            "mouthSmileLeft",
            "mouthSmileRight",
            "mouthFrownLeft",
            "mouthFrownRight",
            "mouthDimpleLeft",
            "mouthDimpleRight",
            "mouthUpperUpLeft",
            "mouthUpperUpRight",
            "mouthLowerDownLeft",
            "mouthLowerDownRight",
            "mouthPressLeft",
            "mouthPressRight",
            "mouthStretchLeft",
            "mouthStretchRight",
            "mouthLeft",
            "mouthRight",
            "jawOpen",
            "jawForward",
            "jawLeft",
            "jawRight",
            "tongueOut"
        };

        public MPMotionCaptureServer()
        {
        }

        public void StartServer(int port)
        {
            wssv = new WebSocketServer("ws://localhost:" + port);
            wssv.AddWebSocketService<MPMotionCaptureWebSocket>("/", () => new MPMotionCaptureWebSocket(this));
            wssv.Start();
            Debug.Log("MP Motion Capture websocket server started");
        }

        public void StopServer()
        {
            wssv.Stop();
            Debug.Log("MP Motion Capture websocket server stopped");
        }

        public float[] blendshapes
        {
            get { return _blendshapes; }
        }

        public float[] headRotation
        {
            get { return _headRotation; }
        }

        public float[] leftEyeRotation
        {
            get { return _leftEyeRotation; }
        }

        public float[] rightEyeRotation
        {
            get { return _rightEyeRotation; }
        }

        private class MPMotionCaptureWebSocket : WebSocketBehavior
        {
            private MPMotionCaptureServer _mpMoCapServer;

            public MPMotionCaptureWebSocket(MPMotionCaptureServer mpMoCapServer)
            {
                _mpMoCapServer = mpMoCapServer;
            }


            protected override void OnMessage(MessageEventArgs e)
            {
                if (e.IsBinary)
                {
                    OSCPacket msg = OSCPacket.Unpack(e.RawData);
                    switch (msg.Address)
                    {
                        case "/mpmocap/blendshapes":

                            msg.Values.ToArray(typeof(float)).CopyTo(_mpMoCapServer._blendshapes, 0);
                            break;
                        case "/mpmocap/headRotation":
                            msg.Values.ToArray(typeof(float)).CopyTo(_mpMoCapServer._headRotation, 0);
                            break;
                        case "/mpmocap/leftEyeRotation":
                            msg.Values.ToArray(typeof(float)).CopyTo(_mpMoCapServer._leftEyeRotation, 0);
                            break;
                        case "/mpmocap/rightEyeRotation":
                            msg.Values.ToArray(typeof(float)).CopyTo(_mpMoCapServer._rightEyeRotation, 0);
                            break;
                    }
                }
            }
        }
    }
}
