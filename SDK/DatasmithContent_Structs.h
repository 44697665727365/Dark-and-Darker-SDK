#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValuesForKey
struct FGetDatasmithUserDataValuesForKey
{
	struct UObject* Object;  // 0x0 (0x0)
	struct FName Key;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bPartialMatchKey : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct TArray<struct FString> ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate
struct FDatasmithStaticParameterSetTemplate
{
	struct TMap<struct FName, bool> StaticSwitchParameters;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DatasmithContent.DatasmithAssetImportOptions
struct FDatasmithAssetImportOptions
{
	struct FName PackagePath;  // 0x0 (0x0)


}; 
 
 // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
struct FGetDatasmithUserData
{
	struct UObject* Object;  // 0x0 (0x0)
	struct UDatasmithAssetUserData* ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DatasmithContent.DatasmithImportInfo
struct FDatasmithImportInfo
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
struct FDatasmithCameraLookatTrackingSettingsTemplate
{
	char bEnableLookAtTracking : 1;  // 0x0 (0x0)
	char bAllowRoll : 1;  // 0x0 (0x0)
	char pad_0_1 : 6;  // 0x0 (0x0)
	char pad_1[8];  // 0x1 (0x1)
	struct TSoftObjectPtr<AActor> ActorToTrack;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
struct FDatasmithCameraFilmbackSettingsTemplate
{
	float SensorWidth;  // 0x0 (0x0)
	float SensorHeight;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
struct FDatasmithPostProcessSettingsTemplate
{
	char bOverride_WhiteTemp : 1;  // 0x0 (0x0)
	char bOverride_ColorSaturation : 1;  // 0x0 (0x0)
	char bOverride_VignetteIntensity : 1;  // 0x0 (0x0)
	char bOverride_AutoExposureMethod : 1;  // 0x0 (0x0)
	char bOverride_CameraISO : 1;  // 0x0 (0x0)
	char bOverride_CameraShutterSpeed : 1;  // 0x0 (0x0)
	char pad_0_1 : 2;  // 0x0 (0x0)
	char pad_1[4];  // 0x1 (0x1)
	char bOverride_DepthOfFieldFstop : 1;  // 0x4 (0x4)
	char pad_4_1 : 7;  // 0x4 (0x4)
	char pad_5[4];  // 0x5 (0x5)
	float WhiteTemp;  // 0x8 (0x8)
	float VignetteIntensity;  // 0xC (0xC)
	struct FVector4 ColorSaturation;  // 0x10 (0x10)
	enum class EAutoExposureMethod AutoExposureMethod;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	float CameraISO;  // 0x34 (0x34)
	float CameraShutterSpeed;  // 0x38 (0x38)
	float DepthOfFieldFstop;  // 0x3C (0x3C)


}; 
 
 // ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
struct FDatasmithCameraLensSettingsTemplate
{
	float MaxFStop;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
struct FDatasmithCameraFocusSettingsTemplate
{
	uint8_t FocusMethod;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float ManualFocusDistance;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
struct FDatasmithStaticMeshImportOptions
{
	uint8_t MinLightmapResolution;  // 0x0 (0x0)
	uint8_t MaxLightmapResolution;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool bGenerateLightmapUVs : 1;  // 0x2 (0x2)
	char pad_3_1 : 7;  // 0x3 (0x3)
	bool bRemoveDegenerates : 1;  // 0x3 (0x3)


}; 
 
 // ScriptStruct DatasmithContent.DatasmithReimportOptions
struct FDatasmithReimportOptions
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bUpdateActors : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bRespawnDeletedActors : 1;  // 0x1 (0x1)


}; 
 
 // ScriptStruct DatasmithContent.DatasmithImportBaseOptions
struct FDatasmithImportBaseOptions
{
	uint8_t SceneHandling;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bIncludeGeometry : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool bIncludeMaterial : 1;  // 0x2 (0x2)
	char pad_3_1 : 7;  // 0x3 (0x3)
	bool bIncludeLight : 1;  // 0x3 (0x3)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bIncludeCamera : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool bIncludeAnimation : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)
	struct FDatasmithAssetImportOptions AssetOptions;  // 0x8 (0x8)
	struct FDatasmithStaticMeshImportOptions StaticMeshOptions;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DatasmithContent.DatasmithTessellationOptions
struct FDatasmithTessellationOptions
{
	float ChordTolerance;  // 0x0 (0x0)
	float MaxEdgeLength;  // 0x4 (0x4)
	float NormalTolerance;  // 0x8 (0x8)
	uint8_t StitchingTechnique;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // ScriptStruct DatasmithContent.DatasmithRetessellationOptions
// Size: 0x14(Inherited: 0x10)
struct FDatasmithRetessellationOptions : FDatasmithTessellationOptions
{
	uint8_t RetessellationRule;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
struct FDatasmithMeshBuildSettingsTemplate
{
	char bUseMikkTSpace : 1;  // 0x0 (0x0)
	char bRecomputeNormals : 1;  // 0x0 (0x0)
	char bRecomputeTangents : 1;  // 0x0 (0x0)
	char bRemoveDegenerates : 1;  // 0x0 (0x0)
	char bUseHighPrecisionTangentBasis : 1;  // 0x0 (0x0)
	char bUseFullPrecisionUVs : 1;  // 0x0 (0x0)
	char bGenerateLightmapUVs : 1;  // 0x0 (0x0)
	char pad_0_1 : 1;  // 0x0 (0x0)
	char pad_1[4];  // 0x1 (0x1)
	int32_t MinLightmapResolution;  // 0x4 (0x4)
	int32_t SrcLightmapIndex;  // 0x8 (0x8)
	int32_t DstLightmapIndex;  // 0xC (0xC)


}; 
 
 // ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
struct FDatasmithStaticMaterialTemplate
{
	struct FName MaterialSlotName;  // 0x0 (0x0)
	struct UMaterialInterface* MaterialInterface;  // 0x8 (0x8)


}; 
 
 // Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
struct FPlayLevelSequence
{
	struct ULevelSequence* SequenceToPlay;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
struct FDatasmithMeshSectionInfoTemplate
{
	int32_t MaterialIndex;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
struct FDatasmithMeshSectionInfoMapTemplate
{
	struct TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate> Map;  // 0x0 (0x0)


}; 
 
 // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
struct FGetDatasmithUserDataKeysAndValuesForValue
{
	struct UObject* Object;  // 0x0 (0x0)
	struct FString StringToMatch;  // 0x8 (0x8)
	struct TArray<struct FName> OutKeys;  // 0x18 (0x18)
	struct TArray<struct FString> OutValues;  // 0x28 (0x28)


}; 
 
 // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
struct FGetDatasmithUserDataValueForKey
{
	struct UObject* Object;  // 0x0 (0x0)
	struct FName Key;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bPartialMatchKey : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FString ReturnValue;  // 0x18 (0x18)


}; 
 
 