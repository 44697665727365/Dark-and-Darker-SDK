#include "pch.h"
#include "SDK.h"

void ABaseVolumetricAudio::GetDistanceAlongSplineFromLocation(struct USplineComponent* SplineComponent, struct FVector Location, float& DistanceOnSpline, float& NormalizedDistanceOnSpline){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VolumetricAudioPlugin.BaseVolumetricAudio.GetDistanceAlongSplineFromLocation");

	FGetDistanceAlongSplineFromLocation parms{};	
	parms.SplineComponent = SplineComponent;
	parms.Location = Location;
	parms.DistanceOnSpline = DistanceOnSpline;
	parms.NormalizedDistanceOnSpline = NormalizedDistanceOnSpline;

	ProcessEvent(fn, &parms);
}

void UVolumetricAudioFunctionLibrary::SetListener(struct APawn*& Listener){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VolumetricAudioPlugin.VolumetricAudioFunctionLibrary.SetListener");

	FSetListener parms{};	
	parms.Listener = Listener;

	ProcessEvent(fn, &parms);
}

struct APawn* UVolumetricAudioFunctionLibrary::GetListener(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VolumetricAudioPlugin.VolumetricAudioFunctionLibrary.GetListener");

	FGetListener parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

