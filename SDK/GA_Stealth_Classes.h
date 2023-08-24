#pragma once 
#include <GA_Stealth_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Stealth.GA_Stealth_C
// Size: 0x564(Inherited: 0x558)
struct UGA_Stealth_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	int32_t Steps;  // 0x560 (0x560)


	void OnAbilityEnded_7D86188843FD6F02309B4BBF24B683C5(struct FAbilityEndedData& AbilityEndedData); // Function GA_Stealth.GA_Stealth_C.OnAbilityEnded_7D86188843FD6F02309B4BBF24B683C5
	void OnAbilityActivated_7D86188843FD6F02309B4BBF24B683C5(struct UGameplayAbility* ActivatedAbility); // Function GA_Stealth.GA_Stealth_C.OnAbilityActivated_7D86188843FD6F02309B4BBF24B683C5
	void EventReceived_A2B666894B9BF5ED7FBC4680EEA57EE4(struct FGameplayEventData Payload); // Function GA_Stealth.GA_Stealth_C.EventReceived_A2B666894B9BF5ED7FBC4680EEA57EE4
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Stealth.GA_Stealth_C.K2_ActivateAbilityFromEvent
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Stealth.GA_Stealth_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_Stealth(int32_t EntryPoint); // Function GA_Stealth.GA_Stealth_C.ExecuteUbergraph_GA_Stealth
}; 
 
 


