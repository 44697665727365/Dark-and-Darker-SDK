#pragma once 
#include <GA_SkeletonSwordman_Combo_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonSwordman_Combo.GA_SkeletonSwordman_Combo_C
// Size: 0x6D8(Inherited: 0x6C9)
struct UGA_SkeletonSwordman_Combo_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void EventReceived_B4969E1E4A0DA4D606942E9FA45052CC(struct FGameplayEventData Payload); // Function GA_SkeletonSwordman_Combo.GA_SkeletonSwordman_Combo_C.EventReceived_B4969E1E4A0DA4D606942E9FA45052CC
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonSwordman_Combo.GA_SkeletonSwordman_Combo_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonSwordman_Combo(int32_t EntryPoint); // Function GA_SkeletonSwordman_Combo.GA_SkeletonSwordman_Combo_C.ExecuteUbergraph_GA_SkeletonSwordman_Combo
}; 
 
 


