#pragma once 
#include <Landscape_Structs.h>
 
 
 
// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x640(Inherited: 0x540)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent
{
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos;  // 0x538 (0x538)
	int32_t SectionBaseX;  // 0x548 (0x548)
	int32_t SectionBaseY;  // 0x54C (0x54C)
	int32_t CollisionSizeQuads;  // 0x550 (0x550)
	float CollisionScale;  // 0x554 (0x554)
	int32_t SimpleCollisionSizeQuads;  // 0x558 (0x558)
	struct TArray<char> CollisionQuadFlags;  // 0x560 (0x560)
	struct FGuid HeightfieldGuid;  // 0x570 (0x570)
	struct FBox CachedLocalBox;  // 0x580 (0x580)
	 RenderComponent;  // 0x5B8 (0x5B8)
	char pad_1496[16];  // 0x5D8 (0x5D8)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials;  // 0x5E8 (0x5E8)
	char pad_1528[72];  // 0x5F8 (0x5F8)


	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
}; 
 
 


// Class Landscape.ControlPointMeshComponent
// Size: 0x600(Inherited: 0x5F0)
struct UControlPointMeshComponent : UStaticMeshComponent
{
	float VirtualTextureMainPassMaxDrawDistance;  // 0x5F0 (0x5F0)
	char pad_1524[12];  // 0x5F4 (0x5F4)


}; 
 
 


// Class Landscape.LandscapeComponent
// Size: 0x750(Inherited: 0x540)
struct ULandscapeComponent : UPrimitiveComponent
{
	int32_t SectionBaseX;  // 0x538 (0x538)
	int32_t SectionBaseY;  // 0x53C (0x53C)
	int32_t ComponentSizeQuads;  // 0x540 (0x540)
	int32_t SubsectionSizeQuads;  // 0x544 (0x544)
	int32_t NumSubsections;  // 0x548 (0x548)
	struct UMaterialInterface* OverrideMaterial;  // 0x550 (0x550)
	struct UMaterialInterface* OverrideHoleMaterial;  // 0x558 (0x558)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances;  // 0x560 (0x560)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic;  // 0x570 (0x570)
	struct TArray<int8_t> LODIndexToMaterialIndex;  // 0x580 (0x580)
	struct UTexture2D* XYOffsetmapTexture;  // 0x590 (0x590)
	char pad_1436[4];  // 0x59C (0x59C)
	struct FVector4 WeightmapScaleBias;  // 0x5A0 (0x5A0)
	float WeightmapSubsectionOffset;  // 0x5C0 (0x5C0)
	char pad_1476[12];  // 0x5C4 (0x5C4)
	struct FVector4 HeightmapScaleBias;  // 0x5D0 (0x5D0)
	struct FBox CachedLocalBox;  // 0x5F0 (0x5F0)
	 CollisionComponent;  // 0x628 (0x628)
	char pad_1604_1 : 7;  // 0x644 (0x644)
	bool bNaniteActive : 1;  // 0x644 (0x644)
	char pad_1605[3];  // 0x645 (0x645)
	struct UTexture2D* HeightmapTexture;  // 0x648 (0x648)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;  // 0x650 (0x650)
	struct TArray<struct UTexture2D*> WeightmapTextures;  // 0x660 (0x660)
	struct TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials;  // 0x670 (0x670)
	struct FGuid MapBuildDataId;  // 0x680 (0x680)
	struct TArray<struct FGuid> IrrelevantLights;  // 0x690 (0x690)
	int32_t CollisionMipLevel;  // 0x6A0 (0x6A0)
	int32_t SimpleCollisionMipLevel;  // 0x6A4 (0x6A4)
	float NegativeZBoundsExtension;  // 0x6A8 (0x6A8)
	float PositiveZBoundsExtension;  // 0x6AC (0x6AC)
	float StaticLightingResolution;  // 0x6B0 (0x6B0)
	int32_t ForcedLOD;  // 0x6B4 (0x6B4)
	int32_t LODBias;  // 0x6B8 (0x6B8)
	struct FGuid StateId;  // 0x6BC (0x6BC)
	struct FGuid BakedTextureMaterialGuid;  // 0x6CC (0x6CC)
	struct FGuid LastBakedTextureMaterialGuid;  // 0x6DC (0x6DC)
	char pad_1772[4];  // 0x6EC (0x6EC)
	struct UTexture2D* GIBakedBaseColorTexture;  // 0x6F0 (0x6F0)
	struct UMaterialInterface* MobileMaterialInterface;  // 0x6F8 (0x6F8)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces;  // 0x700 (0x700)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures;  // 0x710 (0x710)
	char pad_1824[48];  // 0x720 (0x720)


