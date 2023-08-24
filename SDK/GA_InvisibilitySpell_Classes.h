#pragma once 
#include <GA_InvisibilitySpell_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_InvisibilitySpell.GA_InvisibilitySpell_C
// Size: 0x620(Inherited: 0x618)
struct UGA_InvisibilitySpell_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)


	void Cancelled_326C53F94A2D902435BE70B8BEA83925(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_InvisibilitySpell.GA_InvisibilitySpell_C.Cancelled_326C53F94A2D902435BE70B8BEA83925
	void ValidData_326C53F94A2D902435BE70B8BEA83925(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_InvisibilitySpell.GA_InvisibilitySpell_C.ValidData_326C53F94A2D902435BE70B8BEA83925
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_InvisibilitySpell.GA_InvisibilitySpell_C.AbilityActivated
	void ExecuteUbergraph_GA_InvisibilitySpell(int32_t EntryPoint); // Function GA_InvisibilitySpell.GA_InvisibilitySpell_C.ExecuteUbergraph_GA_InvisibilitySpell
}; 
 
 


