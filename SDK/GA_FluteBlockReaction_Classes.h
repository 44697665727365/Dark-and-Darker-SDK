#pragma once 
#include <GA_FluteBlockReaction_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_FluteBlockReaction.GA_FluteBlockReaction_C
// Size: 0x590(Inherited: 0x581)
struct UGA_FluteBlockReaction_C : UGA_PlayerCharBlockReactionBase_C
{
	char pad_1409[7];  // 0x581 (0x581)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x588 (0x588)


	void InputActionCompleted_BCFB65554847E3F21C3A8C89A0A77CCC(); // Function GA_FluteBlockReaction.GA_FluteBlockReaction_C.InputActionCompleted_BCFB65554847E3F21C3A8C89A0A77CCC
	void InputActionStarted_BCFB65554847E3F21C3A8C89A0A77CCC(); // Function GA_FluteBlockReaction.GA_FluteBlockReaction_C.InputActionStarted_BCFB65554847E3F21C3A8C89A0A77CCC
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_FluteBlockReaction.GA_FluteBlockReaction_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_FluteBlockReaction(int32_t EntryPoint); // Function GA_FluteBlockReaction.GA_FluteBlockReaction_C.ExecuteUbergraph_GA_FluteBlockReaction
}; 
 
 


