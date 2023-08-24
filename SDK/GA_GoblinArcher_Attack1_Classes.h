#pragma once 
#include <GA_GoblinArcher_Attack1_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinArcher_Attack1.GA_GoblinArcher_Attack1_C
// Size: 0x780(Inherited: 0x774)
struct UGA_GoblinArcher_Attack1_C : UGA_MonsterProjectileAttackBase_C
{
	char pad_1908[4];  // 0x774 (0x774)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x778 (0x778)


	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GoblinArcher_Attack1.GA_GoblinArcher_Attack1_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinArcher_Attack1.GA_GoblinArcher_Attack1_C.AbilityActivated
	void ExecuteUbergraph_GA_GoblinArcher_Attack1(int32_t EntryPoint); // Function GA_GoblinArcher_Attack1.GA_GoblinArcher_Attack1_C.ExecuteUbergraph_GA_GoblinArcher_Attack1
}; 
 
 


