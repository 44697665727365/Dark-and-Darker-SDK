#pragma once 
#include <ResonanceAudio_Structs.h>
 
 
 
// Class ResonanceAudio.ResonanceAudioSoundfieldSettings
// Size: 0x30(Inherited: 0x28)
struct UResonanceAudioSoundfieldSettings : USoundfieldEncodingSettingsBase
{
	uint8_t RenderMode;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 


// Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct UResonanceAudioBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{


	void SetGlobalReverbPreset(struct UResonanceAudioReverbPluginPreset* InPreset); // Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.SetGlobalReverbPreset
	struct UResonanceAudioReverbPluginPreset* GetGlobalReverbPreset(); // Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset
}; 
 
 


// Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
// Size: 0x310(Inherited: 0x290)
struct AResonanceAudioDirectivityVisualizer : AActor
{
	char pad_656[112];  // 0x290 (0x290)
	struct UMaterial* Material;  // 0x300 (0x300)
	struct UResonanceAudioSpatializationSourceSettings* Settings;  // 0x308 (0x308)


}; 
 
 


// Class ResonanceAudio.ResonanceAudioReverbPluginPreset
// Size: 0x170(Inherited: 0x68)
struct UResonanceAudioReverbPluginPreset : USoundEffectSubmixPreset
{
	char pad_104[152];  // 0x68 (0x68)
	struct FResonanceAudioReverbPluginSettings Settings;  // 0x100 (0x100)


	void SetRoomRotation(struct FQuat& InRotation); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation
	void SetRoomPosition(struct FVector& InPosition); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition
	void SetRoomMaterials(struct TArray<uint8_t>& InMaterials); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials
	void SetRoomDimensions(struct FVector& InDimensions); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions
	void SetReverbTimeModifier(float InReverbTimeModifier); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier
	void SetReverbGain(float InReverbGain); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain
	void SetReverbBrightness(float InReverbBrightness); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness
	void SetReflectionScalar(float InReflectionScalar); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar
	void SetEnableRoomEffects(bool bInEnableRoomEffects); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects
}; 
 
 


// Class ResonanceAudio.ResonanceAudioSettings
// Size: 0x90(Inherited: 0x28)
struct UResonanceAudioSettings : UObject
{
	struct FSoftObjectPath OutputSubmix;  // 0x28 (0x28)
	uint8_t QualityMode;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct FSoftObjectPath GlobalReverbPreset;  // 0x50 (0x50)
	struct FSoftObjectPath GlobalSourcePreset;  // 0x70 (0x70)


}; 
 
 


// Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings
// Size: 0x50(Inherited: 0x28)
struct UResonanceAudioSpatializationSourceSettings : USpatializationPluginSourceSettingsBase
{
	uint8_t SpatializationMethod;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	float Pattern;  // 0x2C (0x2C)
	float Sharpness;  // 0x30 (0x30)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool bToggleVisualization : 1;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	float Scale;  // 0x38 (0x38)
	float Spread;  // 0x3C (0x3C)
	uint8_t Rolloff;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	float MinDistance;  // 0x44 (0x44)
	float MaxDistance;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


	void SetSoundSourceSpread(float InSpread); // Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread
	void SetSoundSourceDirectivity(float InPattern, float InSharpness); // Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity
}; 
 
 


