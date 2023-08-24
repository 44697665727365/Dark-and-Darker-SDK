#pragma once 
#include <GA_GoblinArcher_Interaction_3_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinArcher_Interaction_3.GA_GoblinArcher_Interaction_2_C
// Size: 0x588(Inherited: 0x580)
struct UGA_GoblinArcher_Interaction_2_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_11A4D24C45BA8ED71979EAA1CF36CF6C(struct FGameplayEventData Payload); // Function GA_GoblinArcher_Interaction_3.GA_GoblinArcher_Interaction_2_C.EventReceived_11A4D24C45BA8ED71979EAA1CF36CF6C
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinArcher_Interaction_3.GA_GoblinArcher_Interaction_2_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GoblinArcher_Interaction_3.GA_GoblinArcher_Interaction_2_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GoblinArcher_Interaction_3(int32_t EntryPoint); // Function GA_GoblinArcher_Interaction_3.GA_GoblinArcher_Interaction_2_C.ExecuteUbergraph_GA_GoblinArcher_Interaction_3
}; 
 
 