	void SetLODBias(int32_t InLODBias); // Function Landscape.LandscapeComponent.SetLODBias
	void SetForcedLOD(int32_t InForcedLOD); // Function Landscape.LandscapeComponent.SetForcedLOD
	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
}; 
 
 


// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x2E0(Inherited: 0x290)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor
{
	char pad_656[80];  // 0x290 (0x290)


}; 
 
 


// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
// Size: 0xC0(Inherited: 0xB0)
struct UMaterialExpressionLandscapePhysicalMaterialOutput : UMaterialExpressionCustomOutput
{
	struct TArray<struct FPhysicalMaterialInput> Inputs;  // 0xB0 (0xB0)


}; 
 
 


// Class Landscape.ControlPointMeshActor
// Size: 0x298(Inherited: 0x290)
struct AControlPointMeshActor : AActor
{
	struct UControlPointMeshComponent* ControlPointMeshComponent;  // 0x290 (0x290)


}; 
 
 


// Class Landscape.LandscapeSplineInterface
// Size: 0x28(Inherited: 0x28)
struct ULandscapeSplineInterface : UInterface
{


}; 
 
 


// Class Landscape.LandscapeProxy
// Size: 0x5E0(Inherited: 0x290)
struct ALandscapeProxy : APartitionActor
{
	char pad_656[8];  // 0x290 (0x290)
	struct ULandscapeSplinesComponent* SplineComponent;  // 0x298 (0x298)
	struct FGuid LandscapeGuid;  // 0x2A0 (0x2A0)
	struct TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials;  // 0x2B0 (0x2B0)
	struct FIntPoint LandscapeSectionOffset;  // 0x2C0 (0x2C0)
	int32_t MaxLODLevel;  // 0x2C8 (0x2C8)
	float ComponentScreenSizeToUseSubSections;  // 0x2CC (0x2CC)
	float LOD0ScreenSize;  // 0x2D0 (0x2D0)
	float LOD0DistributionSetting;  // 0x2D4 (0x2D4)
	float LODDistributionSetting;  // 0x2D8 (0x2D8)
	int32_t StaticLightingLOD;  // 0x2DC (0x2DC)
	struct UPhysicalMaterial* DefaultPhysMaterial;  // 0x2E0 (0x2E0)
	float StreamingDistanceMultiplier;  // 0x2E8 (0x2E8)
	char pad_748[4];  // 0x2EC (0x2EC)
	struct UMaterialInterface* LandscapeMaterial;  // 0x2F0 (0x2F0)
	char pad_760[32];  // 0x2F8 (0x2F8)
	struct UMaterialInterface* LandscapeHoleMaterial;  // 0x318 (0x318)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures;  // 0x320 (0x320)
	char pad_816_1 : 7;  // 0x330 (0x330)
	bool bSetCreateRuntimeVirtualTextureVolumes : 1;  // 0x330 (0x330)
	char pad_817[3];  // 0x331 (0x331)
	int32_t VirtualTextureNumLods;  // 0x334 (0x334)
	int32_t VirtualTextureLodBias;  // 0x338 (0x338)
	uint8_t VirtualTextureRenderPassType;  // 0x33C (0x33C)
	char pad_829[3];  // 0x33D (0x33D)
	float NegativeZBoundsExtension;  // 0x340 (0x340)
	float PositiveZBoundsExtension;  // 0x344 (0x344)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents;  // 0x348 (0x348)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents;  // 0x358 (0x358)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;  // 0x368 (0x368)
	struct ULandscapeNaniteComponent* NaniteComponent;  // 0x378 (0x378)
	char pad_896[100];  // 0x380 (0x380)
	char pad_996_1 : 7;  // 0x3E4 (0x3E4)
	bool bHasLandscapeGrass : 1;  // 0x3E4 (0x3E4)
	char pad_997[3];  // 0x3E5 (0x3E5)
	float StaticLightingResolution;  // 0x3E8 (0x3E8)
	char CastShadow : 1;  // 0x3EC (0x3EC)
	char bCastDynamicShadow : 1;  // 0x3EC (0x3EC)
	char bCastStaticShadow : 1;  // 0x3EC (0x3EC)
	char bCastContactShadow : 1;  // 0x3EC (0x3EC)
	char pad_1004_1 : 4;  // 0x3EC (0x3EC)
	char pad_1005[4];  // 0x3ED (0x3ED)
	char bCastFarShadow : 1;  // 0x3F0 (0x3F0)
	char pad_1008_1 : 7;  // 0x3F0 (0x3F0)
	char pad_1009[4];  // 0x3F1 (0x3F1)
	char bCastHiddenShadow : 1;  // 0x3F4 (0x3F4)
	char pad_1012_1 : 7;  // 0x3F4 (0x3F4)
	char pad_1013[4];  // 0x3F5 (0x3F5)
	char bCastShadowAsTwoSided : 1;  // 0x3F8 (0x3F8)
	char pad_1016_1 : 7;  // 0x3F8 (0x3F8)
	char pad_1017[4];  // 0x3F9 (0x3F9)
	char bAffectDistanceFieldLighting : 1;  // 0x3FC (0x3FC)
	char pad_1020_1 : 7;  // 0x3FC (0x3FC)
	struct FLightingChannels LightingChannels;  // 0x3FD (0x3FD)
	char pad_1022[2];  // 0x3FE (0x3FE)
	char bUseMaterialPositionOffsetInStaticLighting : 1;  // 0x400 (0x400)
	char bRenderCustomDepth : 1;  // 0x400 (0x400)
	char pad_1024_1 : 6;  // 0x400 (0x400)
	char pad_1025[4];  // 0x401 (0x401)
	uint8_t CustomDepthStencilWriteMask;  // 0x404 (0x404)
	char pad_1029[3];  // 0x405 (0x405)
	int32_t CustomDepthStencilValue;  // 0x408 (0x408)
	float LDMaxDrawDistance;  // 0x40C (0x40C)
	struct FLightmassPrimitiveSettings LightmassSettings;  // 0x410 (0x410)
	int32_t CollisionMipLevel;  // 0x428 (0x428)
	int32_t SimpleCollisionMipLevel;  // 0x42C (0x42C)
	float CollisionThickness;  // 0x430 (0x430)
	char pad_1076[4];  // 0x434 (0x434)
	struct FBodyInstance BodyInstance;  // 0x438 (0x438)
	char bGenerateOverlapEvents : 1;  // 0x5C8 (0x5C8)
	char bBakeMaterialPositionOffsetIntoCollision : 1;  // 0x5C8 (0x5C8)
	char pad_1480_1 : 6;  // 0x5C8 (0x5C8)
	char pad_1481[4];  // 0x5C9 (0x5C9)
	int32_t ComponentSizeQuads;  // 0x5CC (0x5CC)
	int32_t SubsectionSizeQuads;  // 0x5D0 (0x5D0)
	int32_t NumSubsections;  // 0x5D4 (0x5D4)
	char bUsedForNavigation : 1;  // 0x5D8 (0x5D8)
	char bFillCollisionUnderLandscapeForNavmesh : 1;  // 0x5D8 (0x5D8)
	char pad_1496_1 : 6;  // 0x5D8 (0x5D8)
	char pad_1497[4];  // 0x5D9 (0x5D9)
	char pad_1500_1 : 7;  // 0x5DC (0x5DC)
	bool bUseDynamicMaterialInstance : 1;  // 0x5DC (0x5DC)
	uint8_t NavigationGeometryGatheringMode;  // 0x5DD (0x5DD)
	char pad_1502_1 : 7;  // 0x5DE (0x5DE)
	bool bUseLandscapeForCullingInvisibleHLODVertices : 1;  // 0x5DE (0x5DE)
	char pad_1503_1 : 7;  // 0x5DF (0x5DF)
	bool bHasLayersContent : 1;  // 0x5DF (0x5DF)


