#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
struct FGeometryCacheMeshBatchInfo
{
	char pad_0[12];  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale
struct FSetMotionVectorScale
{
	float NewMotionVectorScale;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GeometryCache.TrackRenderData
struct FTrackRenderData
{
	char pad_0[192];  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
struct FGetPlaybackDirection
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GeometryCache.GeometryCacheVertexInfo
struct FGeometryCacheVertexInfo
{
	char pad_0[9];  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
struct FSetExtrapolateFrames
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bNewExtrapolating : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GeometryCache.GeometryCacheMeshData
struct FGeometryCacheMeshData
{
	char pad_0[200];  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
struct FSetPlaybackSpeed
{
	float NewPlaybackSpeed;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GeometryCache.NiagaraGeometryCacheReference
struct FNiagaraGeometryCacheReference
{
	struct UGeometryCache* GeometryCache;  // 0x0 (0x0)
	struct FNiagaraUserParameterBinding GeometryCacheUserParamBinding;  // 0x8 (0x8)
	struct TArray<struct UMaterialInterface*> OverrideMaterials;  // 0x28 (0x28)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor
struct FSetWireframeOverrideColor
{
	struct FLinearColor Color;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.GetAnimationTime
struct FGetAnimationTime
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
struct FGetGeometryCacheComponent
{
	struct UGeometryCacheComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
struct FSetStartTimeOffset
{
	float NewStartTimeOffset;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.GetDuration
struct FGetDuration
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale
struct FGetMotionVectorScale
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
struct FGetNumberOfFrames
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor
struct FGetOverrideWireframeColor
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
struct FGetPlaybackSpeed
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
struct FGetStartTimeOffset
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor
struct FGetWireframeOverrideColor
{
	struct FLinearColor ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
struct FIsExtrapolatingFrames
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.IsLooping
struct FIsLooping
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.IsPlaying
struct FIsPlaying
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
struct FIsPlayingReversed
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.SetGeometryCache
struct FSetGeometryCache
{
	struct UGeometryCache* NewGeomCache;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.SetLooping
struct FSetLooping
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bNewLooping : 1;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
struct FSetMesh
{
	struct FGeometryCacheMeshData NewMeshData;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor
struct FSetOverrideWireframeColor
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bOverride : 1;  // 0x0 (0x0)


}; 
 
 // Function GeometryCache.GeometryCacheComponent.TickAtThisTime
struct FTickAtThisTime
{
	float Time;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bInIsRunning : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool bInBackwards : 1;  // 0x5 (0x5)
	char pad_6_1 : 7;  // 0x6 (0x6)
	bool bInIsLooping : 1;  // 0x6 (0x6)
	char pad_7[1];  // 0x7 (0x7)


}; 
 
 // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
struct FAddMeshSample
{
	struct FGeometryCacheMeshData MeshData;  // 0x0 (0x0)
	float SampleTime;  // 0xC8 (0xC8)
	char pad_204[4];  // 0xCC (0xCC)


}; 
 
 