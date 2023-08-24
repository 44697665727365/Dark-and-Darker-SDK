#pragma once 
#include <Foliage_Structs.h>
 
 
 
// Class Foliage.InteractiveFoliageActor
// Size: 0x330(Inherited: 0x2A0)
struct AInteractiveFoliageActor : AStaticMeshActor
{
	struct UCapsuleComponent* CapsuleComponent;  // 0x2A0 (0x2A0)
	struct FVector TouchingActorEntryPosition;  // 0x2A8 (0x2A8)
	struct FVector FoliageVelocity;  // 0x2C0 (0x2C0)
	struct FVector FoliageForce;  // 0x2D8 (0x2D8)
	struct FVector FoliagePosition;  // 0x2F0 (0x2F0)
	float FoliageDamageImpulseScale;  // 0x308 (0x308)
	float FoliageTouchImpulseScale;  // 0x30C (0x30C)
	float FoliageStiffness;  // 0x310 (0x310)
	float FoliageStiffnessQuadratic;  // 0x314 (0x314)
	float FoliageDamping;  // 0x318 (0x318)
	float MaxDamageImpulse;  // 0x31C (0x31C)
	float MaxTouchImpulse;  // 0x320 (0x320)
	float MaxForce;  // 0x324 (0x324)
	float Mass;  // 0x328 (0x328)
	char pad_812[4];  // 0x32C (0x32C)


	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo); // Function Foliage.InteractiveFoliageActor.CapsuleTouched
}; 
 
 


// Class Foliage.FoliageStatistics
// Size: 0x28(Inherited: 0x28)
struct UFoliageStatistics : UBlueprintFunctionLibrary
{


	int32_t FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius); // Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
	void FoliageOverlappingBoxTransforms(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box, struct TArray<struct FTransform>& OutTransforms); // Function Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms
	int32_t FoliageOverlappingBoxCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box); // Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
}; 
 
 


// Class Foliage.FoliageType_Actor
// Size: 0x4D8(Inherited: 0x4C0)
struct UFoliageType_Actor : UFoliageType
{
	AActor* ActorClass;  // 0x4C0 (0x4C0)
	char pad_1224_1 : 7;  // 0x4C8 (0x4C8)
	bool bShouldAttachToBaseComponent : 1;  // 0x4C8 (0x4C8)
	char pad_1225_1 : 7;  // 0x4C9 (0x4C9)
	bool bStaticMeshOnly : 1;  // 0x4C9 (0x4C9)
	char pad_1226[6];  // 0x4CA (0x4CA)
	UFoliageInstancedStaticMeshComponent* StaticMeshOnlyComponentClass;  // 0x4D0 (0x4D0)


}; 
 
 


// Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 0x900(Inherited: 0x8D0)
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent
{
	struct FMulticastInlineDelegate OnInstanceTakePointDamage;  // 0x8C8 (0x8C8)
	struct FMulticastInlineDelegate OnInstanceTakeRadialDamage;  // 0x8D8 (0x8D8)
	char pad_2288_1 : 7;  // 0x8F0 (0x8F0)
	bool bEnableDiscardOnLoad : 1;  // 0x8E8 (0x8E8)
	struct FGuid GenerationGuid;  // 0x8EC (0x8EC)


}; 
 
 