	void SetVirtualTextureRenderPassType(uint8_t InType); // Function Landscape.LandscapeProxy.SetVirtualTextureRenderPassType
	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	bool LandscapeExportHeightmapToRenderTarget(struct UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
	struct ALandscape* GetLandscapeActor(); // Function Landscape.LandscapeProxy.GetLandscapeActor
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer, struct FName EditLayerName); // Function Landscape.LandscapeProxy.EditorApplySpline
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
}; 
 
 


// Class Landscape.Landscape
// Size: 0x5E0(Inherited: 0x5E0)
struct ALandscape : ALandscapeProxy
{


	void RenderHeightmap(struct FTransform& InWorldTransform, struct FBox2D& InExtents, struct UTextureRenderTarget2D* OutRenderTarget); // Function Landscape.Landscape.RenderHeightmap
}; 
 
 


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x110(Inherited: 0xB0)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression
{
	struct FExpressionInput LayerUsed;  // 0xB0 (0xB0)
	struct FExpressionInput LayerNotUsed;  // 0xD8 (0xD8)
	struct FName ParameterName;  // 0x100 (0x100)
	char PreviewUsed : 1;  // 0x108 (0x108)
	char pad_264_1 : 7;  // 0x108 (0x108)
	char pad_265[8];  // 0x109 (0x109)


}; 
 
 


