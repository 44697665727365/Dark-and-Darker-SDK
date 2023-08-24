#pragma once 
#include <Water_Structs.h>
 
 
 
// Class Water.WaterRuntimeSettings
// Size: 0xD0(Inherited: 0x38)
struct UWaterRuntimeSettings : UDeveloperSettings
{
	enum class ECollisionChannel CollisionChannelForWaterTraces;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct TSoftObjectPtr<UMaterialParameterCollection> MaterialParameterCollection;  // 0x40 (0x40)
	float WaterBodyIconWorldZOffset;  // 0x70 (0x70)
	struct FName DefaultWaterCollisionProfileName;  // 0x74 (0x74)
	char pad_124[4];  // 0x7C (0x7C)
	struct TSoftObjectPtr<UMaterialInterface> DefaultWaterInfoMaterial;  // 0x80 (0x80)
	UWaterBodyRiverComponent* WaterBodyRiverComponentClass;  // 0xB0 (0xB0)
	UWaterBodyLakeComponent* WaterBodyLakeComponentClass;  // 0xB8 (0xB8)
	UWaterBodyOceanComponent* WaterBodyOceanComponentClass;  // 0xC0 (0xC0)
	UWaterBodyCustomComponent* WaterBodyCustomComponentClass;  // 0xC8 (0xC8)


}; 
 
 


// Class Water.BuoyancyComponent
// Size: 0x208(Inherited: 0xA0)
struct UBuoyancyComponent : UActorComponent
{
	struct TArray<struct FSphericalPontoon> Pontoons;  // 0xA0 (0xA0)
	struct FMulticastInlineDelegate OnEnteredWaterDelegate;  // 0xB0 (0xB0)
	struct FMulticastInlineDelegate OnExitedWaterDelegate;  // 0xC0 (0xC0)
	struct FBuoyancyData BuoyancyData;  // 0xD0 (0xD0)
	struct TArray<struct UWaterBodyComponent*> CurrentWaterBodyComponents;  // 0x160 (0x160)
	struct UPrimitiveComponent* SimulatingComponent;  // 0x170 (0x170)
	char pad_376[144];  // 0x178 (0x178)


	void OnPontoonExitedWater(struct FSphericalPontoon& Pontoon); // Function Water.BuoyancyComponent.OnPontoonExitedWater
	void OnPontoonEnteredWater(struct FSphericalPontoon& Pontoon); // Function Water.BuoyancyComponent.OnPontoonEnteredWater
	bool IsOverlappingWaterBody(); // Function Water.BuoyancyComponent.IsOverlappingWaterBody
	bool IsInWaterBody(); // Function Water.BuoyancyComponent.IsInWaterBody
	void GetLastWaterSurfaceInfo(struct FVector& OutWaterPlaneLocation, struct FVector& OutWaterPlaneNormal, struct FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32_t& OutWaterBodyIdx, struct FVector& OutWaterVelocity); // Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo
	struct TArray<struct UWaterBodyComponent*> GetCurrentWaterBodyComponents(); // Function Water.BuoyancyComponent.GetCurrentWaterBodyComponents
}; 
 
 


// Class Water.WaterWaves
// Size: 0x28(Inherited: 0x28)
struct UWaterWaves : UWaterWavesBase
{


}; 
 
 


// Class Water.BuoyancyManager
// Size: 0x358(Inherited: 0x290)
struct ABuoyancyManager : AActor
{
	char pad_656[80];  // 0x290 (0x290)
	struct TArray<struct UBuoyancyComponent*> BuoyancyComponents;  // 0x2E0 (0x2E0)
	char pad_752[104];  // 0x2F0 (0x2F0)


	bool GetBuoyancyComponentManager(struct UObject* WorldContextObject, struct ABuoyancyManager*& Manager); // Function Water.BuoyancyManager.GetBuoyancyComponentManager
}; 
 
 


// Class Water.EnvQueryTest_InsideWaterBody
// Size: 0x200(Inherited: 0x1F8)
struct UEnvQueryTest_InsideWaterBody : UEnvQueryTest
{
	char pad_504_1 : 7;  // 0x1F8 (0x1F8)
	bool bIncludeWaves : 1;  // 0x1F8 (0x1F8)
	char pad_505_1 : 7;  // 0x1F9 (0x1F9)
	bool bSimpleWaves : 1;  // 0x1F9 (0x1F9)
	char pad_506_1 : 7;  // 0x1FA (0x1FA)
	bool bIgnoreExclusionVolumes : 1;  // 0x1FA (0x1FA)
	char pad_507[5];  // 0x1FB (0x1FB)


}; 
 
 


