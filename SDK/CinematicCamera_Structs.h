#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
struct FGetFilmbackPresetName
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CinematicCamera.CameraFilmbackSettings
struct FCameraFilmbackSettings
{
	float SensorWidth;  // 0x0 (0x0)
	float SensorHeight;  // 0x4 (0x4)
	float SensorAspectRatio;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CinematicCamera.PlateCropSettings
struct FPlateCropSettings
{
	float AspectRatio;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CinematicCamera.NamedFilmbackPreset
struct FNamedFilmbackPreset
{
	struct FString Name;  // 0x0 (0x0)
	struct FCameraFilmbackSettings FilmbackSettings;  // 0x10 (0x10)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct CinematicCamera.CameraFocusSettings
struct FCameraFocusSettings
{
	uint8_t FocusMethod;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float ManualFocusDistance;  // 0x4 (0x4)
	struct FCameraTrackingFocusSettings TrackingFocusSettings;  // 0x8 (0x8)
	char bSmoothFocusChanges : 1;  // 0x58 (0x58)
	char pad_88_1 : 7;  // 0x58 (0x58)
	char pad_89[4];  // 0x59 (0x59)
	float FocusSmoothingInterpSpeed;  // 0x5C (0x5C)
	float FocusOffset;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)


}; 
 
 // ScriptStruct CinematicCamera.CameraLensSettings
struct FCameraLensSettings
{
	float MinFocalLength;  // 0x0 (0x0)
	float MaxFocalLength;  // 0x4 (0x4)
	float MinFStop;  // 0x8 (0x8)
	float MaxFStop;  // 0xC (0xC)
	float MinimumFocusDistance;  // 0x10 (0x10)
	float SqueezeFactor;  // 0x14 (0x14)
	int32_t DiaphragmBladeCount;  // 0x18 (0x18)


}; 
 
 // ScriptStruct CinematicCamera.NamedPlateCropPreset
struct FNamedPlateCropPreset
{
	struct FString Name;  // 0x0 (0x0)
	struct FPlateCropSettings CropSettings;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct CinematicCamera.NamedLensPreset
struct FNamedLensPreset
{
	struct FString Name;  // 0x0 (0x0)
	struct FCameraLensSettings LensSettings;  // 0x10 (0x10)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct CinematicCamera.CameraTrackingFocusSettings
struct FCameraTrackingFocusSettings
{
	struct TSoftObjectPtr<AActor> ActorToTrack;  // 0x0 (0x0)
	struct FVector RelativeOffset;  // 0x30 (0x30)
	char bDrawDebugTrackingFocusPoint : 1;  // 0x48 (0x48)
	char pad_72_1 : 7;  // 0x48 (0x48)
	char pad_73[8];  // 0x49 (0x49)


}; 
 
 // ScriptStruct CinematicCamera.CameraLookatTrackingSettings
struct FCameraLookatTrackingSettings
{
	char bEnableLookAtTracking : 1;  // 0x0 (0x0)
	char bDrawDebugLookAtTrackingPosition : 1;  // 0x0 (0x0)
	char pad_0_1 : 6;  // 0x0 (0x0)
	char pad_1[4];  // 0x1 (0x1)
	float LookAtTrackingInterpSpeed;  // 0x4 (0x4)
	char pad_8[24];  // 0x8 (0x8)
	struct TSoftObjectPtr<AActor> ActorToTrack;  // 0x20 (0x20)
	struct FVector RelativeOffset;  // 0x50 (0x50)
	char bAllowRoll : 1;  // 0x68 (0x68)
	char pad_104_1 : 7;  // 0x68 (0x68)
	char pad_105[8];  // 0x69 (0x69)


}; 
 
 // Function CinematicCamera.CineCameraSettings.GetCropPresetByName
struct FGetCropPresetByName
{
	struct FString PresetName;  // 0x0 (0x0)
	struct FPlateCropSettings CropSettings;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function CinematicCamera.CineCameraSettings.GetCineCameraSettings
struct FGetCineCameraSettings
{
	struct UCineCameraSettings* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
struct FSetDefaultCropPresetName
{
	struct FString InDefaultCropPresetName;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraSettings.GetCropPresetNames
struct FGetCropPresetNames
{
	struct TArray<struct FString> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraSettings.GetFilmbackPresetByName
struct FGetFilmbackPresetByName
{
	struct FString PresetName;  // 0x0 (0x0)
	struct FCameraFilmbackSettings FilmbackSettings;  // 0x10 (0x10)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool ReturnValue : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)


}; 
 
 // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
struct FGetVerticalFieldOfView
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraSettings.GetFilmbackPresetNames
struct FGetFilmbackPresetNames
{
	struct TArray<struct FString> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraSettings.GetLensPresetByName
struct FGetLensPresetByName
{
	struct FString PresetName;  // 0x0 (0x0)
	struct FCameraLensSettings LensSettings;  // 0x10 (0x10)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool ReturnValue : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)


}; 
 
 // Function CinematicCamera.CineCameraSettings.GetLensPresetNames
struct FGetLensPresetNames
{
	struct TArray<struct FString> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraSettings.SetCropPresets
struct FSetCropPresets
{
	struct TArray<struct FNamedPlateCropPreset> InCropPresets;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraSettings.SetDefaultLensFStop
struct FSetDefaultLensFStop
{
	float InDefaultLensFStop;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
struct FSetDefaultFilmbackPreset
{
	struct FString InDefaultFilmbackPreset;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
struct FSetDefaultLensFocalLength
{
	float InDefaultLensFocalLength;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraActor.GetCineCameraComponent
struct FGetCineCameraComponent
{
	struct UCineCameraComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
struct FSetDefaultLensPresetName
{
	struct FString InDefaultLensPresetName;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraSettings.SetFilmbackPresets
struct FSetFilmbackPresets
{
	struct TArray<struct FNamedFilmbackPreset> InFilmbackPresets;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
struct FSetCurrentFocalLength
{
	float InFocalLength;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraSettings.SetLensPresets
struct FSetLensPresets
{
	struct TArray<struct FNamedLensPreset> InLensPresets;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
struct FGetRailSplineComponent
{
	struct USplineComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraComponent.GetCropPresetName
struct FGetCropPresetName
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
struct FGetDefaultFilmbackPresetName
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
struct FGetFilmbackPresetsCopy
{
	struct TArray<struct FNamedFilmbackPreset> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
struct FGetHorizontalFieldOfView
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraComponent.GetLensPresetName
struct FGetLensPresetName
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
struct FGetLensPresetsCopy
{
	struct TArray<struct FNamedLensPreset> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraComponent.SetCropPresetByName
struct FSetCropPresetByName
{
	struct FString InPresetName;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraComponent.SetCropSettings
struct FSetCropSettings
{
	struct FPlateCropSettings NewCropSettings;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraComponent.SetCurrentAperture
struct FSetCurrentAperture
{
	float NewCurrentAperture;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraComponent.SetFilmback
struct FSetFilmback
{
	struct FCameraFilmbackSettings NewFilmback;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
struct FSetFilmbackPresetByName
{
	struct FString InPresetName;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraComponent.SetFocusSettings
struct FSetFocusSettings
{
	struct FCameraFocusSettings NewFocusSettings;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraComponent.SetLensPresetByName
struct FSetLensPresetByName
{
	struct FString InPresetName;  // 0x0 (0x0)


}; 
 
 // Function CinematicCamera.CineCameraComponent.SetLensSettings
struct FSetLensSettings
{
	struct FCameraLensSettings NewLensSettings;  // 0x0 (0x0)


}; 
 
 