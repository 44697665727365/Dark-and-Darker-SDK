#pragma once 
#include <GA_SkeletonFootmanPeaceState_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonFootmanPeaceState.GA_SkeletonFootmanPeaceState_C
// Size: 0x588(Inherited: 0x580)
struct UGA_SkeletonFootmanPeaceState_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_25EE265A422B5C79E3CBBF8E0732F638(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_SkeletonFootmanPeaceState.GA_SkeletonFootmanPeaceState_C.EventReceived_25EE265A422B5C79E3CBBF8E0732F638
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonFootmanPeaceState.GA_SkeletonFootmanPeaceState_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonFootmanPeaceState(int32_t EntryPoint); // Function GA_SkeletonFootmanPeaceState.GA_SkeletonFootmanPeaceState_C.ExecuteUbergraph_GA_SkeletonFootmanPeaceState
}; 
 
 


