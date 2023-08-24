#pragma once 
#include <GA_SkeletonRoyalGuard_BackStep_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonRoyalGuard_BackStep.GA_SkeletonRoyalGuard_BackStep_C
// Size: 0x6F8(Inherited: 0x6C9)
struct UGA_SkeletonRoyalGuard_BackStep_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct UDCAT_RotateToActor* Async Task;  // 0x6D8 (0x6D8)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x6E0 (0x6E0)
	struct ADCCharacterBase* Target Enemy;  // 0x6F0 (0x6F0)


	void EventReceived_4485961E499397E7ECF8C9ABD81E7C83(struct FGameplayEventData Payload); // Function GA_SkeletonRoyalGuard_BackStep.GA_SkeletonRoyalGuard_BackStep_C.EventReceived_4485961E499397E7ECF8C9ABD81E7C83
	void EventReceived_CAB9D45E4CB99D3D874F89AE01FCF203(struct FGameplayEventData Payload); // Function GA_SkeletonRoyalGuard_BackStep.GA_SkeletonRoyalGuard_BackStep_C.EventReceived_CAB9D45E4CB99D3D874F89AE01FCF203
	void EventReceived_55C9B74E4B49AA8B3DD829B2F1ED1F44(struct FGameplayEventData Payload); // Function GA_SkeletonRoyalGuard_BackStep.GA_SkeletonRoyalGuard_BackStep_C.EventReceived_55C9B74E4B49AA8B3DD829B2F1ED1F44
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonRoyalGuard_BackStep.GA_SkeletonRoyalGuard_BackStep_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SkeletonRoyalGuard_BackStep.GA_SkeletonRoyalGuard_BackStep_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_SkeletonRoyalGuard_BackStep(int32_t EntryPoint); // Function GA_SkeletonRoyalGuard_BackStep.GA_SkeletonRoyalGuard_BackStep_C.ExecuteUbergraph_GA_SkeletonRoyalGuard_BackStep
}; 
 
 


