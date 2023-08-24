#pragma once 
#include <GA_SkeletonWarlord_Combo1_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonWarlord_Combo1.GA_SkeletonWarlord_Combo1_C
// Size: 0x790(Inherited: 0x6C9)
struct UGA_SkeletonWarlord_Combo1_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct FGameplayTag Event Tag;  // 0x6D8 (0x6D8)
	struct FGameplayEventData Trigger Event Data;  // 0x6E0 (0x6E0)


	void EventReceived_CF85DD6A410D7338CFDCF9B068F7EE7E(struct FGameplayEventData Payload); // Function GA_SkeletonWarlord_Combo1.GA_SkeletonWarlord_Combo1_C.EventReceived_CF85DD6A410D7338CFDCF9B068F7EE7E
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonWarlord_Combo1.GA_SkeletonWarlord_Combo1_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SkeletonWarlord_Combo1.GA_SkeletonWarlord_Combo1_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_SkeletonWarlord_Combo1(int32_t EntryPoint); // Function GA_SkeletonWarlord_Combo1.GA_SkeletonWarlord_Combo1_C.ExecuteUbergraph_GA_SkeletonWarlord_Combo1
}; 
 
 


