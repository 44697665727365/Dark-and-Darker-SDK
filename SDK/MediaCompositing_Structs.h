#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
// Size: 0x48(Inherited: 0x38)
struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct UMediaSource* MediaSource;  // 0x38 (0x38)
	struct FFrameNumber SectionStartFrame;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool bLoop : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)


}; 
 
 // ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
struct FMovieSceneMediaSectionParams
{
	struct UMediaSoundComponent* MediaSoundComponent;  // 0x0 (0x0)
	struct UMediaSource* MediaSource;  // 0x8 (0x8)
	struct UMediaTexture* MediaTexture;  // 0x10 (0x10)
	struct UMediaPlayer* MediaPlayer;  // 0x18 (0x18)
	struct FFrameNumber SectionStartFrame;  // 0x20 (0x20)
	struct FFrameNumber SectionEndFrame;  // 0x24 (0x24)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bLooping : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	struct FFrameNumber StartFrameOffset;  // 0x2C (0x2C)


}; 
 
 // ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// Size: 0x50(Inherited: 0x20)
struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneMediaSectionParams Params;  // 0x20 (0x20)


}; 
 
 