#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct MediaUtils.MediaPlayerTrackOptions
struct FMediaPlayerTrackOptions
{
	int32_t Audio;  // 0x0 (0x0)
	int32_t Caption;  // 0x4 (0x4)
	int32_t MetaData;  // 0x8 (0x8)
	int32_t Script;  // 0xC (0xC)
	int32_t Subtitle;  // 0x10 (0x10)
	int32_t Text;  // 0x14 (0x14)
	int32_t Video;  // 0x18 (0x18)


}; 
 
 // ScriptStruct MediaUtils.MediaPlayerOptions
struct FMediaPlayerOptions
{
	struct FMediaPlayerTrackOptions Tracks;  // 0x0 (0x0)
	char pad_28[4];  // 0x1C (0x1C)
	struct FTimespan SeekTime;  // 0x20 (0x20)
	uint8_t PlayOnOpen;  // 0x28 (0x28)
	uint8_t Loop;  // 0x29 (0x29)
	char pad_42[6];  // 0x2A (0x2A)


}; 
 
 