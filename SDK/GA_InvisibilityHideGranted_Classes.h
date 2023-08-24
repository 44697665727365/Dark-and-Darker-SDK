#pragma once 
#include <GA_InvisibilityHideGranted_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_InvisibilityHideGranted.GA_InvisibilityHideGranted_C
// Size: 0x560(Inherited: 0x558)
struct UGA_InvisibilityHideGranted_C : UGA_ActivateOnGranted_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)


	void OnChange_C21C93F04394F1680C51A9B0A83B79E5(float OldValue, float NewValue); // Function GA_InvisibilityHideGranted.GA_InvisibilityHideGranted_C.OnChange_C21C93F04394F1680C51A9B0A83B79E5
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_InvisibilityHideGranted.GA_InvisibilityHideGranted_C.K2_OnEndAbility
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_InvisibilityHideGranted.GA_InvisibilityHideGranted_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_InvisibilityHideGranted(int32_t EntryPoint); // Function GA_InvisibilityHideGranted.GA_InvisibilityHideGranted_C.ExecuteUbergraph_GA_InvisibilityHideGranted
}; 
 
 


