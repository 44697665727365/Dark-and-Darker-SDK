#pragma once 
#include <GA_BlowofCorruption_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_BlowofCorruption.GA_BlowofCorruption_C
// Size: 0x688(Inherited: 0x680)
struct UGA_BlowofCorruption_C : UGA_PlayerSkillInstantAndWaitForEnd_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x680 (0x680)


	void EventReceived_5E5E3A7C42347ABBDD4C419FB0CE7488(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_BlowofCorruption.GA_BlowofCorruption_C.EventReceived_5E5E3A7C42347ABBDD4C419FB0CE7488
	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_BlowofCorruption.GA_BlowofCorruption_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_BlowofCorruption(int32_t EntryPoint); // Function GA_BlowofCorruption.GA_BlowofCorruption_C.ExecuteUbergraph_GA_BlowofCorruption
}; 
 
 


