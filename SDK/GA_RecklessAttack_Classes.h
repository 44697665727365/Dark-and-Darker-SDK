#pragma once 
#include <GA_RecklessAttack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_RecklessAttack.GA_RecklessAttack_C
// Size: 0x688(Inherited: 0x680)
struct UGA_RecklessAttack_C : UGA_PlayerSkillInstantAndWaitForEnd_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x680 (0x680)


	void EventReceived_22676BF44A86DF25C537C694500CCF60(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_RecklessAttack.GA_RecklessAttack_C.EventReceived_22676BF44A86DF25C537C694500CCF60
	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_RecklessAttack.GA_RecklessAttack_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_RecklessAttack(int32_t EntryPoint); // Function GA_RecklessAttack.GA_RecklessAttack_C.ExecuteUbergraph_GA_RecklessAttack
}; 
 
 


