#pragma once 
#include <BP_ExplosionBottle_Projectile_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_ExplosionBottle_Projectile.BP_ExplosionBottle_Projectile_C
// Size: 0x708(Inherited: 0x6D0)
struct ABP_ExplosionBottle_Projectile_C : ABP_ProjectileActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct UPointLightComponent* PointLight;  // 0x6D8 (0x6D8)
	struct URotatingMovementComponent* RotatingMovement;  // 0x6E0 (0x6E0)
	struct UParticleSystemComponent* ParticleSystem;  // 0x6E8 (0x6E8)
	struct FRotator RepRotation;  // 0x6F0 (0x6F0)


	void OnRep_RepRotation(); // Function BP_ExplosionBottle_Projectile.BP_ExplosionBottle_Projectile_C.OnRep_RepRotation
	void UserConstructionScript(); // Function BP_ExplosionBottle_Projectile.BP_ExplosionBottle_Projectile_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_ExplosionBottle_Projectile.BP_ExplosionBottle_Projectile_C.ReceiveBeginPlay
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_ExplosionBottle_Projectile.BP_ExplosionBottle_Projectile_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_ExplosionBottle_Projectile(int32_t EntryPoint); // Function BP_ExplosionBottle_Projectile.BP_ExplosionBottle_Projectile_C.ExecuteUbergraph_BP_ExplosionBottle_Projectile
}; 
 
 


