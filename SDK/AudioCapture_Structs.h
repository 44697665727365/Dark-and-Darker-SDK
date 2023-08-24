#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// DelegateFunction AudioCapture.OnAudioInputDevicesObtained__DelegateSignature
struct FOnAudioInputDevicesObtained__DelegateSignature
{
	struct TArray<struct FAudioInputDeviceInfo> AvailableDevices;  // 0x0 (0x0)


}; 
 
 // Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
struct FCreateAudioCapture
{
	struct UAudioCapture* ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AudioCapture.AudioInputDeviceInfo
struct FAudioInputDeviceInfo
{
	struct FString DeviceName;  // 0x0 (0x0)
	struct FString DeviceID;  // 0x10 (0x10)
	int32_t InputChannels;  // 0x20 (0x20)
	int32_t PreferredSampleRate;  // 0x24 (0x24)
	char bSupportsHardwareAEC : 1;  // 0x28 (0x28)
	char pad_40_1 : 7;  // 0x28 (0x28)
	char pad_41[8];  // 0x29 (0x29)


}; 
 
 // Function AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices
struct FGetAvailableAudioInputDevices
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FDelegate OnObtainDevicesEvent;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AudioCapture.AudioCaptureDeviceInfo
struct FAudioCaptureDeviceInfo
{
	struct FName DeviceName;  // 0x0 (0x0)
	int32_t NumInputChannels;  // 0x8 (0x8)
	int32_t SampleRate;  // 0xC (0xC)


}; 
 
 // Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
struct FGetAudioCaptureDeviceInfo
{
	struct FAudioCaptureDeviceInfo OutInfo;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // Function AudioCapture.AudioCapture.IsCapturingAudio
struct FIsCapturingAudio
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString
struct FConv_AudioInputDeviceInfoToString
{
	struct FAudioInputDeviceInfo Info;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x30 (0x30)


}; 
 
 