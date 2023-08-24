#pragma once 
#include <GA_InvisibilityPotionGranted_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_InvisibilityPotionGranted.GA_InvisibilityPotionGranted_C
// Size: 0x560(Inherited: 0x558)
struct UGA_InvisibilityPotionGranted_C : UGA_ActivateOnGranted_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)


	void OnChange_2A946EE74ABF944157D8C4A9D3B54AD9(float OldValue, float NewValue); // Function GA_InvisibilityPotionGranted.GA_InvisibilityPotionGranted_C.OnChange_2A946EE74ABF944157D8C4A9D3B54AD9
	void OnVelocityChange_F4B28BF1497069E0F790FB9D0EDFEB73(); // Function GA_InvisibilityPotionGranted.GA_InvisibilityPotionGranted_C.OnVelocityChange_F4B28BF1497069E0F790FB9D0EDFEB73
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_InvisibilityPotionGranted.GA_InvisibilityPotionGranted_C.K2_OnEndAbility
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_InvisibilityPotionGranted.GA_InvisibilityPotionGranted_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_InvisibilityPotionGranted(int32_t EntryPoint); // Function GA_InvisibilityPotionGranted.GA_InvisibilityPotionGranted_C.ExecuteUbergraph_GA_InvisibilityPotionGranted
}; 
 
 


