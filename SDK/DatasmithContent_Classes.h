#pragma once 
#include <DatasmithContent_Structs.h>
 
 
 
// Class DatasmithContent.DatasmithAdditionalData
// Size: 0x28(Inherited: 0x28)
struct UDatasmithAdditionalData : UObject
{


}; 
 
 


// Class DatasmithContent.DatasmithObjectTemplate
// Size: 0x30(Inherited: 0x28)
struct UDatasmithObjectTemplate : UObject
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 


// Class DatasmithContent.DatasmithFBXSceneImportData
// Size: 0x48(Inherited: 0x28)
struct UDatasmithFBXSceneImportData : UDatasmithSceneImportData
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bGenerateLightmapUVs : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct FString TexturesDir;  // 0x30 (0x30)
	char IntermediateSerialization;  // 0x40 (0x40)
	char pad_65_1 : 7;  // 0x41 (0x41)
	bool bColorizeMaterials : 1;  // 0x41 (0x41)
	char pad_66[6];  // 0x42 (0x42)


}; 
 
 


// Class DatasmithContent.DatasmithAreaLightActor
// Size: 0x308(Inherited: 0x290)
struct ADatasmithAreaLightActor : AActor
{
	enum class EComponentMobility Mobility;  // 0x290 (0x290)
	uint8_t LightType;  // 0x291 (0x291)
	uint8_t LightShape;  // 0x292 (0x292)
	char pad_659[5];  // 0x293 (0x293)
	struct FVector2D Dimensions;  // 0x298 (0x298)
	float Intensity;  // 0x2A8 (0x2A8)
	uint8_t IntensityUnits;  // 0x2AC (0x2AC)
	char pad_685[3];  // 0x2AD (0x2AD)
	struct FLinearColor Color;  // 0x2B0 (0x2B0)
	float Temperature;  // 0x2C0 (0x2C0)
	char pad_708[4];  // 0x2C4 (0x2C4)
	struct UTextureLightProfile* IESTexture;  // 0x2C8 (0x2C8)
	char pad_720_1 : 7;  // 0x2D0 (0x2D0)
	bool bUseIESBrightness : 1;  // 0x2D0 (0x2D0)
	char pad_721[3];  // 0x2D1 (0x2D1)
	float IESBrightnessScale;  // 0x2D4 (0x2D4)
	struct FRotator Rotation;  // 0x2D8 (0x2D8)
	float SourceRadius;  // 0x2F0 (0x2F0)
	float SourceLength;  // 0x2F4 (0x2F4)
	float AttenuationRadius;  // 0x2F8 (0x2F8)
	float SpotlightInnerAngle;  // 0x2FC (0x2FC)
	float SpotlightOuterAngle;  // 0x300 (0x300)
	char pad_772[4];  // 0x304 (0x304)


}; 
 
 


// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// Size: 0x90(Inherited: 0x30)
struct UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate
{
	struct FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings;  // 0x30 (0x30)
	struct FDatasmithCameraLensSettingsTemplate LensSettings;  // 0x38 (0x38)
	struct FDatasmithCameraFocusSettingsTemplate FocusSettings;  // 0x3C (0x3C)
	float CurrentFocalLength;  // 0x44 (0x44)
	float CurrentAperture;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct FDatasmithPostProcessSettingsTemplate PostProcessSettings;  // 0x50 (0x50)


}; 
 
 


// Class DatasmithContent.DatasmithActorTemplate
// Size: 0xD0(Inherited: 0x30)
struct UDatasmithActorTemplate : UDatasmithObjectTemplate
{
	struct TSet<struct FName> Layers;  // 0x30 (0x30)
	struct TSet<struct FName> Tags;  // 0x80 (0x80)


}; 
 
 


// Class DatasmithContent.DatasmithAssetImportData
// Size: 0x28(Inherited: 0x28)
struct UDatasmithAssetImportData : UAssetImportData
{


}; 
 
 


