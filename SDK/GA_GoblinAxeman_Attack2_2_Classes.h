#pragma once 
#include <GA_GoblinAxeman_Attack2_2_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinAxeman_Attack2_2.GA_GoblinAxeman_Attack2_1_C
// Size: 0x6D9(Inherited: 0x6C9)
struct UGA_GoblinAxeman_Attack2_1_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	char pad_1752_1 : 7;  // 0x6D8 (0x6D8)
	bool Combo Triggered : 1;  // 0x6D8 (0x6D8)


	void EventReceived_B922E44B4298725F30DE1A86F0D55343(struct FGameplayEventData Payload); // Function GA_GoblinAxeman_Attack2_2.GA_GoblinAxeman_Attack2_1_C.EventReceived_B922E44B4298725F30DE1A86F0D55343
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinAxeman_Attack2_2.GA_GoblinAxeman_Attack2_1_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GoblinAxeman_Attack2_2.GA_GoblinAxeman_Attack2_1_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GoblinAxeman_Attack2_2(int32_t EntryPoint); // Function GA_GoblinAxeman_Attack2_2.GA_GoblinAxeman_Attack2_1_C.ExecuteUbergraph_GA_GoblinAxeman_Attack2_2
}; 
 
 


