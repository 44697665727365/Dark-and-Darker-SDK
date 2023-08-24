#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function Water.WaterSubsystem.GetCameraUnderwaterDepth
struct FGetCameraUnderwaterDepth
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Water.WaterBrushEffectBlurring
struct FWaterBrushEffectBlurring
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bBlurShape : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t Radius;  // 0x4 (0x4)


}; 
 
 // ScriptStruct Water.GerstnerWave
struct FGerstnerWave
{
	float WaveLength;  // 0x0 (0x0)
	float Amplitude;  // 0x4 (0x4)
	float Steepness;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FVector Direction;  // 0x10 (0x10)
	struct FVector2D WaveVector;  // 0x28 (0x28)
	float WaveSpeed;  // 0x38 (0x38)
	float WKA;  // 0x3C (0x3C)
	float Q;  // 0x40 (0x40)
	float PhaseOffset;  // 0x44 (0x44)


}; 
 
 // Function Water.WaterMeshComponent.IsEnabled
struct FIsEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Water.WaterCurveSettings
struct FWaterCurveSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bUseCurveChannel : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UCurveFloat* ElevationCurveAsset;  // 0x8 (0x8)
	float ChannelEdgeOffset;  // 0x10 (0x10)
	float ChannelDepth;  // 0x14 (0x14)
	float CurveRampWidth;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function Water.WaterSubsystem.GetOceanFloodHeight
struct FGetOceanFloodHeight
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction Water.OnCameraUnderwaterStateChanged__DelegateSignature
struct FOnCameraUnderwaterStateChanged__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsUnderWater : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float DepthUnderwater;  // 0x4 (0x4)


}; 
 
 // DelegateFunction Water.OnPontoonExitedWater__DelegateSignature
struct FOnPontoonExitedWater__DelegateSignature
{
	struct FSphericalPontoon Pontoon;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterBodyComponent.GetExclusionVolumes
struct FGetExclusionVolumes
{
	struct TArray<struct AWaterBodyExclusionVolume*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction Water.OnPontoonEnteredWater__DelegateSignature
struct FOnPontoonEnteredWater__DelegateSignature
{
	struct FSphericalPontoon Pontoon;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterBody.GetWaterBodyComponent
struct FGetWaterBodyComponent
{
	struct UWaterBodyComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Water.SphericalPontoon
struct FSphericalPontoon
{
	struct FName CenterSocket;  // 0x0 (0x0)
	struct FVector RelativeLocation;  // 0x8 (0x8)
	float Radius;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool bFXEnabled : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct FVector LocalForce;  // 0x28 (0x28)
	struct FVector CenterLocation;  // 0x40 (0x40)
	char pad_88[8];  // 0x58 (0x58)
	struct FQuat SocketRotation;  // 0x60 (0x60)
	struct FVector Offset;  // 0x80 (0x80)
	char pad_152[4];  // 0x98 (0x98)
	float WaterHeight;  // 0x9C (0x9C)
	float WaterDepth;  // 0xA0 (0xA0)
	float ImmersionDepth;  // 0xA4 (0xA4)
	struct FVector WaterPlaneLocation;  // 0xA8 (0xA8)
	struct FVector WaterPlaneNormal;  // 0xC0 (0xC0)
	struct FVector WaterSurfacePosition;  // 0xD8 (0xD8)
	struct FVector WaterVelocity;  // 0xF0 (0xF0)
	int32_t WaterBodyIndex;  // 0x108 (0x108)
	char pad_268_1 : 7;  // 0x10C (0x10C)
	bool bIsInWater : 1;  // 0x10C (0x10C)
	char pad_269[427];  // 0x10D (0x10D)
	struct UWaterBodyComponent* CurrentWaterBodyComponent;  // 0x2B8 (0x2B8)
	char pad_704[16];  // 0x2C0 (0x2C0)


}; 
 
