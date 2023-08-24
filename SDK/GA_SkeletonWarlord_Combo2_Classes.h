#pragma once 
#include <GA_SkeletonWarlord_Combo2_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonWarlord_Combo2.GA_SkeletonWarlord_Combo2_C
// Size: 0x790(Inherited: 0x6C9)
struct UGA_SkeletonWarlord_Combo2_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct FGameplayTag Event Tag;  // 0x6D8 (0x6D8)
	struct FGameplayEventData Trigger Event Data;  // 0x6E0 (0x6E0)


	void EventReceived_E4F41D3B43AD548E3B55F6877DD81A9F(struct FGameplayEventData Payload); // Function GA_SkeletonWarlord_Combo2.GA_SkeletonWarlord_Combo2_C.EventReceived_E4F41D3B43AD548E3B55F6877DD81A9F
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonWarlord_Combo2.GA_SkeletonWarlord_Combo2_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonWarlord_Combo2(int32_t EntryPoint); // Function GA_SkeletonWarlord_Combo2.GA_SkeletonWarlord_Combo2_C.ExecuteUbergraph_GA_SkeletonWarlord_Combo2
}; 
 
 


