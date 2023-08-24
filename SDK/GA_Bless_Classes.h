#pragma once 
#include <GA_Bless_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Bless.GA_Bless_C
// Size: 0x6F8(Inherited: 0x618)
struct UGA_Bless_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)
	struct FGameplayCueParameters CueParam;  // 0x620 (0x620)


	void Cancelled_580E61EB4A9B6818DF7F7F869317C560(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Bless.GA_Bless_C.Cancelled_580E61EB4A9B6818DF7F7F869317C560
	void ValidData_580E61EB4A9B6818DF7F7F869317C560(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Bless.GA_Bless_C.ValidData_580E61EB4A9B6818DF7F7F869317C560
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_Bless.GA_Bless_C.AbilityActivated
	void ExecuteUbergraph_GA_Bless(int32_t EntryPoint); // Function GA_Bless.GA_Bless_C.ExecuteUbergraph_GA_Bless
}; 
 
 


