#pragma once 
#include <GA_CentaurDemon_AttackPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CentaurDemon_AttackPhase.GA_CentaurDemon_AttackPhase_C
// Size: 0x588(Inherited: 0x580)
struct UGA_CentaurDemon_AttackPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_087B9FCC4E4BA99C75BE66A78906D184(struct FGameplayEventData Payload); // Function GA_CentaurDemon_AttackPhase.GA_CentaurDemon_AttackPhase_C.EventReceived_087B9FCC4E4BA99C75BE66A78906D184
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_CentaurDemon_AttackPhase.GA_CentaurDemon_AttackPhase_C.AbilityActivated
	void ExecuteUbergraph_GA_CentaurDemon_AttackPhase(int32_t EntryPoint); // Function GA_CentaurDemon_AttackPhase.GA_CentaurDemon_AttackPhase_C.ExecuteUbergraph_GA_CentaurDemon_AttackPhase
}; 
 
 


