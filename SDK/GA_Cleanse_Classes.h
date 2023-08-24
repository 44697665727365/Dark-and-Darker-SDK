#pragma once 
#include <GA_Cleanse_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Cleanse.GA_Cleanse_C
// Size: 0x620(Inherited: 0x618)
struct UGA_Cleanse_C : UGA_SpellBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)


	void Cancelled_A84C9B3A43E68BC562A2E987CE628179(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Cleanse.GA_Cleanse_C.Cancelled_A84C9B3A43E68BC562A2E987CE628179
	void ValidData_A84C9B3A43E68BC562A2E987CE628179(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Cleanse.GA_Cleanse_C.ValidData_A84C9B3A43E68BC562A2E987CE628179
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_Cleanse.GA_Cleanse_C.AbilityActivated
	void ExecuteUbergraph_GA_Cleanse(int32_t EntryPoint); // Function GA_Cleanse.GA_Cleanse_C.ExecuteUbergraph_GA_Cleanse
}; 
 
 


