#pragma once 
#include <GA_MusicMemory2_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_MusicMemory2.GA_MusicMemory2_C
// Size: 0x579(Inherited: 0x558)
struct UGA_MusicMemory2_C : UDCGameplayAbilityBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct FGameplayTag ReleaseTag;  // 0x560 (0x560)
	struct FGameplayTag SkillOneReleaseTag;  // 0x568 (0x568)
	struct FGameplayTag SkillTwoReleaseTag;  // 0x570 (0x570)
	uint8_t Widget Game Group Type;  // 0x578 (0x578)


	void EventReceived_A6938EA84B242FA56C6C0A8CBDD74F2C(struct FGameplayEventData Payload); // Function GA_MusicMemory2.GA_MusicMemory2_C.EventReceived_A6938EA84B242FA56C6C0A8CBDD74F2C
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_MusicMemory2.GA_MusicMemory2_C.K2_ActivateAbilityFromEvent
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_MusicMemory2.GA_MusicMemory2_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_MusicMemory2(int32_t EntryPoint); // Function GA_MusicMemory2.GA_MusicMemory2_C.ExecuteUbergraph_GA_MusicMemory2
}; 
 
 


