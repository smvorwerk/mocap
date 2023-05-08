#pragma once

#include "MPMotionCaptureTypes.generated.h"

USTRUCT(BlueprintType)
struct FMPMotionCaptureRawData
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
		TArray<float> Blendshapes = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
		TArray<float> HeadRotation = { 0,0,0,0 };

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
		TArray<float> LeftEyeRotation = { 0,0,0,0 };

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
		TArray<float> RightEyeRotation = { 0,0,0,0 };
};

USTRUCT(BlueprintType)
struct FMPMotionCaptureBlendshapeData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	TMap<FString, float> blendshapes = {
		{"browInnerUp", 0.0},
		{"browDownLeft", 0.0},
		{"browDownRight", 0.0},
		{"browOuterUpLeft", 0.0},
		{"browOuterUpRight", 0.0},
		{"eyeLookUpLeft", 0.0},
		{"eyeLookUpRight", 0.0},
		{"eyeLookDownLeft", 0.0},
		{"eyeLookDownRight", 0.0},
		{"eyeLookInLeft", 0.0},
		{"eyeLookInRight", 0.0},
		{"eyeLookOutLeft", 0.0},
		{"eyeLookOutRight", 0.0},
		{"eyeBlinkLeft", 0.0},
		{"eyeBlinkRight", 0.0},
		{"eyeSquintLeft", 0.0},
		{"eyeSquintRight", 0.0},
		{"eyeWideLeft", 0.0},
		{"eyeWideRight", 0.0},
		{"cheekPuff", 0.0},
		{"cheekSquintLeft", 0.0},
		{"cheekSquintRight", 0.0},
		{"noseSneerLeft", 0.0},
		{"noseSneerRight", 0.0},
		{"mouthFunnel", 0.0},
		{"mouthPucker", 0.0},
		{"mouthRollUpper", 0.0},
		{"mouthRollLower", 0.0},
		{"mouthShrugUpper", 0.0},
		{"mouthShrugLower", 0.0},
		{"mouthClose", 0.0},
		{"mouthSmileLeft", 0.0},
		{"mouthSmileRight", 0.0},
		{"mouthFrownLeft", 0.0},
		{"mouthFrownRight", 0.0},
		{"mouthDimpleLeft", 0.0},
		{"mouthDimpleRight", 0.0},
		{"mouthUpperUpLeft", 0.0},
		{"mouthUpperUpRight", 0.0},
		{"mouthLowerDownLeft", 0.0},
		{"mouthLowerDownRight", 0.0},
		{"mouthPressLeft", 0.0},
		{"mouthPressRight", 0.0},
		{"mouthStretchLeft", 0.0},
		{"mouthStretchRight", 0.0},
		{"mouthLeft", 0.0},
		{"mouthRight", 0.0},
		{"jawOpen", 0.0},
		{"jawForward", 0.0},
		{"jawLeft", 0.0},
		{"jawRight", 0.0},
		{"tongueOut", 0.0}
	};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	TArray<FString> blendshapeNames = {
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float browInnerUp = 0.0;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float browDownLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float browDownRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float browOuterUpLeft = 0.0;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float browOuterUpRight = 0.0;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float eyeLookUpLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float eyeLookUpRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float eyeLookDownLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float eyeLookDownRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float eyeLookInLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float eyeLookInRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float eyeLookOutLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float eyeLookOutRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float eyeBlinkLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float eyeBlinkRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float eyeSquintLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float eyeSquintRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float eyeWideLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float eyeWideRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float cheekPuff = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float cheekSquintLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float cheekSquintRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float noseSneerLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float noseSneerRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthFunnel = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthPucker = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthRollUpper = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthRollLower = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthShrugUpper = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthShrugLower = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthClose = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthSmileLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthSmileRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthFrownLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthFrownRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthDimpleLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthDimpleRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthUpperUpLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthUpperUpRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthLowerDownLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthLowerDownRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthPressLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthPressRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthStretchLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthStretchRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float mouthRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float jawOpen = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float jawForward = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float jawLeft = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float jawRight = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture")
	float tongueOut = 0.0;
	
	float blendshapeCount = 52;
};

USTRUCT(BlueprintType)
struct FMPMotionCaptureAnimationData {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture Struct")
	FMPMotionCaptureBlendshapeData BlendshapeData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture Struct")
	FRotator HeadRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture Struct")
	FRotator LeftEyeRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MP Motion Capture Struct")
	FRotator RightEyeRotation = FRotator::ZeroRotator;
};

