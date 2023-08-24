#pragma once 
#include <GA_SkeletonRoyalGuard_Spawn_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonRoyalGuard_Spawn.GA_SkeletonRoyalGuard_Spawn_C
// Size: 0x588(Inherited: 0x580)
struct UGA_SkeletonRoyalGuard_Spawn_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SkeletonRoyalGuard_Spawn.GA_SkeletonRoyalGuard_Spawn_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonRoyalGuard_Spawn.GA_SkeletonRoyalGuard_Spawn_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonRoyalGuard_Spawn(int32_t EntryPoint); // Function GA_SkeletonRoyalGuard_Spawn.GA_SkeletonRoyalGuard_Spawn_C.ExecuteUbergraph_GA_SkeletonRoyalGuard_Spawn
}; 
 
 


