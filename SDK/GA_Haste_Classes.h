#pragma once 
#include <GA_Haste_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Haste.GA_Haste_C
// Size: 0x620(Inherited: 0x618)
struct UGA_Haste_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)


	void Cancelled_E5F983944B6E985D08FAE6BB77A690D7(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Haste.GA_Haste_C.Cancelled_E5F983944B6E985D08FAE6BB77A690D7
	void ValidData_E5F983944B6E985D08FAE6BB77A690D7(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Haste.GA_Haste_C.ValidData_E5F983944B6E985D08FAE6BB77A690D7
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_Haste.GA_Haste_C.AbilityActivated
	void ExecuteUbergraph_GA_Haste(int32_t EntryPoint); // Function GA_Haste.GA_Haste_C.ExecuteUbergraph_GA_Haste
}; 
 
 


