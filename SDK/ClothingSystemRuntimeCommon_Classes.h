#pragma once 
#include <ClothingSystemRuntimeCommon_Structs.h>
 
 
 
// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// Size: 0xF0(Inherited: 0x48)
struct UClothingAssetCommon : UClothingAssetBase
{
	struct UPhysicsAsset* PhysicsAsset;  // 0x48 (0x48)
	struct TMap<struct FName, struct UClothConfigBase*> ClothConfigs;  // 0x50 (0x50)
	struct TArray<struct FClothLODDataCommon> LODData;  // 0xA0 (0xA0)
	struct TArray<int32_t> LodMap;  // 0xB0 (0xB0)
	struct TArray<struct FName> UsedBoneNames;  // 0xC0 (0xC0)
	struct TArray<int32_t> UsedBoneIndices;  // 0xD0 (0xD0)
	int32_t ReferenceBoneIndex;  // 0xE0 (0xE0)
	char pad_228[4];  // 0xE4 (0xE4)
	struct UClothingAssetCustomData* CustomData;  // 0xE8 (0xE8)


}; 
 
 


// Class ClothingSystemRuntimeCommon.ClothConfigCommon
// Size: 0x28(Inherited: 0x28)
struct UClothConfigCommon : UClothConfigBase
{


}; 
 
 


// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// Size: 0x28(Inherited: 0x28)
struct UClothSharedConfigCommon : UClothConfigCommon
{


}; 
 
 


// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// Size: 0x28(Inherited: 0x28)
struct UClothingAssetCustomData : UObject
{


}; 
 
 


// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// Size: 0x168(Inherited: 0x28)
struct UClothLODDataCommon_Legacy : UObject
{
	struct UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData;  // 0x28 (0x28)
	struct FClothPhysicalMeshData ClothPhysicalMeshData;  // 0x30 (0x30)
	struct FClothCollisionData CollisionData;  // 0x108 (0x108)
	char pad_328[32];  // 0x148 (0x148)


}; 
 
 


