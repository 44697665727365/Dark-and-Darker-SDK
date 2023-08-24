#pragma once 
#include <BP_ProjectileActor_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_ProjectileActor.BP_ProjectileActor_C
// Size: 0x6D0(Inherited: 0x6B0)
struct ABP_ProjectileActor_C : AProjectileActor
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6B0 (0x6B0)
	struct UDCAkComponent* DCAk;  // 0x6B8 (0x6B8)
	struct UNiagaraComponent* Niagara;  // 0x6C0 (0x6C0)
	struct UParticleSystemComponent* TrailParticleSystem;  // 0x6C8 (0x6C8)


	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_ProjectileActor.BP_ProjectileActor_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_ProjectileActor(int32_t EntryPoint); // Function BP_ProjectileActor.BP_ProjectileActor_C.ExecuteUbergraph_BP_ProjectileActor
}; 
 
 


