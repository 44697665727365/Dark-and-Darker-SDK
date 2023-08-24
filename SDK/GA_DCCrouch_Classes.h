#pragma once 
#include <GA_DCCrouch_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DCCrouch.GA_DCCrouch_C
// Size: 0x560(Inherited: 0x558)
struct UGA_DCCrouch_C : UDCGameplayAbilityBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)


	void EventReceived_F8111BF74E13C0F203A0A2A357F51B3A(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_DCCrouch.GA_DCCrouch_C.EventReceived_F8111BF74E13C0F203A0A2A357F51B3A
	void OnUnCrouch_3498D7D3459D7AA787BEB5885E6B29DB(); // Function GA_DCCrouch.GA_DCCrouch_C.OnUnCrouch_3498D7D3459D7AA787BEB5885E6B29DB
	void OnChange_1B5403AA43F34E6E271364B87A6DC3AC(enum class EMovementMode NewMovementMode); // Function GA_DCCrouch.GA_DCCrouch_C.OnChange_1B5403AA43F34E6E271364B87A6DC3AC
	void K2_ActivateAbility(); // Function GA_DCCrouch.GA_DCCrouch_C.K2_ActivateAbility
	void ExecuteUbergraph_GA_DCCrouch(int32_t EntryPoint); // Function GA_DCCrouch.GA_DCCrouch_C.ExecuteUbergraph_GA_DCCrouch
}; 
 
 


