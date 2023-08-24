#pragma once 
#include <GA_SkeletonChampion_Combo1_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonChampion_Combo1.GA_SkeletonChampion_Combo1_C
// Size: 0x6F9(Inherited: 0x6C9)
struct UGA_SkeletonChampion_Combo1_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct ADCMonsterBase* DCMonster Base;  // 0x6D8 (0x6D8)
	struct ABP_UndeadKnight_Common_C* As BP Undead Knight;  // 0x6E0 (0x6E0)
	struct TArray<struct ADCCharacterBase*> Target Array;  // 0x6E8 (0x6E8)
	char pad_1784_1 : 7;  // 0x6F8 (0x6F8)
	bool Combo Triggered : 1;  // 0x6F8 (0x6F8)


	void EventReceived_B21BD62548561364FE7B6899C3B7D333(struct FGameplayEventData Payload); // Function GA_SkeletonChampion_Combo1.GA_SkeletonChampion_Combo1_C.EventReceived_B21BD62548561364FE7B6899C3B7D333
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonChampion_Combo1.GA_SkeletonChampion_Combo1_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SkeletonChampion_Combo1.GA_SkeletonChampion_Combo1_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_SkeletonChampion_Combo1(int32_t EntryPoint); // Function GA_SkeletonChampion_Combo1.GA_SkeletonChampion_Combo1_C.ExecuteUbergraph_GA_SkeletonChampion_Combo1
}; 
 
 


