#pragma once 
#include <GA_GhostKing_CurseOfChilling_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GhostKing_CurseOfChilling.GA_GhostKing_CurseOfChilling_C
// Size: 0x598(Inherited: 0x580)
struct UGA_GhostKing_CurseOfChilling_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct ABP_GhostKing_Common_C* As BP Ghost King;  // 0x588 (0x588)
	struct FTimerHandle Apply Cycle TimerHandle;  // 0x590 (0x590)


	void EventReceived_B21121F24B04A09AF14AECB1E6F15BF4(struct FGameplayEventData Payload); // Function GA_GhostKing_CurseOfChilling.GA_GhostKing_CurseOfChilling_C.EventReceived_B21121F24B04A09AF14AECB1E6F15BF4
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GhostKing_CurseOfChilling.GA_GhostKing_CurseOfChilling_C.AbilityActivated
	void Apply Effect(); // Function GA_GhostKing_CurseOfChilling.GA_GhostKing_CurseOfChilling_C.Apply Effect
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GhostKing_CurseOfChilling.GA_GhostKing_CurseOfChilling_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GhostKing_CurseOfChilling(int32_t EntryPoint); // Function GA_GhostKing_CurseOfChilling.GA_GhostKing_CurseOfChilling_C.ExecuteUbergraph_GA_GhostKing_CurseOfChilling
}; 
 
 


