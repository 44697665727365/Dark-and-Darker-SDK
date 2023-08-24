#pragma once 
#include <ChaosCaching_Structs.h>
 
 
 
// Class ChaosCaching.ChaosCache
// Size: 0x250(Inherited: 0x28)
struct UChaosCache : UObject
{
	float RecordedDuration;  // 0x28 (0x28)
	uint32_t NumRecordedFrames;  // 0x2C (0x2C)
	struct TArray<int32_t> TrackToParticle;  // 0x30 (0x30)
	struct TArray<struct FPerParticleCacheData> ParticleTracks;  // 0x40 (0x40)
	struct TMap<struct FName, struct FRichCurves> ChannelsTracks;  // 0x50 (0x50)
	struct TMap<struct FName, struct FRichCurve> CurveData;  // 0xA0 (0xA0)
	struct TMap<struct FName, struct FCacheEventTrack> EventTracks;  // 0xF0 (0xF0)
	struct FCacheSpawnableTemplate Spawnable;  // 0x140 (0x140)
	struct FGuid AdapterGuid;  // 0x210 (0x210)
	int32_t Version;  // 0x220 (0x220)
	char pad_548[44];  // 0x224 (0x224)


}; 
 
 


// Class ChaosCaching.ChaosCacheCollection
// Size: 0x38(Inherited: 0x28)
struct UChaosCacheCollection : UObject
{
	struct TArray<struct UChaosCache*> Caches;  // 0x28 (0x28)


}; 
 
 


// Class ChaosCaching.ChaosCacheManager
// Size: 0x338(Inherited: 0x290)
struct AChaosCacheManager : AActor
{
	struct UChaosCacheCollection* CacheCollection;  // 0x290 (0x290)
	uint8_t CacheMode;  // 0x298 (0x298)
	uint8_t StartMode;  // 0x299 (0x299)
	char pad_666[2];  // 0x29A (0x29A)
	float StartTime;  // 0x29C (0x29C)
	char pad_672[8];  // 0x2A0 (0x2A0)
	struct TArray<struct FObservedComponent> ObservedComponents;  // 0x2A8 (0x2A8)
	char pad_696[128];  // 0x2B8 (0x2B8)


	void TriggerComponentByCache(struct FName InCacheName); // Function ChaosCaching.ChaosCacheManager.TriggerComponentByCache
	void TriggerComponent(struct UPrimitiveComponent* InComponent); // Function ChaosCaching.ChaosCacheManager.TriggerComponent
	void TriggerAll(); // Function ChaosCaching.ChaosCacheManager.TriggerAll
	void SetStartTime(float InStartTime); // Function ChaosCaching.ChaosCacheManager.SetStartTime
	void ResetSingleTransform(int32_t InIndex); // Function ChaosCaching.ChaosCacheManager.ResetSingleTransform
	void ResetAllComponentTransforms(); // Function ChaosCaching.ChaosCacheManager.ResetAllComponentTransforms
}; 
 
 


// Class ChaosCaching.ChaosCachePlayer
// Size: 0x338(Inherited: 0x338)
struct AChaosCachePlayer : AChaosCacheManager
{


}; 
 
 


// Class ChaosCaching.MovieSceneChaosCacheSection
// Size: 0x120(Inherited: 0xF8)
struct UMovieSceneChaosCacheSection : UMovieSceneBaseCacheSection
{
	struct FMovieSceneChaosCacheParams Params;  // 0xF8 (0xF8)


}; 
 
 


// Class ChaosCaching.MovieSceneChaosCacheTrack
// Size: 0xB0(Inherited: 0x98)
struct UMovieSceneChaosCacheTrack : UMovieSceneNameableTrack
{
	char pad_152[8];  // 0x98 (0x98)
	struct TArray<struct UMovieSceneSection*> AnimationSections;  // 0xA0 (0xA0)


}; 
 
 