// Class DatasmithContent.DatasmithAreaLightActorTemplate
// Size: 0xC8(Inherited: 0x30)
struct UDatasmithAreaLightActorTemplate : UDatasmithObjectTemplate
{
	uint8_t LightType;  // 0x30 (0x30)
	uint8_t LightShape;  // 0x31 (0x31)
	char pad_50[6];  // 0x32 (0x32)
	struct FVector2D Dimensions;  // 0x38 (0x38)
	struct FLinearColor Color;  // 0x48 (0x48)
	float Intensity;  // 0x58 (0x58)
	uint8_t IntensityUnits;  // 0x5C (0x5C)
	char pad_93[3];  // 0x5D (0x5D)
	float Temperature;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)
	struct TSoftObjectPtr<UTextureLightProfile> IESTexture;  // 0x68 (0x68)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool bUseIESBrightness : 1;  // 0x98 (0x98)
	char pad_153[3];  // 0x99 (0x99)
	float IESBrightnessScale;  // 0x9C (0x9C)
	struct FRotator Rotation;  // 0xA0 (0xA0)
	float SourceRadius;  // 0xB8 (0xB8)
	float SourceLength;  // 0xBC (0xBC)
	float AttenuationRadius;  // 0xC0 (0xC0)
	char pad_196[4];  // 0xC4 (0xC4)


}; 
 
 


// Class DatasmithContent.DatasmithStaticMeshImportData
// Size: 0x28(Inherited: 0x28)
struct UDatasmithStaticMeshImportData : UDatasmithAssetImportData
{


}; 
 
 


// Class DatasmithContent.DatasmithStaticMeshCADImportData
// Size: 0x28(Inherited: 0x28)
struct UDatasmithStaticMeshCADImportData : UDatasmithStaticMeshImportData
{


}; 
 
 


// Class DatasmithContent.DatasmithAssetUserData
// Size: 0x78(Inherited: 0x28)
struct UDatasmithAssetUserData : UAssetUserData
{
	struct TMap<struct FName, struct FString> MetaData;  // 0x28 (0x28)


}; 
 
 


// Class DatasmithContent.DatasmithSceneImportData
// Size: 0x28(Inherited: 0x28)
struct UDatasmithSceneImportData : UAssetImportData
{


}; 
 
 


// Class DatasmithContent.DatasmithTranslatedSceneImportData
// Size: 0x28(Inherited: 0x28)
struct UDatasmithTranslatedSceneImportData : UDatasmithSceneImportData
{


}; 
 
 


// Class DatasmithContent.DatasmithCADImportSceneData
// Size: 0x7FF7D3428690 (0x28)
struct UDatasmithCADImportSceneData : UDatasmithSceneImportData
{


}; 
 
 


// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// Size: 0x38(Inherited: 0x28)
struct UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData
{
	struct FString SourceMeshName;  // 0x28 (0x28)


}; 
 
 


// Class DatasmithContent.DatasmithMDLSceneImportData
// Size: 0x28(Inherited: 0x28)
struct UDatasmithMDLSceneImportData : UDatasmithSceneImportData
{


}; 
 
 


// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// Size: 0x48(Inherited: 0x30)
struct UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate
{
	struct UStaticMesh* StaticMesh;  // 0x30 (0x30)
	struct TArray<struct UMaterialInterface*> OverrideMaterials;  // 0x38 (0x38)


}; 
 
 


// Class DatasmithContent.DatasmithGLTFSceneImportData
// Size: 0x70(Inherited: 0x28)
struct UDatasmithGLTFSceneImportData : UDatasmithSceneImportData
{
	struct FString Generator;  // 0x7FF7D35967D0 (0x1705 (0x7FF7D35967D0 (0x1705D6E0080))
	float Version;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct FString Author;  // 0x40 (0x40)
	struct FString License;  // 0x50 (0x50)
	struct FString Source;  // 0x60 (0x60)


}; 
 
 


// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// Size: 0x28(Inherited: 0x28)
struct UDatasmithDeltaGenAssetImportData : UDatasmithAssetImportData
{


}; 
 
 


// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// Size: 0x90(Inherited: 0x48)
struct UDatasmithDeltaGenSceneImportData : UDatasmithFBXSceneImportData
{
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool bMergeNodes : 1;  // 0x48 (0x48)
	char pad_73_1 : 7;  // 0x49 (0x49)
	bool bOptimizeDuplicatedNodes : 1;  // 0x49 (0x49)
	char pad_74_1 : 7;  // 0x4A (0x4A)
	bool bRemoveInvisibleNodes : 1;  // 0x4A (0x4A)
	char pad_75_1 : 7;  // 0x4B (0x4B)
	bool bSimplifyNodeHierarchy : 1;  // 0x4B (0x4B)
	char pad_76_1 : 7;  // 0x4C (0x7F)
	bool bImportVar : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	struct FString VarPath;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bImportPos : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)
	struct FString PosPath;  // 0x68 (0x68)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool bImportTml : 1;  // 0x78 (0x78)
	char pad_121[7];  // 0x79 (0x79)
	struct FString TmlPath;  // 0x80 (0x80)


}; 
 
 


// Class DatasmithContent.DatasmithVREDAssetImportData
// Size: 0x28(Inherited: 0x28)
struct UDatasmithVREDAssetImportData : UDatasmithAssetImportData
{


}; 
 
 


// Class DatasmithContent.DatasmithVREDSceneImportData
// Size: 0xA8(Inherited: 0x48)
struct UDatasmithVREDSceneImportData : UDatasmithFBXSceneImportData
{
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool bMergeNodes : 1;  // 0x48 (0x48)
	char pad_73_1 : 7;  // 0x49 (0x49)
	bool bOptimizeDuplicatedNodes : 1;  // 0x49 (0x49)
	char pad_74_1 : 7;  // 0x4A (0x4A)
	bool bImportMats : 1;  // 0x4A (0x4A)
	char pad_75[5];  // 0x4B (0x4B)
	struct FString MatsPath;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bImportVar : 1;  // 0x60 (0x60)
	char pad_97_1 : 7;  // 0x61 (0x61)
	bool bCleanVar : 1;  // 0x61 (0x61)
	char pad_98[6];  // 0x62 (0x62)
	struct FString VarPath;  // 0x68 (0x68)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool bImportLightInfo : 1;  // 0x78 (0x78)
	char pad_121[7];  // 0x79 (0x79)
	struct FString LightInfoPath;  // 0x80 (0x80)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool bImportClipInfo : 1;  // 0x0  (0x0 (0x0))
	char pad_145[7];  // 0x91 (0x91)
	struct FString ClipInfoPath;  // 0x98 (0x98)


}; 
 
 


// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// Size: 0x80(Inherited: 0x30)
struct UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate
{
	struct FDatasmithPostProcessSettingsTemplate Settings;  // 0x30 (0x30)
	char bEnabled : 1;  // 0x70 (0x70)
	char bUnbound : 1;  // 0x70 (0x70)
	char pad_112_1 : 6;  // 0x70 (0x70)
	char pad_113[16];  // 0x71 (0x71)


}; 
 
 


// Class DatasmithContent.DatasmithIFCSceneImportData
// Size: 0x28(Inherited: 0x28)
struct UDatasmithIFCSceneImportData : UDatasmithSceneImportData
{


}; 
 
 


// Class DatasmithContent.DatasmithStaticMeshIFCImportData
// Size: 0x38(Inherited: 0x28)
struct UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData
{
	struct FString SourceGlobalId;  // 0x28 (0x28)


}; 
 
 


// Class DatasmithContent.DatasmithCineCameraActorTemplate
// Size: 0x68(Inherited: 0x30)
struct UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate
{
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;  // 0x30 (0x30)


}; 
 
 


