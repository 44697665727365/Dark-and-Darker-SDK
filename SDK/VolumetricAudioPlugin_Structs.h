#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function VolumetricAudioPlugin.VolumetricAudioFunctionLibrary.SetListener
struct FSetListener
{
	struct APawn* Listener;  // 0x0 (0x0)


}; 
 
 // Function VolumetricAudioPlugin.BaseVolumetricAudio.GetDistanceAlongSplineFromLocation
struct FGetDistanceAlongSplineFromLocation
{
	struct USplineComponent* SplineComponent;  // 0x0 (0x0)
	struct FVector Location;  // 0x8 (0x8)
	float DistanceOnSpline;  // 0x20 (0x20)
	float NormalizedDistanceOnSpline;  // 0x24 (0x24)


}; 
 
 // Function VolumetricAudioPlugin.VolumetricAudioFunctionLibrary.GetListener
struct FGetListener
{
	struct APawn* ReturnValue;  // 0x0 (0x0)


}; 
 
 