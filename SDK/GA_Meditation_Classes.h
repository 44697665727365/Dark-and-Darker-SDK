#pragma once 
#include <GA_Meditation_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Meditation.GA_Meditation_C
// Size: 0x778(Inherited: 0x770)
struct UGA_Meditation_C : UGA_PlayerSkillChanneling_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x770 (0x770)


	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Meditation.GA_Meditation_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Meditation.GA_Meditation_C.AbilityActivated
	void ServerOnChannelingAction_BP(struct FGameplayEventData EventData, struct FGameplayCueParameters CueParams); // Function GA_Meditation.GA_Meditation_C.ServerOnChannelingAction_BP
	void ExecuteUbergraph_GA_Meditation(int32_t EntryPoint); // Function GA_Meditation.GA_Meditation_C.ExecuteUbergraph_GA_Meditation
}; 
 
 


