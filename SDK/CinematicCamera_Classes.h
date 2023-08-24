#pragma once 
#include <CinematicCamera_Structs.h>
 
 
 
// Class CinematicCamera.CameraRig_Crane
// Size: 0x2C0(Inherited: 0x290)
struct ACameraRig_Crane : AActor
{
	float CranePitch;  // 0x290 (0x290)
	float CraneYaw;  // 0x294 (0x294)
	float CraneArmLength;  // 0x298 (0x298)
	char pad_668_1 : 7;  // 0x29C (0x29C)
	bool bLockMountPitch : 1;  // 0x29C (0x29C)
	char pad_669_1 : 7;  // 0x29D (0x29D)
	bool bLockMountYaw : 1;  // 0x29D (0x29D)
	char pad_670[2];  // 0x29E (0x29E)
	struct USceneComponent* TransformComponent;  // 0x2A0 (0x2A0)
	struct USceneComponent* CraneYawControl;  // 0x2A8 (0x2A8)
	struct USceneComponent* CranePitchControl;  // 0x2B0 (0x2B0)
	struct USceneComponent* CraneCameraMount;  // 0x2B8 (0x2B8)


}; 
 
 


// Class CinematicCamera.CineCameraSettings
// Size: 0xB0(Inherited: 0x38)
struct UCineCameraSettings : UDeveloperSettings
{
	struct FString DefaultLensPresetName;  // 0x38 (0x38)
	float DefaultLensFocalLength;  // 0x48 (0x48)
	float DefaultLensFStop;  // 0x4C (0x4C)
	struct TArray<struct FNamedLensPreset> LensPresets;  // 0x50 (0x50)
	struct FString DefaultFilmbackPreset;  // 0x60 (0x60)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets;  // 0x70 (0x70)
	struct FString DefaultCropPresetName;  // 0x80 (0x80)
	struct TArray<struct FNamedPlateCropPreset> CropPresets;  // 0x90 (0x90)
	char pad_160[16];  // 0xA0 (0xA0)


	void SetLensPresets(struct TArray<struct FNamedLensPreset>& InLensPresets); // Function CinematicCamera.CineCameraSettings.SetLensPresets
	void SetFilmbackPresets(struct TArray<struct FNamedFilmbackPreset>& InFilmbackPresets); // Function CinematicCamera.CineCameraSettings.SetFilmbackPresets
	void SetDefaultLensPresetName(struct FString InDefaultLensPresetName); // Function CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
	void SetDefaultLensFStop(float InDefaultLensFStop); // Function CinematicCamera.CineCameraSettings.SetDefaultLensFStop
	void SetDefaultLensFocalLength(float InDefaultLensFocalLength); // Function CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
	void SetDefaultFilmbackPreset(struct FString InDefaultFilmbackPreset); // Function CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
	void SetDefaultCropPresetName(struct FString InDefaultCropPresetName); // Function CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
	void SetCropPresets(struct TArray<struct FNamedPlateCropPreset>& InCropPresets); // Function CinematicCamera.CineCameraSettings.SetCropPresets
	struct TArray<struct FString> GetLensPresetNames(); // Function CinematicCamera.CineCameraSettings.GetLensPresetNames
	bool GetLensPresetByName(struct FString PresetName, struct FCameraLensSettings& LensSettings); // Function CinematicCamera.CineCameraSettings.GetLensPresetByName
	struct TArray<struct FString> GetFilmbackPresetNames(); // Function CinematicCamera.CineCameraSettings.GetFilmbackPresetNames
	bool GetFilmbackPresetByName(struct FString PresetName, struct FCameraFilmbackSettings& FilmbackSettings); // Function CinematicCamera.CineCameraSettings.GetFilmbackPresetByName
	struct TArray<struct FString> GetCropPresetNames(); // Function CinematicCamera.CineCameraSettings.GetCropPresetNames
	bool GetCropPresetByName(struct FString PresetName, struct FPlateCropSettings& CropSettings); // Function CinematicCamera.CineCameraSettings.GetCropPresetByName
	struct UCineCameraSettings* GetCineCameraSettings(); // Function CinematicCamera.CineCameraSettings.GetCineCameraSettings
}; 
 
 


