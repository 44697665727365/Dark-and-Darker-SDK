#pragma once 
#include <GA_SkeletonAxeman_Attack1_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonAxeman_Attack1.GA_SkeletonAxeman_Attack1_C
// Size: 0x6D8(Inherited: 0x6C9)
struct UGA_SkeletonAxeman_Attack1_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void EventReceived_14666380446D55B58D0721B32C91ABD3(struct FGameplayEventData Payload); // Function GA_SkeletonAxeman_Attack1.GA_SkeletonAxeman_Attack1_C.EventReceived_14666380446D55B58D0721B32C91ABD3
	void EventReceived_46D29C724C0705ED9484D1BA19D06997(struct FGameplayEventData Payload); // Function GA_SkeletonAxeman_Attack1.GA_SkeletonAxeman_Attack1_C.EventReceived_46D29C724C0705ED9484D1BA19D06997
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonAxeman_Attack1.GA_SkeletonAxeman_Attack1_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonAxeman_Attack1(int32_t EntryPoint); // Function GA_SkeletonAxeman_Attack1.GA_SkeletonAxeman_Attack1_C.ExecuteUbergraph_GA_SkeletonAxeman_Attack1
}; 
 
 


