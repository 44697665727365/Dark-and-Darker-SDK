#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct Landscape.WeightmapData
struct FWeightmapData
{
	struct TArray<struct UTexture2D*> Textures;  // 0x0 (0x0)
	struct TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations;  // 0x10 (0x10)
	struct TArray<struct ULandscapeWeightmapUsage*> TextureUsages;  // 0x20 (0x20)


}; 
 
 // ScriptStruct Landscape.LandscapeSplineInterpPoint
struct FLandscapeSplineInterpPoint
{
	struct FVector Center;  // 0x0 (0x0)
	struct FVector Left;  // 0x18 (0x18)
	struct FVector Right;  // 0x30 (0x30)
	struct FVector FalloffLeft;  // 0x48 (0x48)
	struct FVector FalloffRight;  // 0x60 (0x60)
	struct FVector LayerLeft;  // 0x78 (0x78)
	struct FVector LayerRight;  // 0x90 (0x90)
	struct FVector LayerFalloffLeft;  // 0xA8 (0xA8)
	struct FVector LayerFalloffRight;  // 0xC0 (0xC0)
	float StartEndFalloff;  // 0xD8 (0xD8)
	char pad_220[4];  // 0xDC (0xDC)


}; 
 
 // ScriptStruct Landscape.LandscapePerLODMaterialOverride
struct FLandscapePerLODMaterialOverride
{
	int32_t LODIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UMaterialInterface* Material;  // 0x8 (0x8)


}; 
 
 // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
struct FSetLandscapeMaterialScalarParameterValue
{
	struct FName ParameterName;  // 0x0 (0x0)
	float Value;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Landscape.LandscapeLayerBrush
struct FLandscapeLayerBrush
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct Landscape.LandscapeLayer
struct FLandscapeLayer
{
	struct FGuid Guid;  // 0x0 (0x0)
	struct FName Name;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bVisible : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bLocked : 1;  // 0x19 (0x19)
	char pad_26[2];  // 0x1A (0x1A)
	float HeightmapAlpha;  // 0x1C (0x1C)
	float WeightmapAlpha;  // 0x20 (0x20)
	enum class ELandscapeBlendMode BlendMode;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct TArray<struct FLandscapeLayerBrush> Brushes;  // 0x28 (0x28)
	struct TMap<struct ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend;  // 0x38 (0x38)


}; 
 
 // ScriptStruct Landscape.LandscapeEditToolRenderData
struct FLandscapeEditToolRenderData
{
	struct UMaterialInterface* ToolMaterial;  // 0x0 (0x0)
	struct UMaterialInterface* GizmoMaterial;  // 0x8 (0x8)
	int32_t SelectedType;  // 0x10 (0x10)
	int32_t DebugChannelR;  // 0x14 (0x14)
	int32_t DebugChannelG;  // 0x18 (0x18)
	int32_t DebugChannelB;  // 0x1C (0x1C)
	struct UTexture2D* DataTexture;  // 0x20 (0x20)
	struct UTexture2D* LayerContributionTexture;  // 0x28 (0x28)
	struct UTexture2D* DirtyTexture;  // 0x30 (0x30)


}; 
 
 // ScriptStruct Landscape.WeightmapLayerAllocationInfo
struct FWeightmapLayerAllocationInfo
{
	struct ULandscapeLayerInfoObject* LayerInfo;  // 0x0 (0x0)
	char WeightmapTextureIndex;  // 0x8 (0x8)
	char WeightmapTextureChannel;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)


}; 
 
 // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
struct FSetLandscapeMaterialTextureParameterValue
{
	struct FName ParameterName;  // 0x0 (0x0)
	struct UTexture* Value;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Landscape.HeightmapData
struct FHeightmapData
{
	struct UTexture2D* Texture;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Landscape.LandscapeComponentMaterialOverride
struct FLandscapeComponentMaterialOverride
{
	struct FPerPlatformInt LODIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UMaterialInterface* Material;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Landscape.LandscapeLayerComponentData
struct FLandscapeLayerComponentData
{
	struct FHeightmapData HeightmapData;  // 0x0 (0x0)
	struct FWeightmapData WeightmapData;  // 0x8 (0x8)


}; 
 
 // Function Landscape.LandscapeProxy.EditorApplySpline
struct FEditorApplySpline
{
	struct USplineComponent* InSplineComponent;  // 0x0 (0x0)
	float StartWidth;  // 0x8 (0x8)
	float EndWidth;  // 0xC (0xC)
	float StartSideFalloff;  // 0x10 (0x10)
	float EndSideFalloff;  // 0x14 (0x14)
	float StartRoll;  // 0x18 (0x18)
	float EndRoll;  // 0x1C (0x1C)
	int32_t NumSubdivisions;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool bRaiseHeights : 1;  // 0x24 (0x24)
	char pad_37_1 : 7;  // 0x25 (0x25)
	bool bLowerHeights : 1;  // 0x25 (0x25)
	char pad_38[2];  // 0x26 (0x26)
	struct ULandscapeLayerInfoObject* PaintLayer;  // 0x28 (0x28)
	struct FName EditLayerName;  // 0x30 (0x30)


}; 
 
