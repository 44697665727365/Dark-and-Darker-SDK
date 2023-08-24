#pragma once 
#include <GA_SpearActivate_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SpearActivate.GA_SpearActivate_C
// Size: 0x560(Inherited: 0x558)
struct UGA_SpearActivate_C : UGA_ItemActivate_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)


	void Activated(); // Function GA_SpearActivate.GA_SpearActivate_C.Activated
	void Deactivated(); // Function GA_SpearActivate.GA_SpearActivate_C.Deactivated
	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_SpearActivate.GA_SpearActivate_C.ReceivedEvent
	void ExecuteUbergraph_GA_SpearActivate(int32_t EntryPoint); // Function GA_SpearActivate.GA_SpearActivate_C.ExecuteUbergraph_GA_SpearActivate
}; 
 
 


