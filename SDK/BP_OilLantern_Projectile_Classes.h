#pragma once 
#include <BP_OilLantern_Projectile_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_OilLantern_Projectile.BP_OilLantern_Projectile_C
// Size: 0x708(Inherited: 0x6D0)
struct ABP_OilLantern_Projectile_C : ABP_ProjectileActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct UPointLightComponent* PointLight;  // 0x6D8 (0x6D8)
	struct UParticleSystemComponent* ParticleSystem;  // 0x6E0 (0x6E0)
	struct URotatingMovementComponent* RotatingMovement;  // 0x6E8 (0x6E8)
	struct FRotator RepRotation;  // 0x6F0 (0x6F0)


	void OnRep_RepRotation(); // Function BP_OilLantern_Projectile.BP_OilLantern_Projectile_C.OnRep_RepRotation
	void UserConstructionScript(); // Function BP_OilLantern_Projectile.BP_OilLantern_Projectile_C.UserConstructionScript
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_OilLantern_Projectile.BP_OilLantern_Projectile_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_OilLantern_Projectile(int32_t EntryPoint); // Function BP_OilLantern_Projectile.BP_OilLantern_Projectile_C.ExecuteUbergraph_BP_OilLantern_Projectile
}; 
 
 


