#pragma once 
#include <GA_ComboAttack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_ComboAttack.GA_ComboAttack_C
// Size: 0x561(Inherited: 0x558)
struct UGA_ComboAttack_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	char pad_1376_1 : 7;  // 0x560 (0x560)
	bool bWaitNextAttack : 1;  // 0x560 (0x560)


	void OnFinish_DE8698AB4425C1292B02AFB106318041(); // Function GA_ComboAttack.GA_ComboAttack_C.OnFinish_DE8698AB4425C1292B02AFB106318041
	void EventReceived_0EF528F1414939B2DA8CE9A5C5B64691(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_ComboAttack.GA_ComboAttack_C.EventReceived_0EF528F1414939B2DA8CE9A5C5B64691
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_ComboAttack.GA_ComboAttack_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_ComboAttack(int32_t EntryPoint); // Function GA_ComboAttack.GA_ComboAttack_C.ExecuteUbergraph_GA_ComboAttack
}; 
 
 


