#pragma once 
#include <GA_MoraleBoost_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_MoraleBoost.GA_MoraleBoost_C
// Size: 0x561(Inherited: 0x558)
struct UGA_MoraleBoost_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	char pad_1376_1 : 7;  // 0x560 (0x560)
	bool bWaitNextAttack : 1;  // 0x560 (0x560)


	void EventReceived_DD9B0D124BA472F9DBB2D6B6EE31F700(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_MoraleBoost.GA_MoraleBoost_C.EventReceived_DD9B0D124BA472F9DBB2D6B6EE31F700
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_MoraleBoost.GA_MoraleBoost_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_MoraleBoost(int32_t EntryPoint); // Function GA_MoraleBoost.GA_MoraleBoost_C.ExecuteUbergraph_GA_MoraleBoost
}; 
 
 


