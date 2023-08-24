#pragma once 
#include <GA_SkeletonFootmanAttack2_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonFootmanAttack2.GA_SkeletonFootmanAttack2_C
// Size: 0x6D8(Inherited: 0x6C9)
struct UGA_SkeletonFootmanAttack2_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void EventReceived_EF720C7C4E27CDB52E6FB0B77816A1D0(struct FGameplayEventData Payload); // Function GA_SkeletonFootmanAttack2.GA_SkeletonFootmanAttack2_C.EventReceived_EF720C7C4E27CDB52E6FB0B77816A1D0
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonFootmanAttack2.GA_SkeletonFootmanAttack2_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonFootmanAttack2(int32_t EntryPoint); // Function GA_SkeletonFootmanAttack2.GA_SkeletonFootmanAttack2_C.ExecuteUbergraph_GA_SkeletonFootmanAttack2
}; 
 
 


