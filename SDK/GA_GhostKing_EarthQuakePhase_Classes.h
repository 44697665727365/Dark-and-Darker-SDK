#pragma once 
#include <GA_GhostKing_EarthQuakePhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GhostKing_EarthQuakePhase.GA_GhostKing_EarthQuakePhase_C
// Size: 0x590(Inherited: 0x580)
struct UGA_GhostKing_EarthQuakePhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct ABP_GhostKing_Common_C* As BP Ghost King;  // 0x588 (0x588)


	void EventReceived_EE80568D434BF7B5B708B888F1081D7D(struct FGameplayEventData Payload); // Function GA_GhostKing_EarthQuakePhase.GA_GhostKing_EarthQuakePhase_C.EventReceived_EE80568D434BF7B5B708B888F1081D7D
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GhostKing_EarthQuakePhase.GA_GhostKing_EarthQuakePhase_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GhostKing_EarthQuakePhase.GA_GhostKing_EarthQuakePhase_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GhostKing_EarthQuakePhase(int32_t EntryPoint); // Function GA_GhostKing_EarthQuakePhase.GA_GhostKing_EarthQuakePhase_C.ExecuteUbergraph_GA_GhostKing_EarthQuakePhase
}; 
 
 


