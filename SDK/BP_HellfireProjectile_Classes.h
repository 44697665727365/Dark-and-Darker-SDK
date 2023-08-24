#pragma once 
#include <BP_HellfireProjectile_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_HellfireProjectile.BP_HellfireProjectile_C
// Size: 0x730(Inherited: 0x6D0)
struct ABP_HellfireProjectile_C : ABP_ProjectileActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct UStaticMeshComponent* SM_Volume;  // 0x6D8 (0x6D8)
	struct UStaticMeshComponent* SM_ProjectileCollision;  // 0x6E0 (0x6E0)
	struct UNiagaraComponent* Ex_Niagara;  // 0x6E8 (0x6E8)
	struct FVector DefaultProjectileSize;  // 0x6F0 (0x6F0)
	struct FVector MaxProjectileSize;  // 0x708 (0x708)
	double FireProjectileTime;  // 0x720 (0x720)
	double DestroyDelayTime;  // 0x728 (0x728)


	void InitNiagaraEffect(); // Function BP_HellfireProjectile.BP_HellfireProjectile_C.InitNiagaraEffect
	void ReceiveBeginPlay(); // Function BP_HellfireProjectile.BP_HellfireProjectile_C.ReceiveBeginPlay
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_HellfireProjectile.BP_HellfireProjectile_C.GameplayTagUpdated
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_HellfireProjectile.BP_HellfireProjectile_C.ReceiveEndPlay
	void TimelineUpdateEvent(float Value, float TimelinePosition); // Function BP_HellfireProjectile.BP_HellfireProjectile_C.TimelineUpdateEvent
	void TimelineFinishedEvent(); // Function BP_HellfireProjectile.BP_HellfireProjectile_C.TimelineFinishedEvent
	void OnDelayDestroy(); // Function BP_HellfireProjectile.BP_HellfireProjectile_C.OnDelayDestroy
	void ExecuteUbergraph_BP_HellfireProjectile(int32_t EntryPoint); // Function BP_HellfireProjectile.BP_HellfireProjectile_C.ExecuteUbergraph_BP_HellfireProjectile
}; 
 
 


