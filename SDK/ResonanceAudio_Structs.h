#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ResonanceAudio.ResonanceAudioReverbPluginSettings
struct FResonanceAudioReverbPluginSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnableRoomEffects : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bGetTransformFromAudioVolume : 1;  // 0x1 (0x1)
	char pad_2[6];  // 0x2 (0x2)
	struct FVector RoomPosition;  // 0x8 (0x8)
	struct FQuat RoomRotation;  // 0x20 (0x20)
	struct FVector RoomDimensions;  // 0x40 (0x40)
	uint8_t LeftWallMaterial;  // 0x58 (0x58)
	uint8_t RightWallMaterial;  // 0x59 (0x59)
	uint8_t FloorMaterial;  // 0x5A (0x5A)
	uint8_t CeilingMaterial;  // 0x5B (0x5B)
	uint8_t FrontWallMaterial;  // 0x5C (0x5C)
	uint8_t BackWallMaterial;  // 0x5D (0x5D)
	char pad_94[2];  // 0x5E (0x5E)
	float ReflectionScalar;  // 0x60 (0x60)
	float ReverbGain;  // 0x64 (0x64)
	float ReverbTimeModifier;  // 0x68 (0x68)
	float ReverbBrightness;  // 0x6C (0x6C)


}; 
 
 // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier
struct FSetReverbTimeModifier
{
	float InReverbTimeModifier;  // 0x0 (0x0)


}; 
 
 // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition
struct FSetRoomPosition
{
	struct FVector InPosition;  // 0x0 (0x0)


}; 
 
 // Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset
struct FGetGlobalReverbPreset
{
	struct UResonanceAudioReverbPluginPreset* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects
struct FSetEnableRoomEffects
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInEnableRoomEffects : 1;  // 0x0 (0x0)


}; 
 
 // Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.SetGlobalReverbPreset
struct FSetGlobalReverbPreset
{
	struct UResonanceAudioReverbPluginPreset* InPreset;  // 0x0 (0x0)


}; 
 
 // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar
struct FSetReflectionScalar
{
	float InReflectionScalar;  // 0x0 (0x0)


}; 
 
 // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness
struct FSetReverbBrightness
{
	float InReverbBrightness;  // 0x0 (0x0)


}; 
 
 // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain
struct FSetReverbGain
{
	float InReverbGain;  // 0x0 (0x0)


}; 
 
 // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions
struct FSetRoomDimensions
{
	struct FVector InDimensions;  // 0x0 (0x0)


}; 
 
 // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials
struct FSetRoomMaterials
{
	struct TArray<uint8_t> InMaterials;  // 0x0 (0x0)


}; 
 
 // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation
struct FSetRoomRotation
{
	struct FQuat InRotation;  // 0x0 (0x0)


}; 
 
 // Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity
struct FSetSoundSourceDirectivity
{
	float InPattern;  // 0x0 (0x0)
	float InSharpness;  // 0x4 (0x4)


}; 
 
 // Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread
struct FSetSoundSourceSpread
{
	float InSpread;  // 0x0 (0x0)


}; 
 
 