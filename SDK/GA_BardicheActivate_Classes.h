#pragma once 
#include <GA_BardicheActivate_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_BardicheActivate.GA_BardicheActivate_C
// Size: 0x560(Inherited: 0x558)
struct UGA_BardicheActivate_C : UGA_ItemActivate_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)


	void Activated(); // Function GA_BardicheActivate.GA_BardicheActivate_C.Activated
	void Deactivated(); // Function GA_BardicheActivate.GA_BardicheActivate_C.Deactivated
	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_BardicheActivate.GA_BardicheActivate_C.ReceivedEvent
	void ExecuteUbergraph_GA_BardicheActivate(int32_t EntryPoint); // Function GA_BardicheActivate.GA_BardicheActivate_C.ExecuteUbergraph_GA_BardicheActivate
}; 
 
 


