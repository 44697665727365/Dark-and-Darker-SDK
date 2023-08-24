#pragma once 
#include <GA_SkeletonMage_Attack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonMage_Attack.GA_SkeletonMage_Attack_C
// Size: 0x780(Inherited: 0x774)
struct UGA_SkeletonMage_Attack_C : UGA_MonsterProjectileAttackBase_C
{
	char pad_1908[4];  // 0x774 (0x774)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x778 (0x778)


	void EventReceived_E91096D849488AA98C851F90548DF633(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_SkeletonMage_Attack.GA_SkeletonMage_Attack_C.EventReceived_E91096D849488AA98C851F90548DF633
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonMage_Attack.GA_SkeletonMage_Attack_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonMage_Attack(int32_t EntryPoint); // Function GA_SkeletonMage_Attack.GA_SkeletonMage_Attack_C.ExecuteUbergraph_GA_SkeletonMage_Attack
}; 
 
 


