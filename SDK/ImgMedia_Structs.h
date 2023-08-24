#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ImgMedia.ImgMediaSourceCustomizationSequenceProxy
struct FImgMediaSourceCustomizationSequenceProxy
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // Function ImgMedia.ImgMediaSource.SetMipLevelDistance
struct FSetMipLevelDistance
{
	float Distance;  // 0x0 (0x0)


}; 
 
 // Function ImgMedia.ImgMediaSource.AddGlobalCamera
struct FAddGlobalCamera
{
	struct AActor* InActor;  // 0x0 (0x0)


}; 
 
 // Function ImgMedia.ImgMediaSource.AddTargetObject
struct FAddTargetObject
{
	struct AActor* InActor;  // 0x0 (0x0)


}; 
 
 // Function ImgMedia.ImgMediaSource.RemoveGlobalCamera
struct FRemoveGlobalCamera
{
	struct AActor* InActor;  // 0x0 (0x0)


}; 
 
 // Function ImgMedia.ImgMediaSource.GetProxies
struct FGetProxies
{
	struct TArray<struct FString> OutProxies;  // 0x0 (0x0)


}; 
 
 // Function ImgMedia.ImgMediaSource.GetSequencePath
struct FGetSequencePath
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function ImgMedia.ImgMediaSource.RemoveTargetObject
struct FRemoveTargetObject
{
	struct AActor* InActor;  // 0x0 (0x0)


}; 
 
 // Function ImgMedia.ImgMediaSource.SetSequencePath
struct FSetSequencePath
{
	struct FString Path;  // 0x0 (0x0)


}; 
 
 // Function ImgMedia.ImgMediaSource.SetTokenizedSequencePath
struct FSetTokenizedSequencePath
{
	struct FString Path;  // 0x0 (0x0)


}; 
 
 