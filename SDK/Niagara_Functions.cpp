#include "pch.h"
#include "SDK.h"

void UNiagaraDataInterfaceStaticMesh::OnSourceEndPlay(struct AActor* InSource, enum class EEndPlayReason Reason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceStaticMesh.OnSourceEndPlay");

	FOnSourceEndPlay parms{};	
	parms.InSource = InSource;
	parms.Reason = Reason;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceUObjectPropertyReader::SetUObjectReaderPropertyRemap(struct UNiagaraComponent* NiagaraComponent, struct FName UserParameterName, struct FName GraphName, struct FName RemapName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap");

	FSetUObjectReaderPropertyRemap parms{};	
	parms.NiagaraComponent = NiagaraComponent;
	parms.UserParameterName = UserParameterName;
	parms.GraphName = GraphName;
	parms.RemapName = RemapName;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetVariableVec4(struct FName InVariableName, struct FVector4& InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec4");

	FSetVariableVec4 parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetVariableVec3(struct FName InVariableName, struct FVector InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec3");

	FSetVariableVec3 parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetVariableVec2(struct FName InVariableName, struct FVector2D InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec2");

	FSetVariableVec2 parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetVariableTextureRenderTarget(struct FName InVariableName, struct UTextureRenderTarget* TextureRenderTarget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget");

	FSetVariableTextureRenderTarget parms{};	
	parms.InVariableName = InVariableName;
	parms.TextureRenderTarget = TextureRenderTarget;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetVariableTexture(struct FName InVariableName, struct UTexture* Texture){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableTexture");

	FSetVariableTexture parms{};	
	parms.InVariableName = InVariableName;
	parms.Texture = Texture;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetVariableStaticMesh(struct FName InVariableName, struct UStaticMesh* InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableStaticMesh");

	FSetVariableStaticMesh parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetVariableQuat(struct FName InVariableName, struct FQuat& InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableQuat");

	FSetVariableQuat parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetVariablePosition(struct FName InVariableName, struct FVector InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariablePosition");

	FSetVariablePosition parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetVariableObject(struct FName InVariableName, struct UObject* Object){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableObject");

	FSetVariableObject parms{};	
	parms.InVariableName = InVariableName;
	parms.Object = Object;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetVariableMatrix(struct FName InVariableName, struct FMatrix& InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableMatrix");

	FSetVariableMatrix parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetVariableMaterial(struct FName InVariableName, struct UMaterialInterface* Object){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableMaterial");

	FSetVariableMaterial parms{};	
	parms.InVariableName = InVariableName;
	parms.Object = Object;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetVariableLinearColor(struct FName InVariableName, struct FLinearColor& InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableLinearColor");

	FSetVariableLinearColor parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetVariableInt(struct FName InVariableName, int32_t InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableInt");

	FSetVariableInt parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetVariableFloat(struct FName InVariableName, float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableFloat");

	FSetVariableFloat parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetVariableBool(struct FName InVariableName, bool InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableBool");

	FSetVariableBool parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetVariableActor(struct FName InVariableName, struct AActor* Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableActor");

	FSetVariableActor parms{};	
	parms.InVariableName = InVariableName;
	parms.Actor = Actor;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetTickBehavior(uint8_t NewTickBehavior){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetTickBehavior");

	FSetTickBehavior parms{};	
	parms.NewTickBehavior = NewTickBehavior;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetSystemFixedBounds(struct FBox LocalBounds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetSystemFixedBounds");

	FSetSystemFixedBounds parms{};	
	parms.LocalBounds = LocalBounds;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetSimCache(struct UNiagaraSimCache* SimCache, bool bResetSystem){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetSimCache");

	FSetSimCache parms{};	
	parms.SimCache = SimCache;
	parms.bResetSystem = bResetSystem;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetSeekDelta(float InSeekDelta){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetSeekDelta");

	FSetSeekDelta parms{};	
	parms.InSeekDelta = InSeekDelta;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetRenderingEnabled");

	FSetRenderingEnabled parms{};	
	parms.bInRenderingEnabled = bInRenderingEnabled;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetRandomSeedOffset(int32_t NewRandomSeedOffset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetRandomSeedOffset");

	FSetRandomSeedOffset parms{};	
	parms.NewRandomSeedOffset = NewRandomSeedOffset;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPreviewLODDistance");

	FSetPreviewLODDistance parms{};	
	parms.bEnablePreviewLODDistance = bEnablePreviewLODDistance;
	parms.PreviewLODDistance = PreviewLODDistance;
	parms.PreviewMaxDistance = PreviewMaxDistance;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetPaused(bool bInPaused){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPaused");

	FSetPaused parms{};	
	parms.bInPaused = bInPaused;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4& InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec4");

	FSetNiagaraVariableVec4 parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec3");

	FSetNiagaraVariableVec3 parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec2");

	FSetNiagaraVariableVec2 parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat& InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableQuat");

	FSetNiagaraVariableQuat parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetNiagaraVariablePosition(struct FString InVariableName, struct FVector InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariablePosition");

	FSetNiagaraVariablePosition parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetNiagaraVariableObject(struct FString InVariableName, struct UObject* Object){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableObject");

	FSetNiagaraVariableObject parms{};	
	parms.InVariableName = InVariableName;
	parms.Object = Object;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetNiagaraVariableMatrix(struct FString InVariableName, struct FMatrix& InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableMatrix");

	FSetNiagaraVariableMatrix parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor& InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor");

	FSetNiagaraVariableLinearColor parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetNiagaraVariableInt(struct FString InVariableName, int32_t InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableInt");

	FSetNiagaraVariableInt parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetNiagaraVariableFloat(struct FString InVariableName, float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableFloat");

	FSetNiagaraVariableFloat parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetNiagaraVariableBool(struct FString InVariableName, bool InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableBool");

	FSetNiagaraVariableBool parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetNiagaraVariableActor(struct FString InVariableName, struct AActor* Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableActor");

	FSetNiagaraVariableActor parms{};	
	parms.InVariableName = InVariableName;
	parms.Actor = Actor;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetMaxSimTime(float InMaxTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetMaxSimTime");

	FSetMaxSimTime parms{};	
	parms.InMaxTime = InMaxTime;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetLockDesiredAgeDeltaTimeToSeekDelta(bool Block){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta");

	FSetLockDesiredAgeDeltaTimeToSeekDelta parms{};	
	parms.Block = Block;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetGpuComputeDebug(bool bEnableDebug){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetGpuComputeDebug");

	FSetGpuComputeDebug parms{};	
	parms.bEnableDebug = bEnableDebug;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetForceSolo(bool bInForceSolo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetForceSolo");

	FSetForceSolo parms{};	
	parms.bInForceSolo = bInForceSolo;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetForceLocalPlayerEffect(bool bIsPlayerEffect){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetForceLocalPlayerEffect");

	FSetForceLocalPlayerEffect parms{};	
	parms.bIsPlayerEffect = bIsPlayerEffect;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetEmitterFixedBounds(struct FName EmitterName, struct FBox LocalBounds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetEmitterFixedBounds");

	FSetEmitterFixedBounds parms{};	
	parms.EmitterName = EmitterName;
	parms.LocalBounds = LocalBounds;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetDesiredAge(float InDesiredAge){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetDesiredAge");

	FSetDesiredAge parms{};	
	parms.InDesiredAge = InDesiredAge;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetCustomTimeDilation(float Dilation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetCustomTimeDilation");

	FSetCustomTimeDilation parms{};	
	parms.Dilation = Dilation;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking");

	FSetCanRenderWhileSeeking parms{};	
	parms.bInCanRenderWhileSeeking = bInCanRenderWhileSeeking;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetAutoDestroy(bool bInAutoDestroy){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAutoDestroy");

	FSetAutoDestroy parms{};	
	parms.bInAutoDestroy = bInAutoDestroy;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetAsset(struct UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAsset");

	FSetAsset parms{};	
	parms.InAsset = InAsset;
	parms.bResetExistingOverrideParameters = bResetExistingOverrideParameters;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetAllowScalability(bool bAllow){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAllowScalability");

	FSetAllowScalability parms{};	
	parms.bAllow = bAllow;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SetAgeUpdateMode(uint8_t InAgeUpdateMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAgeUpdateMode");

	FSetAgeUpdateMode parms{};	
	parms.InAgeUpdateMode = InAgeUpdateMode;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::SeekToDesiredAge(float InDesiredAge){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SeekToDesiredAge");

	FSeekToDesiredAge parms{};	
	parms.InDesiredAge = InDesiredAge;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::ResetSystem(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ResetSystem");

	FResetSystem parms{};	

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::ReinitializeSystem(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ReinitializeSystem");

	FReinitializeSystem parms{};	

	ProcessEvent(fn, &parms);
}

bool UNiagaraComponent::IsPaused(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.IsPaused");

	FIsPaused parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UNiagaraComponent::InitForPerformanceBaseline(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.InitForPerformanceBaseline");

	FInitForPerformanceBaseline parms{};	

	ProcessEvent(fn, &parms);
}

uint8_t UNiagaraComponent::GetTickBehavior(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetTickBehavior");

	FGetTickBehavior parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FBox UNiagaraComponent::GetSystemFixedBounds(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetSystemFixedBounds");

	FGetSystemFixedBounds parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UNiagaraSimCache* UNiagaraComponent::GetSimCache(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetSimCache");

	FGetSimCache parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UNiagaraComponent::GetSeekDelta(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetSeekDelta");

	FGetSeekDelta parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UNiagaraComponent::GetRandomSeedOffset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetRandomSeedOffset");

	FGetRandomSeedOffset parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNiagaraComponent::GetPreviewLODDistanceEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled");

	FGetPreviewLODDistanceEnabled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UNiagaraComponent::GetPreviewLODDistance(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetPreviewLODDistance");

	FGetPreviewLODDistance parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly");

	FGetNiagaraParticleValueVec3_DebugOnly parms{};	
	parms.InEmitterName = InEmitterName;
	parms.InValueName = InValueName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly");

	FGetNiagaraParticleValues_DebugOnly parms{};	
	parms.InEmitterName = InEmitterName;
	parms.InValueName = InValueName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly");

	FGetNiagaraParticlePositions_DebugOnly parms{};	
	parms.InEmitterName = InEmitterName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UNiagaraComponent::GetMaxSimTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetMaxSimTime");

	FGetMaxSimTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNiagaraComponent::GetLockDesiredAgeDeltaTimeToSeekDelta(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta");

	FGetLockDesiredAgeDeltaTimeToSeekDelta parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNiagaraComponent::GetForceSolo(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetForceSolo");

	FGetForceSolo parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNiagaraComponent::GetForceLocalPlayerEffect(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetForceLocalPlayerEffect");

	FGetForceLocalPlayerEffect parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FBox UNiagaraComponent::GetEmitterFixedBounds(struct FName EmitterName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetEmitterFixedBounds");

	FGetEmitterFixedBounds parms{};	
	parms.EmitterName = EmitterName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UNiagaraComponent::GetDesiredAge(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetDesiredAge");

	FGetDesiredAge parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UNiagaraDataInterface* UNiagaraComponent::GetDataInterface(struct FString Name){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetDataInterface");

	FGetDataInterface parms{};	
	parms.Name = Name;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UNiagaraComponent::GetCustomTimeDilation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetCustomTimeDilation");

	FGetCustomTimeDilation parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UNiagaraSystem* UNiagaraComponent::GetAsset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAsset");

	FGetAsset parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNiagaraComponent::GetAllowScalability(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAllowScalability");

	FGetAllowScalability parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UNiagaraComponent::GetAgeUpdateMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAgeUpdateMode");

	FGetAgeUpdateMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UNiagaraComponent::ClearSystemFixedBounds(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ClearSystemFixedBounds");

	FClearSystemFixedBounds parms{};	

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::ClearSimCache(bool bResetSystem){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ClearSimCache");

	FClearSimCache parms{};	
	parms.bResetSystem = bResetSystem;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::ClearEmitterFixedBounds(struct FName EmitterName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ClearEmitterFixedBounds");

	FClearEmitterFixedBounds parms{};	
	parms.EmitterName = EmitterName;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulationByTime");

	FAdvanceSimulationByTime parms{};	
	parms.SimulateTime = SimulateTime;
	parms.TickDeltaSeconds = TickDeltaSeconds;

	ProcessEvent(fn, &parms);
}

void UNiagaraComponent::AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulation");

	FAdvanceSimulation parms{};	
	parms.TickCount = TickCount;
	parms.TickDeltaSeconds = TickDeltaSeconds;

	ProcessEvent(fn, &parms);
}

void ANiagaraPreviewBase::SetSystem(struct UNiagaraSystem* InSystem){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewBase.SetSystem");

	FSetSystem parms{};	
	parms.InSystem = InSystem;

	ProcessEvent(fn, &parms);
}

void ANiagaraPreviewBase::SetLabelText(struct FText& InXAxisText, struct FText& InYAxisText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewBase.SetLabelText");

	FSetLabelText parms{};	
	parms.InXAxisText = InXAxisText;
	parms.InYAxisText = InYAxisText;

	ProcessEvent(fn, &parms);
}

void ANiagaraActor::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraActor.SetDestroyOnSystemFinish");

	FSetDestroyOnSystemFinish parms{};	
	parms.bShouldDestroyOnSystemFinish = bShouldDestroyOnSystemFinish;

	ProcessEvent(fn, &parms);
}

void ANiagaraActor::OnNiagaraSystemFinished(struct UNiagaraComponent* FinishedComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraActor.OnNiagaraSystemFinished");

	FOnNiagaraSystemFinished parms{};	
	parms.FinishedComponent = FinishedComponent;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector& Value, bool bSizeToFit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue");

	FSetNiagaraArrayVectorValue parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;
	parms.Value = Value;
	parms.bSizeToFit = bSizeToFit;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector4& Value, bool bSizeToFit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value");

	FSetNiagaraArrayVector4Value parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;
	parms.Value = Value;
	parms.bSizeToFit = bSizeToFit;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector4>& ArrayData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4");

	FSetNiagaraArrayVector4 parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.ArrayData = ArrayData;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector2D& Value, bool bSizeToFit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue");

	FSetNiagaraArrayVector2DValue parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;
	parms.Value = Value;
	parms.bSizeToFit = bSizeToFit;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector2D>& ArrayData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D");

	FSetNiagaraArrayVector2D parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.ArrayData = ArrayData;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector>& ArrayData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector");

	FSetNiagaraArrayVector parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.ArrayData = ArrayData;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayUInt8Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8Value");

	FSetNiagaraArrayUInt8Value parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;
	parms.Value = Value;
	parms.bSizeToFit = bSizeToFit;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayUInt8(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<int32_t>& ArrayData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8");

	FSetNiagaraArrayUInt8 parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.ArrayData = ArrayData;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FQuat& Value, bool bSizeToFit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue");

	FSetNiagaraArrayQuatValue parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;
	parms.Value = Value;
	parms.bSizeToFit = bSizeToFit;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FQuat>& ArrayData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat");

	FSetNiagaraArrayQuat parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.ArrayData = ArrayData;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayPositionValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector& Value, bool bSizeToFit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPositionValue");

	FSetNiagaraArrayPositionValue parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;
	parms.Value = Value;
	parms.bSizeToFit = bSizeToFit;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayPosition(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector>& ArrayData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPosition");

	FSetNiagaraArrayPosition parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.ArrayData = ArrayData;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value");

	FSetNiagaraArrayInt32Value parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;
	parms.Value = Value;
	parms.bSizeToFit = bSizeToFit;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<int32_t>& ArrayData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32");

	FSetNiagaraArrayInt32 parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.ArrayData = ArrayData;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, float Value, bool bSizeToFit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue");

	FSetNiagaraArrayFloatValue parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;
	parms.Value = Value;
	parms.bSizeToFit = bSizeToFit;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<float>& ArrayData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat");

	FSetNiagaraArrayFloat parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.ArrayData = ArrayData;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FLinearColor& Value, bool bSizeToFit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue");

	FSetNiagaraArrayColorValue parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;
	parms.Value = Value;
	parms.bSizeToFit = bSizeToFit;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FLinearColor>& ArrayData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor");

	FSetNiagaraArrayColor parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.ArrayData = ArrayData;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, bool& Value, bool bSizeToFit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue");

	FSetNiagaraArrayBoolValue parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;
	parms.Value = Value;
	parms.bSizeToFit = bSizeToFit;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<bool>& ArrayData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool");

	FSetNiagaraArrayBool parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.ArrayData = ArrayData;

	ProcessEvent(fn, &parms);
}

struct FVector UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue");

	FGetNiagaraArrayVectorValue parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector4 UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value");

	FGetNiagaraArrayVector4Value parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FVector4> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4");

	FGetNiagaraArrayVector4 parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue");

	FGetNiagaraArrayVector2DValue parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FVector2D> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D");

	FGetNiagaraArrayVector2D parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FVector> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector");

	FGetNiagaraArrayVector parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayUInt8Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8Value");

	FGetNiagaraArrayUInt8Value parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<int32_t> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayUInt8(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8");

	FGetNiagaraArrayUInt8 parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FQuat UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue");

	FGetNiagaraArrayQuatValue parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FQuat> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat");

	FGetNiagaraArrayQuat parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayPositionValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPositionValue");

	FGetNiagaraArrayPositionValue parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FVector> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayPosition(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPosition");

	FGetNiagaraArrayPosition parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value");

	FGetNiagaraArrayInt32Value parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<int32_t> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32");

	FGetNiagaraArrayInt32 parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue");

	FGetNiagaraArrayFloatValue parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<float> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat");

	FGetNiagaraArrayFloat parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FLinearColor UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue");

	FGetNiagaraArrayColorValue parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FLinearColor> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor");

	FGetNiagaraArrayColor parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue");

	FGetNiagaraArrayBoolValue parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<bool> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool");

	FGetNiagaraArrayBool parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UNiagaraSimCache* UNiagaraSimCacheFunctionLibrary::CreateNiagaraSimCache(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCacheFunctionLibrary.CreateNiagaraSimCache");

	FCreateNiagaraSimCache parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNiagaraSimCacheFunctionLibrary::CaptureNiagaraSimCacheImmediate(struct UNiagaraSimCache* SimCache, struct FNiagaraSimCacheCreateParameters CreateParameters, struct UNiagaraComponent* NiagaraComponent, struct UNiagaraSimCache*& OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCacheFunctionLibrary.CaptureNiagaraSimCacheImmediate");

	FCaptureNiagaraSimCacheImmediate parms{};	
	parms.SimCache = SimCache;
	parms.CreateParameters = CreateParameters;
	parms.NiagaraComponent = NiagaraComponent;
	parms.OutSimCache = OutSimCache;
	parms.bAdvanceSimulation = bAdvanceSimulation;
	parms.AdvanceDeltaTime = AdvanceDeltaTime;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UNiagaraParticleCallbackHandler::ReceiveParticleData(struct TArray<struct FBasicParticleData>& Data, struct UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData");

	FReceiveParticleData parms{};	
	parms.Data = Data;
	parms.NiagaraSystem = NiagaraSystem;
	parms.SimulationPositionOffset = SimulationPositionOffset;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceGrid2DCollection::GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize");

	FGetTextureSize parms{};	
	parms.Component = Component;
	parms.SizeX = SizeX;
	parms.SizeY = SizeY;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceGrid2DCollection::GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize");

	FGetRawTextureSize parms{};	
	parms.Component = Component;
	parms.SizeX = SizeX;
	parms.SizeY = SizeY;

	ProcessEvent(fn, &parms);
}

bool UNiagaraDataInterfaceGrid2DCollection::FillTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t AttributeIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D");

	FFillTexture2D parms{};	
	parms.Component = Component;
	parms.Dest = Dest;
	parms.AttributeIndex = AttributeIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D");

	FFillRawTexture2D parms{};	
	parms.Component = Component;
	parms.Dest = Dest;
	parms.TilesX = TilesX;
	parms.TilesY = TilesY;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UNiagaraDataInterfaceGrid3DCollection::GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize");

	FGetTextureSize parms{};	
	parms.Component = Component;
	parms.SizeX = SizeX;
	parms.SizeY = SizeY;
	parms.SizeZ = SizeZ;

	ProcessEvent(fn, &parms);
}

void UNiagaraDataInterfaceGrid3DCollection::GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize");

	FGetRawTextureSize parms{};	
	parms.Component = Component;
	parms.SizeX = SizeX;
	parms.SizeY = SizeY;
	parms.SizeZ = SizeZ;

	ProcessEvent(fn, &parms);
}

bool UNiagaraDataInterfaceGrid3DCollection::FillVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t AttributeIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture");

	FFillVolumeTexture parms{};	
	parms.Component = Component;
	parms.Dest = Dest;
	parms.AttributeIndex = AttributeIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNiagaraDataInterfaceGrid3DCollection::FillRawVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture");

	FFillRawVolumeTexture parms{};	
	parms.Component = Component;
	parms.Dest = Dest;
	parms.TilesX = TilesX;
	parms.TilesY = TilesY;
	parms.TileZ = TileZ;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UNiagaraDIRigidMeshCollisionFunctionLibrary::SetSourceActors(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct AActor*>& SourceActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary.SetSourceActors");

	FSetSourceActors parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.SourceActors = SourceActors;

	ProcessEvent(fn, &parms);
}

struct UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAttachedWithParams(struct FFXSystemSpawnParameters& SpawnParams){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams");

	FSpawnSystemAttachedWithParams parms{};	
	parms.SpawnParams = SpawnParams;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, uint8_t PoolingMethod, bool bPreCullCheck){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached");

	FSpawnSystemAttached parms{};	
	parms.SystemTemplate = SystemTemplate;
	parms.AttachToComponent = AttachToComponent;
	parms.AttachPointName = AttachPointName;
	parms.Location = Location;
	parms.Rotation = Rotation;
	parms.LocationType = LocationType;
	parms.bAutoDestroy = bAutoDestroy;
	parms.bAutoActivate = bAutoActivate;
	parms.PoolingMethod = PoolingMethod;
	parms.bPreCullCheck = bPreCullCheck;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAtLocationWithParams(struct FFXSystemSpawnParameters& SpawnParams){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams");

	FSpawnSystemAtLocationWithParams parms{};	
	parms.SpawnParams = SpawnParams;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAtLocation(struct UObject* WorldContextObject, struct UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, bool bAutoActivate, uint8_t PoolingMethod, bool bPreCullCheck){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation");

	FSpawnSystemAtLocation parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SystemTemplate = SystemTemplate;
	parms.Location = Location;
	parms.Rotation = Rotation;
	parms.Scale = Scale;
	parms.bAutoDestroy = bAutoDestroy;
	parms.bAutoActivate = bAutoActivate;
	parms.PoolingMethod = PoolingMethod;
	parms.bPreCullCheck = bPreCullCheck;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UNiagaraFunctionLibrary::SetVolumeTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UVolumeTexture* Texture){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject");

	FSetVolumeTextureObject parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Texture = Texture;

	ProcessEvent(fn, &parms);
}

void UNiagaraFunctionLibrary::SetTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture* Texture){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SetTextureObject");

	FSetTextureObject parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Texture = Texture;

	ProcessEvent(fn, &parms);
}

void UNiagaraFunctionLibrary::SetTexture2DArrayObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture2DArray* Texture){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject");

	FSetTexture2DArrayObject parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.Texture = Texture;

	ProcessEvent(fn, &parms);
}

void UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceSamplingRegions(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct TArray<struct FName>& SamplingRegions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions");

	FSetSkeletalMeshDataInterfaceSamplingRegions parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.SamplingRegions = SamplingRegions;

	ProcessEvent(fn, &parms);
}

void UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceFilteredSockets(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct TArray<struct FName>& FilteredSockets){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredSockets");

	FSetSkeletalMeshDataInterfaceFilteredSockets parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.FilteredSockets = FilteredSockets;

	ProcessEvent(fn, &parms);
}

void UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceFilteredBones(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct TArray<struct FName>& FilteredBones){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredBones");

	FSetSkeletalMeshDataInterfaceFilteredBones parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.FilteredBones = FilteredBones;

	ProcessEvent(fn, &parms);
}

void UNiagaraFunctionLibrary::SetComponentNiagaraGPURayTracedCollisionGroup(struct UObject* WorldContextObject, struct UPrimitiveComponent* Primitive, int32_t CollisionGroup){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup");

	FSetComponentNiagaraGPURayTracedCollisionGroup parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Primitive = Primitive;
	parms.CollisionGroup = CollisionGroup;

	ProcessEvent(fn, &parms);
}

void UNiagaraFunctionLibrary::SetActorNiagaraGPURayTracedCollisionGroup(struct UObject* WorldContextObject, struct AActor* Actor, int32_t CollisionGroup){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup");

	FSetActorNiagaraGPURayTracedCollisionGroup parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Actor = Actor;
	parms.CollisionGroup = CollisionGroup;

	ProcessEvent(fn, &parms);
}

void UNiagaraFunctionLibrary::ReleaseNiagaraGPURayTracedCollisionGroup(struct UObject* WorldContextObject, int32_t CollisionGroup){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup");

	FReleaseNiagaraGPURayTracedCollisionGroup parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.CollisionGroup = CollisionGroup;

	ProcessEvent(fn, &parms);
}

void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMeshComponent* StaticMeshComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent");

	FOverrideSystemUserVariableStaticMeshComponent parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.StaticMeshComponent = StaticMeshComponent;

	ProcessEvent(fn, &parms);
}

void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMesh(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMesh* StaticMesh){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh");

	FOverrideSystemUserVariableStaticMesh parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.StaticMesh = StaticMesh;

	ProcessEvent(fn, &parms);
}

void UNiagaraFunctionLibrary::OverrideSystemUserVariableSkeletalMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct USkeletalMeshComponent* SkeletalMeshComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent");

	FOverrideSystemUserVariableSkeletalMeshComponent parms{};	
	parms.NiagaraSystem = NiagaraSystem;
	parms.OverrideName = OverrideName;
	parms.SkeletalMeshComponent = SkeletalMeshComponent;

	ProcessEvent(fn, &parms);
}

struct UNiagaraParameterCollectionInstance* UNiagaraFunctionLibrary::GetNiagaraParameterCollection(struct UObject* WorldContextObject, struct UNiagaraParameterCollection* Collection){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection");

	FGetNiagaraParameterCollection parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Collection = Collection;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UNiagaraFunctionLibrary::AcquireNiagaraGPURayTracedCollisionGroup(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup");

	FAcquireNiagaraGPURayTracedCollisionGroup parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UNiagaraDataInterfaceSkeletalMesh::OnSourceEndPlay(struct AActor* InSource, enum class EEndPlayReason Reason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceSkeletalMesh.OnSourceEndPlay");

	FOnSourceEndPlay parms{};	
	parms.InSource = InSource;
	parms.Reason = Reason;

	ProcessEvent(fn, &parms);
}

void UNiagaraParameterCollectionInstance::SetVectorParameter(struct FString InVariableName, struct FVector InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter");

	FSetVectorParameter parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraParameterCollectionInstance::SetVector4Parameter(struct FString InVariableName, struct FVector4& InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter");

	FSetVector4Parameter parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraParameterCollectionInstance::SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter");

	FSetVector2DParameter parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraParameterCollectionInstance::SetQuatParameter(struct FString InVariableName, struct FQuat& InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter");

	FSetQuatParameter parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraParameterCollectionInstance::SetIntParameter(struct FString InVariableName, int32_t InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter");

	FSetIntParameter parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraParameterCollectionInstance::SetFloatParameter(struct FString InVariableName, float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter");

	FSetFloatParameter parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraParameterCollectionInstance::SetColorParameter(struct FString InVariableName, struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter");

	FSetColorParameter parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UNiagaraParameterCollectionInstance::SetBoolParameter(struct FString InVariableName, bool InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter");

	FSetBoolParameter parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

struct FVector UNiagaraParameterCollectionInstance::GetVectorParameter(struct FString InVariableName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter");

	FGetVectorParameter parms{};	
	parms.InVariableName = InVariableName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector4 UNiagaraParameterCollectionInstance::GetVector4Parameter(struct FString InVariableName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter");

	FGetVector4Parameter parms{};	
	parms.InVariableName = InVariableName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UNiagaraParameterCollectionInstance::GetVector2DParameter(struct FString InVariableName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter");

	FGetVector2DParameter parms{};	
	parms.InVariableName = InVariableName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FQuat UNiagaraParameterCollectionInstance::GetQuatParameter(struct FString InVariableName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter");

	FGetQuatParameter parms{};	
	parms.InVariableName = InVariableName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UNiagaraParameterCollectionInstance::GetIntParameter(struct FString InVariableName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter");

	FGetIntParameter parms{};	
	parms.InVariableName = InVariableName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UNiagaraParameterCollectionInstance::GetFloatParameter(struct FString InVariableName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter");

	FGetFloatParameter parms{};	
	parms.InVariableName = InVariableName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FLinearColor UNiagaraParameterCollectionInstance::GetColorParameter(struct FString InVariableName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter");

	FGetColorParameter parms{};	
	parms.InVariableName = InVariableName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNiagaraParameterCollectionInstance::GetBoolParameter(struct FString InVariableName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter");

	FGetBoolParameter parms{};	
	parms.InVariableName = InVariableName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNiagaraBaselineController::OnTickTest(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraBaselineController.OnTickTest");

	FOnTickTest parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UNiagaraBaselineController::OnOwnerTick(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraBaselineController.OnOwnerTick");

	FOnOwnerTick parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UNiagaraBaselineController::OnEndTest(struct FNiagaraPerfBaselineStats Stats){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraBaselineController.OnEndTest");

	FOnEndTest parms{};	
	parms.Stats = Stats;

	ProcessEvent(fn, &parms);
}

void UNiagaraBaselineController::OnBeginTest(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraBaselineController.OnBeginTest");

	FOnBeginTest parms{};	

	ProcessEvent(fn, &parms);
}

struct UNiagaraSystem* UNiagaraBaselineController::GetSystem(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraBaselineController.GetSystem");

	FGetSystem parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UNiagaraPreviewAxis::Num(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewAxis.Num");

	FNum parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UNiagaraPreviewAxis::ApplyToPreview(struct UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, struct FString& OutLabelText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewAxis.ApplyToPreview");

	FApplyToPreview parms{};	
	parms.PreviewComponent = PreviewComponent;
	parms.PreviewIndex = PreviewIndex;
	parms.bIsXAxis = bIsXAxis;
	parms.OutLabelText = OutLabelText;

	ProcessEvent(fn, &parms);
}

void ANiagaraPreviewGrid::SetPaused(bool bPaused){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.SetPaused");

	FSetPaused parms{};	
	parms.bPaused = bPaused;

	ProcessEvent(fn, &parms);
}

void ANiagaraPreviewGrid::GetPreviews(struct TArray<struct UNiagaraComponent*>& OutPreviews){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.GetPreviews");

	FGetPreviews parms{};	
	parms.OutPreviews = OutPreviews;

	ProcessEvent(fn, &parms);
}

void ANiagaraPreviewGrid::DeactivatePreviews(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.DeactivatePreviews");

	FDeactivatePreviews parms{};	

	ProcessEvent(fn, &parms);
}

void ANiagaraPreviewGrid::ActivatePreviews(bool bReset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.ActivatePreviews");

	FActivatePreviews parms{};	
	parms.bReset = bReset;

	ProcessEvent(fn, &parms);
}

void UNiagaraScript::RaiseOnGPUCompilationComplete(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete");

	FRaiseOnGPUCompilationComplete parms{};	

	ProcessEvent(fn, &parms);
}

void UNiagaraSimCache::ReadVectorAttribute(struct TArray<struct FVector>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.ReadVectorAttribute");

	FReadVectorAttribute parms{};	
	parms.OutValues = OutValues;
	parms.AttributeName = AttributeName;
	parms.EmitterName = EmitterName;
	parms.FrameIndex = FrameIndex;

	ProcessEvent(fn, &parms);
}

void UNiagaraSimCache::ReadVector4Attribute(struct TArray<struct FVector4>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.ReadVector4Attribute");

	FReadVector4Attribute parms{};	
	parms.OutValues = OutValues;
	parms.AttributeName = AttributeName;
	parms.EmitterName = EmitterName;
	parms.FrameIndex = FrameIndex;

	ProcessEvent(fn, &parms);
}

void UNiagaraSimCache::ReadVector2Attribute(struct TArray<struct FVector2D>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.ReadVector2Attribute");

	FReadVector2Attribute parms{};	
	parms.OutValues = OutValues;
	parms.AttributeName = AttributeName;
	parms.EmitterName = EmitterName;
	parms.FrameIndex = FrameIndex;

	ProcessEvent(fn, &parms);
}

void UNiagaraSimCache::ReadQuatAttributeWithRebase(struct TArray<struct FQuat>& OutValues, struct FQuat Quat, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.ReadQuatAttributeWithRebase");

	FReadQuatAttributeWithRebase parms{};	
	parms.OutValues = OutValues;
	parms.Quat = Quat;
	parms.AttributeName = AttributeName;
	parms.EmitterName = EmitterName;
	parms.FrameIndex = FrameIndex;

	ProcessEvent(fn, &parms);
}

void UNiagaraSimCache::ReadQuatAttribute(struct TArray<struct FQuat>& OutValues, struct FName AttributeName, struct FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.ReadQuatAttribute");

	FReadQuatAttribute parms{};	
	parms.OutValues = OutValues;
	parms.AttributeName = AttributeName;
	parms.EmitterName = EmitterName;
	parms.bLocalSpaceToWorld = bLocalSpaceToWorld;
	parms.FrameIndex = FrameIndex;

	ProcessEvent(fn, &parms);
}

void UNiagaraSimCache::ReadPositionAttributeWithRebase(struct TArray<struct FVector>& OutValues, struct FTransform Transform, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.ReadPositionAttributeWithRebase");

	FReadPositionAttributeWithRebase parms{};	
	parms.OutValues = OutValues;
	parms.Transform = Transform;
	parms.AttributeName = AttributeName;
	parms.EmitterName = EmitterName;
	parms.FrameIndex = FrameIndex;

	ProcessEvent(fn, &parms);
}

void UNiagaraSimCache::ReadPositionAttribute(struct TArray<struct FVector>& OutValues, struct FName AttributeName, struct FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.ReadPositionAttribute");

	FReadPositionAttribute parms{};	
	parms.OutValues = OutValues;
	parms.AttributeName = AttributeName;
	parms.EmitterName = EmitterName;
	parms.bLocalSpaceToWorld = bLocalSpaceToWorld;
	parms.FrameIndex = FrameIndex;

	ProcessEvent(fn, &parms);
}

void UNiagaraSimCache::ReadIntAttribute(struct TArray<int32_t>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.ReadIntAttribute");

	FReadIntAttribute parms{};	
	parms.OutValues = OutValues;
	parms.AttributeName = AttributeName;
	parms.EmitterName = EmitterName;
	parms.FrameIndex = FrameIndex;

	ProcessEvent(fn, &parms);
}

void UNiagaraSimCache::ReadFloatAttribute(struct TArray<float>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.ReadFloatAttribute");

	FReadFloatAttribute parms{};	
	parms.OutValues = OutValues;
	parms.AttributeName = AttributeName;
	parms.EmitterName = EmitterName;
	parms.FrameIndex = FrameIndex;

	ProcessEvent(fn, &parms);
}

void UNiagaraSimCache::ReadColorAttribute(struct TArray<struct FLinearColor>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.ReadColorAttribute");

	FReadColorAttribute parms{};	
	parms.OutValues = OutValues;
	parms.AttributeName = AttributeName;
	parms.EmitterName = EmitterName;
	parms.FrameIndex = FrameIndex;

	ProcessEvent(fn, &parms);
}

bool UNiagaraSimCache::IsEmpty(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.IsEmpty");

	FIsEmpty parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNiagaraSimCache::IsCacheValid(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.IsCacheValid");

	FIsCacheValid parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UNiagaraSimCache::GetStartSeconds(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.GetStartSeconds");

	FGetStartSeconds parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UNiagaraSimCache::GetNumFrames(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.GetNumFrames");

	FGetNumFrames parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UNiagaraSimCache::GetNumEmitters(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.GetNumEmitters");

	FGetNumEmitters parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FName> UNiagaraSimCache::GetEmitterNames(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.GetEmitterNames");

	FGetEmitterNames parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UNiagaraSimCache::GetEmitterName(int32_t EmitterIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.GetEmitterName");

	FGetEmitterName parms{};	
	parms.EmitterIndex = EmitterIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UNiagaraSimCache::GetAttributeCaptureMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.NiagaraSimCache.GetAttributeCaptureMode");

	FGetAttributeCaptureMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAsyncNiagaraCaptureSimCache::OnCaptureComplete__DelegateSignature(bool bSuccess){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction Niagara.AsyncNiagaraCaptureSimCache.OnCaptureComplete__DelegateSignature");

	FOnCaptureComplete__DelegateSignature parms{};	
	parms.bSuccess = bSuccess;

	ProcessEvent(fn, &parms);
}

struct UAsyncNiagaraCaptureSimCache* UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCacheUntilComplete(struct UNiagaraSimCache* SimCache, struct FNiagaraSimCacheCreateParameters CreateParameters, struct UNiagaraComponent* NiagaraComponent, struct UNiagaraSimCache*& OutSimCache, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheUntilComplete");

	FCaptureNiagaraSimCacheUntilComplete parms{};	
	parms.SimCache = SimCache;
	parms.CreateParameters = CreateParameters;
	parms.NiagaraComponent = NiagaraComponent;
	parms.OutSimCache = OutSimCache;
	parms.CaptureRate = CaptureRate;
	parms.bAdvanceSimulation = bAdvanceSimulation;
	parms.AdvanceDeltaTime = AdvanceDeltaTime;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAsyncNiagaraCaptureSimCache* UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCacheMultiFrame(struct UNiagaraSimCache* SimCache, struct FNiagaraSimCacheCreateParameters CreateParameters, struct UNiagaraComponent* NiagaraComponent, struct UNiagaraSimCache*& OutSimCache, int32_t NumFrames, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheMultiFrame");

	FCaptureNiagaraSimCacheMultiFrame parms{};	
	parms.SimCache = SimCache;
	parms.CreateParameters = CreateParameters;
	parms.NiagaraComponent = NiagaraComponent;
	parms.OutSimCache = OutSimCache;
	parms.NumFrames = NumFrames;
	parms.CaptureRate = CaptureRate;
	parms.bAdvanceSimulation = bAdvanceSimulation;
	parms.AdvanceDeltaTime = AdvanceDeltaTime;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

