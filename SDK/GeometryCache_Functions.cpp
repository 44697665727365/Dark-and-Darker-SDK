#include "pch.h"
#include "SDK.h"

struct UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent");

	FGetGeometryCacheComponent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGeometryCacheComponent::TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.TickAtThisTime");

	FTickAtThisTime parms{};	
	parms.Time = Time;
	parms.bInIsRunning = bInIsRunning;
	parms.bInBackwards = bInBackwards;
	parms.bInIsLooping = bInIsLooping;

	ProcessEvent(fn, &parms);
}

void UGeometryCacheComponent::Stop(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Stop");

	FStop parms{};	

	ProcessEvent(fn, &parms);
}

void UGeometryCacheComponent::SetWireframeOverrideColor(struct FLinearColor Color){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor");

	FSetWireframeOverrideColor parms{};	
	parms.Color = Color;

	ProcessEvent(fn, &parms);
}

void UGeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset");

	FSetStartTimeOffset parms{};	
	parms.NewStartTimeOffset = NewStartTimeOffset;

	ProcessEvent(fn, &parms);
}

void UGeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed");

	FSetPlaybackSpeed parms{};	
	parms.NewPlaybackSpeed = NewPlaybackSpeed;

	ProcessEvent(fn, &parms);
}

void UGeometryCacheComponent::SetOverrideWireframeColor(bool bOverride){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor");

	FSetOverrideWireframeColor parms{};	
	parms.bOverride = bOverride;

	ProcessEvent(fn, &parms);
}

void UGeometryCacheComponent::SetMotionVectorScale(float NewMotionVectorScale){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale");

	FSetMotionVectorScale parms{};	
	parms.NewMotionVectorScale = NewMotionVectorScale;

	ProcessEvent(fn, &parms);
}

void UGeometryCacheComponent::SetLooping(bool bNewLooping){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetLooping");

	FSetLooping parms{};	
	parms.bNewLooping = bNewLooping;

	ProcessEvent(fn, &parms);
}

bool UGeometryCacheComponent::SetGeometryCache(struct UGeometryCache* NewGeomCache){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetGeometryCache");

	FSetGeometryCache parms{};	
	parms.NewGeomCache = NewGeomCache;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGeometryCacheComponent::SetExtrapolateFrames(bool bNewExtrapolating){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames");

	FSetExtrapolateFrames parms{};	
	parms.bNewExtrapolating = bNewExtrapolating;

	ProcessEvent(fn, &parms);
}

void UGeometryCacheComponent::PlayReversedFromEnd(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd");

	FPlayReversedFromEnd parms{};	

	ProcessEvent(fn, &parms);
}

void UGeometryCacheComponent::PlayReversed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayReversed");

	FPlayReversed parms{};	

	ProcessEvent(fn, &parms);
}

void UGeometryCacheComponent::PlayFromStart(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayFromStart");

	FPlayFromStart parms{};	

	ProcessEvent(fn, &parms);
}

void UGeometryCacheComponent::Play(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Play");

	FPlay parms{};	

	ProcessEvent(fn, &parms);
}

void UGeometryCacheComponent::Pause(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Pause");

	FPause parms{};	

	ProcessEvent(fn, &parms);
}

bool UGeometryCacheComponent::IsPlayingReversed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsPlayingReversed");

	FIsPlayingReversed parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UGeometryCacheComponent::IsPlaying(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsPlaying");

	FIsPlaying parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UGeometryCacheComponent::IsLooping(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsLooping");

	FIsLooping parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UGeometryCacheComponent::IsExtrapolatingFrames(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames");

	FIsExtrapolatingFrames parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FLinearColor UGeometryCacheComponent::GetWireframeOverrideColor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor");

	FGetWireframeOverrideColor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGeometryCacheComponent::GetStartTimeOffset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset");

	FGetStartTimeOffset parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGeometryCacheComponent::GetPlaybackSpeed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed");

	FGetPlaybackSpeed parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGeometryCacheComponent::GetPlaybackDirection(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection");

	FGetPlaybackDirection parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UGeometryCacheComponent::GetOverrideWireframeColor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor");

	FGetOverrideWireframeColor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UGeometryCacheComponent::GetNumberOfFrames(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames");

	FGetNumberOfFrames parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGeometryCacheComponent::GetMotionVectorScale(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale");

	FGetMotionVectorScale parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGeometryCacheComponent::GetDuration(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetDuration");

	FGetDuration parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGeometryCacheComponent::GetAnimationTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetAnimationTime");

	FGetAnimationTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample");

	FAddMeshSample parms{};	
	parms.MeshData = MeshData;
	parms.SampleTime = SampleTime;

	ProcessEvent(fn, &parms);
}

void UGeometryCacheTrack_TransformAnimation::SetMesh(struct FGeometryCacheMeshData& NewMeshData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh");

	FSetMesh parms{};	
	parms.NewMeshData = NewMeshData;

	ProcessEvent(fn, &parms);
}

void UGeometryCacheTrack_TransformGroupAnimation::SetMesh(struct FGeometryCacheMeshData& NewMeshData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh");

	FSetMesh parms{};	
	parms.NewMeshData = NewMeshData;

	ProcessEvent(fn, &parms);
}