// Class CinematicCamera.CineCameraComponent
// Size: 0xB50(Inherited: 0xA30)
struct UCineCameraComponent : UCameraComponent
{
	struct FCameraFilmbackSettings FilmbackSettings;  // 0xA30 (0xA30)
	struct FCameraFilmbackSettings Filmback;  // 0xA3C (0xA3C)
	struct FCameraLensSettings LensSettings;  // 0xA48 (0xA48)
	char pad_2660[4];  // 0xA64 (0xA64)
	struct FCameraFocusSettings FocusSettings;  // 0xA68 (0xA68)
	struct FPlateCropSettings CropSettings;  // 0xAD0 (0xAD0)
	float CurrentFocalLength;  // 0xAD4 (0xAD4)
	float CurrentAperture;  // 0xAD8 (0xAD8)
	float CurrentFocusDistance;  // 0xADC (0xADC)
	char bOverride_CustomNearClippingPlane : 1;  // 0xAE0 (0xAE0)
	char pad_2784_1 : 7;  // 0xAE0 (0xAE0)
	char pad_2785[4];  // 0xAE1 (0xAE1)
	float CustomNearClippingPlane;  // 0xAE4 (0xAE4)
	char pad_2792[8];  // 0xAE8 (0xAE8)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets;  // 0xAF0 (0xAF0)
	struct TArray<struct FNamedLensPreset> LensPresets;  // 0xB00 (0xB00)
	struct FString DefaultFilmbackPresetName;  // 0xB10 (0xB10)
	struct FString DefaultFilmbackPreset;  // 0xB20 (0xB20)
	struct FString DefaultLensPresetName;  // 0xB30 (0xB30)
	float DefaultLensFocalLength;  // 0xB40 (0xB40)
	float DefaultLensFStop;  // 0xB44 (0xB44)
	char pad_2888[8];  // 0xB48 (0xB48)


	void SetLensSettings(struct FCameraLensSettings& NewLensSettings); // Function CinematicCamera.CineCameraComponent.SetLensSettings
	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName
	void SetFocusSettings(struct FCameraFocusSettings& NewFocusSettings); // Function CinematicCamera.CineCameraComponent.SetFocusSettings
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	void SetFilmback(struct FCameraFilmbackSettings& NewFilmback); // Function CinematicCamera.CineCameraComponent.SetFilmback
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	void SetCurrentAperture(float NewCurrentAperture); // Function CinematicCamera.CineCameraComponent.SetCurrentAperture
	void SetCropSettings(struct FPlateCropSettings& NewCropSettings); // Function CinematicCamera.CineCameraComponent.SetCropSettings
	void SetCropPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetCropPresetByName
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	struct FString GetCropPresetName(); // Function CinematicCamera.CineCameraComponent.GetCropPresetName
}; 
 
 


// Class CinematicCamera.CineCameraActor
// Size: 0xA20(Inherited: 0x9A0)
struct ACineCameraActor : ACameraActor
{
	struct FCameraLookatTrackingSettings LookatTrackingSettings;  // 0x9A0 (0x9A0)
	char pad_2576[16];  // 0xA10 (0xA10)


	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent
}; 
 
 


// Class CinematicCamera.CameraRig_Rail
// Size: 0x2B0(Inherited: 0x290)
struct ACameraRig_Rail : AActor
{
	float CurrentPositionOnRail;  // 0x290 (0x290)
	char pad_660_1 : 7;  // 0x294 (0x294)
	bool bLockOrientationToRail : 1;  // 0x294 (0x294)
	char pad_661[3];  // 0x295 (0x295)
	struct USceneComponent* TransformComponent;  // 0x298 (0x298)
	struct USplineComponent* RailSplineComponent;  // 0x2A0 (0x2A0)
	struct USceneComponent* RailCameraMount;  // 0x2A8 (0x2A8)


	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
}; 
 
 