// Class Landscape.LandscapeLayerInfoObject
// Size: 0x50(Inherited: 0x28)
struct ULandscapeLayerInfoObject : UObject
{
	struct FName LayerName;  // 0x28 (0x28)
	struct UPhysicalMaterial* PhysMaterial;  // 0x30 (0x30)
	float Hardness;  // 0x38 (0x38)
	struct FLinearColor LayerUsageDebugColor;  // 0x3C (0x3C)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 


// Class Landscape.LandscapeLODStreamingProxy_DEPRECATED
// Size: 0xD0(Inherited: 0xD0)
struct ULandscapeLODStreamingProxy_DEPRECATED : UStreamableRenderAsset
{


}; 
 
 


// Class Landscape.LandscapeGizmoActor
// Size: 0x290(Inherited: 0x290)
struct ALandscapeGizmoActor : AActor
{


}; 
 
 


// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x540(Inherited: 0x540)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent
{


}; 
 
 


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0xC0(Inherited: 0xB0)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput
{
	struct TArray<struct FGrassInput> GrassTypes;  // 0xB0 (0xB0)


}; 
 
 


// Class Landscape.LandscapeGrassType
// Size: 0x60(Inherited: 0x28)
struct ULandscapeGrassType : UObject
{
	struct TArray<struct FGrassVariety> GrassVarieties;  // 0x28 (0x28)
	char bEnableDensityScaling : 1;  // 0x38 (0x38)
	char pad_56_1 : 7;  // 0x38 (0x38)
	char pad_57[8];  // 0x39 (0x39)
	struct UStaticMesh* GrassMesh;  // 0x40 (0x40)
	float GrassDensity;  // 0x48 (0x48)
	float PlacementJitter;  // 0x4C (0x4C)
	int32_t StartCullDistance;  // 0x50 (0x50)
	int32_t EndCullDistance;  // 0x54 (0x54)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool RandomRotation : 1;  // 0x58 (0x58)
	char pad_89_1 : 7;  // 0x59 (0x59)
	bool AlignToSurface : 1;  // 0x59 (0x59)
	char pad_90[6];  // 0x5A (0x5A)


}; 
 
 


// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x218(Inherited: 0x200)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant
{
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo;  // 0x200 (0x200)
	char bIsLayerThumbnail : 1;  // 0x210 (0x210)
	char bDisableTessellation : 1;  // 0x210 (0x210)
	char bMobile : 1;  // 0x210 (0x210)
	char bEditorToolUsage : 1;  // 0x210 (0x210)
	char pad_528_1 : 4;  // 0x210 (0x210)
	char pad_529[8];  // 0x211 (0x211)


}; 
 
 


// Class Landscape.LandscapeInfoMap
// Size: 0x80(Inherited: 0x28)
struct ULandscapeInfoMap : UObject
{
	char pad_40[88];  // 0x28 (0x28)


}; 
 
 


// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x650(Inherited: 0x640)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent
{
	struct FGuid MeshGuid;  // 0x638 (0x638)


}; 
 
 


// Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x290(Inherited: 0x290)
struct ALandscapeBlueprintBrushBase : AActor
{


