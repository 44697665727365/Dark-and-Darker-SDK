#include "pch.h"
#include "SDK.h"

void UBuoyancyComponent::OnPontoonExitedWater(struct FSphericalPontoon& Pontoon){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.OnPontoonExitedWater");

	FOnPontoonExitedWater parms{};	
	parms.Pontoon = Pontoon;

	ProcessEvent(fn, &parms);
}

void UBuoyancyComponent::OnPontoonEnteredWater(struct FSphericalPontoon& Pontoon){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.OnPontoonEnteredWater");

	FOnPontoonEnteredWater parms{};	
	parms.Pontoon = Pontoon;

	ProcessEvent(fn, &parms);
}

bool UBuoyancyComponent::IsOverlappingWaterBody(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.IsOverlappingWaterBody");

	FIsOverlappingWaterBody parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBuoyancyComponent::IsInWaterBody(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.IsInWaterBody");

	FIsInWaterBody parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBuoyancyComponent::GetLastWaterSurfaceInfo(struct FVector& OutWaterPlaneLocation, struct FVector& OutWaterPlaneNormal, struct FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32_t& OutWaterBodyIdx, struct FVector& OutWaterVelocity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo");

	FGetLastWaterSurfaceInfo parms{};	
	parms.OutWaterPlaneLocation = OutWaterPlaneLocation;
	parms.OutWaterPlaneNormal = OutWaterPlaneNormal;
	parms.OutWaterSurfacePosition = OutWaterSurfacePosition;
	parms.OutWaterDepth = OutWaterDepth;
	parms.OutWaterBodyIdx = OutWaterBodyIdx;
	parms.OutWaterVelocity = OutWaterVelocity;

	ProcessEvent(fn, &parms);
}

struct TArray<struct UWaterBodyComponent*> UBuoyancyComponent::GetCurrentWaterBodyComponents(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.GetCurrentWaterBodyComponents");

	FGetCurrentWaterBodyComponents parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ABuoyancyManager::GetBuoyancyComponentManager(struct UObject* WorldContextObject, struct ABuoyancyManager*& Manager){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.BuoyancyManager.GetBuoyancyComponentManager");

	FGetBuoyancyComponentManager parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Manager = Manager;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGerstnerWaterWaveGeneratorBase::GenerateGerstnerWaves(struct TArray<struct FGerstnerWave>& OutWaves){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves");

	FGenerateGerstnerWaves parms{};	
	parms.OutWaves = OutWaves;

	ProcessEvent(fn, &parms);
}

void UNiagaraWaterFunctionLibrary::SetWaterBodyComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UWaterBodyComponent* WaterBodyComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.NiagaraWaterFunctionLibrary.SetWaterBodyComponent");

	FSetWaterBodyComponent parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.WaterBodyComponent = WaterBodyComponent;

	ProcessEvent(fn, &parms);
}

void UNiagaraWaterFunctionLibrary::SetWaterBody(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct AWaterBody* WaterBody){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.NiagaraWaterFunctionLibrary.SetWaterBody");

	FSetWaterBody parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.WaterBody = WaterBody;

	ProcessEvent(fn, &parms);
}

void UWaterBodyComponent::SetWaterAndUnderWaterPostProcessMaterial(struct UMaterialInterface* InWaterMaterial, struct UMaterialInterface* InUnderWaterPostProcessMaterial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.SetWaterAndUnderWaterPostProcessMaterial");

	FSetWaterAndUnderWaterPostProcessMaterial parms{};	
	parms.InWaterMaterial = InWaterMaterial;
	parms.InUnderWaterPostProcessMaterial = InUnderWaterPostProcessMaterial;

	ProcessEvent(fn, &parms);
}

void UWaterBodyComponent::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.OnWaterBodyChanged");

	FOnWaterBodyChanged parms{};	
	parms.bShapeOrPositionChanged = bShapeOrPositionChanged;
	parms.bWeightmapSettingsChanged = bWeightmapSettingsChanged;

	ProcessEvent(fn, &parms);
}

struct UWaterWavesBase* UWaterBodyComponent::GetWaterWaves(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetWaterWaves");

	FGetWaterWaves parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UWaterBodyComponent::GetWaterVelocityAtSplineInputKey(float InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetWaterVelocityAtSplineInputKey");

	FGetWaterVelocityAtSplineInputKey parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWaterBodyComponent::GetWaterSurfaceInfoAtLocation(struct FVector& InLocation, struct FVector& OutWaterSurfaceLocation, struct FVector& OutWaterSurfaceNormal, struct FVector& OutWaterVelocity, float& OutWaterDepth, bool bIncludeDepth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetWaterSurfaceInfoAtLocation");

	FGetWaterSurfaceInfoAtLocation parms{};	
	parms.InLocation = InLocation;
	parms.OutWaterSurfaceLocation = OutWaterSurfaceLocation;
	parms.OutWaterSurfaceNormal = OutWaterSurfaceNormal;
	parms.OutWaterVelocity = OutWaterVelocity;
	parms.OutWaterDepth = OutWaterDepth;
	parms.bIncludeDepth = bIncludeDepth;

	ProcessEvent(fn, &parms);
}

struct UWaterSplineComponent* UWaterBodyComponent::GetWaterSpline(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetWaterSpline");

	FGetWaterSpline parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterMaterialInstance(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetWaterMaterialInstance");

	FGetWaterMaterialInstance parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInterface* UWaterBodyComponent::GetWaterMaterial(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetWaterMaterial");

	FGetWaterMaterial parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterLODMaterialInstance(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetWaterLODMaterialInstance");

	FGetWaterLODMaterialInstance parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterInfoMaterialInstance(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetWaterInfoMaterialInstance");

	FGetWaterInfoMaterialInstance parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AWaterBody* UWaterBodyComponent::GetWaterBodyActor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetWaterBodyActor");

	FGetWaterBodyActor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInstanceDynamic* UWaterBodyComponent::GetUnderwaterPostProcessMaterialInstance(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetUnderwaterPostProcessMaterialInstance");

	FGetUnderwaterPostProcessMaterialInstance parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UPrimitiveComponent*> UWaterBodyComponent::GetStandardRenderableComponents(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetStandardRenderableComponents");

	FGetStandardRenderableComponents parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInstanceDynamic* UWaterBodyComponent::GetRiverToOceanTransitionMaterialInstance(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetRiverToOceanTransitionMaterialInstance");

	FGetRiverToOceanTransitionMaterialInstance parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInstanceDynamic* UWaterBodyComponent::GetRiverToLakeTransitionMaterialInstance(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetRiverToLakeTransitionMaterialInstance");

	FGetRiverToLakeTransitionMaterialInstance parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UWaterBodyComponent::GetMaxWaveHeight(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetMaxWaveHeight");

	FGetMaxWaveHeight parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct AWaterBodyIsland*> UWaterBodyComponent::GetIslands(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetIslands");

	FGetIslands parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct AWaterBodyExclusionVolume*> UWaterBodyComponent::GetExclusionVolumes(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetExclusionVolumes");

	FGetExclusionVolumes parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UPrimitiveComponent*> UWaterBodyComponent::GetCollisionComponents(bool bInOnlyEnabledComponents){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetCollisionComponents");

	FGetCollisionComponents parms{};	
	parms.bInOnlyEnabledComponents = bInOnlyEnabledComponents;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AWaterBody::SetWaterWaves(struct UWaterWavesBase* InWaterWaves){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBody.SetWaterWaves");

	FSetWaterWaves parms{};	
	parms.InWaterWaves = InWaterWaves;

	ProcessEvent(fn, &parms);
}

void AWaterBody::SetWaterMaterial(struct UMaterialInterface* InMaterial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBody.SetWaterMaterial");

	FSetWaterMaterial parms{};	
	parms.InMaterial = InMaterial;

	ProcessEvent(fn, &parms);
}

void AWaterBody::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBody.OnWaterBodyChanged");

	FOnWaterBodyChanged parms{};	
	parms.bShapeOrPositionChanged = bShapeOrPositionChanged;
	parms.bWeightmapSettingsChanged = bWeightmapSettingsChanged;

	ProcessEvent(fn, &parms);
}

struct FVector AWaterBody::GetWaterVelocityVectorAtSplineInputKey(float InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterVelocityVectorAtSplineInputKey");

	FGetWaterVelocityVectorAtSplineInputKey parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float AWaterBody::GetWaterVelocityAtSplineInputKey(float InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterVelocityAtSplineInputKey");

	FGetWaterVelocityAtSplineInputKey parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWaterSplineComponent* AWaterBody::GetWaterSpline(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterSpline");

	FGetWaterSpline parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInstanceDynamic* AWaterBody::GetWaterMaterialInstance(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterMaterialInstance");

	FGetWaterMaterialInstance parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t AWaterBody::GetWaterBodyType(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterBodyType");

	FGetWaterBodyType parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWaterBodyComponent* AWaterBody::GetWaterBodyComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterBodyComponent");

	FGetWaterBodyComponent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInstanceDynamic* AWaterBody::GetRiverToOceanTransitionMaterialInstance(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance");

	FGetRiverToOceanTransitionMaterialInstance parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInstanceDynamic* AWaterBody::GetRiverToLakeTransitionMaterialInstance(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance");

	FGetRiverToLakeTransitionMaterialInstance parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct AWaterBodyIsland*> AWaterBody::GetIslands(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBody.GetIslands");

	FGetIslands parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct AWaterBodyExclusionVolume*> AWaterBody::GetExclusionVolumes(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBody.GetExclusionVolumes");

	FGetExclusionVolumes parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float AWaterBody::GetAudioIntensityAtSplineInputKey(float InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBody.GetAudioIntensityAtSplineInputKey");

	FGetAudioIntensityAtSplineInputKey parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWaterSplineComponent* AWaterBodyIsland::GetWaterSpline(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterBodyIsland.GetWaterSpline");

	FGetWaterSpline parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWaterMeshComponent::IsEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterMeshComponent.IsEnabled");

	FIsEnabled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWaterSubsystem::SetOceanFloodHeight(float InFloodHeight){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterSubsystem.SetOceanFloodHeight");

	FSetOceanFloodHeight parms{};	
	parms.InFloodHeight = InFloodHeight;

	ProcessEvent(fn, &parms);
}

void UWaterSubsystem::PrintToWaterLog(struct FString Message, bool bWarning){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterSubsystem.PrintToWaterLog");

	FPrintToWaterLog parms{};	
	parms.Message = Message;
	parms.bWarning = bWarning;

	ProcessEvent(fn, &parms);
}

bool UWaterSubsystem::IsWaterRenderingEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsWaterRenderingEnabled");

	FIsWaterRenderingEnabled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWaterSubsystem::IsUnderwaterPostProcessEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled");

	FIsUnderwaterPostProcessEnabled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWaterSubsystem::IsShallowWaterSimulationEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled");

	FIsShallowWaterSimulationEnabled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UWaterSubsystem::GetWaterTimeSeconds(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetWaterTimeSeconds");

	FGetWaterTimeSeconds parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UWaterSubsystem::GetSmoothedWorldTimeSeconds(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds");

	FGetSmoothedWorldTimeSeconds parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UWaterSubsystem::GetShallowWaterSimulationRenderTargetSize(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize");

	FGetShallowWaterSimulationRenderTargetSize parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UWaterSubsystem::GetShallowWaterMaxImpulseForces(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces");

	FGetShallowWaterMaxImpulseForces parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UWaterSubsystem::GetShallowWaterMaxDynamicForces(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces");

	FGetShallowWaterMaxDynamicForces parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UWaterSubsystem::GetOceanTotalHeight(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanTotalHeight");

	FGetOceanTotalHeight parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UWaterSubsystem::GetOceanFloodHeight(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanFloodHeight");

	FGetOceanFloodHeight parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UWaterSubsystem::GetOceanBaseHeight(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanBaseHeight");

	FGetOceanBaseHeight parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UWaterSubsystem::GetCameraUnderwaterDepth(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetCameraUnderwaterDepth");

	FGetCameraUnderwaterDepth parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