 // ScriptStruct Landscape.GizmoSelectData
struct FGizmoSelectData
{
	char pad_0[80];  // 0x0 (0x0)


}; 
 
 // ScriptStruct Landscape.GrassVariety
struct FGrassVariety
{
	struct UStaticMesh* GrassMesh;  // 0x0 (0x0)
	struct TArray<struct UMaterialInterface*> OverrideMaterials;  // 0x8 (0x8)
	struct FPerPlatformFloat GrassDensity;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bUseGrid : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	float PlacementJitter;  // 0x20 (0x20)
	struct FPerPlatformInt StartCullDistance;  // 0x24 (0x24)
	struct FPerPlatformInt EndCullDistance;  // 0x28 (0x28)
	int32_t MinLOD;  // 0x2C (0x2C)
	uint8_t Scaling;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	struct FFloatInterval ScaleX;  // 0x34 (0x34)
	struct FFloatInterval ScaleY;  // 0x3C (0x3C)
	struct FFloatInterval ScaleZ;  // 0x44 (0x44)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool RandomRotation : 1;  // 0x4C (0x4C)
	char pad_77_1 : 7;  // 0x4D (0x4D)
	bool AlignToSurface : 1;  // 0x4D (0x4D)
	char pad_78_1 : 7;  // 0x4E (0x4E)
	bool bUseLandscapeLightmap : 1;  // 0x4E (0x4E)
	struct FLightingChannels LightingChannels;  // 0x4F (0x4F)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bReceivesDecals : 1;  // 0x50 (0x50)
	char pad_81_1 : 7;  // 0x51 (0x51)
	bool bCastDynamicShadow : 1;  // 0x51 (0x51)
	char pad_82_1 : 7;  // 0x52 (0x52)
	bool bCastContactShadow : 1;  // 0x52 (0x52)
	char pad_83_1 : 7;  // 0x53 (0x53)
	bool bKeepInstanceBufferCPUCopy : 1;  // 0x53 (0x53)
	uint32_t InstanceWorldPositionOffsetDisableDistance;  // 0x54 (0x54)


}; 
 
 // ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
struct FLandscapeMaterialTextureStreamingInfo
{
	struct FName TextureName;  // 0x0 (0x0)
	float TexelFactor;  // 0x8 (0x8)


}; 
 
 // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
struct FGetSplineMeshComponents
{
	struct TArray<struct USplineMeshComponent*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Landscape.LandscapeSplineConnection
struct FLandscapeSplineConnection
{
	struct ULandscapeSplineSegment* Segment;  // 0x0 (0x0)
	char End : 1;  // 0x8 (0x8)
	char pad_8_1 : 7;  // 0x8 (0x8)
	char pad_9[8];  // 0x9 (0x9)


}; 
 
 // ScriptStruct Landscape.LandscapeInfoLayerSettings
struct FLandscapeInfoLayerSettings
{
	struct ULandscapeLayerInfoObject* LayerInfoObj;  // 0x0 (0x0)
	struct FName LayerName;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Landscape.ForeignControlPointData
struct FForeignControlPointData
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct Landscape.ForeignSplineSegmentData
struct FForeignSplineSegmentData
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct Landscape.ForeignWorldSplineData
struct FForeignWorldSplineData
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // Function Landscape.Landscape.RenderHeightmap
struct FRenderHeightmap
{
	struct FTransform InWorldTransform;  // 0x0 (0x0)
	struct FBox2D InExtents;  // 0x60 (0x60)
	struct UTextureRenderTarget2D* OutRenderTarget;  // 0x88 (0x88)


}; 
 
 // ScriptStruct Landscape.LandscapeSplineSegmentConnection
struct FLandscapeSplineSegmentConnection
{
	struct ULandscapeSplineControlPoint* ControlPoint;  // 0x0 (0x0)
	float TangentLen;  // 0x8 (0x8)
	struct FName SocketName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct Landscape.LandscapeSplineMeshEntry
struct FLandscapeSplineMeshEntry
{
	struct UStaticMesh* Mesh;  // 0x0 (0x0)
	struct TArray<struct UMaterialInterface*> MaterialOverrides;  // 0x8 (0x8)
	char bCenterH : 1;  // 0x18 (0x18)
	char pad_24_1 : 7;  // 0x18 (0x18)
	char pad_25[8];  // 0x19 (0x19)
	struct FVector2D CenterAdjust;  // 0x20 (0x20)
	char bScaleToWidth : 1;  // 0x30 (0x30)
	char pad_48_1 : 7;  // 0x30 (0x30)
	char pad_49[8];  // 0x31 (0x31)
	struct FVector Scale;  // 0x38 (0x38)
	enum class LandscapeSplineMeshOrientation Orientation;  // 0x50 (0x50)
	enum class ESplineMeshAxis ForwardAxis;  // 0x51 (0x51)
	enum class ESplineMeshAxis UpAxis;  // 0x52 (0x52)
	char pad_83[5];  // 0x53 (0x53)


}; 
 
 // Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
struct FGetBlueprintRenderDependencies
{
	struct TArray<struct UObject*> OutStreamableAssets;  // 0x0 (0x0)


}; 
 
 // Function Landscape.LandscapeComponent.SetLODBias
struct FSetLODBias
{
	int32_t InLODBias;  // 0x0 (0x0)


}; 
 
 // Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
struct FLandscapeExportHeightmapToRenderTarget
{
	struct UTextureRenderTarget2D* InRenderTarget;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool InExportHeightIntoRGChannel : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool InExportLandscapeProxies : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool ReturnValue : 1;  // 0xA (0xA)
	char pad_11[5];  // 0xB (0xB)


}; 
 
 // ScriptStruct Landscape.GrassInput
struct FGrassInput
{
	struct FName Name;  // 0x0 (0x0)
	struct ULandscapeGrassType* GrassType;  // 0x8 (0x8)
	struct FExpressionInput Input;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Landscape.LandscapeProxyMaterialOverride
struct FLandscapeProxyMaterialOverride
{
	struct FPerPlatformInt LODIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UMaterialInterface* Material;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Landscape.LayerBlendInput
struct FLayerBlendInput
{
	struct FName LayerName;  // 0x0 (0x0)
	enum class ELandscapeLayerBlendType BlendType;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FExpressionInput LayerInput;  // 0x10 (0x10)
	struct FExpressionInput HeightInput;  // 0x38 (0x38)
	float PreviewWeight;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)
	struct FVector ConstLayerInput;  // 0x68 (0x68)
	float ConstHeightInput;  // 0x80 (0x80)
	char pad_132[4];  // 0x84 (0x84)


}; 
 
 // ScriptStruct Landscape.LandscapeEditorLayerSettings
struct FLandscapeEditorLayerSettings
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
struct FGetRenderComponent
{
	struct ULandscapeComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Landscape.LandscapeLayerStruct
struct FLandscapeLayerStruct
{
	struct ULandscapeLayerInfoObject* LayerInfoObj;  // 0x0 (0x0)


}; 
 
 // Function Landscape.LandscapeProxy.SetVirtualTextureRenderPassType
struct FSetVirtualTextureRenderPassType
{
	uint8_t InType;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Landscape.LandscapeImportLayerInfo
struct FLandscapeImportLayerInfo
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct Landscape.PhysicalMaterialInput
struct FPhysicalMaterialInput
{
	struct UPhysicalMaterial* PhysicalMaterial;  // 0x0 (0x0)
	struct FExpressionInput Input;  // 0x8 (0x8)


}; 
 
 // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
struct FChangeComponentScreenSizeToUseSubSections
{
	float InComponentScreenSizeToUseSubSections;  // 0x0 (0x0)


}; 
 
 // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
struct FChangeLODDistanceFactor
{
	float InLODDistanceFactor;  // 0x0 (0x0)


}; 
 
 // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
struct FEditorSetLandscapeMaterial
{
	struct UMaterialInterface* NewLandscapeMaterial;  // 0x0 (0x0)


}; 
 
 // Function Landscape.LandscapeComponent.SetForcedLOD
struct FSetForcedLOD
{
	int32_t InForcedLOD;  // 0x0 (0x0)


}; 
 
 // Function Landscape.LandscapeProxy.GetLandscapeActor
struct FGetLandscapeActor
{
	struct ALandscape* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
struct FSetLandscapeMaterialVectorParameterValue
{
	struct FName ParameterName;  // 0x0 (0x0)
	struct FLinearColor Value;  // 0x8 (0x8)


}; 
 
 // Function Landscape.LandscapeBlueprintBrushBase.Initialize
struct FInitialize
{
	struct FTransform InLandscapeTransform;  // 0x0 (0x0)
	struct FIntPoint InLandscapeSize;  // 0x60 (0x60)
	struct FIntPoint InLandscapeRenderTargetSize;  // 0x68 (0x68)


}; 
 
 // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
struct FEditorGetPaintLayerWeightAtLocation
{
	struct FVector InLocation;  // 0x0 (0x0)
	struct ULandscapeLayerInfoObject* PaintLayer;  // 0x18 (0x18)
	float ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
struct FEditorGetPaintLayerWeightByNameAtLocation
{
	struct FVector InLocation;  // 0x0 (0x0)
	struct FName InPaintLayerName;  // 0x18 (0x18)
	float ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
struct FGetMaterialInstanceDynamic
{
	int32_t InIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function Landscape.LandscapeBlueprintBrushBase.Render
struct FRender
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InIsHeightmap : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UTextureRenderTarget2D* InCombinedResult;  // 0x8 (0x8)
	struct FName InWeightmapLayerName;  // 0x10 (0x10)
	struct UTextureRenderTarget2D* ReturnValue;  // 0x18 (0x18)


}; 
 
 