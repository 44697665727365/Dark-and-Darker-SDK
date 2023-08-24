#pragma once 
#include <GLTFExporter_Structs.h>
 
 
 
// Class GLTFExporter.GLTFMaterialExportOptions
// Size: 0x88(Inherited: 0x28)
struct UGLTFMaterialExportOptions : UAssetUserData
{
	struct UMaterialInterface* Proxy;  // 0x28 (0x28)
	struct FGLTFOverrideMaterialBakeSettings Default;  // 0x30 (0x30)
	char pad_54[2];  // 0x36 (0x36)
	struct TMap<uint8_t, struct FGLTFOverrideMaterialBakeSettings> Inputs;  // 0x38 (0x38)


}; 
 
 


// Class GLTFExporter.GLTFMaterialExporter
// Size: 0x80(Inherited: 0x78)
struct UGLTFMaterialExporter : UGLTFExporter
{
	struct UStaticMesh* DefaultPreviewMesh;  // 0x78 (0x78)


}; 
 
 


// Class GLTFExporter.GLTFLevelSequenceExporter
// Size: 0x78(Inherited: 0x78)
struct UGLTFLevelSequenceExporter : UGLTFExporter
{


}; 
 
 


// Class GLTFExporter.GLTFExporter
// Size: 0x78(Inherited: 0x78)
struct UGLTFExporter : UExporter
{


	bool ExportToGLTF(struct UObject* Object, struct FString FilePath, struct UGLTFExportOptions* Options, struct TSet<struct AActor*>& SelectedActors, struct FGLTFExportMessages& OutMessages); // Function GLTFExporter.GLTFExporter.ExportToGLTF
}; 
 
 


// Class GLTFExporter.GLTFLevelExporter
// Size: 0x78(Inherited: 0x78)
struct UGLTFLevelExporter : UGLTFExporter
{


}; 
 
 


// Class GLTFExporter.GLTFAnimSequenceExporter
// Size: 0x78(Inherited: 0x78)
struct UGLTFAnimSequenceExporter : UGLTFExporter
{


}; 
 
 


