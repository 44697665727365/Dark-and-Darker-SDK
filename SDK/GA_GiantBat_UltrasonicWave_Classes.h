#pragma once 
#include <GA_GiantBat_UltrasonicWave_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GiantBat_UltrasonicWave.GA_GiantBat_UltrasonicWave_C
// Size: 0x5A8(Inherited: 0x580)
struct UGA_GiantBat_UltrasonicWave_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct TArray<struct ADCCharacterBase*> Target Array;  // 0x588 (0x588)
	struct TArray<struct ADCCharacterBase*> AppliedTarget;  // 0x598 (0x598)


	void EventReceived_A80402D641FC7F2A987748A071549433(struct FGameplayEventData Payload); // Function GA_GiantBat_UltrasonicWave.GA_GiantBat_UltrasonicWave_C.EventReceived_A80402D641FC7F2A987748A071549433
	void EventReceived_68D9B709497C03B93FB891B8ADD0D0F4(struct FGameplayEventData Payload); // Function GA_GiantBat_UltrasonicWave.GA_GiantBat_UltrasonicWave_C.EventReceived_68D9B709497C03B93FB891B8ADD0D0F4
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GiantBat_UltrasonicWave.GA_GiantBat_UltrasonicWave_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GiantBat_UltrasonicWave.GA_GiantBat_UltrasonicWave_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GiantBat_UltrasonicWave(int32_t EntryPoint); // Function GA_GiantBat_UltrasonicWave.GA_GiantBat_UltrasonicWave_C.ExecuteUbergraph_GA_GiantBat_UltrasonicWave
}; 
 
 


