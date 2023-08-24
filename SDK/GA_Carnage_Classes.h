#pragma once 
#include <GA_Carnage_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Carnage.GA_Carnage_C
// Size: 0x560(Inherited: 0x558)
struct UGA_Carnage_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)


	void EventReceived_660BEE954716E695D29F27AB6125BFEA(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_Carnage.GA_Carnage_C.EventReceived_660BEE954716E695D29F27AB6125BFEA
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Carnage.GA_Carnage_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_Carnage(int32_t EntryPoint); // Function GA_Carnage.GA_Carnage_C.ExecuteUbergraph_GA_Carnage
}; 
 
 


