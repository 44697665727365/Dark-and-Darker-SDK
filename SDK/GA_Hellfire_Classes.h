#pragma once 
#include <GA_Hellfire_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Hellfire.GA_Hellfire_C
// Size: 0x628(Inherited: 0x618)
struct UGA_Hellfire_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)
	struct AProjectileActor* ProjectileActor;  // 0x620 (0x620)


	void DestroyHellfireActor(); // Function GA_Hellfire.GA_Hellfire_C.DestroyHellfireActor
	void Cancelled_40C4F9EA4B8157D2AAF165A5EC6D1EBF(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Hellfire.GA_Hellfire_C.Cancelled_40C4F9EA4B8157D2AAF165A5EC6D1EBF
	void ValidData_40C4F9EA4B8157D2AAF165A5EC6D1EBF(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Hellfire.GA_Hellfire_C.ValidData_40C4F9EA4B8157D2AAF165A5EC6D1EBF
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Hellfire.GA_Hellfire_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_Hellfire.GA_Hellfire_C.AbilityActivated
	void ExecuteUbergraph_GA_Hellfire(int32_t EntryPoint); // Function GA_Hellfire.GA_Hellfire_C.ExecuteUbergraph_GA_Hellfire
}; 
 
 


