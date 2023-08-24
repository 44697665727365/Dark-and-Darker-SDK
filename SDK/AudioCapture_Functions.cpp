#include "pch.h"
#include "SDK.h"

void UAudioCapture::StopCapturingAudio(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.StopCapturingAudio");

	FStopCapturingAudio parms{};	

	ProcessEvent(fn, &parms);
}

void UAudioCapture::StartCapturingAudio(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.StartCapturingAudio");

	FStartCapturingAudio parms{};	

	ProcessEvent(fn, &parms);
}

bool UAudioCapture::IsCapturingAudio(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.IsCapturingAudio");

	FIsCapturingAudio parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAudioCapture::GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo& OutInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo");

	FGetAudioCaptureDeviceInfo parms{};	
	parms.OutInfo = OutInfo;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAudioCapture* UAudioCaptureFunctionLibrary::CreateAudioCapture(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture");

	FCreateAudioCapture parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices(struct UObject* WorldContextObject, struct FDelegate& OnObtainDevicesEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices");

	FGetAvailableAudioInputDevices parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.OnObtainDevicesEvent = OnObtainDevicesEvent;

	ProcessEvent(fn, &parms);
}

struct FString UAudioCaptureBlueprintLibrary::Conv_AudioInputDeviceInfoToString(struct FAudioInputDeviceInfo& Info){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString");

	FConv_AudioInputDeviceInfoToString parms{};	
	parms.Info = Info;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

