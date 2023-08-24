#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ChaosCaching.CacheSpawnableTemplate
struct FCacheSpawnableTemplate
{
	struct UObject* DuplicatedTemplate;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform InitialTransform;  // 0x10 (0x10)
	struct FTransform ComponentTransform;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ChaosCaching.EnableStateEvent
// Size: 0x10(Inherited: 0x8)
struct FEnableStateEvent : FCacheEventBase
{
	int32_t Index;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bEnable : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // ScriptStruct ChaosCaching.CacheEventBase
struct FCacheEventBase
{
	char pad_0[8];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ChaosCaching.CollisionEvent
// Size: 0xF0(Inherited: 0x8)
struct FCollisionEvent : FCacheEventBase
{
	struct FVector Location;  // 0x8 (0x8)
	struct FVector AccumulatedImpulse;  // 0x20 (0x20)
	struct FVector Normal;  // 0x38 (0x38)
	struct FVector Velocity1;  // 0x50 (0x50)
	struct FVector Velocity2;  // 0x68 (0x68)
	struct FVector DeltaVelocity1;  // 0x80 (0x80)
	struct FVector DeltaVelocity2;  // 0x98 (0x98)
	struct FVector AngularVelocity1;  // 0xB0 (0xB0)
	struct FVector AngularVelocity2;  // 0xC8 (0xC8)
	float Mass1;  // 0xE0 (0xE0)
	float Mass2;  // 0xE4 (0xE4)
	float PenetrationDepth;  // 0xE8 (0xE8)
	char pad_236[4];  // 0xEC (0xEC)


}; 
 
 // ScriptStruct ChaosCaching.CacheEventTrack
struct FCacheEventTrack
{
	struct FName Name;  // 0x0 (0x0)
	struct UScriptStruct* Struct;  // 0x8 (0x8)
	struct TArray<float> TimeStamps;  // 0x10 (0x10)
	char pad_32[24];  // 0x20 (0x20)


}; 
 
 // ScriptStruct ChaosCaching.ObservedComponent
struct FObservedComponent
{
	struct FName CacheName;  // 0x0 (0x0)
	struct FComponentReference ComponentRef;  // 0x8 (0x8)
	struct FSoftComponentReference SoftComponentRef;  // 0x30 (0x30)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bIsSimulating : 1;  // 0x80 (0x80)
	char pad_129[239];  // 0x81 (0x81)


}; 
 
 // ScriptStruct ChaosCaching.PerParticleCacheData
struct FPerParticleCacheData
{
	struct FParticleTransformTrack TransformData;  // 0x0 (0x0)
	struct TMap<struct FName, struct FRichCurve> CurveData;  // 0x48 (0x48)


}; 
 
 // ScriptStruct ChaosCaching.ParticleTransformTrack
struct FParticleTransformTrack
{
	struct FRawAnimSequenceTrack RawTransformTrack;  // 0x0 (0x0)
	float BeginOffset;  // 0x30 (0x30)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool bDeactivateOnEnd : 1;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	struct TArray<float> KeyTimestamps;  // 0x38 (0x38)


}; 
 
 // ScriptStruct ChaosCaching.RichCurves
struct FRichCurves
{
	struct TArray<struct FRichCurve> RichCurves;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ChaosCaching.BreakingEvent
// Size: 0x90(Inherited: 0x8)
struct FBreakingEvent : FCacheEventBase
{
	int32_t Index;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FVector Location;  // 0x10 (0x10)
	struct FVector Velocity;  // 0x28 (0x28)
	struct FVector AngularVelocity;  // 0x40 (0x40)
	float Mass;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)
	struct FVector BoundingBoxMin;  // 0x60 (0x60)
	struct FVector BoundingBoxMax;  // 0x78 (0x78)


}; 
 
 // Function ChaosCaching.ChaosCacheManager.SetStartTime
struct FSetStartTime
{
	float InStartTime;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ChaosCaching.TrailingEvent
// Size: 0x88(Inherited: 0x8)
struct FTrailingEvent : FCacheEventBase
{
	int32_t Index;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FVector Location;  // 0x10 (0x10)
	struct FVector Velocity;  // 0x28 (0x28)
	struct FVector AngularVelocity;  // 0x40 (0x40)
	struct FVector BoundingBoxMin;  // 0x58 (0x58)
	struct FVector BoundingBoxMax;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ChaosCaching.MovieSceneChaosCacheParams
// Size: 0x28(Inherited: 0x20)
struct FMovieSceneChaosCacheParams : FMovieSceneBaseCacheParams
{
	struct UChaosCacheCollection* CacheCollection;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ChaosCaching.MovieSceneChaosCacheSectionTemplateParameters
// Size: 0x30(Inherited: 0x8)
struct FMovieSceneChaosCacheSectionTemplateParameters : FMovieSceneBaseCacheSectionTemplateParameters
{
	struct FMovieSceneChaosCacheParams ChaosCacheParams;  // 0x8 (0x8)


}; 
 
 // Function ChaosCaching.ChaosCacheManager.ResetSingleTransform
struct FResetSingleTransform
{
	int32_t InIndex;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ChaosCaching.MovieSceneChaosCacheSectionTemplate
// Size: 0x50(Inherited: 0x20)
struct FMovieSceneChaosCacheSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneChaosCacheSectionTemplateParameters Params;  // 0x20 (0x20)


}; 
 
 // Function ChaosCaching.ChaosCacheManager.TriggerComponent
struct FTriggerComponent
{
	struct UPrimitiveComponent* InComponent;  // 0x0 (0x0)


}; 
 
 // Function ChaosCaching.ChaosCacheManager.TriggerComponentByCache
struct FTriggerComponentByCache
{
	struct FName InCacheName;  // 0x0 (0x0)


}; 
 
 