// Class DatasmithContent.DatasmithContentBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UDatasmithContentBlueprintLibrary : UBlueprintFunctionLibrary
{


	struct TArray<struct FString> GetDatasmithUserDataValuesForKey(struct UObject* Object, struct FName Key, bool bPartialMatchKey); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValuesForKey
	struct FString GetDatasmithUserDataValueForKey(struct UObject* Object, struct FName Key, bool bPartialMatchKey); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
	void GetDatasmithUserDataKeysAndValuesForValue(struct UObject* Object, struct FString StringToMatch, struct TArray<struct FName>& OutKeys, struct TArray<struct FString>& OutValues); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
	struct UDatasmithAssetUserData* GetDatasmithUserData(struct UObject* Object); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
}; 
 
 


// Class DatasmithContent.DatasmithCustomActionBase
// Size: 0x30(Inherited: 0x28)
struct UDatasmithCustomActionBase : UObject
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 


// Class DatasmithContent.DatasmithDecalComponentTemplate
// Size: 0x58(Inherited: 0x30)
struct UDatasmithDecalComponentTemplate : UDatasmithObjectTemplate
{
	int32_t SortOrder;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)
	struct FVector DecalSize;  // 0x38 (0x38)
	struct UMaterialInterface* Material;  // 0x50 (0x50)


}; 
 
 


// Class DatasmithContent.DatasmithImportedSequencesActor
// Size: 0x2A0(Inherited: 0x290)
struct ADatasmithImportedSequencesActor : AActor
{
	struct TArray<struct ULevelSequence*> ImportedSequences;  // 0x290 (0x290)


	void PlayLevelSequence(struct ULevelSequence* SequenceToPlay); // Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
}; 
 
 


// Class DatasmithContent.DatasmithOptionsBase
// Size: 0x28(Inherited: 0x28)
struct UDatasmithOptionsBase : UObject
{


}; 
 
 


// Class DatasmithContent.DatasmithSceneActor
// Size: 0x2E8(Inherited: 0x290)
struct ADatasmithSceneActor : AActor
{
	struct UDatasmithScene* Scene;  // 0x290 (0x290)
	struct TMap<struct FName, struct TSoftObjectPtr<AActor>> RelatedActors;  // 0x298 (0x298)


}; 
 
 


// Class DatasmithContent.DatasmithCommonTessellationOptions
// Size: 0x38(Inherited: 0x28)
struct UDatasmithCommonTessellationOptions : UDatasmithOptionsBase
{
	struct FDatasmithTessellationOptions Options;  // 0x28 (0x28)


}; 
 
 


// Class DatasmithContent.DatasmithImportOptions
// Size: 0x90(Inherited: 0x28)
struct UDatasmithImportOptions : UDatasmithOptionsBase
{
	uint8_t SearchPackagePolicy;  // 0x28 (0x28)
	uint8_t MaterialConflictPolicy;  // 0x29 (0x29)
	uint8_t TextureConflictPolicy;  // 0x2A (0x2A)
	uint8_t StaticMeshActorImportPolicy;  // 0x2B (0x2B)
	uint8_t LightImportPolicy;  // 0x2C (0x2C)
	uint8_t CameraImportPolicy;  // 0x2D (0x2D)
	uint8_t OtherActorImportPolicy;  // 0x2E (0x2E)
	uint8_t MaterialQuality;  // 0x2F (0x2F)
	struct FDatasmithImportBaseOptions BaseOptions;  // 0x30 (0x30)
	struct FDatasmithReimportOptions ReimportOptions;  // 0x44 (0x44)
	char pad_70[2];  // 0x46 (0x46)
	struct FString Filename;  // 0x48 (0x48)
	struct FString FilePath;  // 0x58 (0x58)
	struct FString SourceUri;  // 0x68 (0x68)
	char pad_120[24];  // 0x78 (0x78)


}; 
 
 


// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// Size: 0x38(Inherited: 0x30)
struct UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate
{
	float InnerConeAngle;  // 0x30 (0x30)
	float OuterConeAngle;  // 0x34 (0x34)


}; 
 
 


// Class DatasmithContent.DatasmithPointLightComponentTemplate
// Size: 0x40(Inherited: 0x30)
struct UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate
{
	uint8_t IntensityUnits;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	float SourceRadius;  // 0x34 (0x34)
	float SourceLength;  // 0x38 (0x38)
	float AttenuationRadius;  // 0x3C (0x3C)


}; 
 
 


