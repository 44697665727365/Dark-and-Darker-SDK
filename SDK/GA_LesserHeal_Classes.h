#pragma once 
#include <GA_LesserHeal_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_LesserHeal.GA_LesserHeal_C
// Size: 0x640(Inherited: 0x618)
struct UGA_LesserHeal_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)
	double TempHealth;  // 0x620 (0x620)
	double AmountOfHeal;  // 0x628 (0x628)
	struct TArray<struct ADCMonsterBase*> Target Array;  // 0x630 (0x630)


	void Cancelled_98070A464AAFF0123E9EB3AF70D9CE3E(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_LesserHeal.GA_LesserHeal_C.Cancelled_98070A464AAFF0123E9EB3AF70D9CE3E
	void ValidData_98070A464AAFF0123E9EB3AF70D9CE3E(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_LesserHeal.GA_LesserHeal_C.ValidData_98070A464AAFF0123E9EB3AF70D9CE3E
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_LesserHeal.GA_LesserHeal_C.AbilityActivated
	void ExecuteUbergraph_GA_LesserHeal(int32_t EntryPoint); // Function GA_LesserHeal.GA_LesserHeal_C.ExecuteUbergraph_GA_LesserHeal
}; 
 
 


