#pragma once 
#include <GA_IntenseFocus_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_IntenseFocus.GA_IntenseFocus_C
// Size: 0x688(Inherited: 0x680)
struct UGA_IntenseFocus_C : UGA_PlayerSkillInstantAndWaitForEnd_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x680 (0x680)


	void EventReceived_BCE4DF5A4536514977F0C6B37DBA206E(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_IntenseFocus.GA_IntenseFocus_C.EventReceived_BCE4DF5A4536514977F0C6B37DBA206E
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_IntenseFocus.GA_IntenseFocus_C.AbilityActivated
	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_IntenseFocus.GA_IntenseFocus_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_IntenseFocus(int32_t EntryPoint); // Function GA_IntenseFocus.GA_IntenseFocus_C.ExecuteUbergraph_GA_IntenseFocus
}; 
 
 


