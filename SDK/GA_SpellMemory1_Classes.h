#pragma once 
#include <GA_SpellMemory1_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SpellMemory1.GA_SpellMemory1_C
// Size: 0x579(Inherited: 0x558)
struct UGA_SpellMemory1_C : UDCGameplayAbilityBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct FGameplayTag ReleaseTag;  // 0x560 (0x560)
	struct FGameplayTag SkillOneReleaseTag;  // 0x568 (0x568)
	struct FGameplayTag SkillTwoReleaseTag;  // 0x570 (0x570)
	uint8_t Widget Game Group Type;  // 0x578 (0x578)


	void EventReceived_A23D97E7401DDAFC80A365BBF71FED80(struct FGameplayEventData Payload); // Function GA_SpellMemory1.GA_SpellMemory1_C.EventReceived_A23D97E7401DDAFC80A365BBF71FED80
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_SpellMemory1.GA_SpellMemory1_C.K2_ActivateAbilityFromEvent
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SpellMemory1.GA_SpellMemory1_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_SpellMemory1(int32_t EntryPoint); // Function GA_SpellMemory1.GA_SpellMemory1_C.ExecuteUbergraph_GA_SpellMemory1
}; 
 
 


