#pragma once 
#include <GA_HellfireProjectileCollision_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C
// Size: 0x700(Inherited: 0x578)
struct UGA_HellfireProjectileCollision_C : UGA_ProjectileCollision_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x578 (0x578)
	struct FPrimaryAssetId SpellDataId;  // 0x580 (0x580)
	struct TArray<struct FActiveGameplayEffectHandle> NewVar;  // 0x590 (0x590)
	struct TArray<struct AActor*> TargetList;  // 0x5A0 (0x5A0)
	struct FGameplayEffectQuery ActiveGEQuery;  // 0x5B0 (0x5B0)


	void OverlapEndTargetActor(struct AActor* InTargetActor); // Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.OverlapEndTargetActor
	void OverlapBeginTargetActor(struct AActor* InTargetActor); // Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.OverlapBeginTargetActor
	void OnDistanceChange_E4D8B0924A37CACC18502CAABDE7F1E2(); // Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.OnDistanceChange_E4D8B0924A37CACC18502CAABDE7F1E2
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.AbilityActivated
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.OnOverlapBegin
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.OnOverlapEnd
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_HellfireProjectileCollision(int32_t EntryPoint); // Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.ExecuteUbergraph_GA_HellfireProjectileCollision
}; 
 
 


