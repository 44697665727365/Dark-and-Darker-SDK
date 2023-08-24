#pragma once 
#include <GA_LichFrenzy_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_LichFrenzy.GA_LichFrenzy_C
// Size: 0x5A8(Inherited: 0x580)
struct UGA_LichFrenzy_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct ABP_Lich_Common_C* As BP Lich;  // 0x588 (0x588)
	struct FVector V;  // 0x590 (0x590)


	void EventReceived_44DA495744C99059797555AA364D6978(struct FGameplayEventData Payload); // Function GA_LichFrenzy.GA_LichFrenzy_C.EventReceived_44DA495744C99059797555AA364D6978
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_LichFrenzy.GA_LichFrenzy_C.AbilityActivated
	void ExecuteUbergraph_GA_LichFrenzy(int32_t EntryPoint); // Function GA_LichFrenzy.GA_LichFrenzy_C.ExecuteUbergraph_GA_LichFrenzy
}; 
 
 


