#pragma once 
#include <GA_SkeletonRoyalGuard_Bombing_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonRoyalGuard_Bombing.GA_SkeletonRoyalGuard_Bombing_C
// Size: 0x598(Inherited: 0x580)
struct UGA_SkeletonRoyalGuard_Bombing_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x588 (0x588)


	void EventReceived_6AB16E6E4F035D73025811A8F542C6D3(struct FGameplayEventData Payload); // Function GA_SkeletonRoyalGuard_Bombing.GA_SkeletonRoyalGuard_Bombing_C.EventReceived_6AB16E6E4F035D73025811A8F542C6D3
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SkeletonRoyalGuard_Bombing.GA_SkeletonRoyalGuard_Bombing_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonRoyalGuard_Bombing.GA_SkeletonRoyalGuard_Bombing_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonRoyalGuard_Bombing(int32_t EntryPoint); // Function GA_SkeletonRoyalGuard_Bombing.GA_SkeletonRoyalGuard_Bombing_C.ExecuteUbergraph_GA_SkeletonRoyalGuard_Bombing
}; 
 
 


