#pragma once 
#include <GA_GiantWorm_AttackPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GiantWorm_AttackPhase.GA_GiantWorm_AttackPhase_C
// Size: 0x588(Inherited: 0x580)
struct UGA_GiantWorm_AttackPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_4F55133E4381624B6289419D27021B79(struct FGameplayEventData Payload); // Function GA_GiantWorm_AttackPhase.GA_GiantWorm_AttackPhase_C.EventReceived_4F55133E4381624B6289419D27021B79
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GiantWorm_AttackPhase.GA_GiantWorm_AttackPhase_C.AbilityActivated
	void ExecuteUbergraph_GA_GiantWorm_AttackPhase(int32_t EntryPoint); // Function GA_GiantWorm_AttackPhase.GA_GiantWorm_AttackPhase_C.ExecuteUbergraph_GA_GiantWorm_AttackPhase
}; 
 
 


