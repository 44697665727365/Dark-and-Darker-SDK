#pragma once 
#include <GA_SkeletonGuardmanPeaceState_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonGuardmanPeaceState.GA_SkeletonGuardmanPeaceState_C
// Size: 0x588(Inherited: 0x580)
struct UGA_SkeletonGuardmanPeaceState_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_65335E5D47BEC26A55C3A882CB0116EF(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_SkeletonGuardmanPeaceState.GA_SkeletonGuardmanPeaceState_C.EventReceived_65335E5D47BEC26A55C3A882CB0116EF
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonGuardmanPeaceState.GA_SkeletonGuardmanPeaceState_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonGuardmanPeaceState(int32_t EntryPoint); // Function GA_SkeletonGuardmanPeaceState.GA_SkeletonGuardmanPeaceState_C.ExecuteUbergraph_GA_SkeletonGuardmanPeaceState
}; 
 
 


