#pragma once 
#include <ImgMedia_Structs.h>
 
 
 
// Class ImgMedia.ImgMediaSource
// Size: 0xD0(Inherited: 0x88)
struct UImgMediaSource : UBaseMediaSource
{
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool IsPathRelativeToProjectRoot : 1;  // 0x88 (0x88)
	char pad_137[3];  // 0x89 (0x89)
	struct FFrameRate FrameRateOverride;  // 0x8C (0x8C)
	char pad_148[4];  // 0x94 (0x94)
	struct FString ProxyOverride;  // 0x98 (0x98)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool bFillGapsInSequence : 1;  // 0xA8 (0xA8)
	char pad_169[7];  // 0xA9 (0xA9)
	struct FDirectoryPath SequencePath;  // 0xB0 (0xB0)
	char pad_192[16];  // 0xC0 (0xC0)


	void SetTokenizedSequencePath(struct FString Path); // Function ImgMedia.ImgMediaSource.SetTokenizedSequencePath
	void SetSequencePath(struct FString Path); // Function ImgMedia.ImgMediaSource.SetSequencePath
	void SetMipLevelDistance(float Distance); // Function ImgMedia.ImgMediaSource.SetMipLevelDistance
	void RemoveTargetObject(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.RemoveTargetObject
	void RemoveGlobalCamera(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.RemoveGlobalCamera
	struct FString GetSequencePath(); // Function ImgMedia.ImgMediaSource.GetSequencePath
	void GetProxies(struct TArray<struct FString>& OutProxies); // Function ImgMedia.ImgMediaSource.GetProxies
	void AddTargetObject(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.AddTargetObject
	void AddGlobalCamera(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.AddGlobalCamera
}; 
 
 


