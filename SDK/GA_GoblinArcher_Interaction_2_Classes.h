#pragma once 
#include <GA_GoblinArcher_Interaction_2_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinArcher_Interaction_2.GA_GoblinArcher_Interaction_1_C
// Size: 0x588(Inherited: 0x580)
struct UGA_GoblinArcher_Interaction_1_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_090DB0CE459F2E2DA5129AA346CDACE5(struct FGameplayEventData Payload); // Function GA_GoblinArcher_Interaction_2.GA_GoblinArcher_Interaction_1_C.EventReceived_090DB0CE459F2E2DA5129AA346CDACE5
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinArcher_Interaction_2.GA_GoblinArcher_Interaction_1_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GoblinArcher_Interaction_2.GA_GoblinArcher_Interaction_1_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GoblinArcher_Interaction_2(int32_t EntryPoint); // Function GA_GoblinArcher_Interaction_2.GA_GoblinArcher_Interaction_1_C.ExecuteUbergraph_GA_GoblinArcher_Interaction_2
}; 
 
 


