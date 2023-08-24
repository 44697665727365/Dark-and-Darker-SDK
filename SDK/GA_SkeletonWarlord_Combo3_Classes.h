#pragma once 
#include <GA_SkeletonWarlord_Combo3_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonWarlord_Combo3.GA_SkeletonWarlord_Combo3_C
// Size: 0x790(Inherited: 0x6C9)
struct UGA_SkeletonWarlord_Combo3_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct FGameplayTag Event Tag;  // 0x6D8 (0x6D8)
	struct FGameplayEventData Trigger Event Data;  // 0x6E0 (0x6E0)


	void EventReceived_17636CDC450CD4F648F2F1BDC7F928A4(struct FGameplayEventData Payload); // Function GA_SkeletonWarlord_Combo3.GA_SkeletonWarlord_Combo3_C.EventReceived_17636CDC450CD4F648F2F1BDC7F928A4
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonWarlord_Combo3.GA_SkeletonWarlord_Combo3_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonWarlord_Combo3(int32_t EntryPoint); // Function GA_SkeletonWarlord_Combo3.GA_SkeletonWarlord_Combo3_C.ExecuteUbergraph_GA_SkeletonWarlord_Combo3
}; 
 
 


