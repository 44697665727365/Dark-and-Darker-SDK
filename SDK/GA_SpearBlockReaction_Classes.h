#pragma once 
#include <GA_SpearBlockReaction_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SpearBlockReaction.GA_SpearBlockReaction_C
// Size: 0x590(Inherited: 0x581)
struct UGA_SpearBlockReaction_C : UGA_PlayerCharBlockReactionBase_C
{
	char pad_1409[7];  // 0x581 (0x581)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x588 (0x588)


	void InputActionCompleted_59241CEF4202F35366160881F6AE7FF8(); // Function GA_SpearBlockReaction.GA_SpearBlockReaction_C.InputActionCompleted_59241CEF4202F35366160881F6AE7FF8
	void InputActionStarted_59241CEF4202F35366160881F6AE7FF8(); // Function GA_SpearBlockReaction.GA_SpearBlockReaction_C.InputActionStarted_59241CEF4202F35366160881F6AE7FF8
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_SpearBlockReaction.GA_SpearBlockReaction_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_SpearBlockReaction(int32_t EntryPoint); // Function GA_SpearBlockReaction.GA_SpearBlockReaction_C.ExecuteUbergraph_GA_SpearBlockReaction
}; 
 
 


