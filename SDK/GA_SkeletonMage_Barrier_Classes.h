#pragma once 
#include <GA_SkeletonMage_Barrier_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonMage_Barrier.GA_SkeletonMage_Barrier_C
// Size: 0x580(Inherited: 0x560)
struct UGA_SkeletonMage_Barrier_C : UGA_PlayMontageAndWaitForEvent
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x560 (0x560)
	struct FName Key Name;  // 0x568 (0x568)
	struct TArray<struct FPrimaryAssetId> In Gameplay Effect Id Array;  // 0x570 (0x570)


	void EventReceived_16E0B731426486054E70CBB8F8CDC1B7(struct FGameplayEventData Payload); // Function GA_SkeletonMage_Barrier.GA_SkeletonMage_Barrier_C.EventReceived_16E0B731426486054E70CBB8F8CDC1B7
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonMage_Barrier.GA_SkeletonMage_Barrier_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonMage_Barrier(int32_t EntryPoint); // Function GA_SkeletonMage_Barrier.GA_SkeletonMage_Barrier_C.ExecuteUbergraph_GA_SkeletonMage_Barrier
}; 
 
 