// Class Water.GerstnerWaterWaveGeneratorBase
// Size: 0x28(Inherited: 0x28)
struct UGerstnerWaterWaveGeneratorBase : UObject
{


	void GenerateGerstnerWaves(struct TArray<struct FGerstnerWave>& OutWaves); // Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves
}; 
 
 


// Class Water.GerstnerWaterWaveGeneratorSimple
// Size: 0x60(Inherited: 0x28)
struct UGerstnerWaterWaveGeneratorSimple : UGerstnerWaterWaveGeneratorBase
{
	int32_t NumWaves;  // 0x28 (0x28)
	int32_t Seed;  // 0x2C (0x2C)
	float Randomness;  // 0x30 (0x30)
	float MinWavelength;  // 0x34 (0x34)
	float MaxWavelength;  // 0x38 (0x38)
	float WavelengthFalloff;  // 0x3C (0x3C)
	float MinAmplitude;  // 0x40 (0x40)
	float MaxAmplitude;  // 0x44 (0x44)
	float AmplitudeFalloff;  // 0x48 (0x48)
	float WindAngleDeg;  // 0x4C (0x4C)
	float DirectionAngularSpreadDeg;  // 0x50 (0x50)
	float SmallWaveSteepness;  // 0x54 (0x54)
	float LargeWaveSteepness;  // 0x58 (0x58)
	float SteepnessFalloff;  // 0x5C (0x5C)


}; 
 
 


// Class Water.GerstnerWaterWaveGeneratorSpectrum
// Size: 0x40(Inherited: 0x28)
struct UGerstnerWaterWaveGeneratorSpectrum : UGerstnerWaterWaveGeneratorBase
{
	uint8_t SpectrumType;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct TArray<struct FGerstnerWaveOctave> Octaves;  // 0x30 (0x30)


}; 
 
 


// Class Water.WaterWavesBase
// Size: 0x28(Inherited: 0x28)
struct UWaterWavesBase : UObject
{


}; 
 
 


// Class Water.GerstnerWaterWaves
// Size: 0x48(Inherited: 0x28)
struct UGerstnerWaterWaves : UWaterWaves
{
	struct UGerstnerWaterWaveGeneratorBase* GerstnerWaveGenerator;  // 0x28 (0x28)
	struct TArray<struct FGerstnerWave> GerstnerWaves;  // 0x30 (0x30)
	float MaxWaveHeight;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 


// Class Water.GerstnerWaterWaveSubsystem
// Size: 0x48(Inherited: 0x30)
struct UGerstnerWaterWaveSubsystem : UEngineSubsystem
{
	char pad_48[24];  // 0x30 (0x30)


}; 
 
 


// Class Water.WaterBodyExclusionVolume
// Size: 0x2F0(Inherited: 0x2D8)
struct AWaterBodyExclusionVolume : APhysicsVolume
{
	char pad_728_1 : 7;  // 0x2D8 (0x2D8)
	bool bExcludeAllOverlappingWaterBodies : 1;  // 0x2D8 (0x2D8)
	char pad_729[7];  // 0x2D9 (0x2D9)
	struct TArray<struct AWaterBody*> WaterBodiesToExclude;  // 0x2E0 (0x2E0)


}; 
 
 


// Class Water.LakeCollisionComponent
// Size: 0x560(Inherited: 0x540)
struct ULakeCollisionComponent : UPrimitiveComponent
{
	struct UBodySetup* CachedBodySetup;  // 0x538 (0x538)
	struct FVector BoxExtent;  // 0x540 (0x540)


}; 
 
 


// Class Water.NiagaraDataInterfaceWater
// Size: 0x40(Inherited: 0x38)
struct UNiagaraDataInterfaceWater : UNiagaraDataInterface
{
	struct UWaterBodyComponent* SourceBodyComponent;  // 0x38 (0x38)


}; 
 
 


// Class Water.WaterBodyCustom
// Size: 0x2C0(Inherited: 0x2C0)
struct AWaterBodyCustom : AWaterBody
{


}; 
 
 


// Class Water.NiagaraWaterFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct UNiagaraWaterFunctionLibrary : UBlueprintFunctionLibrary
{


	void SetWaterBodyComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UWaterBodyComponent* WaterBodyComponent); // Function Water.NiagaraWaterFunctionLibrary.SetWaterBodyComponent
	void SetWaterBody(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct AWaterBody* WaterBody); // Function Water.NiagaraWaterFunctionLibrary.SetWaterBody
}; 
 
 


