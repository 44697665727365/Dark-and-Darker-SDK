#pragma once 
#include <GA_AoeCallerFromProjectile_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_AoeCallerFromProjectile.GA_AoeCallerFromProjectile_C
// Size: 0x5D0(Inherited: 0x578)
struct UGA_AoeCallerFromProjectile_C : UGA_ProjectileCollision_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x578 (0x578)
	struct TArray<enum class EObjectTypeQuery> Object Types;  // 0x580 (0x580)
	ADCAoeBase* Aoe Class;  // 0x590 (0x590)
	char pad_1432_1 : 7;  // 0x598 (0x598)
	bool SpawnFromGround : 1;  // 0x598 (0x598)
	char pad_1433[7];  // 0x599 (0x599)
	struct FVector SpawnLocation;  // 0x5A0 (0x5A0)
	struct FMulticastInlineDelegate Aoe Spawn Event Dispatcher;  // 0x5B8 (0x5B8)
	struct ADCAoeBase* Spawned Aoe;  // 0x5C8 (0x5C8)


	void K2_ActivateAbility(); // Function GA_AoeCallerFromProjectile.GA_AoeCallerFromProjectile_C.K2_ActivateAbility
	void TargetDataReceived(struct FHitResult& Hit); // Function GA_AoeCallerFromProjectile.GA_AoeCallerFromProjectile_C.TargetDataReceived
	void Aoe Spawned(); // Function GA_AoeCallerFromProjectile.GA_AoeCallerFromProjectile_C.Aoe Spawned
	void ExecuteUbergraph_GA_AoeCallerFromProjectile(int32_t EntryPoint); // Function GA_AoeCallerFromProjectile.GA_AoeCallerFromProjectile_C.ExecuteUbergraph_GA_AoeCallerFromProjectile
	void Aoe Spawn Event Dispatcher__DelegateSignature(); // Function GA_AoeCallerFromProjectile.GA_AoeCallerFromProjectile_C.Aoe Spawn Event Dispatcher__DelegateSignature
}; 
 
 


