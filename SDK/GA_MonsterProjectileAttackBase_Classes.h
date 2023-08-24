#pragma once 
#include <GA_MonsterProjectileAttackBase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C
// Size: 0x774(Inherited: 0x6C0)
struct UGA_MonsterProjectileAttackBase_C : UGA_MonsterChargedRangedAttackBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6C0 (0x6C0)
	uint8_t Targeting Hit Box;  // 0x6C8 (0x6C8)
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct TArray<struct FVector> Spawn Location;  // 0x6D0 (0x6D0)
	struct TArray<struct FRotator> Shooting Direction;  // 0x6E0 (0x6E0)
	struct FVector Spawn Transform Scale;  // 0x6F0 (0x6F0)
	double Fire Power;  // 0x708 (0x708)
	double Set Pierce Count;  // 0x710 (0x710)
	char pad_1816_1 : 7;  // 0x718 (0x718)
	bool Set Obstacle Pierce : 1;  // 0x718 (0x718)
	char pad_1817[7];  // 0x719 (0x719)
	double Set Obstacle Pierce Decrease;  // 0x720 (0x720)
	char pad_1832_1 : 7;  // 0x728 (0x728)
	bool Is Homing Projectile : 1;  // 0x728 (0x728)
	char pad_1833[7];  // 0x729 (0x729)
	double Homing Acceleration Magnitude;  // 0x730 (0x730)
	struct FName TargetActor;  // 0x738 (0x738)
	struct ABP_DCMonsterBase_C* As BP DCMonster Base;  // 0x740 (0x740)
	struct ADCCharacterBase* As DCCharacter Base;  // 0x748 (0x748)
	struct UProjectileMovementComponent* Projectile Movement;  // 0x750 (0x750)
	struct AProjectileActor* Projectile Actor;  // 0x758 (0x758)
	double RotationSpeed;  // 0x760 (0x760)
	char pad_1896_1 : 7;  // 0x768 (0x768)
	bool Without Pitch : 1;  // 0x768 (0x768)
	uint8_t Hit Box;  // 0x769 (0x769)
	char pad_1898[2];  // 0x76A (0x76A)
	struct FGameplayTag EndTagSignal;  // 0x76C (0x76C)


	void GetBBTargetActorToMonsterBase(bool& Result, struct ABP_DCMonsterBaseWithOptions_C*& DCMonsterBaseWithOptions); // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.GetBBTargetActorToMonsterBase
	void GetBBTargetActorToCharacterBase(bool& Result, struct ADCCharacterBase*& As DCCharacter Base); // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.GetBBTargetActorToCharacterBase
	void GetBBTargetActor(bool& Result, struct UObject*& Return Value); // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.GetBBTargetActor
	void Set Options(struct AProjectileActor* ProjectileActorInput); // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.Set Options
	void SetSpec(struct AActor* ProjectileActorInput, struct AProjectileActor*& ProjectileActorOutput); // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.SetSpec
	void SetTransform(struct FVector ShootLocation Input, struct FRotator ShootRotation Input, struct FVector& ShootLocation Output, struct FRotator& ShootRotation Output); // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.SetTransform
	void ShootProjectile(); // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.ShootProjectile
	void SetHoming(bool& bool); // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.SetHoming
	void OnSuccess_F7E3C6614A5311DD050E5CB226F07D8A(struct AActor* ProjectileActor); // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.OnSuccess_F7E3C6614A5311DD050E5CB226F07D8A
	void EventReceived_FF8A911F49704E3033475794D8E16251(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.EventReceived_FF8A911F49704E3033475794D8E16251
	void CreateProjectiles(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower, struct FVector StartLocation); // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.CreateProjectiles
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.AbilityActivated
	void ExecuteUbergraph_GA_MonsterProjectileAttackBase(int32_t EntryPoint); // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.ExecuteUbergraph_GA_MonsterProjectileAttackBase
}; 
 
 


