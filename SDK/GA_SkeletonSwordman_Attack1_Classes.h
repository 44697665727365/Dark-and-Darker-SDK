#pragma once 
#include <GA_SkeletonSwordman_Attack1_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonSwordman_Attack1.GA_SkeletonSwordman_Attack1_C
// Size: 0x6D8(Inherited: 0x6C9)
struct UGA_SkeletonSwordman_Attack1_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void EventReceived_B9451CAD42065F4E84D7C5B432AF4101(struct FGameplayEventData Payload); // Function GA_SkeletonSwordman_Attack1.GA_SkeletonSwordman_Attack1_C.EventReceived_B9451CAD42065F4E84D7C5B432AF4101
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonSwordman_Attack1.GA_SkeletonSwordman_Attack1_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonSwordman_Attack1(int32_t EntryPoint); // Function GA_SkeletonSwordman_Attack1.GA_SkeletonSwordman_Attack1_C.ExecuteUbergraph_GA_SkeletonSwordman_Attack1
}; 
 
 


