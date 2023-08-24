#include "pch.h"
#include "SDK.h"

void UResonanceAudioBlueprintFunctionLibrary::SetGlobalReverbPreset(struct UResonanceAudioReverbPluginPreset* InPreset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.SetGlobalReverbPreset");

	FSetGlobalReverbPreset parms{};	
	parms.InPreset = InPreset;

	ProcessEvent(fn, &parms);
}

struct UResonanceAudioReverbPluginPreset* UResonanceAudioBlueprintFunctionLibrary::GetGlobalReverbPreset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset");

	FGetGlobalReverbPreset parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UResonanceAudioReverbPluginPreset::SetRoomRotation(struct FQuat& InRotation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation");

	FSetRoomRotation parms{};	
	parms.InRotation = InRotation;

	ProcessEvent(fn, &parms);
}

void UResonanceAudioReverbPluginPreset::SetRoomPosition(struct FVector& InPosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition");

	FSetRoomPosition parms{};	
	parms.InPosition = InPosition;

	ProcessEvent(fn, &parms);
}

void UResonanceAudioReverbPluginPreset::SetRoomMaterials(struct TArray<uint8_t>& InMaterials){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials");

	FSetRoomMaterials parms{};	
	parms.InMaterials = InMaterials;

	ProcessEvent(fn, &parms);
}

void UResonanceAudioReverbPluginPreset::SetRoomDimensions(struct FVector& InDimensions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions");

	FSetRoomDimensions parms{};	
	parms.InDimensions = InDimensions;

	ProcessEvent(fn, &parms);
}

void UResonanceAudioReverbPluginPreset::SetReverbTimeModifier(float InReverbTimeModifier){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier");

	FSetReverbTimeModifier parms{};	
	parms.InReverbTimeModifier = InReverbTimeModifier;

	ProcessEvent(fn, &parms);
}

void UResonanceAudioReverbPluginPreset::SetReverbGain(float InReverbGain){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain");

	FSetReverbGain parms{};	
	parms.InReverbGain = InReverbGain;

	ProcessEvent(fn, &parms);
}

void UResonanceAudioReverbPluginPreset::SetReverbBrightness(float InReverbBrightness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness");

	FSetReverbBrightness parms{};	
	parms.InReverbBrightness = InReverbBrightness;

	ProcessEvent(fn, &parms);
}

void UResonanceAudioReverbPluginPreset::SetReflectionScalar(float InReflectionScalar){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar");

	FSetReflectionScalar parms{};	
	parms.InReflectionScalar = InReflectionScalar;

	ProcessEvent(fn, &parms);
}

void UResonanceAudioReverbPluginPreset::SetEnableRoomEffects(bool bInEnableRoomEffects){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects");

	FSetEnableRoomEffects parms{};	
	parms.bInEnableRoomEffects = bInEnableRoomEffects;

	ProcessEvent(fn, &parms);
}

void UResonanceAudioSpatializationSourceSettings::SetSoundSourceSpread(float InSpread){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread");

	FSetSoundSourceSpread parms{};	
	parms.InSpread = InSpread;

	ProcessEvent(fn, &parms);
}

void UResonanceAudioSpatializationSourceSettings::SetSoundSourceDirectivity(float InPattern, float InSharpness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity");

	FSetSoundSourceDirectivity parms{};	
	parms.InPattern = InPattern;
	parms.InSharpness = InSharpness;

	ProcessEvent(fn, &parms);
}

