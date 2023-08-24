#pragma once 
#include <GA_Melt_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Melt.GA_Melt_C
// Size: 0x560(Inherited: 0x558)
struct UGA_Melt_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)


	void EventReceived_572966854591EB9993AC94996BE81F87(struct FGameplayEventData Payload); // Function GA_Melt.GA_Melt_C.EventReceived_572966854591EB9993AC94996BE81F87
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Melt.GA_Melt_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_Melt(int32_t EntryPoint); // Function GA_Melt.GA_Melt_C.ExecuteUbergraph_GA_Melt
}; 
 
 


