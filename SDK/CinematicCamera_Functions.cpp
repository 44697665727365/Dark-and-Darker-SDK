#include "pch.h"
#include "SDK.h"

void UCineCameraSettings::SetLensPresets(struct TArray<struct FNamedLensPreset>& InLensPresets){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.SetLensPresets");

	FSetLensPresets parms{};	
	parms.InLensPresets = InLensPresets;

	ProcessEvent(fn, &parms);
}

void UCineCameraSettings::SetFilmbackPresets(struct TArray<struct FNamedFilmbackPreset>& InFilmbackPresets){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.SetFilmbackPresets");

	FSetFilmbackPresets parms{};	
	parms.InFilmbackPresets = InFilmbackPresets;

	ProcessEvent(fn, &parms);
}

void UCineCameraSettings::SetDefaultLensPresetName(struct FString InDefaultLensPresetName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.SetDefaultLensPresetName");

	FSetDefaultLensPresetName parms{};	
	parms.InDefaultLensPresetName = InDefaultLensPresetName;

	ProcessEvent(fn, &parms);
}

void UCineCameraSettings::SetDefaultLensFStop(float InDefaultLensFStop){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.SetDefaultLensFStop");

	FSetDefaultLensFStop parms{};	
	parms.InDefaultLensFStop = InDefaultLensFStop;

	ProcessEvent(fn, &parms);
}

void UCineCameraSettings::SetDefaultLensFocalLength(float InDefaultLensFocalLength){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength");

	FSetDefaultLensFocalLength parms{};	
	parms.InDefaultLensFocalLength = InDefaultLensFocalLength;

	ProcessEvent(fn, &parms);
}

void UCineCameraSettings::SetDefaultFilmbackPreset(struct FString InDefaultFilmbackPreset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset");

	FSetDefaultFilmbackPreset parms{};	
	parms.InDefaultFilmbackPreset = InDefaultFilmbackPreset;

	ProcessEvent(fn, &parms);
}

void UCineCameraSettings::SetDefaultCropPresetName(struct FString InDefaultCropPresetName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.SetDefaultCropPresetName");

	FSetDefaultCropPresetName parms{};	
	parms.InDefaultCropPresetName = InDefaultCropPresetName;

	ProcessEvent(fn, &parms);
}

void UCineCameraSettings::SetCropPresets(struct TArray<struct FNamedPlateCropPreset>& InCropPresets){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.SetCropPresets");

	FSetCropPresets parms{};	
	parms.InCropPresets = InCropPresets;

	ProcessEvent(fn, &parms);
}

struct TArray<struct FString> UCineCameraSettings::GetLensPresetNames(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.GetLensPresetNames");

	FGetLensPresetNames parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCineCameraSettings::GetLensPresetByName(struct FString PresetName, struct FCameraLensSettings& LensSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.GetLensPresetByName");

	FGetLensPresetByName parms{};	
	parms.PresetName = PresetName;
	parms.LensSettings = LensSettings;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FString> UCineCameraSettings::GetFilmbackPresetNames(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.GetFilmbackPresetNames");

	FGetFilmbackPresetNames parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCineCameraSettings::GetFilmbackPresetByName(struct FString PresetName, struct FCameraFilmbackSettings& FilmbackSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.GetFilmbackPresetByName");

	FGetFilmbackPresetByName parms{};	
	parms.PresetName = PresetName;
	parms.FilmbackSettings = FilmbackSettings;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FString> UCineCameraSettings::GetCropPresetNames(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.GetCropPresetNames");

	FGetCropPresetNames parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCineCameraSettings::GetCropPresetByName(struct FString PresetName, struct FPlateCropSettings& CropSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.GetCropPresetByName");

	FGetCropPresetByName parms{};	
	parms.PresetName = PresetName;
	parms.CropSettings = CropSettings;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCineCameraSettings* UCineCameraSettings::GetCineCameraSettings(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraSettings.GetCineCameraSettings");

	FGetCineCameraSettings parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCineCameraComponent::SetLensSettings(struct FCameraLensSettings& NewLensSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetLensSettings");

	FSetLensSettings parms{};	
	parms.NewLensSettings = NewLensSettings;

	ProcessEvent(fn, &parms);
}

void UCineCameraComponent::SetLensPresetByName(struct FString InPresetName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetLensPresetByName");

	FSetLensPresetByName parms{};	
	parms.InPresetName = InPresetName;

	ProcessEvent(fn, &parms);
}

void UCineCameraComponent::SetFocusSettings(struct FCameraFocusSettings& NewFocusSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetFocusSettings");

	FSetFocusSettings parms{};	
	parms.NewFocusSettings = NewFocusSettings;

	ProcessEvent(fn, &parms);
}

void UCineCameraComponent::SetFilmbackPresetByName(struct FString InPresetName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName");

	FSetFilmbackPresetByName parms{};	
	parms.InPresetName = InPresetName;

	ProcessEvent(fn, &parms);
}

void UCineCameraComponent::SetFilmback(struct FCameraFilmbackSettings& NewFilmback){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetFilmback");

	FSetFilmback parms{};	
	parms.NewFilmback = NewFilmback;

	ProcessEvent(fn, &parms);
}

void UCineCameraComponent::SetCurrentFocalLength(float InFocalLength){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength");

	FSetCurrentFocalLength parms{};	
	parms.InFocalLength = InFocalLength;

	ProcessEvent(fn, &parms);
}

void UCineCameraComponent::SetCurrentAperture(float NewCurrentAperture){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetCurrentAperture");

	FSetCurrentAperture parms{};	
	parms.NewCurrentAperture = NewCurrentAperture;

	ProcessEvent(fn, &parms);
}

void UCineCameraComponent::SetCropSettings(struct FPlateCropSettings& NewCropSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetCropSettings");

	FSetCropSettings parms{};	
	parms.NewCropSettings = NewCropSettings;

	ProcessEvent(fn, &parms);
}

void UCineCameraComponent::SetCropPresetByName(struct FString InPresetName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetCropPresetByName");

	FSetCropPresetByName parms{};	
	parms.InPresetName = InPresetName;

	ProcessEvent(fn, &parms);
}

float UCineCameraComponent::GetVerticalFieldOfView(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView");

	FGetVerticalFieldOfView parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FNamedLensPreset> UCineCameraComponent::GetLensPresetsCopy(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy");

	FGetLensPresetsCopy parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UCineCameraComponent::GetLensPresetName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetName");

	FGetLensPresetName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UCineCameraComponent::GetHorizontalFieldOfView(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView");

	FGetHorizontalFieldOfView parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FNamedFilmbackPreset> UCineCameraComponent::GetFilmbackPresetsCopy(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy");

	FGetFilmbackPresetsCopy parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UCineCameraComponent::GetFilmbackPresetName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName");

	FGetFilmbackPresetName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UCineCameraComponent::GetDefaultFilmbackPresetName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName");

	FGetDefaultFilmbackPresetName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UCineCameraComponent::GetCropPresetName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetCropPresetName");

	FGetCropPresetName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCineCameraComponent* ACineCameraActor::GetCineCameraComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraActor.GetCineCameraComponent");

	FGetCineCameraComponent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USplineComponent* ACameraRig_Rail::GetRailSplineComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent");

	FGetRailSplineComponent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