// Class DatasmithContent.DatasmithLandscapeTemplate
// Size: 0x40(Inherited: 0x30)
struct UDatasmithLandscapeTemplate : UDatasmithObjectTemplate
{
	struct UMaterialInterface* LandscapeMaterial;  // 0x30 (0x30)
	int32_t StaticLightingLOD;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 


// Class DatasmithContent.DatasmithLightComponentTemplate
// Size: 0x68(Inherited: 0x30)
struct UDatasmithLightComponentTemplate : UDatasmithObjectTemplate
{
	char bVisible : 1;  // 0x30 (0x30)
	char pad_48_1 : 7;  // 0x30 (0x30)
	char pad_49[4];  // 0x31 (0x31)
	char CastShadows : 1;  // 0x34 (0x34)
	char bUseTemperature : 1;  // 0x34 (0x34)
	char bUseIESBrightness : 1;  // 0x34 (0x34)
	char pad_52_1 : 5;  // 0x34 (0x34)
	char pad_53[4];  // 0x35 (0x35)
	float Intensity;  // 0x38 (0x38)
	float Temperature;  // 0x3C (0x3C)
	float IESBrightnessScale;  // 0x40 (0x40)
	struct FLinearColor LightColor;  // 0x44 (0x44)
	char pad_84[4];  // 0x54 (0x54)
	struct UMaterialInterface* LightFunctionMaterial;  // 0x58 (0x58)
	struct UTextureLightProfile* IESTexture;  // 0x60 (0x60)


}; 
 
 


// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// Size: 0x1A0(Inherited: 0x30)
struct UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate
{
	struct TSoftObjectPtr<UMaterialInterface> ParentMaterial;  // 0x30 (0x30)
	struct TMap<struct FName, float> ScalarParameterValues;  // 0x60 (0x60)
	struct TMap<struct FName, struct FLinearColor> VectorParameterValues;  // 0xB0 (0xB0)
	struct TMap<struct FName, struct TSoftObjectPtr<UTexture>> TextureParameterValues;  // 0x100 (0x100)
	struct FDatasmithStaticParameterSetTemplate StaticParameters;  // 0x150 (0x150)


}; 
 
 


// Class DatasmithContent.DatasmithScene
// Size: 0x30(Inherited: 0x28)
struct UDatasmithScene : UObject
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 


// Class DatasmithContent.DatasmithSceneComponentTemplate
// Size: 0x120(Inherited: 0x30)
struct UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate
{
	struct FTransform RelativeTransform;  // 0x30 (0x30)
	enum class EComponentMobility Mobility;  // 0x90 (0x90)
	char pad_145[7];  // 0x91 (0x91)
	struct TSoftObjectPtr<USceneComponent> AttachParent;  // 0x98 (0x98)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool bVisible : 1;  // 0xC8 (0xC8)
	char pad_201_1 : 7;  // 0xC9 (0xC9)
	bool bCastShadow : 1;  // 0xC9 (0xC9)
	char pad_202[6];  // 0xCA (0xCA)
	struct TSet<struct FName> Tags;  // 0xD0 (0xD0)


}; 
 
 


// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// Size: 0x40(Inherited: 0x30)
struct UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate
{
	enum class ESkyLightSourceType SourceType;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	int32_t CubemapResolution;  // 0x34 (0x34)
	struct UTextureCube* Cubemap;  // 0x38 (0x38)


}; 
 
 


// Class DatasmithContent.DatasmithStaticMeshTemplate
// Size: 0xA8(Inherited: 0x30)
struct UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate
{
	struct FDatasmithMeshSectionInfoMapTemplate SectionInfoMap;  // 0x30 (0x30)
	int32_t LightMapCoordinateIndex;  // 0x80 (0x80)
	int32_t LightMapResolution;  // 0x84 (0x84)
	struct TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings;  // 0x88 (0x88)
	struct TArray<struct FDatasmithStaticMaterialTemplate> StaticMaterials;  // 0x98 (0x98)


}; 
 
 