// Class Water.WaterSplineComponent
// Size: 0x660(Inherited: 0x640)
struct UWaterSplineComponent : USplineComponent
{
	struct FWaterSplineCurveDefaults WaterSplineDefaults;  // 0x638 (0x638)
	struct FWaterSplineCurveDefaults PreviousWaterSplineDefaults;  // 0x648 (0x648)


}; 
 
 


// Class Water.OceanCollisionComponent
// Size: 0x580(Inherited: 0x540)
struct UOceanCollisionComponent : UPrimitiveComponent
{
	struct UBodySetup* CachedBodySetup;  // 0x538 (0x538)
	char pad_1352[56];  // 0x548 (0x548)


}; 
 
 


// Class Water.OceanBoxCollisionComponent
// Size: 0x580(Inherited: 0x580)
struct UOceanBoxCollisionComponent : UBoxComponent
{


}; 
 
 


// Class Water.WaterBodyComponent
// Size: 0x1530(Inherited: 0x540)
struct UWaterBodyComponent : UPrimitiveComponent
{
	struct UPhysicalMaterial* PhysicalMaterial;  // 0x538 (0x538)
	float TargetWaveMaskDepth;  // 0x540 (0x540)
	float MaxWaveHeightOffset;  // 0x544 (0x544)
	struct FUnderwaterPostProcessSettings UnderwaterPostProcessSettings;  // 0x550 (0x550)
	struct FWaterCurveSettings CurveSettings;  // 0xC50 (0xC50)
	struct UMaterialInterface* WaterMaterial;  // 0xC70 (0xC70)
	struct UMaterialInterface* WaterHLODMaterial;  // 0xC78 (0xC78)
	struct UMaterialInterface* WaterLODMaterial;  // 0xC80 (0xC80)
	struct UMaterialInterface* UnderwaterPostProcessMaterial;  // 0xC88 (0xC88)
	struct UMaterialInterface* WaterInfoMaterial;  // 0xC90 (0xC90)
	struct FWaterBodyHeightmapSettings WaterHeightmapSettings;  // 0xC98 (0xC98)
	float ShapeDilation;  // 0xD18 (0xD18)
	float CollisionHeightOffset;  // 0xD1C (0xD1C)
	char pad_3360_1 : 7;  // 0xD20 (0xD20)
	bool bAffectsLandscape : 1;  // 0xD20 (0xD20)
	char pad_3361[3];  // 0xD21 (0xD21)
	int32_t WaterBodyIndex;  // 0xD24 (0xD24)
	struct UStaticMesh* WaterMeshOverride;  // 0xD28 (0xD28)
	char pad_3376_1 : 7;  // 0xD30 (0xD30)
	bool bAlwaysGenerateWaterMeshTiles : 1;  // 0xD30 (0xD30)
	char pad_3377[3];  // 0xD31 (0xD31)
	int32_t OverlapMaterialPriority;  // 0xD34 (0xD34)
	struct UWaterSplineMetadata* WaterSplineMetadata;  // 0xD38 (0xD38)
	struct UMaterialInstanceDynamic* WaterMID;  // 0xD40 (0xD40)
	struct UMaterialInstanceDynamic* WaterLODMID;  // 0xD48 (0xD48)
	struct UMaterialInstanceDynamic* UnderwaterPostProcessMID;  // 0xD50 (0xD50)
	struct UMaterialInstanceDynamic* WaterInfoMID;  // 0xD58 (0xD58)
	struct TArray<struct TSoftObjectPtr<AWaterBodyIsland>> WaterBodyIslands;  // 0xD60 (0xD60)
	struct TArray<struct TSoftObjectPtr<AWaterBodyExclusionVolume>> WaterBodyExclusionVolumes;  // 0xD70 (0xD70)
	struct TWeakObjectPtr<ALandscapeProxy> Landscape;  // 0xD80 (0xD80)
	struct TSoftObjectPtr<AWaterZone> OwningWaterZone;  // 0xD88 (0xD88)
	struct TSoftObjectPtr<AWaterZone> WaterZoneOverride;  // 0xDB8 (0xDB8)
	char pad_3560[8];  // 0xDE8 (0xDE8)
	struct FPostProcessSettings CurrentPostProcessSettings;  // 0xDF0 (0xDF0)
	UNavAreaBase* WaterNavAreaClass;  // 0x14D0 (0x14D0)
	char pad_5336[80];  // 0x14D8 (0x14D8)
	double FixedWaterDepth;  // 0x1528 (0x1528)


