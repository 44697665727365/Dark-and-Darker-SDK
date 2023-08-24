#pragma once 
#include <GA_VictoryStrike_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_VictoryStrike.GA_VictoryStrike_C
// Size: 0x688(Inherited: 0x680)
struct UGA_VictoryStrike_C : UGA_PlayerSkillInstantAndWaitForEnd_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x680 (0x680)


	void EventReceived_4152A666499A52F3576D7DA76244168D(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_VictoryStrike.GA_VictoryStrike_C.EventReceived_4152A666499A52F3576D7DA76244168D
	void EventReceived_4550563E45E7099E87C701BAF081F1C4(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_VictoryStrike.GA_VictoryStrike_C.EventReceived_4550563E45E7099E87C701BAF081F1C4
	void EventReceived_E82B711947DCAFA3711E85BF6CDB03F0(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_VictoryStrike.GA_VictoryStrike_C.EventReceived_E82B711947DCAFA3711E85BF6CDB03F0
	void ClientOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_VictoryStrike.GA_VictoryStrike_C.ClientOnSkillActivate
	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_VictoryStrike.GA_VictoryStrike_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_VictoryStrike(int32_t EntryPoint); // Function GA_VictoryStrike.GA_VictoryStrike_C.ExecuteUbergraph_GA_VictoryStrike
}; 
 
 


