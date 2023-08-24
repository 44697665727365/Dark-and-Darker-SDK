#pragma once 
#include <AudioLinkEngine_Structs.h>
 
 
 
// Class AudioLinkEngine.AudioLinkBlueprintInterface
// Size: 0x28(Inherited: 0x28)
struct UAudioLinkBlueprintInterface : UInterface
{


	void StopLink(); // Function AudioLinkEngine.AudioLinkBlueprintInterface.StopLink
	void SetLinkSound(struct USoundBase* NewSound); // Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound
	void PlayLink(float StartTime); // Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink
	bool IsLinkPlaying(); // Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying
}; 
 
 


