#pragma once 
#include <GA_Sanctuary_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Sanctuary.GA_Sanctuary_C
// Size: 0x620(Inherited: 0x618)
struct UGA_Sanctuary_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)


	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_Sanctuary.GA_Sanctuary_C.AbilityActivated
	void ExecuteUbergraph_GA_Sanctuary(int32_t EntryPoint); // Function GA_Sanctuary.GA_Sanctuary_C.ExecuteUbergraph_GA_Sanctuary
}; 
 
 


