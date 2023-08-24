#pragma once 
#include <GA_Lazy_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Lazy.GA_Lazy_C
// Size: 0x620(Inherited: 0x618)
struct UGA_Lazy_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)


	void Cancelled_A2900AB4447D2FBA3BEEDFB1A199FD19(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Lazy.GA_Lazy_C.Cancelled_A2900AB4447D2FBA3BEEDFB1A199FD19
	void ValidData_A2900AB4447D2FBA3BEEDFB1A199FD19(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Lazy.GA_Lazy_C.ValidData_A2900AB4447D2FBA3BEEDFB1A199FD19
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_Lazy.GA_Lazy_C.AbilityActivated
	void ExecuteUbergraph_GA_Lazy(int32_t EntryPoint); // Function GA_Lazy.GA_Lazy_C.ExecuteUbergraph_GA_Lazy
}; 
 
 


