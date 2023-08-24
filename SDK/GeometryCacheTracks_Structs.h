#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
struct FMovieSceneGeometryCacheParams
{
	struct UGeometryCache* GeometryCacheAsset;  // 0x0 (0x0)
	struct FFrameNumber FirstLoopStartFrameOffset;  // 0x8 (0x8)
	struct FFrameNumber StartFrameOffset;  // 0xC (0xC)
	struct FFrameNumber EndFrameOffset;  // 0x10 (0x10)
	float PlayRate;  // 0x14 (0x14)
	char bReverse : 1;  // 0x18 (0x18)
	char pad_24_1 : 7;  // 0x18 (0x18)
	char pad_25[4];  // 0x19 (0x19)
	float StartOffset;  // 0x1C (0x1C)
	float EndOffset;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct FSoftObjectPath GeometryCache;  // 0x28 (0x28)


}; 
 
 // ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
// Size: 0x50(Inherited: 0x48)
struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams
{
	struct FFrameNumber SectionStartTime;  // 0x48 (0x48)
	struct FFrameNumber SectionEndTime;  // 0x4C (0x4C)


}; 
 
 // ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
// Size: 0x70(Inherited: 0x20)
struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneGeometryCacheSectionTemplateParameters Params;  // 0x20 (0x20)


}; 
 
 