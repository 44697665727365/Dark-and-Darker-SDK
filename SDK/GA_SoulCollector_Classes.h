#pragma once 
#include <GA_SoulCollector_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SoulCollector.GA_SoulCollector_C
// Size: 0x560(Inherited: 0x558)
struct UGA_SoulCollector_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)


	void EventReceived_8AF98B894782B08BACFA3A8E23DB16CE(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_SoulCollector.GA_SoulCollector_C.EventReceived_8AF98B894782B08BACFA3A8E23DB16CE
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_SoulCollector.GA_SoulCollector_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_SoulCollector(int32_t EntryPoint); // Function GA_SoulCollector.GA_SoulCollector_C.ExecuteUbergraph_GA_SoulCollector
}; 
 
 


