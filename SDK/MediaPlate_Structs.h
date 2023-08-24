#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function MediaPlate.MediaPlateComponent.GetMeshRange
struct FGetMeshRange
{
	struct FVector2D ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio
struct FGetLetterboxAspectRatio
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaPlate.MediaPlateComponent.OnMediaOpened
struct FOnMediaOpened
{
	struct FString DeviceUrl;  // 0x0 (0x0)


}; 
 
 // Function MediaPlate.MediaPlateComponent.IsMediaPlatePlaying
struct FIsMediaPlatePlaying
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaPlate.MediaPlateComponent.GetLoop
struct FGetLoop
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaPlate.MediaPlateComponent.GetMediaPlayer
struct FGetMediaPlayer
{
	struct UMediaPlayer* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaPlate.MediaPlateComponent.GetMediaTexture
struct FGetMediaTexture
{
	struct UMediaTexture* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaPlate.MediaPlateComponent.Rewind
struct FRewind
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaPlate.MediaPlateComponent.SetLoop
struct FSetLoop
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInLoop : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaPlate.MediaPlateComponent.Seek
struct FSeek
{
	struct FTimespan Time;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible
struct FSetPlayOnlyWhenVisible
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInPlayOnlyWhenVisible : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio
struct FSetLetterboxAspectRatio
{
	float AspectRatio;  // 0x0 (0x0)


}; 
 
 // Function MediaPlate.MediaPlateComponent.SetMeshRange
struct FSetMeshRange
{
	struct FVector2D InMeshRange;  // 0x0 (0x0)


}; 
 
 