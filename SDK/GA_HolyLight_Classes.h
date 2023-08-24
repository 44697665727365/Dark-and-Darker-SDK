#pragma once 
#include <GA_HolyLight_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_HolyLight.GA_HolyLight_C
// Size: 0x658(Inherited: 0x618)
struct UGA_HolyLight_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)
	double TempHealth;  // 0x620 (0x620)
	double AmountOfHeal;  // 0x628 (0x628)
	struct TArray<struct ADCMonsterBase*> Target Array;  // 0x630 (0x630)
	struct FVector ImpactPoint;  // 0x640 (0x640)


	void Cancelled_00A49EE84F13A4C22850B1B2A2CDC0F0(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_HolyLight.GA_HolyLight_C.Cancelled_00A49EE84F13A4C22850B1B2A2CDC0F0
	void ValidData_00A49EE84F13A4C22850B1B2A2CDC0F0(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_HolyLight.GA_HolyLight_C.ValidData_00A49EE84F13A4C22850B1B2A2CDC0F0
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_HolyLight.GA_HolyLight_C.AbilityActivated
	void ExecuteUbergraph_GA_HolyLight(int32_t EntryPoint); // Function GA_HolyLight.GA_HolyLight_C.ExecuteUbergraph_GA_HolyLight
}; 
 
 


