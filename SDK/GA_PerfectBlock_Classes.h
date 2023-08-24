#pragma once 
#include <GA_PerfectBlock_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_PerfectBlock.GA_PerfectBlock_C
// Size: 0x688(Inherited: 0x680)
struct UGA_PerfectBlock_C : UGA_PlayerSkillInstantAndWaitForEnd_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x680 (0x680)


	void EventReceived_4539B7AE42F792B8339800BE8C68930E(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_PerfectBlock.GA_PerfectBlock_C.EventReceived_4539B7AE42F792B8339800BE8C68930E
	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_PerfectBlock.GA_PerfectBlock_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_PerfectBlock(int32_t EntryPoint); // Function GA_PerfectBlock.GA_PerfectBlock_C.ExecuteUbergraph_GA_PerfectBlock
}; 
 
 


