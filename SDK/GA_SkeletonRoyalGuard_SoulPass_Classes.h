#pragma once 
#include <GA_SkeletonRoyalGuard_SoulPass_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonRoyalGuard_SoulPass.GA_SkeletonRoyalGuard_SoulPass_C
// Size: 0x780(Inherited: 0x774)
struct UGA_SkeletonRoyalGuard_SoulPass_C : UGA_MonsterProjectileAttackBase_C
{
	char pad_1908[4];  // 0x774 (0x774)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x778 (0x778)


	void OnSuccess_9EBD3ADF4752405F227DB8A792D798D8(struct AActor* ProjectileActor); // Function GA_SkeletonRoyalGuard_SoulPass.GA_SkeletonRoyalGuard_SoulPass_C.OnSuccess_9EBD3ADF4752405F227DB8A792D798D8
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonRoyalGuard_SoulPass.GA_SkeletonRoyalGuard_SoulPass_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SkeletonRoyalGuard_SoulPass.GA_SkeletonRoyalGuard_SoulPass_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_SkeletonRoyalGuard_SoulPass(int32_t EntryPoint); // Function GA_SkeletonRoyalGuard_SoulPass.GA_SkeletonRoyalGuard_SoulPass_C.ExecuteUbergraph_GA_SkeletonRoyalGuard_SoulPass
}; 
 
 