	void SetWaterAndUnderWaterPostProcessMaterial(struct UMaterialInterface* InWaterMaterial, struct UMaterialInterface* InUnderWaterPostProcessMaterial); // Function Water.WaterBodyComponent.SetWaterAndUnderWaterPostProcessMaterial
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged); // Function Water.WaterBodyComponent.OnWaterBodyChanged
	struct UWaterWavesBase* GetWaterWaves(); // Function Water.WaterBodyComponent.GetWaterWaves
	float GetWaterVelocityAtSplineInputKey(float InKey); // Function Water.WaterBodyComponent.GetWaterVelocityAtSplineInputKey
	void GetWaterSurfaceInfoAtLocation(struct FVector& InLocation, struct FVector& OutWaterSurfaceLocation, struct FVector& OutWaterSurfaceNormal, struct FVector& OutWaterVelocity, float& OutWaterDepth, bool bIncludeDepth); // Function Water.WaterBodyComponent.GetWaterSurfaceInfoAtLocation
	struct UWaterSplineComponent* GetWaterSpline(); // Function Water.WaterBodyComponent.GetWaterSpline
	struct UMaterialInstanceDynamic* GetWaterMaterialInstance(); // Function Water.WaterBodyComponent.GetWaterMaterialInstance
	struct UMaterialInterface* GetWaterMaterial(); // Function Water.WaterBodyComponent.GetWaterMaterial
	struct UMaterialInstanceDynamic* GetWaterLODMaterialInstance(); // Function Water.WaterBodyComponent.GetWaterLODMaterialInstance
	struct UMaterialInstanceDynamic* GetWaterInfoMaterialInstance(); // Function Water.WaterBodyComponent.GetWaterInfoMaterialInstance
	struct AWaterBody* GetWaterBodyActor(); // Function Water.WaterBodyComponent.GetWaterBodyActor
	struct UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance(); // Function Water.WaterBodyComponent.GetUnderwaterPostProcessMaterialInstance
	struct TArray<struct UPrimitiveComponent*> GetStandardRenderableComponents(); // Function Water.WaterBodyComponent.GetStandardRenderableComponents
	struct UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance(); // Function Water.WaterBodyComponent.GetRiverToOceanTransitionMaterialInstance
	struct UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance(); // Function Water.WaterBodyComponent.GetRiverToLakeTransitionMaterialInstance
	float GetMaxWaveHeight(); // Function Water.WaterBodyComponent.GetMaxWaveHeight
	struct TArray<struct AWaterBodyIsland*> GetIslands(); // Function Water.WaterBodyComponent.GetIslands
	struct TArray<struct AWaterBodyExclusionVolume*> GetExclusionVolumes(); // Function Water.WaterBodyComponent.GetExclusionVolumes
	struct TArray<struct UPrimitiveComponent*> GetCollisionComponents(bool bInOnlyEnabledComponents); // Function Water.WaterBodyComponent.GetCollisionComponents
}; 
 
 


// Class Water.WaterBody
// Size: 0x2C0(Inherited: 0x290)
struct AWaterBody : AActor
{
	char pad_656[8];  // 0x290 (0x290)
	struct UWaterSplineComponent* SplineComp;  // 0x298 (0x298)
	struct UWaterSplineMetadata* WaterSplineMetadata;  // 0x2A0 (0x2A0)
	struct UWaterBodyComponent* WaterBodyComponent;  // 0x2A8 (0x2A8)
	int32_t WaterBodyIndex;  // 0x2B0 (0x2B0)
	uint8_t WaterBodyType;  // 0x2B4 (0x2B4)
	char pad_693[3];  // 0x2B5 (0x2B5)
	struct UWaterWavesBase* WaterWaves;  // 0x2B8 (0x2B8)


