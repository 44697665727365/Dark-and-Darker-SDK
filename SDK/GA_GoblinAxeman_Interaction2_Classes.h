#pragma once 
#include <GA_GoblinAxeman_Interaction2_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinAxeman_Interaction2.GA_GoblinAxeman_Interaction2_C
// Size: 0x588(Inherited: 0x580)
struct UGA_GoblinAxeman_Interaction2_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_5C57B40B4965DF1F9F96FCAB32D9F692(struct FGameplayEventData Payload); // Function GA_GoblinAxeman_Interaction2.GA_GoblinAxeman_Interaction2_C.EventReceived_5C57B40B4965DF1F9F96FCAB32D9F692
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GoblinAxeman_Interaction2.GA_GoblinAxeman_Interaction2_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinAxeman_Interaction2.GA_GoblinAxeman_Interaction2_C.AbilityActivated
	void ExecuteUbergraph_GA_GoblinAxeman_Interaction2(int32_t EntryPoint); // Function GA_GoblinAxeman_Interaction2.GA_GoblinAxeman_Interaction2_C.ExecuteUbergraph_GA_GoblinAxeman_Interaction2
}; 
 
 


