#pragma once 
#include <BlockoutToolsPlugin_Structs.h>
 
 
 
// Class BlockoutToolsPlugin.BlockoutToolsParent
// Size: 0x328(Inherited: 0x290)
struct ABlockoutToolsParent : AActor
{
	struct USceneComponent* Root;  // 0x290 (0x290)
	struct UBillboardComponent* Billboard;  // 0x298 (0x298)
	struct UMaterialInterface* BlockoutGridParent;  // 0x2A0 (0x2A0)
	struct UMaterialInstanceDynamic* BlockoutGridMID;  // 0x2A8 (0x2A8)
	struct UMaterialInterface* BlockoutCurrentMaterial;  // 0x2B0 (0x2B0)
	struct TArray<struct UStaticMeshComponent*> BlockoutMeshComponents;  // 0x2B8 (0x2B8)
	enum class EBlockoutMaterialType BlockoutMaterialType;  // 0x2C8 (0x2C8)
	char pad_713[3];  // 0x2C9 (0x2C9)
	struct FLinearColor BlockoutMaterialColor;  // 0x2CC (0x2CC)
	char pad_732_1 : 7;  // 0x2DC (0x2DC)
	bool bBlockoutMaterialUseGrid : 1;  // 0x2DC (0x2DC)
	char pad_733_1 : 7;  // 0x2DD (0x2DD)
	bool bBlockoutWorldAligned : 1;  // 0x2DD (0x2DD)
	char pad_734[2];  // 0x2DE (0x2DE)
	float BlockoutMaterialGridSize;  // 0x2E0 (0x2E0)
	float BlockoutMaterialCheckerLuminance;  // 0x2E4 (0x2E4)
	float BlockoutMaterialRoughness;  // 0x2E8 (0x2E8)
	char pad_748_1 : 7;  // 0x2EC (0x2EC)
	bool bBlockoutMaterialUseTopColor : 1;  // 0x2EC (0x2EC)
	char pad_749[3];  // 0x2ED (0x2ED)
	struct FLinearColor BlockoutMaterialTopColor;  // 0x2F0 (0x2F0)
	char pad_768_1 : 7;  // 0x300 (0x300)
	bool bUseCustomMaterial : 1;  // 0x300 (0x300)
	char pad_769[7];  // 0x301 (0x301)
	struct UMaterialInterface* CustomMaterial;  // 0x308 (0x308)
	struct UMaterialInterface* BlockoutCustomMaterial;  // 0x310 (0x310)
	char pad_792_1 : 7;  // 0x318 (0x318)
	bool bBlockoutEnableCollisions : 1;  // 0x318 (0x318)
	char pad_793_1 : 7;  // 0x319 (0x319)
	bool bBlockoutEnableCustomCollision : 1;  // 0x319 (0x319)
	char pad_794[2];  // 0x31A (0x31A)
	struct FName BlockoutCustomCollisionProfileName;  // 0x31C (0x31C)
	char pad_804_1 : 7;  // 0x324 (0x324)
	bool bBlockoutCastShadows : 1;  // 0x324 (0x324)
	char pad_805[3];  // 0x325 (0x325)


	void RerunConstructionScript(); // Function BlockoutToolsPlugin.BlockoutToolsParent.RerunConstructionScript
	void BlockoutSetMaterial(); // Function BlockoutToolsPlugin.BlockoutToolsParent.BlockoutSetMaterial
}; 
 
 


// Class BlockoutToolsPlugin.BlockoutToolsSettings
// Size: 0x60(Inherited: 0x28)
struct UBlockoutToolsSettings : UObject
{
	enum class EBlockoutMaterialType BlockoutMaterialType;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	struct FLinearColor BlockoutMaterialColor;  // 0x2C (0x2C)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool bBlockoutMaterialUseGrid : 1;  // 0x3C (0x3C)
	char pad_61_1 : 7;  // 0x3D (0x3D)
	bool bBlockoutWorldAligned : 1;  // 0x3D (0x3D)
	char pad_62[2];  // 0x3E (0x3E)
	float BlockoutMaterialGridSize;  // 0x40 (0x40)
	float BlockoutMaterialCheckerLuminance;  // 0x44 (0x44)
	float BlockoutMaterialRoughness;  // 0x48 (0x48)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bBlockoutMaterialUseTopColor : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	struct FLinearColor BlockoutMaterialTopColor;  // 0x50 (0x50)


}; 
 
 


