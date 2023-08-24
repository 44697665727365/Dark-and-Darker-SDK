#include "pch.h"
#include "SDK.h"

void UEyeTrackerFunctionLibrary::SetEyeTrackedPlayer(struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer");

	FSetEyeTrackedPlayer parms{};	
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);
}

bool UEyeTrackerFunctionLibrary::IsStereoGazeDataAvailable(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable");

	FIsStereoGazeDataAvailable parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UEyeTrackerFunctionLibrary::IsEyeTrackerConnected(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected");

	FIsEyeTrackerConnected parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UEyeTrackerFunctionLibrary::GetStereoGazeData(struct FEyeTrackerStereoGazeData& OutGazeData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData");

	FGetStereoGazeData parms{};	
	parms.OutGazeData = OutGazeData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UEyeTrackerFunctionLibrary::GetGazeData(struct FEyeTrackerGazeData& OutGazeData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData");

	FGetGazeData parms{};	
	parms.OutGazeData = OutGazeData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

