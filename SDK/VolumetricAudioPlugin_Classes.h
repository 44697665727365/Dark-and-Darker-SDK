#pragma once 
#include <VolumetricAudioPlugin_Structs.h>
 
 
 
// Class VolumetricAudioPlugin.BaseVolumetricAudio
// Size: 0x298(Inherited: 0x290)
struct ABaseVolumetricAudio : AActor
{
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool ActivateOnBeginPlay : 1;  // 0x290 (0x290)
	char pad_657_1 : 7;  // 0x291 (0x291)
	bool Debug : 1;  // 0x291 (0x291)
	char pad_658[6];  // 0x292 (0x292)


	void GetDistanceAlongSplineFromLocation(struct USplineComponent* SplineComponent, struct FVector Location, float& DistanceOnSpline, float& NormalizedDistanceOnSpline); // Function VolumetricAudioPlugin.BaseVolumetricAudio.GetDistanceAlongSplineFromLocation
}; 
 
 


// Class VolumetricAudioPlugin.VolumetricAudioFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct UVolumetricAudioFunctionLibrary : UBlueprintFunctionLibrary
{


	void SetListener(struct APawn*& Listener); // Function VolumetricAudioPlugin.VolumetricAudioFunctionLibrary.SetListener
	struct APawn* GetListener(); // Function VolumetricAudioPlugin.VolumetricAudioFunctionLibrary.GetListener
}; 
 
 


// Class VolumetricAudioPlugin.VolumetricAudioSettings
// Size: 0x38(Inherited: 0x38)
struct UVolumetricAudioSettings : UDeveloperSettings
{


}; 
 
 


