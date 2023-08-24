#pragma once 
#include <GeometryCollectionTracks_Structs.h>
 
 
 
// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// Size: 0x128(Inherited: 0xF0)
struct UMovieSceneGeometryCollectionSection : UMovieSceneSection
{
	struct FMovieSceneGeometryCollectionParams Params;  // 0xF0 (0xF0)


}; 
 
 


// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// Size: 0xB0(Inherited: 0x98)
struct UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack
{
	char pad_152[8];  // 0x98 (0x98)
	struct TArray<struct UMovieSceneSection*> AnimationSections;  // 0xA0 (0xA0)


}; 
 
 


