#pragma once 
#include <GA_HuntingTrapDamageOnMove_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_HuntingTrapDamageOnMove.GA_HuntingTrapDamageOnMove_C
// Size: 0x578(Inherited: 0x570)
struct UGA_HuntingTrapDamageOnMove_C : UGA_DamageOnMove_Base_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x570 (0x570)


	void EventReceived_9E74D6F347C54F8146C39898E5654F35(struct FGameplayEventData Payload); // Function GA_HuntingTrapDamageOnMove.GA_HuntingTrapDamageOnMove_C.EventReceived_9E74D6F347C54F8146C39898E5654F35
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_HuntingTrapDamageOnMove.GA_HuntingTrapDamageOnMove_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_HuntingTrapDamageOnMove(int32_t EntryPoint); // Function GA_HuntingTrapDamageOnMove.GA_HuntingTrapDamageOnMove_C.ExecuteUbergraph_GA_HuntingTrapDamageOnMove
}; 
 
 


