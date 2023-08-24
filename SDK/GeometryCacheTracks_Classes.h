#pragma once 
#include <GeometryCacheTracks_Structs.h>
 
 
 
// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// Size: 0x138(Inherited: 0xF0)
struct UMovieSceneGeometryCacheSection : UMovieSceneSection
{
	struct FMovieSceneGeometryCacheParams Params;  // 0xF0 (0xF0)


}; 
 
 


// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// Size: 0xB0(Inherited: 0x98)
struct UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack
{
	char pad_152[8];  // 0x98 (0x98)
	struct TArray<struct UMovieSceneSection*> AnimationSections;  // 0xA0 (0xA0)


}; 
 
 


