#pragma once 
#include <GA_SkeletonArcherAttack2_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonArcherAttack2.GA_SkeletonArcherAttack2_C
// Size: 0x780(Inherited: 0x6C0)
struct UGA_SkeletonArcherAttack2_C : UGA_MonsterChargedRangedAttackBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6C0 (0x6C0)
	double Activate Combo Ratio;  // 0x6C8 (0x6C8)
	struct FGameplayEventData Trigger Event Data;  // 0x6D0 (0x6D0)


	void EventReceived_A128DB6B484E5F3D046609B4A8E609A0(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_SkeletonArcherAttack2.GA_SkeletonArcherAttack2_C.EventReceived_A128DB6B484E5F3D046609B4A8E609A0
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonArcherAttack2.GA_SkeletonArcherAttack2_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SkeletonArcherAttack2.GA_SkeletonArcherAttack2_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_SkeletonArcherAttack2(int32_t EntryPoint); // Function GA_SkeletonArcherAttack2.GA_SkeletonArcherAttack2_C.ExecuteUbergraph_GA_SkeletonArcherAttack2
}; 
 
 