	void RequestLandscapeUpdate(); // Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName& InWeightmapLayerName); // Function Landscape.LandscapeBlueprintBrushBase.Render
	void Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint& InLandscapeSize, struct FIntPoint& InLandscapeRenderTargetSize); // Function Landscape.LandscapeBlueprintBrushBase.Initialize
	void GetBlueprintRenderDependencies(struct TArray<struct UObject*>& OutStreamableAssets); // Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
}; 
 
 


// Class Landscape.LandscapeMeshProxyActor
// Size: 0x298(Inherited: 0x290)
struct ALandscapeMeshProxyActor : AActor
{
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent;  // 0x290 (0x290)


}; 
 
 


// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x620(Inherited: 0x5F0)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent
{
	struct FGuid LandscapeGuid;  // 0x5F0 (0x5F0)
	struct TArray<struct FIntPoint> ProxyComponentBases;  // 0x600 (0x600)
	int8_t ProxyLOD;  // 0x610 (0x610)
	char pad_1553[15];  // 0x611 (0x611)


}; 
 
 


// Class Landscape.LandscapeSettings
// Size: 0xA8(Inherited: 0x38)
struct ULandscapeSettings : UDeveloperSettings
{
	int32_t MaxNumberOfLayers;  // 0x38 (0x38)
	int32_t SideResolutionLimit;  // 0x3C (0x3C)
	struct TSoftObjectPtr<UMaterialInterface> DefaultLandscapeMaterial;  // 0x40 (0x40)
	struct TSoftObjectPtr<ULandscapeLayerInfoObject> DefaultLayerInfoObject;  // 0x70 (0x70)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool bRestrictiveMode : 1;  // 0xA0 (0xA0)
	char pad_161[7];  // 0xA1 (0xA1)


}; 
 
 


// Class Landscape.LandscapeSplinesComponent
// Size: 0x570(Inherited: 0x540)
struct ULandscapeSplinesComponent : UPrimitiveComponent
{
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints;  // 0x538 (0x538)
	struct TArray<struct ULandscapeSplineSegment*> Segments;  // 0x548 (0x548)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents;  // 0x558 (0x558)


	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
}; 
 
 


// Class Landscape.LandscapeSplineControlPoint
// Size: 0xD8(Inherited: 0x28)
struct ULandscapeSplineControlPoint : UObject
{
	struct FVector Location;  // 0x28 (0x28)
	struct FRotator Rotation;  // 0x40 (0x40)
	float Width;  // 0x58 (0x58)
	float LayerWidthRatio;  // 0x5C (0x5C)
	float SideFalloff;  // 0x60 (0x60)
	float LeftSideFalloffFactor;  // 0x64 (0x64)
	float RightSideFalloffFactor;  // 0x68 (0x68)
	float LeftSideLayerFalloffFactor;  // 0x6C (0x6C)
	float RightSideLayerFalloffFactor;  // 0x70 (0x70)
	float EndFalloff;  // 0x74 (0x74)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments;  // 0x78 (0x78)
	struct TArray<struct FLandscapeSplineInterpPoint> Points;  // 0x88 (0x88)
	struct FBox Bounds;  // 0x98 (0x98)
	struct UControlPointMeshComponent* LocalMeshComponent;  // 0xD0 (0xD0)


}; 
 
 


// Class Landscape.LandscapeInfo
// Size: 0x238(Inherited: 0x28)
struct ULandscapeInfo : UObject
{
	 LandscapeActor;  // 0x28 (0x28)
	struct FGuid LandscapeGuid;  // 0x44 (0x44)
	int32_t ComponentSizeQuads;  // 0x54 (0x54)
	int32_t SubsectionSizeQuads;  // 0x58 (0x58)
	int32_t ComponentNumSubsections;  // 0x5C (0x5C)
	struct FVector DrawScale;  // 0x60 (0x60)
	char pad_120[176];  // 0x78 (0x78)
	struct TArray<struct TWeakObjectPtr<ALandscapeStreamingProxy>> StreamingProxies;  // 0x128 (0x128)
	char pad_312[256];  // 0x138 (0x138)


}; 
 
 


