#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
struct FClothConstraintSetup_Legacy
{
	float Stiffness;  // 0x0 (0x0)
	float StiffnessMultiplier;  // 0x4 (0x4)
	float StretchLimit;  // 0x8 (0x8)
	float CompressionLimit;  // 0xC (0xC)


}; 
 
 // ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
struct FPointWeightMap
{
	struct TArray<float> Values;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
struct FClothConfig_Legacy
{
	uint8_t WindMethod;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig;  // 0x4 (0x4)
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig;  // 0x14 (0x14)
	struct FClothConstraintSetup_Legacy BendConstraintConfig;  // 0x24 (0x24)
	struct FClothConstraintSetup_Legacy ShearConstraintConfig;  // 0x34 (0x34)
	float SelfCollisionRadius;  // 0x44 (0x44)
	float SelfCollisionStiffness;  // 0x48 (0x48)
	float SelfCollisionCullScale;  // 0x4C (0x4C)
	struct FVector Damping;  // 0x50 (0x50)
	float Friction;  // 0x68 (0x68)
	float WindDragCoefficient;  // 0x6C (0x6C)
	float WindLiftCoefficient;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)
	struct FVector LinearDrag;  // 0x78 (0x78)
	struct FVector AngularDrag;  // 0x90 (0x90)
	struct FVector LinearInertiaScale;  // 0xA8 (0xA8)
	struct FVector AngularInertiaScale;  // 0xC0 (0xC0)
	struct FVector CentrifugalInertiaScale;  // 0xD8 (0xD8)
	float SolverFrequency;  // 0xF0 (0xF0)
	float StiffnessFrequency;  // 0xF4 (0xF4)
	float GravityScale;  // 0xF8 (0xF8)
	char pad_252[4];  // 0xFC (0xFC)
	struct FVector GravityOverride;  // 0x100 (0x100)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool bUseGravityOverride : 1;  // 0x118 (0x118)
	char pad_281[3];  // 0x119 (0x119)
	float TetherStiffness;  // 0x11C (0x11C)
	float TetherLimit;  // 0x120 (0x120)
	float CollisionThickness;  // 0x124 (0x124)
	float AnimDriveSpringStiffness;  // 0x128 (0x128)
	float AnimDriveDamperStiffness;  // 0x12C (0x12C)


}; 
 
 // ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
struct FClothPhysicalMeshData
{
	struct TArray<struct FVector3f> Vertices;  // 0x0 (0x0)
	struct TArray<struct FVector3f> Normals;  // 0x10 (0x10)
	struct TArray<uint32_t> Indices;  // 0x20 (0x20)
	struct TMap<uint32_t, struct FPointWeightMap> WeightMaps;  // 0x30 (0x30)
	struct TArray<float> InverseMasses;  // 0x80 (0x80)
	struct TArray<struct FClothVertBoneData> BoneData;  // 0x90 (0x90)
	struct TArray<uint32_t> SelfCollisionIndices;  // 0xA0 (0xA0)
	struct FClothTetherData EuclideanTethers;  // 0xB0 (0xB0)
	struct FClothTetherData GeodesicTethers;  // 0xC0 (0xC0)
	int32_t MaxBoneWeights;  // 0xD0 (0xD0)
	int32_t NumFixedVerts;  // 0xD4 (0xD4)


}; 
 
 // ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
struct FClothLODDataCommon
{
	struct FClothPhysicalMeshData PhysicalMeshData;  // 0x0 (0x0)
	struct FClothCollisionData CollisionData;  // 0xD8 (0xD8)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool bUseMultipleInfluences : 1;  // 0x118 (0x118)
	char pad_281[3];  // 0x119 (0x119)
	float SkinningKernelRadius;  // 0x11C (0x11C)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool bSmoothTransition : 1;  // 0x120 (0x120)
	char pad_289[39];  // 0x121 (0x121)


}; 
 
 // ScriptStruct ClothingSystemRuntimeCommon.ClothTetherData
struct FClothTetherData
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
struct FClothParameterMask_Legacy
{
	struct FName MaskName;  // 0x0 (0x0)
	uint8_t CurrentTarget;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	float MaxValue;  // 0xC (0xC)
	float MinValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<float> Values;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bEnabled : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 