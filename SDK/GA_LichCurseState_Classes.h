#pragma once 
#include <GA_LichCurseState_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_LichCurseState.GA_LichCurseState_C
// Size: 0x598(Inherited: 0x580)
struct UGA_LichCurseState_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FGameplayTag Event Tag;  // 0x588 (0x588)
	struct ABP_Lich_Common_C* As BP Lich;  // 0x590 (0x590)


	void EventReceived_9212A9594B6FFC3702D584854BF20D3E(struct FGameplayEventData Payload); // Function GA_LichCurseState.GA_LichCurseState_C.EventReceived_9212A9594B6FFC3702D584854BF20D3E
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_LichCurseState.GA_LichCurseState_C.AbilityActivated
	void ExecuteUbergraph_GA_LichCurseState(int32_t EntryPoint); // Function GA_LichCurseState.GA_LichCurseState_C.ExecuteUbergraph_GA_LichCurseState
}; 
 
 


