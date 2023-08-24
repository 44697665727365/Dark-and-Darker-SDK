#pragma once 
#include <GA_Ambush_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Ambush.GA_Ambush_C
// Size: 0x561(Inherited: 0x558)
struct UGA_Ambush_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	char pad_1376_1 : 7;  // 0x560 (0x560)
	bool IsActivate : 1;  // 0x560 (0x560)


	void Removed_1ED899A44857F9A1085C4F8594B4AB0D(); // Function GA_Ambush.GA_Ambush_C.Removed_1ED899A44857F9A1085C4F8594B4AB0D
	void EventReceived_9753C2834B13EF3A8411BE9074E3DB22(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_Ambush.GA_Ambush_C.EventReceived_9753C2834B13EF3A8411BE9074E3DB22
	void K2_ActivateAbility(); // Function GA_Ambush.GA_Ambush_C.K2_ActivateAbility
	void ExecuteUbergraph_GA_Ambush(int32_t EntryPoint); // Function GA_Ambush.GA_Ambush_C.ExecuteUbergraph_GA_Ambush
}; 
 
 


