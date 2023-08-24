#pragma once 
#include <GA_GoblinMage_Attack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinMage_Attack.GA_GoblinMage_Attack_C
// Size: 0x784(Inherited: 0x774)
struct UGA_GoblinMage_Attack_C : UGA_MonsterProjectileAttackBase_C
{
	char pad_1908[4];  // 0x774 (0x774)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x778 (0x778)
	int32_t Distance;  // 0x780 (0x780)


	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GoblinMage_Attack.GA_GoblinMage_Attack_C.K2_OnEndAbility
	void CreateProjectiles(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower, struct FVector StartLocation); // Function GA_GoblinMage_Attack.GA_GoblinMage_Attack_C.CreateProjectiles
	void ExecuteUbergraph_GA_GoblinMage_Attack(int32_t EntryPoint); // Function GA_GoblinMage_Attack.GA_GoblinMage_Attack_C.ExecuteUbergraph_GA_GoblinMage_Attack
}; 
 
 


