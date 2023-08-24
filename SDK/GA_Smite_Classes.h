#pragma once 
#include <GA_Smite_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Smite.GA_Smite_C
// Size: 0x688(Inherited: 0x680)
struct UGA_Smite_C : UGA_PlayerSkillInstantAndWaitForEnd_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x680 (0x680)


	void EventReceived_6E6CA3954E759AB441086385A5A2E81E(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_Smite.GA_Smite_C.EventReceived_6E6CA3954E759AB441086385A5A2E81E
	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_Smite.GA_Smite_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_Smite(int32_t EntryPoint); // Function GA_Smite.GA_Smite_C.ExecuteUbergraph_GA_Smite
}; 
 
 


