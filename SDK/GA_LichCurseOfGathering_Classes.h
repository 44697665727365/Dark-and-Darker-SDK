#pragma once 
#include <GA_LichCurseOfGathering_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_LichCurseOfGathering.GA_LichCurseOfGathering_C
// Size: 0x5A0(Inherited: 0x580)
struct UGA_LichCurseOfGathering_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FVector Location;  // 0x588 (0x588)


	void EventReceived_1026E4324493175E89D29889FC250FBF(struct FGameplayEventData Payload); // Function GA_LichCurseOfGathering.GA_LichCurseOfGathering_C.EventReceived_1026E4324493175E89D29889FC250FBF
	void EventReceived_49194393483D7B030ED871BDFB878B0B(struct FGameplayEventData Payload); // Function GA_LichCurseOfGathering.GA_LichCurseOfGathering_C.EventReceived_49194393483D7B030ED871BDFB878B0B
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_LichCurseOfGathering.GA_LichCurseOfGathering_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_LichCurseOfGathering.GA_LichCurseOfGathering_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_LichCurseOfGathering(int32_t EntryPoint); // Function GA_LichCurseOfGathering.GA_LichCurseOfGathering_C.ExecuteUbergraph_GA_LichCurseOfGathering
}; 
 
 


