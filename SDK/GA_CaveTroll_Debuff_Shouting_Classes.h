#pragma once 
#include <GA_CaveTroll_Debuff_Shouting_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CaveTroll_Debuff_Shouting.GA_CaveTroll_Debuff_Shouting_C
// Size: 0x5A0(Inherited: 0x580)
struct UGA_CaveTroll_Debuff_Shouting_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct TArray<struct ADCCharacterBase*> Target Array;  // 0x588 (0x588)
	float Distance;  // 0x598 (0x598)
	float Allowed Angle;  // 0x59C (0x59C)


	void EventReceived_2C61A1944EB3F1A04EBCEBBEE236433B(struct FGameplayEventData Payload); // Function GA_CaveTroll_Debuff_Shouting.GA_CaveTroll_Debuff_Shouting_C.EventReceived_2C61A1944EB3F1A04EBCEBBEE236433B
	void EventReceived_9F4198A841DE8D176747EAA1345AC0FC(struct FGameplayEventData Payload); // Function GA_CaveTroll_Debuff_Shouting.GA_CaveTroll_Debuff_Shouting_C.EventReceived_9F4198A841DE8D176747EAA1345AC0FC
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_CaveTroll_Debuff_Shouting.GA_CaveTroll_Debuff_Shouting_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_CaveTroll_Debuff_Shouting.GA_CaveTroll_Debuff_Shouting_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_CaveTroll_Debuff_Shouting(int32_t EntryPoint); // Function GA_CaveTroll_Debuff_Shouting.GA_CaveTroll_Debuff_Shouting_C.ExecuteUbergraph_GA_CaveTroll_Debuff_Shouting
}; 
 
 