// Class GLTFExporter.GLTFExportOptions
// Size: 0xB0(Inherited: 0x28)
struct UGLTFExportOptions : UObject
{
	float ExportUniformScale;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool bExportPreviewMesh : 1;  // 0x2C (0x2C)
	char pad_45_1 : 7;  // 0x2D (0x2D)
	bool bStrictCompliance : 1;  // 0x2D (0x2D)
	char pad_46_1 : 7;  // 0x2E (0x2E)
	bool bSkipNearDefaultValues : 1;  // 0x2E (0x2E)
	char pad_47_1 : 7;  // 0x2F (0x2F)
	bool bIncludeGeneratorVersion : 1;  // 0x2F (0x2F)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bExportProxyMaterials : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool bExportUnlitMaterials : 1;  // 0x31 (0x31)
	char pad_50_1 : 7;  // 0x32 (0x32)
	bool bExportClearCoatMaterials : 1;  // 0x32 (0x32)
	char pad_51_1 : 7;  // 0x33 (0x33)
	bool bExportExtraBlendModes : 1;  // 0x33 (0x33)
	uint8_t BakeMaterialInputs;  // 0x34 (0x34)
	uint8_t DefaultMaterialBakeSize;  // 0x35 (0x35)
	enum class TextureFilter DefaultMaterialBakeFilter;  // 0x36 (0x36)
	enum class TextureAddress DefaultMaterialBakeTiling;  // 0x37 (0x37)
	struct TMap<uint8_t, struct FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;  // 0x38 (0x38)
	int32_t DefaultLevelOfDetail;  // 0x88 (0x88)
	char pad_140_1 : 7;  // 0x8C (0x8C)
	bool bExportVertexColors : 1;  // 0x8C (0x8C)
	char pad_141_1 : 7;  // 0x8D (0x8D)
	bool bExportVertexSkinWeights : 1;  // 0x8D (0x8D)
	char pad_142_1 : 7;  // 0x8E (0x8E)
	bool bUseMeshQuantization : 1;  // 0x8E (0x8E)
	char pad_143_1 : 7;  // 0x8F (0x8F)
	bool bExportLevelSequences : 1;  // 0x8F (0x8F)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool bExportAnimationSequences : 1;  // 0x90 (0x90)
	char pad_145_1 : 7;  // 0x91 (0x91)
	bool bExportPlaybackSettings : 1;  // 0x91 (0x91)
	uint8_t TextureImageFormat;  // 0x92 (0x92)
	char pad_147[1];  // 0x93 (0x93)
	int32_t TextureImageQuality;  // 0x94 (0x94)
	int32_t NoLossyImageFormatFor;  // 0x98 (0x98)
	char pad_156_1 : 7;  // 0x9C (0x9C)
	bool bExportTextureTransforms : 1;  // 0x9C (0x9C)
	char pad_157_1 : 7;  // 0x9D (0x9D)
	bool bExportLightmaps : 1;  // 0x9D (0x9D)
	uint8_t TextureHDREncoding;  // 0x9E (0x9E)
	char pad_159_1 : 7;  // 0x9F (0x9F)
	bool bAdjustNormalmaps : 1;  // 0x9F (0x9F)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool bExportHiddenInGame : 1;  // 0xA0 (0xA0)
	char pad_161[3];  // 0xA1 (0xA1)
	int32_t ExportLights;  // 0xA4 (0xA4)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool bExportCameras : 1;  // 0xA8 (0xA8)
	char pad_169_1 : 7;  // 0xA9 (0xA9)
	bool bExportHDRIBackdrops : 1;  // 0xA9 (0xA9)
	char pad_170_1 : 7;  // 0xAA (0xAA)
	bool bExportSkySpheres : 1;  // 0xAA (0xAA)
	uint8_t VariantSetsMode;  // 0xAB (0xAB)
	uint8_t ExportMaterialVariants;  // 0xAC (0xAC)
	char pad_173_1 : 7;  // 0xAD (0xAD)
	bool bExportMeshVariants : 1;  // 0xAD (0xAD)
	char pad_174_1 : 7;  // 0xAE (0xAE)
	bool bExportVisibilityVariants : 1;  // 0xAE (0xAE)
	char pad_175[1];  // 0xAF (0xAF)


	void ResetToDefault(); // Function GLTFExporter.GLTFExportOptions.ResetToDefault
}; 
 
 


// Class GLTFExporter.GLTFLevelVariantSetsExporter
// Size: 0x78(Inherited: 0x78)
struct UGLTFLevelVariantSetsExporter : UGLTFExporter
{


}; 
 
 


// Class GLTFExporter.GLTFProxyOptions
// Size: 0x80(Inherited: 0x28)
struct UGLTFProxyOptions : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bBakeMaterialInputs : 1;  // 0x28 (0x28)
	uint8_t DefaultMaterialBakeSize;  // 0x29 (0x29)
	enum class TextureFilter DefaultMaterialBakeFilter;  // 0x2A (0x2A)
	enum class TextureAddress DefaultMaterialBakeTiling;  // 0x2B (0x2B)
	char pad_44[4];  // 0x2C (0x2C)
	struct TMap<uint8_t, struct FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;  // 0x30 (0x30)


	void ResetToDefault(); // Function GLTFExporter.GLTFProxyOptions.ResetToDefault
}; 
 
 


// Class GLTFExporter.GLTFSkeletalMeshExporter
// Size: 0x78(Inherited: 0x78)
struct UGLTFSkeletalMeshExporter : UGLTFExporter
{


}; 
 
 


// Class GLTFExporter.GLTFStaticMeshExporter
// Size: 0x78(Inherited: 0x78)
struct UGLTFStaticMeshExporter : UGLTFExporter
{


}; 
 
 


