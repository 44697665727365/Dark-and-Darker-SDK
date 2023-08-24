#pragma once 
#include <GA_MagicMissile_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_MagicMissile.GA_MagicMissile_C
// Size: 0x620(Inherited: 0x618)
struct UGA_MagicMissile_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)


	void Cancelled_202FBCAD450BA3FCBEE9F5944EE986AE(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_MagicMissile.GA_MagicMissile_C.Cancelled_202FBCAD450BA3FCBEE9F5944EE986AE
	void ValidData_202FBCAD450BA3FCBEE9F5944EE986AE(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_MagicMissile.GA_MagicMissile_C.ValidData_202FBCAD450BA3FCBEE9F5944EE986AE
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_MagicMissile.GA_MagicMissile_C.AbilityActivated
	void ExecuteUbergraph_GA_MagicMissile(int32_t EntryPoint); // Function GA_MagicMissile.GA_MagicMissile_C.ExecuteUbergraph_GA_MagicMissile
}; 
 
 


