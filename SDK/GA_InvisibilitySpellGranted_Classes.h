#pragma once 
#include <GA_InvisibilitySpellGranted_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_InvisibilitySpellGranted.GA_InvisibilitySpellGranted_C
// Size: 0x560(Inherited: 0x558)
struct UGA_InvisibilitySpellGranted_C : UGA_ActivateOnGranted_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)


	void OnChange_A65BB06A463B178A996B879F84364682(float OldValue, float NewValue); // Function GA_InvisibilitySpellGranted.GA_InvisibilitySpellGranted_C.OnChange_A65BB06A463B178A996B879F84364682
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_InvisibilitySpellGranted.GA_InvisibilitySpellGranted_C.K2_OnEndAbility
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_InvisibilitySpellGranted.GA_InvisibilitySpellGranted_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_InvisibilitySpellGranted(int32_t EntryPoint); // Function GA_InvisibilitySpellGranted.GA_InvisibilitySpellGranted_C.ExecuteUbergraph_GA_InvisibilitySpellGranted
}; 
 
 


