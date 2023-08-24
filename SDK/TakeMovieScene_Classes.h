#pragma once 
#include <TakeMovieScene_Structs.h>
 
 
 
// Class TakeMovieScene.MovieSceneTakeSection
// Size: 0x710(Inherited: 0xF0)
struct UMovieSceneTakeSection : UMovieSceneSection
{
	struct FMovieSceneIntegerChannel HoursCurve;  // 0xF0 (0xF0)
	struct FMovieSceneIntegerChannel MinutesCurve;  // 0x1F0 (0x1F0)
	struct FMovieSceneIntegerChannel SecondsCurve;  // 0x2F0 (0x2F0)
	struct FMovieSceneIntegerChannel FramesCurve;  // 0x3F0 (0x3F0)
	struct FMovieSceneFloatChannel SubFramesCurve;  // 0x4F0 (0x4F0)
	struct FMovieSceneStringChannel Slate;  // 0x600 (0x600)


}; 
 
 


// Class TakeMovieScene.MovieSceneTakeSettings
// Size: 0x88(Inherited: 0x28)
struct UMovieSceneTakeSettings : UObject
{
	struct FString HoursName;  // 0x28 (0x28)
	struct FString MinutesName;  // 0x38 (0x38)
	struct FString SecondsName;  // 0x48 (0x48)
	struct FString FramesName;  // 0x58 (0x58)
	struct FString SubFramesName;  // 0x68 (0x68)
	struct FString SlateName;  // 0x78 (0x78)


}; 
 
 


// Class TakeMovieScene.MovieSceneTakeTrack
// Size: 0xA8(Inherited: 0x98)
struct UMovieSceneTakeTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x98 (0x98)


}; 
 
 


