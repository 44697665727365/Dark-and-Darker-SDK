#pragma once 
#include <GA_DemonBerserker_AttackPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DemonBerserker_AttackPhase.GA_DemonBerserker_AttackPhase_C
// Size: 0x640(Inherited: 0x580)
struct UGA_DemonBerserker_AttackPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FGameplayTag Event Tag;  // 0x588 (0x588)
	struct FGameplayEventData Trigger Event Data;  // 0x590 (0x590)


	void EventReceived_C04B84C441549667BDACC89A3F87529D(struct FGameplayEventData Payload); // Function GA_DemonBerserker_AttackPhase.GA_DemonBerserker_AttackPhase_C.EventReceived_C04B84C441549667BDACC89A3F87529D
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_DemonBerserker_AttackPhase.GA_DemonBerserker_AttackPhase_C.AbilityActivated
	void ExecuteUbergraph_GA_DemonBerserker_AttackPhase(int32_t EntryPoint); // Function GA_DemonBerserker_AttackPhase.GA_DemonBerserker_AttackPhase_C.ExecuteUbergraph_GA_DemonBerserker_AttackPhase
}; 
 
 