// Class Landscape.LandscapeSplineSegment
// Size: 0xC8(Inherited: 0x28)
struct ULandscapeSplineSegment : UObject
{
	struct FLandscapeSplineSegmentConnection Connections[2];  // 0x28 (0x28)
	struct FInterpCurveVector SplineInfo;  // 0x58 (0x58)
	struct TArray<struct FLandscapeSplineInterpPoint> Points;  // 0x70 (0x70)
	struct FBox Bounds;  // 0x80 (0x80)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents;  // 0xB8 (0xB8)


}; 
 
 


// Class Landscape.LandscapeStreamingProxy
// Size: 0x600(Inherited: 0x5E0)
struct ALandscapeStreamingProxy : ALandscapeProxy
{
	 LandscapeActor;  // 0x5E0 (0x5E0)
	char pad_1532[4];  // 0x5FC (0x5FC)


}; 
 
 


// Class Landscape.LandscapeWeightmapUsage
// Size: 0x58(Inherited: 0x28)
struct ULandscapeWeightmapUsage : UObject
{
	struct ULandscapeComponent* ChannelUsage[4];  // 0x28 (0x28)
	struct FGuid LayerGuid;  // 0x48 (0x48)


}; 
 
 


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0xC0(Inherited: 0xB0)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression
{
	struct TArray<struct FLayerBlendInput> Layers;  // 0xB0 (0xB0)


}; 
 
 


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0xC8(Inherited: 0xB0)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression
{
	enum class ETerrainCoordMappingType MappingType;  // 0xB0 (0xB0)
	enum class ELandscapeCustomizedCoordType CustomUVType;  // 0xB1 (0xB1)
	char pad_178[2];  // 0xB2 (0xB2)
	float MappingScale;  // 0xB4 (0xB4)
	float MappingRotation;  // 0xB8 (0xB8)
	float MappingPanU;  // 0xBC (0xBC)
	float MappingPanV;  // 0xC0 (0xC0)
	char pad_196[4];  // 0xC4 (0xC4)


}; 
 
 


// Class Landscape.LandscapeHLODBuilder
// Size: 0x28(Inherited: 0x28)
struct ULandscapeHLODBuilder : UHLODBuilder
{


}; 
 
 


// Class Landscape.LandscapeNaniteComponent
// Size: 0x610(Inherited: 0x5F0)
struct ULandscapeNaniteComponent : UStaticMeshComponent
{
	struct FGuid ProxyContentId;  // 0x5F0 (0x5F0)
	char pad_1536_1 : 7;  // 0x600 (0x600)
	bool bEnabled : 1;  // 0x600 (0x600)
	char pad_1537[15];  // 0x601 (0x601)


}; 
 
 


// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0xC0(Inherited: 0xB0)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression
{
	struct FName ParameterName;  // 0xB0 (0xB0)
	float PreviewWeight;  // 0xB8 (0xB8)
	char pad_188[4];  // 0xBC (0xBC)


}; 
 
 


// Class Landscape.LandscapeSplineActor
// Size: 0x2A8(Inherited: 0x290)
struct ALandscapeSplineActor : AActor
{
	char pad_656[8];  // 0x290 (0x290)
	struct FGuid LandscapeGuid;  // 0x298 (0x298)


}; 
 
 


// Class Landscape.LandscapeSplineMeshesActor
// Size: 0x2A0(Inherited: 0x290)
struct ALandscapeSplineMeshesActor : APartitionActor
{
	struct TArray<struct UStaticMeshComponent*> StaticMeshComponents;  // 0x290 (0x290)


}; 
 
 


// Class Landscape.LandscapeSubsystem
// Size: 0x50(Inherited: 0x40)
struct ULandscapeSubsystem : UTickableWorldSubsystem
{
	char pad_64[16];  // 0x40 (0x40)


}; 
 
 


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x128(Inherited: 0xB0)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression
{
	struct FExpressionInput Base;  // 0xB0 (0xB0)
	struct FExpressionInput Layer;  // 0xD8 (0xD8)
	struct FName ParameterName;  // 0x100 (0x100)
	float PreviewWeight;  // 0x108 (0x108)
	char pad_268[4];  // 0x10C (0x10C)
	struct FVector ConstBase;  // 0x110 (0x110)


}; 
 
 


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0xB0(Inherited: 0xB0)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression
{


}; 
 
 


