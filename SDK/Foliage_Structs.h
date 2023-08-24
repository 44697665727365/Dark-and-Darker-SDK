#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct Foliage.FoliageDensityFalloff
struct FFoliageDensityFalloff
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bUseFalloffCurve : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FRuntimeFloatCurve FalloffCurve;  // 0x8 (0x8)


}; 
 
 // DelegateFunction Foliage.InstancePointDamageSignature__DelegateSignature
struct FInstancePointDamageSignature__DelegateSignature
{
	int32_t InstanceIndex;  // 0x0 (0x0)
	float Damage;  // 0x4 (0x4)
	struct AController* InstigatedBy;  // 0x8 (0x8)
	struct FVector HitLocation;  // 0x10 (0x10)
	struct FVector ShotFromDirection;  // 0x28 (0x28)
	struct UDamageType* DamageType;  // 0x40 (0x40)
	struct AActor* DamageCauser;  // 0x48 (0x48)


}; 
 
 // Function Foliage.ProceduralFoliageSpawner.Simulate
struct FSimulate
{
	int32_t NumSteps;  // 0x0 (0x0)


}; 
 
 // Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
struct FFoliageOverlappingBoxCount
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UStaticMesh* StaticMesh;  // 0x8 (0x8)
	struct FBox Box;  // 0x10 (0x10)
	int32_t ReturnValue;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // ScriptStruct Foliage.FoliageTypeObject
struct FFoliageTypeObject
{
	struct UObject* FoliageTypeObject;  // 0x0 (0x0)
	struct UFoliageType* TypeInstance;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bIsAsset : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	UFoliageType_InstancedStaticMesh* Type;  // 0x18 (0x18)


}; 
 
 // DelegateFunction Foliage.InstanceRadialDamageSignature__DelegateSignature
struct FInstanceRadialDamageSignature__DelegateSignature
{
	struct TArray<int32_t> Instances;  // 0x0 (0x0)
	struct TArray<float> Damages;  // 0x10 (0x10)
	struct AController* InstigatedBy;  // 0x20 (0x20)
	struct FVector Origin;  // 0x28 (0x28)
	float MaxRadius;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)
	struct UDamageType* DamageType;  // 0x48 (0x48)
	struct AActor* DamageCauser;  // 0x50 (0x50)


}; 
 
 // ScriptStruct Foliage.FoliageVertexColorChannelMask
struct FFoliageVertexColorChannelMask
{
	char UseMask : 1;  // 0x0 (0x0)
	char pad_0_1 : 7;  // 0x0 (0x0)
	char pad_1[4];  // 0x1 (0x1)
	float MaskThreshold;  // 0x4 (0x4)
	char InvertMask : 1;  // 0x8 (0x8)
	char pad_8_1 : 7;  // 0x8 (0x8)
	char pad_9[4];  // 0x9 (0x9)


}; 
 
 // Function Foliage.InteractiveFoliageActor.CapsuleTouched
struct FCapsuleTouched
{
	struct UPrimitiveComponent* OverlappedComp;  // 0x0 (0x0)
	struct AActor* Other;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bFromSweep : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FHitResult OverlapInfo;  // 0x20 (0x20)


}; 
 
 // ScriptStruct Foliage.ProceduralFoliageInstance
struct FProceduralFoliageInstance
{
	struct FQuat Rotation;  // 0x0 (0x0)
	struct FVector Location;  // 0x20 (0x20)
	float Age;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct FVector Normal;  // 0x40 (0x40)
	float Scale;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)
	struct UFoliageType* Type;  // 0x60 (0x60)
	char pad_104[24];  // 0x68 (0x68)


}; 
 
 // Function Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms
struct FFoliageOverlappingBoxTransforms
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UStaticMesh* StaticMesh;  // 0x8 (0x8)
	struct FBox Box;  // 0x10 (0x10)
	struct TArray<struct FTransform> OutTransforms;  // 0x48 (0x48)


}; 
 
 // Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
struct FFoliageOverlappingSphereCount
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UStaticMesh* StaticMesh;  // 0x8 (0x8)
	struct FVector CenterPosition;  // 0x10 (0x10)
	float Radius;  // 0x28 (0x28)
	int32_t ReturnValue;  // 0x2C (0x2C)


}; 
 
 