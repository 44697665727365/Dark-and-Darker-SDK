#pragma once 
#include <GeometryCache_Structs.h>
 
 
 
// Class GeometryCache.GeometryCache
// Size: 0x70(Inherited: 0x28)
struct UGeometryCache : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct TArray<struct UMaterialInterface*> Materials;  // 0x30 (0x30)
	struct TArray<struct UGeometryCacheTrack*> Tracks;  // 0x40 (0x40)
	char pad_80[16];  // 0x50 (0x50)
	int32_t StartFrame;  // 0x60 (0x60)
	int32_t EndFrame;  // 0x64 (0x64)
	uint64_t Hash;  // 0x68 (0x68)


}; 
 
 


// Class GeometryCache.GeometryCacheCodecBase
// Size: 0x38(Inherited: 0x28)
struct UGeometryCacheCodecBase : UObject
{
	struct TArray<int32_t> TopologyRanges;  // 0x28 (0x28)


}; 
 
 


// Class GeometryCache.GeometryCacheTrack
// Size: 0x58(Inherited: 0x28)
struct UGeometryCacheTrack : UObject
{
	float Duration;  // 0x28 (0x28)
	char pad_44[44];  // 0x2C (0x2C)


}; 
 
 


// Class GeometryCache.GeometryCacheActor
// Size: 0x298(Inherited: 0x290)
struct AGeometryCacheActor : AActor
{
	struct UGeometryCacheComponent* GeometryCacheComponent;  // 0x290 (0x290)


	struct UGeometryCacheComponent* GetGeometryCacheComponent(); // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
}; 
 
 


