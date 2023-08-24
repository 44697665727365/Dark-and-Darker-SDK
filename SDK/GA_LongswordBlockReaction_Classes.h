#pragma once 
#include <GA_LongswordBlockReaction_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_LongswordBlockReaction.GA_LongswordBlockReaction_C
// Size: 0x590(Inherited: 0x581)
struct UGA_LongswordBlockReaction_C : UGA_PlayerCharBlockReactionBase_C
{
	char pad_1409[7];  // 0x581 (0x581)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x588 (0x588)


	void InputActionCompleted_F37C73224C498F24B25B72863E97E15A(); // Function GA_LongswordBlockReaction.GA_LongswordBlockReaction_C.InputActionCompleted_F37C73224C498F24B25B72863E97E15A
	void InputActionStarted_F37C73224C498F24B25B72863E97E15A(); // Function GA_LongswordBlockReaction.GA_LongswordBlockReaction_C.InputActionStarted_F37C73224C498F24B25B72863E97E15A
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_LongswordBlockReaction.GA_LongswordBlockReaction_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_LongswordBlockReaction(int32_t EntryPoint); // Function GA_LongswordBlockReaction.GA_LongswordBlockReaction_C.ExecuteUbergraph_GA_LongswordBlockReaction
}; 
 
 


