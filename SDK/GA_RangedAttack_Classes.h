#pragma once 
#include <GA_RangedAttack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_RangedAttack.GA_RangedAttack_C
// Size: 0x5C8(Inherited: 0x5C0)
struct UGA_RangedAttack_C : UGA_RangedAttackBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5C0 (0x5C0)


	void CalSpawnTransform(struct FVector StartLocation, struct FVector EndLocation, struct FHitResult& HitResult, struct FTransform& OutTransform); // Function GA_RangedAttack.GA_RangedAttack_C.CalSpawnTransform
	void OnSuccess_5ECACBC94DE5966424402193494726EC(struct AActor* ProjectileActor); // Function GA_RangedAttack.GA_RangedAttack_C.OnSuccess_5ECACBC94DE5966424402193494726EC
	void CreateProjectiles(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower, struct FVector StartLocation); // Function GA_RangedAttack.GA_RangedAttack_C.CreateProjectiles
	void ExecuteUbergraph_GA_RangedAttack(int32_t EntryPoint); // Function GA_RangedAttack.GA_RangedAttack_C.ExecuteUbergraph_GA_RangedAttack
}; 
 
 


