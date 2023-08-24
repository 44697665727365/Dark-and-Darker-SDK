#pragma once 
#include <BP_SkeletonArcher_Arrow_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SkeletonArcher_Arrow.BP_SkeletonArcher_Arrow_C
// Size: 0x6E0(Inherited: 0x6D0)
struct ABP_SkeletonArcher_Arrow_C : ABP_ProjectileActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct UParticleSystemComponent* ParticleSystem_1;  // 0x6D8 (0x6D8)


	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_SkeletonArcher_Arrow.BP_SkeletonArcher_Arrow_C.GameplayTagUpdated
	void ReceiveBeginPlay(); // Function BP_SkeletonArcher_Arrow.BP_SkeletonArcher_Arrow_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_SkeletonArcher_Arrow(int32_t EntryPoint); // Function BP_SkeletonArcher_Arrow.BP_SkeletonArcher_Arrow_C.ExecuteUbergraph_BP_SkeletonArcher_Arrow
}; 
 
 


