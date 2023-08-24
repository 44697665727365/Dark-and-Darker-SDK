#pragma once 
#include <BP_FireballProjectile_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_FireballProjectile.BP_FireballProjectile_C
// Size: 0x6D8(Inherited: 0x6D0)
struct ABP_FireballProjectile_C : ABP_ProjectileActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void ReceiveBeginPlay(); // Function BP_FireballProjectile.BP_FireballProjectile_C.ReceiveBeginPlay
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_FireballProjectile.BP_FireballProjectile_C.GameplayTagUpdated
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_FireballProjectile.BP_FireballProjectile_C.ReceiveEndPlay
	void ExecuteUbergraph_BP_FireballProjectile(int32_t EntryPoint); // Function BP_FireballProjectile.BP_FireballProjectile_C.ExecuteUbergraph_BP_FireballProjectile
}; 
 
 


