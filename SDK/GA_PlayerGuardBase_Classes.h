#pragma once 
#include <GA_PlayerGuardBase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_PlayerGuardBase.GA_PlayerGuardBase_C
// Size: 0x5B8(Inherited: 0x5A0)
struct UGA_PlayerGuardBase_C : UGA_ActivateItem_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5A0 (0x5A0)
	struct UInputAction* GuardInputAction;  // 0x5A8 (0x5A8)
	struct FGameplayTag GuardLocalStateTag;  // 0x5B0 (0x5B0)


	void InputActionCompleted_0318D7604E14A031EF23C0A6403672BA(); // Function GA_PlayerGuardBase.GA_PlayerGuardBase_C.InputActionCompleted_0318D7604E14A031EF23C0A6403672BA
	void InputActionStarted_0318D7604E14A031EF23C0A6403672BA(); // Function GA_PlayerGuardBase.GA_PlayerGuardBase_C.InputActionStarted_0318D7604E14A031EF23C0A6403672BA
	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_PlayerGuardBase.GA_PlayerGuardBase_C.ReceivedEvent
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_PlayerGuardBase.GA_PlayerGuardBase_C.AbilityActivated
	void ExecuteUbergraph_GA_PlayerGuardBase(int32_t EntryPoint); // Function GA_PlayerGuardBase.GA_PlayerGuardBase_C.ExecuteUbergraph_GA_PlayerGuardBase
}; 
 
 


