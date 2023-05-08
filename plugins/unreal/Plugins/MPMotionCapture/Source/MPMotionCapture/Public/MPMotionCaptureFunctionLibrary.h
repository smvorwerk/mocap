// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "INetworkingWebSocket.h"
#include "IWebSocketServer.h"
#include "UObject/StrongObjectPtr.h"
#include "WebSocketNetDriver.h"

#include "MPMotionCaptureTypes.h"
#include "MPMotionCaptureFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MPMOCAP_API UMPMotionCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		public:

		/**
		 * Remap the raw float array data into individual blendshapes' value
		 * @param	blendshapeData  Custom blendshape struct with all blendshapes and values
		 * @return  Return false if the input array and the output blendshape count doesn't match
		 */
		UFUNCTION(BlueprintPure, Category = "MP Motion Capture", meta = (DisplayName = "Blendshape Data Remap"))
		static bool BlendshapeDataRemap(const TArray<float> floatArrayData, FMPMotionCaptureBlendshapeData& blendshapeData);
};
