#pragma once 
#include <GA_SkeletonSpearman_Attack3_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonSpearman_Attack3.GA_SkeletonSpearman_Attack3_C
// Size: 0x6D9(Inherited: 0x6C9)
struct UGA_SkeletonSpearman_Attack3_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	char pad_1752_1 : 7;  // 0x6D8 (0x6D8)
	bool Use Combo : 1;  // 0x6D8 (0x6D8)


	void EventReceived_175188354EEA60D137DEA1B109D779BC(struct FGameplayEventData Payload); // Function GA_SkeletonSpearman_Attack3.GA_SkeletonSpearman_Attack3_C.EventReceived_175188354EEA60D137DEA1B109D779BC
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SkeletonSpearman_Attack3.GA_SkeletonSpearman_Attack3_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonSpearman_Attack3.GA_SkeletonSpearman_Attack3_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonSpearman_Attack3(int32_t EntryPoint); // Function GA_SkeletonSpearman_Attack3.GA_SkeletonSpearman_Attack3_C.ExecuteUbergraph_GA_SkeletonSpearman_Attack3
}; 
 
 


