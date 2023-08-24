#pragma once 
#include <GA_SkeletonArcher_Attack3_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonArcher_Attack3.GA_SkeletonArcher_Attack3_C
// Size: 0x778(Inherited: 0x6C0)
struct UGA_SkeletonArcher_Attack3_C : UGA_MonsterChargedRangedAttackBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6C0 (0x6C0)
	struct FGameplayEventData Trigger Event Data;  // 0x6C8 (0x6C8)


	void EventReceived_8FB9027344203331AB7216B23DB68538(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_SkeletonArcher_Attack3.GA_SkeletonArcher_Attack3_C.EventReceived_8FB9027344203331AB7216B23DB68538
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonArcher_Attack3.GA_SkeletonArcher_Attack3_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SkeletonArcher_Attack3.GA_SkeletonArcher_Attack3_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_SkeletonArcher_Attack3(int32_t EntryPoint); // Function GA_SkeletonArcher_Attack3.GA_SkeletonArcher_Attack3_C.ExecuteUbergraph_GA_SkeletonArcher_Attack3
}; 
 
 


