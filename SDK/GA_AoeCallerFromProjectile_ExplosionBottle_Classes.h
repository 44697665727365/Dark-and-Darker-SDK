#pragma once 
#include <GA_AoeCallerFromProjectile_ExplosionBottle_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C
// Size: 0x5F8(Inherited: 0x578)
struct UGA_AoeCallerFromProjectile_ExplosionBottle_C : UGA_ProjectileCollision_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x578 (0x578)
	struct TArray<enum class EObjectTypeQuery> Object Types;  // 0x580 (0x580)
	ADCAoeBase* Aoe Class;  // 0x590 (0x590)
	char pad_1432_1 : 7;  // 0x598 (0x598)
	bool SpawnFromGround : 1;  // 0x598 (0x598)
	char pad_1433[7];  // 0x599 (0x599)
	struct FVector SpawnLocation;  // 0x5A0 (0x5A0)
	int32_t SpawnCount;  // 0x5B8 (0x5B8)
	char pad_1468[4];  // 0x5BC (0x5BC)
	struct TArray<struct FVector> SpawnLocationList;  // 0x5C0 (0x5C0)
	struct FVector CenterLocation;  // 0x5D0 (0x5D0)
	struct ADCCharacterBase* CharacterBase;  // 0x5E8 (0x5E8)
	double AoeDistance;  // 0x5F0 (0x5F0)


	void CheckHitGround(struct FVector NormalVector, bool& Return); // Function GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C.CheckHitGround
	void CalRotateLocation(double Angle, double Distance, struct FVector& RotateLocation); // Function GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C.CalRotateLocation
	void Cal Spawn Location(double SpawnDist); // Function GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C.Cal Spawn Location
	void K2_ActivateAbility(); // Function GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C.K2_ActivateAbility
	void TargetDataReceived(struct FHitResult& Hit); // Function GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C.TargetDataReceived
	void ExecuteUbergraph_GA_AoeCallerFromProjectile_ExplosionBottle(int32_t EntryPoint); // Function GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C.ExecuteUbergraph_GA_AoeCallerFromProjectile_ExplosionBottle
}; 
 
 


