#pragma once 
#include <GA_IgniteSpell_OnGranted_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_IgniteSpell_OnGranted.GA_IgniteSpell_OnGranted_C
// Size: 0x560(Inherited: 0x558)
struct UGA_IgniteSpell_OnGranted_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)


	void EventReceived_DCE28BCC4B5EB2B17582A798A5CA2926(struct FGameplayEventData Payload); // Function GA_IgniteSpell_OnGranted.GA_IgniteSpell_OnGranted_C.EventReceived_DCE28BCC4B5EB2B17582A798A5CA2926
	void Removed_7DCD86AB42B4B0AFC1643EBF44511259(); // Function GA_IgniteSpell_OnGranted.GA_IgniteSpell_OnGranted_C.Removed_7DCD86AB42B4B0AFC1643EBF44511259
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_IgniteSpell_OnGranted.GA_IgniteSpell_OnGranted_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_IgniteSpell_OnGranted(int32_t EntryPoint); // Function GA_IgniteSpell_OnGranted.GA_IgniteSpell_OnGranted_C.ExecuteUbergraph_GA_IgniteSpell_OnGranted
}; 
 
 