 // ScriptStruct Water.BuoyancyData
struct FBuoyancyData
{
	struct TArray<struct FSphericalPontoon> Pontoons;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bCenterPontoonsOnCOM : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float BuoyancyCoefficient;  // 0x14 (0x14)
	float BuoyancyDamp;  // 0x18 (0x18)
	float BuoyancyDamp2;  // 0x1C (0x1C)
	float BuoyancyRampMinVelocity;  // 0x20 (0x20)
	float BuoyancyRampMaxVelocity;  // 0x24 (0x24)
	float BuoyancyRampMax;  // 0x28 (0x28)
	float MaxBuoyantForce;  // 0x2C (0x2C)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bApplyDragForcesInWater : 1;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	float DragCoefficient;  // 0x34 (0x34)
	float DragCoefficient2;  // 0x38 (0x38)
	float AngularDragCoefficient;  // 0x3C (0x3C)
	float MaxDragSpeed;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool bApplyRiverForces : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	int32_t RiverPontoonIndex;  // 0x48 (0x48)
	float WaterShorePushFactor;  // 0x4C (0x4C)
	float RiverTraversalPathWidth;  // 0x50 (0x50)
	float MaxShorePushForce;  // 0x54 (0x54)
	float WaterVelocityStrength;  // 0x58 (0x58)
	float MaxWaterForce;  // 0x5C (0x5C)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bAlwaysAllowLateralPush : 1;  // 0x60 (0x60)
	char pad_97_1 : 7;  // 0x61 (0x61)
	bool bAllowCurrentWhenMovingFastUpstream : 1;  // 0x61 (0x61)
	char pad_98_1 : 7;  // 0x62 (0x62)
	bool bApplyDownstreamAngularRotation : 1;  // 0x62 (0x62)
	char pad_99[5];  // 0x63 (0x63)
	struct FVector DownstreamAxisOfRotation;  // 0x68 (0x68)
	float DownstreamRotationStrength;  // 0x80 (0x80)
	float DownstreamRotationStiffness;  // 0x84 (0x84)
	float DownstreamRotationAngularDamping;  // 0x88 (0x88)
	float DownstreamMaxAcceleration;  // 0x8C (0x8C)


}; 
 
 // Function Water.BuoyancyManager.GetBuoyancyComponentManager
struct FGetBuoyancyComponentManager
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct ABuoyancyManager* Manager;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct Water.WaterBodyWeightmapSettings
struct FWaterBodyWeightmapSettings
{
	float FalloffWidth;  // 0x0 (0x0)
	float EdgeOffset;  // 0x4 (0x4)
	struct UTexture2D* ModulationTexture;  // 0x8 (0x8)
	float TextureTiling;  // 0x10 (0x10)
	float TextureInfluence;  // 0x14 (0x14)
	float Midpoint;  // 0x18 (0x18)
	float FinalOpacity;  // 0x1C (0x1C)


}; 
 
 // ScriptStruct Water.GerstnerWaveOctave
struct FGerstnerWaveOctave
{
	int32_t NumWaves;  // 0x0 (0x0)
	float AmplitudeScale;  // 0x4 (0x4)
	float MainDirection;  // 0x8 (0x8)
	float SpreadAngle;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bUniformSpread : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // Function Water.WaterBody.GetWaterBodyType
struct FGetWaterBodyType
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves
struct FGenerateGerstnerWaves
{
	struct TArray<struct FGerstnerWave> OutWaves;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Water.UnderwaterPostProcessSettings
struct FUnderwaterPostProcessSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnabled : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float Priority;  // 0x4 (0x4)
	float BlendRadius;  // 0x8 (0x8)
	float BlendWeight;  // 0xC (0xC)
	struct FPostProcessSettings PostProcessSettings;  // 0x10 (0x10)
	struct UMaterialInterface* UnderwaterPostProcessMaterial;  // 0x6F0 (0x6F0)
	char pad_1784[8];  // 0x6F8 (0x6F8)


}; 
 
 // ScriptStruct Water.WaterBrushEffectDisplacement
struct FWaterBrushEffectDisplacement
{
	float DisplacementHeight;  // 0x0 (0x0)
	float DisplacementTiling;  // 0x4 (0x4)
	struct UTexture2D* Texture;  // 0x8 (0x8)
	float Midpoint;  // 0x10 (0x10)
	struct FLinearColor Channel;  // 0x14 (0x14)
	float WeightmapInfluence;  // 0x24 (0x24)


}; 
 
 // ScriptStruct Water.WaterBodyHeightmapSettings
struct FWaterBodyHeightmapSettings
{
	uint8_t BlendMode;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bInvertShape : 1;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	struct FWaterFalloffSettings FalloffSettings;  // 0x4 (0x4)
	struct FWaterBrushEffects Effects;  // 0x18 (0x18)
	int32_t Priority;  // 0x78 (0x78)
	char pad_124[4];  // 0x7C (0x7C)


}; 
 
