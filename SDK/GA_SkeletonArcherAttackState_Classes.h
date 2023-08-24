#pragma once 
#include <GA_SkeletonArcherAttackState_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonArcherAttackState.GA_SkeletonArcherAttackState_C
// Size: 0x588(Inherited: 0x580)
struct UGA_SkeletonArcherAttackState_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_A7C930B945E5C257182D509E8F4803E0(struct FGameplayEventData Payload); // Function GA_SkeletonArcherAttackState.GA_SkeletonArcherAttackState_C.EventReceived_A7C930B945E5C257182D509E8F4803E0
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonArcherAttackState.GA_SkeletonArcherAttackState_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonArcherAttackState(int32_t EntryPoint); // Function GA_SkeletonArcherAttackState.GA_SkeletonArcherAttackState_C.ExecuteUbergraph_GA_SkeletonArcherAttackState
}; 
 
 