// Class Foliage.FoliageType
// Size: 0x4C0(Inherited: 0x28)
struct UFoliageType : UObject
{
	struct FGuid UpdateGuid;  // 0x28 (0x28)
	float Density;  // 0x38 (0x38)
	float DensityAdjustmentFactor;  // 0x3C (0x3C)
	float Radius;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool bSingleInstanceModeOverrideRadius : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	float SingleInstanceModeRadius;  // 0x48 (0x48)
	uint8_t Scaling;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	struct FFloatInterval ScaleX;  // 0x50 (0x50)
	struct FFloatInterval ScaleY;  // 0x58 (0x58)
	struct FFloatInterval ScaleZ;  // 0x60 (0x60)
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[4];  // 0x68 (0x68)
	enum class FoliageVertexColorMask VertexColorMask;  // 0x98 (0x98)
	char pad_153[3];  // 0x99 (0x99)
	float VertexColorMaskThreshold;  // 0x9C (0x9C)
	char VertexColorMaskInvert : 1;  // 0xA0 (0xA0)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	char pad_161[4];  // 0xA1 (0xA1)
	struct FFloatInterval ZOffset;  // 0xA4 (0xA4)
	char AlignToNormal : 1;  // 0xAC (0xAC)
	char AverageNormal : 1;  // 0xAC (0xAC)
	char AverageNormalSingleComponent : 1;  // 0xAC (0xAC)
	char pad_172_1 : 5;  // 0xAC (0xAC)
	char pad_173[4];  // 0xAD (0xAD)
	float AlignMaxAngle;  // 0xB0 (0xB0)
	char RandomYaw : 1;  // 0xB4 (0xB4)
	char pad_180_1 : 7;  // 0xB4 (0xB4)
	char pad_181[4];  // 0xB5 (0xB5)
	float RandomPitchAngle;  // 0xB8 (0xB8)
	struct FFloatInterval GroundSlopeAngle;  // 0xBC (0xBC)
	struct FFloatInterval Height;  // 0xC4 (0xC4)
	char pad_204[4];  // 0xCC (0xCC)
	struct TArray<struct FName> LandscapeLayers;  // 0xD0 (0xD0)
	float MinimumLayerWeight;  // 0xE0 (0xE0)
	char pad_228[4];  // 0xE4 (0xE4)
	struct TArray<struct FName> ExclusionLandscapeLayers;  // 0xE8 (0xE8)
	float MinimumExclusionLayerWeight;  // 0xF8 (0xF8)
	struct FName LandscapeLayer;  // 0xFC (0xFC)
	char CollisionWithWorld : 1;  // 0x104 (0x104)
	char pad_260_1 : 7;  // 0x104 (0x104)
	char pad_261[4];  // 0x105 (0x105)
	struct FVector CollisionScale;  // 0x108 (0x108)
	int32_t AverageNormalSampleCount;  // 0x120 (0x120)
	char pad_292[4];  // 0x124 (0x124)
	struct FBoxSphereBounds MeshBounds;  // 0x128 (0x128)
	struct FVector LowBoundOriginRadius;  // 0x160 (0x160)
	enum class EComponentMobility Mobility;  // 0x178 (0x178)
	char pad_377[3];  // 0x179 (0x179)
	struct FInt32Interval CullDistance;  // 0x17C (0x17C)
	char bEnableStaticLighting : 1;  // 0x184 (0x184)
	char CastShadow : 1;  // 0x184 (0x184)
	char bAffectDynamicIndirectLighting : 1;  // 0x184 (0x184)
	char bAffectDistanceFieldLighting : 1;  // 0x184 (0x184)
	char bCastDynamicShadow : 1;  // 0x184 (0x184)
	char bCastStaticShadow : 1;  // 0x184 (0x184)
	char pad_388_1 : 2;  // 0x184 (0x184)
	char pad_389[4];  // 0x185 (0x185)
	char bCastContactShadow : 1;  // 0x188 (0x188)
	char pad_392_1 : 7;  // 0x188 (0x188)
	char pad_393[4];  // 0x189 (0x189)
	char bCastShadowAsTwoSided : 1;  // 0x18C (0x18C)
	char bReceivesDecals : 1;  // 0x18C (0x18C)
	char bOverrideLightMapRes : 1;  // 0x18C (0x18C)
	char pad_396_1 : 5;  // 0x18C (0x18C)
	char pad_397[4];  // 0x18D (0x18D)
	int32_t OverriddenLightMapRes;  // 0x190 (0x190)
	uint8_t LightmapType;  // 0x194 (0x194)
	char pad_405[3];  // 0x195 (0x195)
	char bUseAsOccluder : 1;  // 0x198 (0x198)
	char pad_408_1 : 7;  // 0x198 (0x198)
	char pad_409[4];  // 0x199 (0x199)
	char bVisibleInRayTracing : 1;  // 0x19C (0x19C)
	char bEvaluateWorldPositionOffset : 1;  // 0x19C (0x19C)
	char pad_412_1 : 6;  // 0x19C (0x19C)
	char pad_413[4];  // 0x19D (0x19D)
	int32_t WorldPositionOffsetDisableDistance;  // 0x1A0 (0x1A0)
	char pad_420[4];  // 0x1A4 (0x1A4)
	struct FBodyInstance BodyInstance;  // 0x1A8 (0x1A8)
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry;  // 0x338 (0x338)
	struct FLightingChannels LightingChannels;  // 0x339 (0x339)
	char pad_826[2];  // 0x33A (0x33A)
	char bRenderCustomDepth : 1;  // 0x33C (0x33C)
	char pad_828_1 : 7;  // 0x33C (0x33C)
	char pad_829[4];  // 0x33D (0x33D)
	uint8_t CustomDepthStencilWriteMask;  // 0x340 (0x340)
	char pad_833[3];  // 0x341 (0x341)
	int32_t CustomDepthStencilValue;  // 0x344 (0x344)
	int32_t TranslucencySortPriority;  // 0x348 (0x348)
	float CollisionRadius;  // 0x34C (0x34C)
	float ShadeRadius;  // 0x350 (0x350)
	int32_t NumSteps;  // 0x354 (0x354)
	float InitialSeedDensity;  // 0x358 (0x358)
	float AverageSpreadDistance;  // 0x35C (0x35C)
	float SpreadVariance;  // 0x360 (0x360)
	int32_t SeedsPerStep;  // 0x364 (0x364)
	int32_t DistributionSeed;  // 0x368 (0x368)
	float MaxInitialSeedOffset;  // 0x36C (0x36C)
	char pad_880_1 : 7;  // 0x370 (0x370)
	bool bCanGrowInShade : 1;  // 0x370 (0x370)
	char pad_881_1 : 7;  // 0x371 (0x371)
	bool bSpawnsInShade : 1;  // 0x371 (0x371)
	char pad_882[2];  // 0x372 (0x372)
	float MaxInitialAge;  // 0x374 (0x374)
	float MaxAge;  // 0x378 (0x378)
	float OverlapPriority;  // 0x37C (0x37C)
	struct FFloatInterval ProceduralScale;  // 0x380 (0x380)
	struct FRuntimeFloatCurve ScaleCurve;  // 0x388 (0x388)
	struct FFoliageDensityFalloff DensityFalloff;  // 0x410 (0x410)
	int32_t ChangeCount;  // 0x4A0 (0x4A0)
	char ReapplyDensity : 1;  // 0x4A4 (0x4A4)
	char ReapplyRadius : 1;  // 0x4A4 (0x4A4)
	char ReapplyAlignToNormal : 1;  // 0x4A4 (0x4A4)
	char ReapplyRandomYaw : 1;  // 0x4A4 (0x4A4)
	char ReapplyScaling : 1;  // 0x4A4 (0x4A4)
	char ReapplyScaleX : 1;  // 0x4A4 (0x4A4)
	char ReapplyScaleY : 1;  // 0x4A4 (0x4A4)
	char ReapplyScaleZ : 1;  // 0x4A4 (0x4A4)
	char ReapplyRandomPitchAngle : 1;  // 0x4A5 (0x4A5)
	char ReapplyGroundSlope : 1;  // 0x4A5 (0x4A5)
	char ReapplyHeight : 1;  // 0x4A5 (0x4A5)
	char ReapplyLandscapeLayers : 1;  // 0x4A5 (0x4A5)
	char ReapplyZOffset : 1;  // 0x4A5 (0x4A5)
	char ReapplyCollisionWithWorld : 1;  // 0x4A5 (0x4A5)
	char ReapplyVertexColorMask : 1;  // 0x4A5 (0x4A5)
	char bEnableDensityScaling : 1;  // 0x4A5 (0x4A5)
	char bEnableDiscardOnLoad : 1;  // 0x4A6 (0x4A6)
	char pad_1190_1 : 7;  // 0x4A6 (0x4A6)
	char pad_1191[2];  // 0x4A7 (0x4A7)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures;  // 0x4A8 (0x4A8)
	int32_t VirtualTextureCullMips;  // 0x4B8 (0x4B8)
	uint8_t VirtualTextureRenderPassType;  // 0x4BC (0x4BC)
	char pad_1213[3];  // 0x4BD (0x4BD)


}; 
 
 


