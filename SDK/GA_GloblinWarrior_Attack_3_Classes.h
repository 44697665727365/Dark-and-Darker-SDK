#pragma once 
#include <GA_GloblinWarrior_Attack_3_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GloblinWarrior_Attack_3.GA_GloblinWarrior_Attack_2_C
// Size: 0x6D8(Inherited: 0x6C9)
struct UGA_GloblinWarrior_Attack_2_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GloblinWarrior_Attack_3.GA_GloblinWarrior_Attack_2_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GloblinWarrior_Attack_3.GA_GloblinWarrior_Attack_2_C.AbilityActivated
	void ExecuteUbergraph_GA_GloblinWarrior_Attack_3(int32_t EntryPoint); // Function GA_GloblinWarrior_Attack_3.GA_GloblinWarrior_Attack_2_C.ExecuteUbergraph_GA_GloblinWarrior_Attack_3
}; 
 
 