	void SetWaterWaves(struct UWaterWavesBase* InWaterWaves); // Function Water.WaterBody.SetWaterWaves
	void SetWaterMaterial(struct UMaterialInterface* InMaterial); // Function Water.WaterBody.SetWaterMaterial
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged); // Function Water.WaterBody.OnWaterBodyChanged
	struct FVector GetWaterVelocityVectorAtSplineInputKey(float InKey); // Function Water.WaterBody.GetWaterVelocityVectorAtSplineInputKey
	float GetWaterVelocityAtSplineInputKey(float InKey); // Function Water.WaterBody.GetWaterVelocityAtSplineInputKey
	struct UWaterSplineComponent* GetWaterSpline(); // Function Water.WaterBody.GetWaterSpline
	struct UMaterialInstanceDynamic* GetWaterMaterialInstance(); // Function Water.WaterBody.GetWaterMaterialInstance
	uint8_t GetWaterBodyType(); // Function Water.WaterBody.GetWaterBodyType
	struct UWaterBodyComponent* GetWaterBodyComponent(); // Function Water.WaterBody.GetWaterBodyComponent
	struct UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance(); // Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
	struct UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance(); // Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
	struct TArray<struct AWaterBodyIsland*> GetIslands(); // Function Water.WaterBody.GetIslands
	struct TArray<struct AWaterBodyExclusionVolume*> GetExclusionVolumes(); // Function Water.WaterBody.GetExclusionVolumes
	float GetAudioIntensityAtSplineInputKey(float InKey); // Function Water.WaterBody.GetAudioIntensityAtSplineInputKey
}; 
 
 


// Class Water.WaterBodyGenerator
// Size: 0x28(Inherited: 0x28)
struct UWaterBodyGenerator : UObject
{


}; 
 
 


// Class Water.CustomMeshGenerator
// Size: 0x30(Inherited: 0x28)
struct UCustomMeshGenerator : UWaterBodyGenerator
{
	struct UStaticMeshComponent* MeshComp;  // 0x28 (0x28)


}; 
 
 


// Class Water.WaterBodyCustomComponent
// Size: 0x1540(Inherited: 0x1530)
struct UWaterBodyCustomComponent : UWaterBodyComponent
{
	struct UStaticMeshComponent* MeshComp;  // 0x1530 (0x1530)
	char pad_5432[8];  // 0x1538 (0x1538)


}; 
 
 


// Class Water.WaterBodyIsland
// Size: 0x2A0(Inherited: 0x290)
struct AWaterBodyIsland : AActor
{
	char pad_656[8];  // 0x290 (0x290)
	struct UWaterSplineComponent* SplineComp;  // 0x298 (0x298)


	struct UWaterSplineComponent* GetWaterSpline(); // Function Water.WaterBodyIsland.GetWaterSpline
}; 
 
 


// Class Water.WaterBodyHLODBuilder
// Size: 0x28(Inherited: 0x28)
struct UWaterBodyHLODBuilder : UHLODBuilder
{


}; 
 
 


// Class Water.LakeGenerator
// Size: 0x40(Inherited: 0x28)
struct ULakeGenerator : UWaterBodyGenerator
{
	struct UStaticMeshComponent* LakeMeshComp;  // 0x28 (0x28)
	struct UBoxComponent* LakeCollisionComp;  // 0x30 (0x30)
	struct ULakeCollisionComponent* LakeCollision;  // 0x38 (0x38)


}; 
 
 


// Class Water.WaterBodyLake
// Size: 0x2C0(Inherited: 0x2C0)
struct AWaterBodyLake : AWaterBody
{


}; 
 
 


// Class Water.WaterBodyLakeComponent
// Size: 0x1540(Inherited: 0x1530)
struct UWaterBodyLakeComponent : UWaterBodyComponent
{
	struct UStaticMeshComponent* LakeMeshComp;  // 0x1530 (0x1530)
	struct ULakeCollisionComponent* LakeCollision;  // 0x1538 (0x1538)


}; 
 
 


