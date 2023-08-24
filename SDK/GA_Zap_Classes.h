#pragma once 
#include <GA_Zap_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Zap.GA_Zap_C
// Size: 0x620(Inherited: 0x618)
struct UGA_Zap_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)


	void Cancelled_710514F84C5B9A85D254718B0950D361(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Zap.GA_Zap_C.Cancelled_710514F84C5B9A85D254718B0950D361
	void ValidData_710514F84C5B9A85D254718B0950D361(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Zap.GA_Zap_C.ValidData_710514F84C5B9A85D254718B0950D361
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_Zap.GA_Zap_C.AbilityActivated
	void ExecuteUbergraph_GA_Zap(int32_t EntryPoint); // Function GA_Zap.GA_Zap_C.ExecuteUbergraph_GA_Zap
}; 
 
 


