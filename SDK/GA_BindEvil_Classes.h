#pragma once 
#include <GA_BindEvil_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_BindEvil.GA_BindEvil_C
// Size: 0x6F8(Inherited: 0x618)
struct UGA_BindEvil_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)
	struct FGameplayCueParameters CueParam;  // 0x620 (0x620)


	void Cancelled_80FB05884552A474DEFC9D9E3F66AD3C(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_BindEvil.GA_BindEvil_C.Cancelled_80FB05884552A474DEFC9D9E3F66AD3C
	void ValidData_80FB05884552A474DEFC9D9E3F66AD3C(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_BindEvil.GA_BindEvil_C.ValidData_80FB05884552A474DEFC9D9E3F66AD3C
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_BindEvil.GA_BindEvil_C.AbilityActivated
	void ExecuteUbergraph_GA_BindEvil(int32_t EntryPoint); // Function GA_BindEvil.GA_BindEvil_C.ExecuteUbergraph_GA_BindEvil
}; 
 
 