// Class Water.OceanGenerator
// Size: 0x48(Inherited: 0x28)
struct UOceanGenerator : UWaterBodyGenerator
{
	struct TArray<struct UOceanBoxCollisionComponent*> CollisionBoxes;  // 0x28 (0x28)
	struct TArray<struct UOceanCollisionComponent*> CollisionHullSets;  // 0x38 (0x38)


}; 
 
 


// Class Water.WaterBodyOcean
// Size: 0x2C0(Inherited: 0x2C0)
struct AWaterBodyOcean : AWaterBody
{


}; 
 
 


// Class Water.WaterBodyRiverComponent
// Size: 0x1560(Inherited: 0x1530)
struct UWaterBodyRiverComponent : UWaterBodyComponent
{
	struct TArray<struct USplineMeshComponent*> SplineMeshComponents;  // 0x1530 (0x1530)
	struct UMaterialInterface* LakeTransitionMaterial;  // 0x1540 (0x1540)
	struct UMaterialInstanceDynamic* LakeTransitionMID;  // 0x1548 (0x1548)
	struct UMaterialInterface* OceanTransitionMaterial;  // 0x1550 (0x1550)
	struct UMaterialInstanceDynamic* OceanTransitionMID;  // 0x1558 (0x1558)


}; 
 
 


// Class Water.WaterBodyOceanComponent
// Size: 0x1580(Inherited: 0x1530)
struct UWaterBodyOceanComponent : UWaterBodyComponent
{
	struct TArray<struct UOceanBoxCollisionComponent*> CollisionBoxes;  // 0x1530 (0x1530)
	struct TArray<struct UOceanCollisionComponent*> CollisionHullSets;  // 0x1540 (0x1540)
	struct FVector2D VisualExtents;  // 0x1550 (0x1550)
	struct FVector CollisionExtents;  // 0x1560 (0x1560)
	float HeightOffset;  // 0x1578 (0x1578)
	char pad_5500[4];  // 0x157C (0x157C)


}; 
 
 


// Class Water.RiverGenerator
// Size: 0x38(Inherited: 0x28)
struct URiverGenerator : UWaterBodyGenerator
{
	struct TArray<struct USplineMeshComponent*> SplineMeshComponents;  // 0x28 (0x28)


}; 
 
 


// Class Water.WaterBodyRiver
// Size: 0x2C0(Inherited: 0x2C0)
struct AWaterBodyRiver : AWaterBody
{


}; 
 
 


// Class Water.WaterBrushActorInterface
// Size: 0x28(Inherited: 0x28)
struct UWaterBrushActorInterface : UInterface
{


}; 
 
 


// Class Water.WaterMeshComponent
// Size: 0x690(Inherited: 0x570)
struct UWaterMeshComponent : UMeshComponent
{
	int32_t ForceCollapseDensityLevel;  // 0x570 (0x570)
	char pad_1396[4];  // 0x574 (0x574)
	struct UMaterialInterface* FarDistanceMaterial;  // 0x578 (0x578)
	float FarDistanceMeshExtent;  // 0x580 (0x580)
	float TileSize;  // 0x584 (0x584)
	struct FIntPoint ExtentInTiles;  // 0x588 (0x588)
	char pad_1424[152];  // 0x590 (0x590)
	struct TSet<struct UMaterialInterface*> UsedMaterials;  // 0x628 (0x628)
	char pad_1656[16];  // 0x678 (0x678)
	int32_t TessellationFactor;  // 0x688 (0x688)
	float LODScale;  // 0x68C (0x68C)


	bool IsEnabled(); // Function Water.WaterMeshComponent.IsEnabled
}; 
 
 


// Class Water.WaterSplineMetadata
// Size: 0xA0(Inherited: 0x28)
struct UWaterSplineMetadata : USplineMetadata
{
	struct FInterpCurveFloat Depth;  // 0x28 (0x28)
	struct FInterpCurveFloat WaterVelocityScalar;  // 0x40 (0x40)
	struct FInterpCurveFloat RiverWidth;  // 0x58 (0x58)
	struct FInterpCurveFloat AudioIntensity;  // 0x70 (0x70)
	struct FInterpCurveVector WaterVelocity;  // 0x88 (0x88)


}; 
 
 