 // ScriptStruct Water.WaterBrushEffects
struct FWaterBrushEffects
{
	struct FWaterBrushEffectBlurring Blurring;  // 0x0 (0x0)
	struct FWaterBrushEffectCurlNoise CurlNoise;  // 0x8 (0x8)
	struct FWaterBrushEffectDisplacement Displacement;  // 0x18 (0x18)
	struct FWaterBrushEffectSmoothBlending SmoothBlending;  // 0x40 (0x40)
	struct FWaterBrushEffectTerracing Terracing;  // 0x48 (0x48)
	char pad_92[4];  // 0x5C (0x5C)


}; 
 
 // Function Water.WaterBodyComponent.GetStandardRenderableComponents
struct FGetStandardRenderableComponents
{
	struct TArray<struct UPrimitiveComponent*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Water.WaterSplineCurveDefaults
struct FWaterSplineCurveDefaults
{
	float DefaultDepth;  // 0x0 (0x0)
	float DefaultWidth;  // 0x4 (0x4)
	float DefaultVelocity;  // 0x8 (0x8)
	float DefaultAudioIntensity;  // 0xC (0xC)


}; 
 
 // ScriptStruct Water.WaterBrushEffectTerracing
struct FWaterBrushEffectTerracing
{
	float TerraceAlpha;  // 0x0 (0x0)
	float TerraceSpacing;  // 0x4 (0x4)
	float TerraceSmoothness;  // 0x8 (0x8)
	float MaskLength;  // 0xC (0xC)
	float MaskStartOffset;  // 0x10 (0x10)


}; 
 
 // Function Water.NiagaraWaterFunctionLibrary.SetWaterBody
struct FSetWaterBody
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FString OverrideName;  // 0x8 (0x8)
	struct AWaterBody* WaterBody;  // 0x18 (0x18)


}; 
 
 // Function Water.WaterBodyComponent.GetWaterVelocityAtSplineInputKey
struct FGetWaterVelocityAtSplineInputKey
{
	float InKey;  // 0x0 (0x0)
	float ReturnValue;  // 0x4 (0x4)


}; 
 
 // ScriptStruct Water.WaterBrushEffectSmoothBlending
struct FWaterBrushEffectSmoothBlending
{
	float InnerSmoothDistance;  // 0x0 (0x0)
	float OuterSmoothDistance;  // 0x4 (0x4)


}; 
 
 // Function Water.WaterBodyComponent.GetWaterLODMaterialInstance
struct FGetWaterLODMaterialInstance
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Water.WaterBrushEffectCurlNoise
struct FWaterBrushEffectCurlNoise
{
	float Curl1Amount;  // 0x0 (0x0)
	float Curl2Amount;  // 0x4 (0x4)
	float Curl1Tiling;  // 0x8 (0x8)
	float Curl2Tiling;  // 0xC (0xC)


}; 
 
 // ScriptStruct Water.WaterFalloffSettings
struct FWaterFalloffSettings
{
	uint8_t FalloffMode;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float FalloffAngle;  // 0x4 (0x4)
	float FalloffWidth;  // 0x8 (0x8)
	float EdgeOffset;  // 0xC (0xC)
	float ZOffset;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Water.WaterBrushEffectCurves
struct FWaterBrushEffectCurves
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bUseCurveChannel : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UCurveFloat* ElevationCurveAsset;  // 0x8 (0x8)
	float ChannelEdgeOffset;  // 0x10 (0x10)
	float ChannelDepth;  // 0x14 (0x14)
	float CurveRampWidth;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function Water.BuoyancyComponent.GetCurrentWaterBodyComponents
struct FGetCurrentWaterBodyComponents
{
	struct TArray<struct UWaterBodyComponent*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterSubsystem.GetOceanBaseHeight
struct FGetOceanBaseHeight
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo
struct FGetLastWaterSurfaceInfo
{
	struct FVector OutWaterPlaneLocation;  // 0x0 (0x0)
	struct FVector OutWaterPlaneNormal;  // 0x18 (0x18)
	struct FVector OutWaterSurfacePosition;  // 0x30 (0x30)
	float OutWaterDepth;  // 0x48 (0x48)
	int32_t OutWaterBodyIdx;  // 0x4C (0x4C)
	struct FVector OutWaterVelocity;  // 0x50 (0x50)


}; 
 
 // Function Water.WaterBodyComponent.OnWaterBodyChanged
struct FOnWaterBodyChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bShapeOrPositionChanged : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWeightmapSettingsChanged : 1;  // 0x1 (0x1)


}; 
 
