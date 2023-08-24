#pragma once 
#include <GA_BloodExchange_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_BloodExchange.GA_BloodExchange_C
// Size: 0x688(Inherited: 0x680)
struct UGA_BloodExchange_C : UGA_PlayerSkillInstantAndWaitForEnd_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x680 (0x680)


	void EventReceived_319C471D49A666CAA5CDCFAEC961EDA9(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_BloodExchange.GA_BloodExchange_C.EventReceived_319C471D49A666CAA5CDCFAEC961EDA9
	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_BloodExchange.GA_BloodExchange_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_BloodExchange(int32_t EntryPoint); // Function GA_BloodExchange.GA_BloodExchange_C.ExecuteUbergraph_GA_BloodExchange
}; 
 
 


