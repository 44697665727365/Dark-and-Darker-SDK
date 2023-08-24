#pragma once 
#include <GA_FireballProjectileCollision_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_FireballProjectileCollision.GA_FireballProjectileCollision_C
// Size: 0x5A0(Inherited: 0x578)
struct UGA_FireballProjectileCollision_C : UGA_ProjectileCollision_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x578 (0x578)
	struct AActor* OverlapActor;  // 0x580 (0x580)
	struct FGameplayEffectContextHandle NewEffectContextHandle;  // 0x588 (0x588)


	void CalTargetHitLocation(struct FVector& HitLocation); // Function GA_FireballProjectileCollision.GA_FireballProjectileCollision_C.CalTargetHitLocation
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_FireballProjectileCollision.GA_FireballProjectileCollision_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_FireballProjectileCollision(int32_t EntryPoint); // Function GA_FireballProjectileCollision.GA_FireballProjectileCollision_C.ExecuteUbergraph_GA_FireballProjectileCollision
}; 
 
 


