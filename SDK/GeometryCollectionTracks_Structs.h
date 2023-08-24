#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
struct FMovieSceneGeometryCollectionParams
{
	char pad_0[8];  // 0x0 (0x0)
	struct FSoftObjectPath GeometryCollectionCache;  // 0x8 (0x8)
	struct FFrameNumber StartFrameOffset;  // 0x28 (0x28)
	struct FFrameNumber EndFrameOffset;  // 0x2C (0x2C)
	float PlayRate;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
// Size: 0x40(Inherited: 0x38)
struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams
{
	struct FFrameNumber SectionStartTime;  // 0x38 (0x38)
	struct FFrameNumber SectionEndTime;  // 0x3C (0x3C)


}; 
 
 // ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
// Size: 0x60(Inherited: 0x20)
struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneGeometryCollectionSectionTemplateParameters Params;  // 0x20 (0x20)


}; 
 
 