// Class GeometryCache.GeometryCacheCodecRaw
// Size: 0x40(Inherited: 0x38)
struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase
{
	int32_t DummyProperty;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 


// Class GeometryCache.GeometryCacheCodecV1
// Size: 0x40(Inherited: 0x38)
struct UGeometryCacheCodecV1 : UGeometryCacheCodecBase
{
	char pad_56[8];  // 0x38 (0x38)


}; 
 
 


// Class GeometryCache.GeometryCacheComponent
// Size: 0x600(Inherited: 0x570)
struct UGeometryCacheComponent : UMeshComponent
{
	struct UGeometryCache* GeometryCache;  // 0x570 (0x570)
	char pad_1400_1 : 7;  // 0x578 (0x578)
	bool bRunning : 1;  // 0x578 (0x578)
	char pad_1401_1 : 7;  // 0x579 (0x579)
	bool bLooping : 1;  // 0x579 (0x579)
	char pad_1402_1 : 7;  // 0x57A (0x57A)
	bool bExtrapolateFrames : 1;  // 0x57A (0x57A)
	char pad_1403[1];  // 0x57B (0x57B)
	float StartTimeOffset;  // 0x57C (0x57C)
	float PlaybackSpeed;  // 0x580 (0x580)
	float MotionVectorScale;  // 0x584 (0x584)
	int32_t NumTracks;  // 0x588 (0x588)
	float ElapsedTime;  // 0x58C (0x58C)
	char pad_1424[76];  // 0x590 (0x590)
	float Duration;  // 0x5DC (0x5DC)
	char pad_1504_1 : 7;  // 0x5E0 (0x5E0)
	bool bManualTick : 1;  // 0x5E0 (0x5E0)
	char pad_1505_1 : 7;  // 0x5E1 (0x5E1)
	bool bOverrideWireframeColor : 1;  // 0x5E1 (0x5E1)
	char pad_1506[2];  // 0x5E2 (0x5E2)
	struct FLinearColor WireframeOverrideColor;  // 0x5E4 (0x5E4)
	char pad_1524[12];  // 0x5F4 (0x5F4)


	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop
	void SetWireframeOverrideColor(struct FLinearColor Color); // Function GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor
	void SetStartTimeOffset(float NewStartTimeOffset); // Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	void SetPlaybackSpeed(float NewPlaybackSpeed); // Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	void SetOverrideWireframeColor(bool bOverride); // Function GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor
	void SetMotionVectorScale(float NewMotionVectorScale); // Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale
	void SetLooping(bool bNewLooping); // Function GeometryCache.GeometryCacheComponent.SetLooping
	bool SetGeometryCache(struct UGeometryCache* NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache
	void SetExtrapolateFrames(bool bNewExtrapolating); // Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
	void PlayReversedFromEnd(); // Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	void PlayReversed(); // Function GeometryCache.GeometryCacheComponent.PlayReversed
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause
	bool IsPlayingReversed(); // Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
	bool IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying
	bool IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping
	bool IsExtrapolatingFrames(); // Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
	struct FLinearColor GetWireframeOverrideColor(); // Function GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor
	float GetStartTimeOffset(); // Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	float GetPlaybackSpeed(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	float GetPlaybackDirection(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	bool GetOverrideWireframeColor(); // Function GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor
	int32_t GetNumberOfFrames(); // Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	float GetMotionVectorScale(); // Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale
	float GetDuration(); // Function GeometryCache.GeometryCacheComponent.GetDuration
	float GetAnimationTime(); // Function GeometryCache.GeometryCacheComponent.GetAnimationTime
}; 
 
 


// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size: 0x80(Inherited: 0x58)
struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack
{
	uint32_t NumMeshSamples;  // 0x58 (0x58)
	char pad_92[36];  // 0x5C (0x5C)


	void AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
}; 
 
 


// Class GeometryCache.GeometryCacheTrackStreamable
// Size: 0xD8(Inherited: 0x58)
struct UGeometryCacheTrackStreamable : UGeometryCacheTrack
{
	struct UGeometryCacheCodecBase* Codec;  // 0x58 (0x58)
	char pad_96[104];  // 0x60 (0x60)
	float StartSampleTime;  // 0xC8 (0xC8)
	char pad_204[12];  // 0xCC (0xCC)


}; 
 
 


// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// Size: 0x120(Inherited: 0x58)
struct UGeometryCacheTrack_TransformAnimation : UGeometryCacheTrack
{
	char pad_88[200];  // 0x58 (0x58)


	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
}; 
 
 


// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Size: 0x120(Inherited: 0x58)
struct UGeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack
{
	char pad_88[200];  // 0x58 (0x58)


	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
}; 
 
 


// Class GeometryCache.NiagaraGeometryCacheRendererProperties
// Size: 0x368(Inherited: 0xE0)
struct UNiagaraGeometryCacheRendererProperties : UNiagaraRendererProperties
{
	struct TArray<struct FNiagaraGeometryCacheReference> GeometryCaches;  // 0xE0 (0xE0)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool bIsLooping : 1;  // 0xF0 (0xF0)
	char pad_241[3];  // 0xF1 (0xF1)
	uint32_t ComponentCountLimit;  // 0xF4 (0xF4)
	struct FNiagaraVariableAttributeBinding PositionBinding;  // 0xF8 (0xF8)
	struct FNiagaraVariableAttributeBinding RotationBinding;  // 0x150 (0x150)
	struct FNiagaraVariableAttributeBinding ScaleBinding;  // 0x1A8 (0x1A8)
	struct FNiagaraVariableAttributeBinding ElapsedTimeBinding;  // 0x200 (0x200)
	struct FNiagaraVariableAttributeBinding EnabledBinding;  // 0x258 (0x258)
	struct FNiagaraVariableAttributeBinding ArrayIndexBinding;  // 0x2B0 (0x2B0)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;  // 0x308 (0x308)
	int32_t RendererVisibility;  // 0x360 (0x360)
	char pad_868_1 : 7;  // 0x364 (0x364)
	bool bAssignComponentsOnParticleID : 1;  // 0x364 (0x364)
	char pad_869[3];  // 0x365 (0x365)


}; 
 
 


