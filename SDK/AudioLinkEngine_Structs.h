#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying
struct FIsLinkPlaying
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink
struct FPlayLink
{
	float StartTime;  // 0x0 (0x0)


}; 
 
 // Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound
struct FSetLinkSound
{
	struct USoundBase* NewSound;  // 0x0 (0x0)


}; 
 
 