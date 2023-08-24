#pragma once 
#include <GA_SkeletonSwordman_Attack2_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonSwordman_Attack2.GA_SkeletonSwordman_Attack2_C
// Size: 0x6D8(Inherited: 0x6C9)
struct UGA_SkeletonSwordman_Attack2_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void EventReceived_960A9BE24EC84F75B50310891C6A8EF2(struct FGameplayEventData Payload); // Function GA_SkeletonSwordman_Attack2.GA_SkeletonSwordman_Attack2_C.EventReceived_960A9BE24EC84F75B50310891C6A8EF2
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonSwordman_Attack2.GA_SkeletonSwordman_Attack2_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonSwordman_Attack2(int32_t EntryPoint); // Function GA_SkeletonSwordman_Attack2.GA_SkeletonSwordman_Attack2_C.ExecuteUbergraph_GA_SkeletonSwordman_Attack2
}; 
 
 


