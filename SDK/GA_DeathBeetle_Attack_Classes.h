#pragma once 
#include <GA_DeathBeetle_Attack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DeathBeetle_Attack.GA_DeathBeetle_Attack_C
// Size: 0x780(Inherited: 0x774)
struct UGA_DeathBeetle_Attack_C : UGA_MonsterProjectileAttackBase_C
{
	char pad_1908[4];  // 0x774 (0x774)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x778 (0x778)


	void EventReceived_200D1D174F8ECECE70651CBC26926225(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_DeathBeetle_Attack.GA_DeathBeetle_Attack_C.EventReceived_200D1D174F8ECECE70651CBC26926225
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_DeathBeetle_Attack.GA_DeathBeetle_Attack_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DeathBeetle_Attack.GA_DeathBeetle_Attack_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_DeathBeetle_Attack(int32_t EntryPoint); // Function GA_DeathBeetle_Attack.GA_DeathBeetle_Attack_C.ExecuteUbergraph_GA_DeathBeetle_Attack
}; 
 
 


