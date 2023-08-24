#pragma once 
#include <GA_LongswordActivate_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_LongswordActivate.GA_LongswordActivate_C
// Size: 0x560(Inherited: 0x558)
struct UGA_LongswordActivate_C : UGA_ItemActivate_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)


	void Activated(); // Function GA_LongswordActivate.GA_LongswordActivate_C.Activated
	void Deactivated(); // Function GA_LongswordActivate.GA_LongswordActivate_C.Deactivated
	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_LongswordActivate.GA_LongswordActivate_C.ReceivedEvent
	void ExecuteUbergraph_GA_LongswordActivate(int32_t EntryPoint); // Function GA_LongswordActivate.GA_LongswordActivate_C.ExecuteUbergraph_GA_LongswordActivate
}; 
 
 


