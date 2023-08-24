#pragma once 
#include <GA_DivineStrike_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DivineStrike.GA_DivineStrike_C
// Size: 0x6F8(Inherited: 0x618)
struct UGA_DivineStrike_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)
	struct FGameplayCueParameters CueParam;  // 0x620 (0x620)


	void Cancelled_2B68FF8B419907B9CD8B50B7178829B0(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_DivineStrike.GA_DivineStrike_C.Cancelled_2B68FF8B419907B9CD8B50B7178829B0
	void ValidData_2B68FF8B419907B9CD8B50B7178829B0(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_DivineStrike.GA_DivineStrike_C.ValidData_2B68FF8B419907B9CD8B50B7178829B0
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_DivineStrike.GA_DivineStrike_C.AbilityActivated
	void ExecuteUbergraph_GA_DivineStrike(int32_t EntryPoint); // Function GA_DivineStrike.GA_DivineStrike_C.ExecuteUbergraph_GA_DivineStrike
}; 
 
 


