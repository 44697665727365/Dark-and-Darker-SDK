#pragma once 
#include <GA_GhostKing_SummonSmallGhost_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GhostKing_SummonSmallGhost.GA_GhostKing_SummonSmallGhost_C
// Size: 0x589(Inherited: 0x580)
struct UGA_GhostKing_SummonSmallGhost_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	char pad_1416_1 : 7;  // 0x588 (0x588)
	bool Used : 1;  // 0x588 (0x588)


	void EventReceived_EDA2BCA841843174E8997585DF436FE2(struct FGameplayEventData Payload); // Function GA_GhostKing_SummonSmallGhost.GA_GhostKing_SummonSmallGhost_C.EventReceived_EDA2BCA841843174E8997585DF436FE2
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GhostKing_SummonSmallGhost.GA_GhostKing_SummonSmallGhost_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GhostKing_SummonSmallGhost.GA_GhostKing_SummonSmallGhost_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GhostKing_SummonSmallGhost(int32_t EntryPoint); // Function GA_GhostKing_SummonSmallGhost.GA_GhostKing_SummonSmallGhost_C.ExecuteUbergraph_GA_GhostKing_SummonSmallGhost
}; 
 
 


