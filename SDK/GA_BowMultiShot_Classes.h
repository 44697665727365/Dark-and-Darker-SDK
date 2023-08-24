#pragma once 
#include <GA_BowMultiShot_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_BowMultiShot.GA_BowMultiShot_C
// Size: 0x5E8(Inherited: 0x5C0)
struct UGA_BowMultiShot_C : UGA_MultiShotBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5C0 (0x5C0)
	double AngleValue;  // 0x5C8 (0x5C8)
	struct FVector EndTraceLocation;  // 0x5D0 (0x5D0)


	void OnSuccess_AD00B3DA4CDB4D669E483EA55702AB02(struct AActor* ProjectileActor); // Function GA_BowMultiShot.GA_BowMultiShot_C.OnSuccess_AD00B3DA4CDB4D669E483EA55702AB02
	void CreateProjectiles(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower, struct FVector StartLocation); // Function GA_BowMultiShot.GA_BowMultiShot_C.CreateProjectiles
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_BowMultiShot.GA_BowMultiShot_C.AbilityActivated
	void ExecuteUbergraph_GA_BowMultiShot(int32_t EntryPoint); // Function GA_BowMultiShot.GA_BowMultiShot_C.ExecuteUbergraph_GA_BowMultiShot
}; 
 
 