// Class Water.WaterZone
// Size: 0x320(Inherited: 0x290)
struct AWaterZone : AActor
{
	struct UTextureRenderTarget2D* WaterInfoTexture;  // 0x290 (0x290)
	struct TArray<struct TWeakObjectPtr<UWaterBodyComponent>> OwnedWaterBodies;  // 0x298 (0x298)
	struct FIntPoint RenderTargetResolution;  // 0x2A8 (0x2A8)
	struct UWaterMeshComponent* WaterMesh;  // 0x2B0 (0x2B0)
	struct FVector2D ZoneExtent;  // 0x2B8 (0x2B8)
	float CaptureZOffset;  // 0x2C8 (0x2C8)
	char pad_716_1 : 7;  // 0x2CC (0x2CC)
	bool bHalfPrecisionTexture : 1;  // 0x2CC (0x2CC)
	char pad_717[3];  // 0x2CD (0x2CD)
	int32_t VelocityBlurRadius;  // 0x2D0 (0x2D0)
	char pad_724[4];  // 0x2D4 (0x2D4)
	struct FVector TessellatedWaterMeshExtent;  // 0x2D8 (0x2D8)
	uint32_t NonTessellatedLODSectionScale;  // 0x2F0 (0x2F0)
	int32_t OverlapPriority;  // 0x2F4 (0x2F4)
	char pad_760_1 : 7;  // 0x2F8 (0x2F8)
	bool bEnableNonTessellatedLODMesh : 1;  // 0x2F8 (0x2F8)
	char pad_761[39];  // 0x2F9 (0x2F9)


}; 
 
 


// Class Water.WaterSubsystem
// Size: 0x110(Inherited: 0x40)
struct UWaterSubsystem : UTickableWorldSubsystem
{
	char pad_64[56];  // 0x40 (0x40)
	struct ABuoyancyManager* BuoyancyManager;  // 0x78 (0x78)
	struct FMulticastInlineDelegate OnCameraUnderwaterStateChanged;  // 0x80 (0x80)
	struct FMulticastInlineDelegate OnWaterScalabilityChanged;  // 0x90 (0x90)
	struct UStaticMesh* DefaultRiverMesh;  // 0xA0 (0xA0)
	struct UStaticMesh* DefaultLakeMesh;  // 0xA8 (0xA8)
	char pad_176[40];  // 0xB0 (0xB0)
	struct UMaterialParameterCollection* MaterialParameterCollection;  // 0xD8 (0xD8)
	char pad_224[48];  // 0xE0 (0xE0)


	void SetOceanFloodHeight(float InFloodHeight); // Function Water.WaterSubsystem.SetOceanFloodHeight
	void PrintToWaterLog(struct FString Message, bool bWarning); // Function Water.WaterSubsystem.PrintToWaterLog
	bool IsWaterRenderingEnabled(); // Function Water.WaterSubsystem.IsWaterRenderingEnabled
	bool IsUnderwaterPostProcessEnabled(); // Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
	bool IsShallowWaterSimulationEnabled(); // Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled
	float GetWaterTimeSeconds(); // Function Water.WaterSubsystem.GetWaterTimeSeconds
	float GetSmoothedWorldTimeSeconds(); // Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
	int32_t GetShallowWaterSimulationRenderTargetSize(); // Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
	int32_t GetShallowWaterMaxImpulseForces(); // Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
	int32_t GetShallowWaterMaxDynamicForces(); // Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
	float GetOceanTotalHeight(); // Function Water.WaterSubsystem.GetOceanTotalHeight
	float GetOceanFloodHeight(); // Function Water.WaterSubsystem.GetOceanFloodHeight
	float GetOceanBaseHeight(); // Function Water.WaterSubsystem.GetOceanBaseHeight
	float GetCameraUnderwaterDepth(); // Function Water.WaterSubsystem.GetCameraUnderwaterDepth
}; 
 
 


// Class Water.WaterWavesAsset
// Size: 0x30(Inherited: 0x28)
struct UWaterWavesAsset : UObject
{
	struct UWaterWaves* WaterWaves;  // 0x28 (0x28)


}; 
 
 


// Class Water.WaterWavesAssetReference
// Size: 0x30(Inherited: 0x28)
struct UWaterWavesAssetReference : UWaterWavesBase
{
	struct UWaterWavesAsset* WaterWavesAsset;  // 0x28 (0x28)


}; 
 
 


