#pragma once 
#include <AudioCapture_Structs.h>
 
 
 
// Class AudioCapture.AudioCapture
// Size: 0xB0(Inherited: 0xA8)
struct UAudioCapture : UAudioGenerator
{
	char pad_168[8];  // 0xA8 (0xA8)


	void StopCapturingAudio(); // Function AudioCapture.AudioCapture.StopCapturingAudio
	void StartCapturingAudio(); // Function AudioCapture.AudioCapture.StartCapturingAudio
	bool IsCapturingAudio(); // Function AudioCapture.AudioCapture.IsCapturingAudio
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo& OutInfo); // Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
}; 
 
 


// Class AudioCapture.AudioCaptureFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary
{


	struct UAudioCapture* CreateAudioCapture(); // Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
}; 
 
 


// Class AudioCapture.AudioCaptureBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UAudioCaptureBlueprintLibrary : UBlueprintFunctionLibrary
{


	void GetAvailableAudioInputDevices(struct UObject* WorldContextObject, struct FDelegate& OnObtainDevicesEvent); // Function AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices
	struct FString Conv_AudioInputDeviceInfoToString(struct FAudioInputDeviceInfo& Info); // Function AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString
}; 
 
 


// Class AudioCapture.AudioCaptureComponent
// Size: 0x850(Inherited: 0x790)
struct UAudioCaptureComponent : USynthComponent
{
	int32_t JitterLatencyFrames;  // 0x790 (0x790)
	char pad_1940[188];  // 0x794 (0x794)


}; 
 
 


