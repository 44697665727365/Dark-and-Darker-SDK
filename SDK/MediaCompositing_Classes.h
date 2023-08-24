#pragma once 
#include <MediaCompositing_Structs.h>
 
 
 
// Class MediaCompositing.MovieSceneMediaSection
// Size: 0x130(Inherited: 0xF0)
struct UMovieSceneMediaSection : UMovieSceneSection
{
	struct UMediaSource* MediaSource;  // 0xF0 (0xF0)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool bLooping : 1;  // 0xF8 (0xF8)
	char pad_249[3];  // 0xF9 (0xF9)
	struct FFrameNumber StartFrameOffset;  // 0xFC (0xFC)
	struct UMediaTexture* MediaTexture;  // 0x100 (0x100)
	struct UMediaSoundComponent* MediaSoundComponent;  // 0x108 (0x108)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool bUseExternalMediaPlayer : 1;  // 0x110 (0x110)
	char pad_273[7];  // 0x111 (0x111)
	struct UMediaPlayer* ExternalMediaPlayer;  // 0x118 (0x118)
	struct FMediaSourceCacheSettings CacheSettings;  // 0x120 (0x120)
	char pad_296_1 : 7;  // 0x128 (0x128)
	bool bHasMediaPlayerProxy : 1;  // 0x128 (0x128)
	char pad_297[7];  // 0x129 (0x129)


}; 
 
 


// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
// Size: 0x100(Inherited: 0xF0)
struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection
{
	struct UMediaSource* MediaSource;  // 0xF0 (0xF0)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool bLoop : 1;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)


}; 
 
 


// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
// Size: 0xD0(Inherited: 0xC8)
struct UMovieSceneMediaPlayerPropertyTrack : UMovieScenePropertyTrack
{
	char pad_200[8];  // 0xC8 (0xC8)


}; 
 
 


// Class MediaCompositing.MovieSceneMediaTrack
// Size: 0xB0(Inherited: 0x98)
struct UMovieSceneMediaTrack : UMovieSceneNameableTrack
{
	char pad_152[8];  // 0x98 (0x98)
	struct TArray<struct UMovieSceneSection*> MediaSections;  // 0xA0 (0xA0)


}; 
 
 


