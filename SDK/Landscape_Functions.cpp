#include "pch.h"
#include "SDK.h"

struct ULandscapeComponent* ULandscapeHeightfieldCollisionComponent::GetRenderComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent");

	FGetRenderComponent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ULandscapeComponent::SetLODBias(int32_t InLODBias){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.SetLODBias");

	FSetLODBias parms{};	
	parms.InLODBias = InLODBias;

	ProcessEvent(fn, &parms);
}

void ULandscapeComponent::SetForcedLOD(int32_t InForcedLOD){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.SetForcedLOD");

	FSetForcedLOD parms{};	
	parms.InForcedLOD = InForcedLOD;

	ProcessEvent(fn, &parms);
}

struct UMaterialInstanceDynamic* ULandscapeComponent::GetMaterialInstanceDynamic(int32_t InIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic");

	FGetMaterialInstanceDynamic parms{};	
	parms.InIndex = InIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float ULandscapeComponent::EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation");

	FEditorGetPaintLayerWeightByNameAtLocation parms{};	
	parms.InLocation = InLocation;
	parms.InPaintLayerName = InPaintLayerName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float ULandscapeComponent::EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation");

	FEditorGetPaintLayerWeightAtLocation parms{};	
	parms.InLocation = InLocation;
	parms.PaintLayer = PaintLayer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ALandscapeProxy::SetVirtualTextureRenderPassType(uint8_t InType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetVirtualTextureRenderPassType");

	FSetVirtualTextureRenderPassType parms{};	
	parms.InType = InType;

	ProcessEvent(fn, &parms);
}

void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue");

	FSetLandscapeMaterialVectorParameterValue parms{};	
	parms.ParameterName = ParameterName;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue");

	FSetLandscapeMaterialTextureParameterValue parms{};	
	parms.ParameterName = ParameterName;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue");

	FSetLandscapeMaterialScalarParameterValue parms{};	
	parms.ParameterName = ParameterName;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

bool ALandscapeProxy::LandscapeExportHeightmapToRenderTarget(struct UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget");

	FLandscapeExportHeightmapToRenderTarget parms{};	
	parms.InRenderTarget = InRenderTarget;
	parms.InExportHeightIntoRGChannel = InExportHeightIntoRGChannel;
	parms.InExportLandscapeProxies = InExportLandscapeProxies;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ALandscape* ALandscapeProxy::GetLandscapeActor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.GetLandscapeActor");

	FGetLandscapeActor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ALandscapeProxy::EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial");

	FEditorSetLandscapeMaterial parms{};	
	parms.NewLandscapeMaterial = NewLandscapeMaterial;

	ProcessEvent(fn, &parms);
}

void ALandscapeProxy::EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer, struct FName EditLayerName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	FEditorApplySpline parms{};	
	parms.InSplineComponent = InSplineComponent;
	parms.StartWidth = StartWidth;
	parms.EndWidth = EndWidth;
	parms.StartSideFalloff = StartSideFalloff;
	parms.EndSideFalloff = EndSideFalloff;
	parms.StartRoll = StartRoll;
	parms.EndRoll = EndRoll;
	parms.NumSubdivisions = NumSubdivisions;
	parms.bRaiseHeights = bRaiseHeights;
	parms.bLowerHeights = bLowerHeights;
	parms.PaintLayer = PaintLayer;
	parms.EditLayerName = EditLayerName;

	ProcessEvent(fn, &parms);
}

void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	FChangeLODDistanceFactor parms{};	
	parms.InLODDistanceFactor = InLODDistanceFactor;

	ProcessEvent(fn, &parms);
}

void ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections");

	FChangeComponentScreenSizeToUseSubSections parms{};	
	parms.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	ProcessEvent(fn, &parms);
}

void ALandscape::RenderHeightmap(struct FTransform& InWorldTransform, struct FBox2D& InExtents, struct UTextureRenderTarget2D* OutRenderTarget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.Landscape.RenderHeightmap");

	FRenderHeightmap parms{};	
	parms.InWorldTransform = InWorldTransform;
	parms.InExtents = InExtents;
	parms.OutRenderTarget = OutRenderTarget;

	ProcessEvent(fn, &parms);
}

void ALandscapeBlueprintBrushBase::RequestLandscapeUpdate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate");

	FRequestLandscapeUpdate parms{};	

	ProcessEvent(fn, &parms);
}

struct UTextureRenderTarget2D* ALandscapeBlueprintBrushBase::Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName& InWeightmapLayerName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintBrushBase.Render");

	FRender parms{};	
	parms.InIsHeightmap = InIsHeightmap;
	parms.InCombinedResult = InCombinedResult;
	parms.InWeightmapLayerName = InWeightmapLayerName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ALandscapeBlueprintBrushBase::Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint& InLandscapeSize, struct FIntPoint& InLandscapeRenderTargetSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintBrushBase.Initialize");

	FInitialize parms{};	
	parms.InLandscapeTransform = InLandscapeTransform;
	parms.InLandscapeSize = InLandscapeSize;
	parms.InLandscapeRenderTargetSize = InLandscapeRenderTargetSize;

	ProcessEvent(fn, &parms);
}

void ALandscapeBlueprintBrushBase::GetBlueprintRenderDependencies(struct TArray<struct UObject*>& OutStreamableAssets){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies");

	FGetBlueprintRenderDependencies parms{};	
	parms.OutStreamableAssets = OutStreamableAssets;

	ProcessEvent(fn, &parms);
}

struct TArray<struct USplineMeshComponent*> ULandscapeSplinesComponent::GetSplineMeshComponents(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents");

	FGetSplineMeshComponents parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

