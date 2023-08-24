#pragma once 
#include <GA_GhostKing_Scream_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GhostKing_Scream.GA_GhostKing_Scream_C
// Size: 0x598(Inherited: 0x580)
struct UGA_GhostKing_Scream_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct ABP_GhostKing_Common_C* As BP Ghost King;  // 0x588 (0x588)
	struct AActor* Target;  // 0x590 (0x590)


	void EventReceived_EF2338D248B93425A4E548942DF6FAB7(struct FGameplayEventData Payload); // Function GA_GhostKing_Scream.GA_GhostKing_Scream_C.EventReceived_EF2338D248B93425A4E548942DF6FAB7
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GhostKing_Scream.GA_GhostKing_Scream_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GhostKing_Scream.GA_GhostKing_Scream_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GhostKing_Scream(int32_t EntryPoint); // Function GA_GhostKing_Scream.GA_GhostKing_Scream_C.ExecuteUbergraph_GA_GhostKing_Scream
}; 
 
 