 // Function Water.BuoyancyComponent.IsInWaterBody
struct FIsInWaterBody
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Water.BuoyancyComponent.IsOverlappingWaterBody
struct FIsOverlappingWaterBody
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
struct FGetShallowWaterSimulationRenderTargetSize
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterBodyComponent.GetIslands
struct FGetIslands
{
	struct TArray<struct AWaterBodyIsland*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.BuoyancyComponent.OnPontoonEnteredWater
struct FOnPontoonEnteredWater
{
	struct FSphericalPontoon Pontoon;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterBody.GetAudioIntensityAtSplineInputKey
struct FGetAudioIntensityAtSplineInputKey
{
	float InKey;  // 0x0 (0x0)
	float ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function Water.BuoyancyComponent.OnPontoonExitedWater
struct FOnPontoonExitedWater
{
	struct FSphericalPontoon Pontoon;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterBodyComponent.GetMaxWaveHeight
struct FGetMaxWaveHeight
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.NiagaraWaterFunctionLibrary.SetWaterBodyComponent
struct FSetWaterBodyComponent
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FString OverrideName;  // 0x8 (0x8)
	struct UWaterBodyComponent* WaterBodyComponent;  // 0x18 (0x18)


}; 
 
 // Function Water.WaterBodyComponent.GetRiverToLakeTransitionMaterialInstance
struct FGetRiverToLakeTransitionMaterialInstance
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
struct FGetShallowWaterMaxImpulseForces
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterBodyComponent.GetRiverToOceanTransitionMaterialInstance
struct FGetRiverToOceanTransitionMaterialInstance
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterBodyComponent.GetWaterMaterialInstance
struct FGetWaterMaterialInstance
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
struct FGetShallowWaterMaxDynamicForces
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterBodyComponent.GetWaterSurfaceInfoAtLocation
struct FGetWaterSurfaceInfoAtLocation
{
	struct FVector InLocation;  // 0x0 (0x0)
	struct FVector OutWaterSurfaceLocation;  // 0x18 (0x18)
	struct FVector OutWaterSurfaceNormal;  // 0x30 (0x30)
	struct FVector OutWaterVelocity;  // 0x48 (0x48)
	float OutWaterDepth;  // 0x60 (0x60)
	char pad_100_1 : 7;  // 0x64 (0x64)
	bool bIncludeDepth : 1;  // 0x64 (0x64)
	char pad_101[3];  // 0x65 (0x65)


}; 
 
 // Function Water.WaterBodyIsland.GetWaterSpline
struct FGetWaterSpline
{
	struct UWaterSplineComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterBody.GetWaterVelocityVectorAtSplineInputKey
struct FGetWaterVelocityVectorAtSplineInputKey
{
	float InKey;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function Water.WaterBodyComponent.GetUnderwaterPostProcessMaterialInstance
struct FGetUnderwaterPostProcessMaterialInstance
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterBody.SetWaterMaterial
struct FSetWaterMaterial
{
	struct UMaterialInterface* InMaterial;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterBody.SetWaterWaves
struct FSetWaterWaves
{
	struct UWaterWavesBase* InWaterWaves;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterBodyComponent.GetCollisionComponents
struct FGetCollisionComponents
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInOnlyEnabledComponents : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct UPrimitiveComponent*> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function Water.WaterBodyComponent.GetWaterBodyActor
struct FGetWaterBodyActor
{
	struct AWaterBody* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterBodyComponent.GetWaterInfoMaterialInstance
struct FGetWaterInfoMaterialInstance
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterBodyComponent.GetWaterMaterial
struct FGetWaterMaterial
{
	struct UMaterialInterface* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterBodyComponent.GetWaterWaves
struct FGetWaterWaves
{
	struct UWaterWavesBase* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterBodyComponent.SetWaterAndUnderWaterPostProcessMaterial
struct FSetWaterAndUnderWaterPostProcessMaterial
{
	struct UMaterialInterface* InWaterMaterial;  // 0x0 (0x0)
	struct UMaterialInterface* InUnderWaterPostProcessMaterial;  // 0x8 (0x8)


}; 
 
 // Function Water.WaterSubsystem.GetOceanTotalHeight
struct FGetOceanTotalHeight
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
struct FGetSmoothedWorldTimeSeconds
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterSubsystem.GetWaterTimeSeconds
struct FGetWaterTimeSeconds
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled
struct FIsShallowWaterSimulationEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
struct FIsUnderwaterPostProcessEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterSubsystem.IsWaterRenderingEnabled
struct FIsWaterRenderingEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Water.WaterSubsystem.PrintToWaterLog
struct FPrintToWaterLog
{
	struct FString Message;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bWarning : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function Water.WaterSubsystem.SetOceanFloodHeight
struct FSetOceanFloodHeight
{
	float InFloodHeight;  // 0x0 (0x0)


}; 
 
 