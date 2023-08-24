#pragma once 
#include <BP_SkeletonGuardman_Nightmare_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SkeletonGuardman_Nightmare.BP_SkeletonGuardman_Nightmare_C
// Size: 0x1228(Inherited: 0x1220)
struct ABP_SkeletonGuardman_Nightmare_C : ABP_SkeletonGuardman_Common_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x1220 (0x1220)


	void ReceiveBeginPlay(); // Function BP_SkeletonGuardman_Nightmare.BP_SkeletonGuardman_Nightmare_C.ReceiveBeginPlay
	void OnStuckByShield(struct ADCCharacterBase* InInstigator, struct AActor* InEffectCauser); // Function BP_SkeletonGuardman_Nightmare.BP_SkeletonGuardman_Nightmare_C.OnStuckByShield
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_SkeletonGuardman_Nightmare.BP_SkeletonGuardman_Nightmare_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_SkeletonGuardman_Nightmare(int32_t EntryPoint); // Function BP_SkeletonGuardman_Nightmare.BP_SkeletonGuardman_Nightmare_C.ExecuteUbergraph_BP_SkeletonGuardman_Nightmare
}; 
 
 


