#pragma once 
#include <GA_AchillesStrike_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_AchillesStrike.GA_AchillesStrike_C
// Size: 0x688(Inherited: 0x680)
struct UGA_AchillesStrike_C : UGA_PlayerSkillInstantAndWaitForEnd_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x680 (0x680)


	void EventReceived_3A25ADA54377F6AF2E700A9293B8291B(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_AchillesStrike.GA_AchillesStrike_C.EventReceived_3A25ADA54377F6AF2E700A9293B8291B
	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_AchillesStrike.GA_AchillesStrike_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_AchillesStrike(int32_t EntryPoint); // Function GA_AchillesStrike.GA_AchillesStrike_C.ExecuteUbergraph_GA_AchillesStrike
}; 
 
 


