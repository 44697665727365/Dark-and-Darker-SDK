#pragma once 
#include <GA_Slime_AttackPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Slime_AttackPhase.GA_Slime_AttackPhase_C
// Size: 0x588(Inherited: 0x580)
struct UGA_Slime_AttackPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_24CAE78F43C9EF3054EB50932E944C21(struct FGameplayEventData Payload); // Function GA_Slime_AttackPhase.GA_Slime_AttackPhase_C.EventReceived_24CAE78F43C9EF3054EB50932E944C21
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Slime_AttackPhase.GA_Slime_AttackPhase_C.AbilityActivated
	void ExecuteUbergraph_GA_Slime_AttackPhase(int32_t EntryPoint); // Function GA_Slime_AttackPhase.GA_Slime_AttackPhase_C.ExecuteUbergraph_GA_Slime_AttackPhase
}; 
 
 


