#pragma once 
#include <GA_CutThroat_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CutThroat.GA_CutThroat_C
// Size: 0x688(Inherited: 0x680)
struct UGA_CutThroat_C : UGA_PlayerSkillInstantAndWaitForEnd_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x680 (0x680)


	void EventReceived_2265C892450CA01A3DE2AB8074D39042(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_CutThroat.GA_CutThroat_C.EventReceived_2265C892450CA01A3DE2AB8074D39042
	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_CutThroat.GA_CutThroat_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_CutThroat(int32_t EntryPoint); // Function GA_CutThroat.GA_CutThroat_C.ExecuteUbergraph_GA_CutThroat
}; 
 
 


