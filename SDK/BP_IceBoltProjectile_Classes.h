#pragma once 
#include <BP_IceBoltProjectile_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_IceBoltProjectile.BP_IceBoltProjectile_C
// Size: 0x6D8(Inherited: 0x6D0)
struct ABP_IceBoltProjectile_C : ABP_ProjectileActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void ReceiveBeginPlay(); // Function BP_IceBoltProjectile.BP_IceBoltProjectile_C.ReceiveBeginPlay
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_IceBoltProjectile.BP_IceBoltProjectile_C.GameplayTagUpdated
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_IceBoltProjectile.BP_IceBoltProjectile_C.ReceiveEndPlay
	void ExecuteUbergraph_BP_IceBoltProjectile(int32_t EntryPoint); // Function BP_IceBoltProjectile.BP_IceBoltProjectile_C.ExecuteUbergraph_BP_IceBoltProjectile
}; 
 
 