// Class Foliage.GrassInstancedStaticMeshComponent
// Size: 0x8D0(Inherited: 0x8D0)
struct UGrassInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent
{


}; 
 
 


// Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x4F0(Inherited: 0x4C0)
struct UFoliageType_InstancedStaticMesh : UFoliageType
{
	struct UStaticMesh* Mesh;  // 0x4C0 (0x4C0)
	struct TArray<struct UMaterialInterface*> OverrideMaterials;  // 0x4C8 (0x4C8)
	struct TArray<struct UMaterialInterface*> NaniteOverrideMaterials;  // 0x4D8 (0x4D8)
	UFoliageInstancedStaticMeshComponent* ComponentClass;  // 0x4E8 (0x4E8)


}; 
 
 


// Class Foliage.InstancedFoliageActor
// Size: 0x2F0(Inherited: 0x2A0)
struct AInstancedFoliageActor : AISMPartitionActor
{
	char pad_672[80];  // 0x2A0 (0x2A0)


}; 
 
 


// Class Foliage.InteractiveFoliageComponent
// Size: 0x600(Inherited: 0x5F0)
struct UInteractiveFoliageComponent : UStaticMeshComponent
{
	char pad_1520[16];  // 0x5F0 (0x5F0)


}; 
 
 


// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x360(Inherited: 0x2C8)
struct AProceduralFoliageBlockingVolume : AVolume
{
	struct AProceduralFoliageVolume* ProceduralFoliageVolume;  // 0x2C8 (0x2C8)
	struct FFoliageDensityFalloff DensityFalloff;  // 0x2D0 (0x2D0)


}; 
 
 


