#pragma once 
#include <BP_MagicMissileProjectile_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_MagicMissileProjectile.BP_MagicMissileProjectile_C
// Size: 0x6E0(Inherited: 0x6D0)
struct ABP_MagicMissileProjectile_C : ABP_ProjectileActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct USphereComponent* Sphere;  // 0x6D8 (0x6D8)


	void ReceiveBeginPlay(); // Function BP_MagicMissileProjectile.BP_MagicMissileProjectile_C.ReceiveBeginPlay
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_MagicMissileProjectile.BP_MagicMissileProjectile_C.GameplayTagUpdated
	void BndEvt__BP_MagicMissileProjectile_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_MagicMissileProjectile.BP_MagicMissileProjectile_C.BndEvt__BP_MagicMissileProjectile_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_MagicMissileProjectile.BP_MagicMissileProjectile_C.ReceiveEndPlay
	void ExecuteUbergraph_BP_MagicMissileProjectile(int32_t EntryPoint); // Function BP_MagicMissileProjectile.BP_MagicMissileProjectile_C.ExecuteUbergraph_BP_MagicMissileProjectile
}; 
 
 


