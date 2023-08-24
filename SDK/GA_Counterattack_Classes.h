#pragma once 
#include <GA_Counterattack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Counterattack.GA_Counterattack_C
// Size: 0x560(Inherited: 0x558)
struct UGA_Counterattack_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)


	void EventReceived_19CACCFA41352FB78A10C68219C531EE(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_Counterattack.GA_Counterattack_C.EventReceived_19CACCFA41352FB78A10C68219C531EE
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Counterattack.GA_Counterattack_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_Counterattack(int32_t EntryPoint); // Function GA_Counterattack.GA_Counterattack_C.ExecuteUbergraph_GA_Counterattack
}; 
 
 