// Class Foliage.ProceduralFoliageComponent
// Size: 0xC8(Inherited: 0xA0)
struct UProceduralFoliageComponent : UActorComponent
{
	struct UProceduralFoliageSpawner* FoliageSpawner;  // 0xA0 (0xA0)
	float TileOverlap;  // 0xA8 (0xA8)
	char pad_172[4];  // 0xAC (0xAC)
	struct AVolume* SpawningVolume;  // 0xB0 (0xB0)
	struct FGuid ProceduralGuid;  // 0xB8 (0xB8)


}; 
 
 


// Class Foliage.ProceduralFoliageSpawner
// Size: 0x68(Inherited: 0x28)
struct UProceduralFoliageSpawner : UObject
{
	int32_t RandomSeed;  // 0x28 (0x28)
	float TileSize;  // 0x2C (0x2C)
	int32_t NumUniqueTiles;  // 0x30 (0x30)
	float MinimumQuadTreeSize;  // 0x34 (0x34)
	char pad_56[8];  // 0x38 (0x38)
	struct TArray<struct FFoliageTypeObject> FoliageTypes;  // 0x40 (0x40)
	char pad_80[24];  // 0x50 (0x50)


	void Simulate(int32_t NumSteps); // Function Foliage.ProceduralFoliageSpawner.Simulate
}; 
 
 


// Class Foliage.ProceduralFoliageTile
// Size: 0x170(Inherited: 0x28)
struct UProceduralFoliageTile : UObject
{
	struct UProceduralFoliageSpawner* FoliageSpawner;  // 0x28 (0x28)
	char pad_48[160];  // 0x30 (0x30)
	struct TArray<struct FProceduralFoliageInstance> InstancesArray;  // 0xD0 (0xD0)
	char pad_224[144];  // 0xE0 (0xE0)


}; 
 
 


// Class Foliage.ProceduralFoliageVolume
// Size: 0x2D8(Inherited: 0x2C8)
struct AProceduralFoliageVolume : AVolume
{
	char pad_712[8];  // 0x2C8 (0x2C8)
	struct UProceduralFoliageComponent* ProceduralComponent;  // 0x2D0 (0x2D0)


}; 
 
 


