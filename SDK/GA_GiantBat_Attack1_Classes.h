#pragma once 
#include <GA_GiantBat_Attack1_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GiantBat_Attack1.GA_GiantBat_Attack1_C
// Size: 0x648(Inherited: 0x628)
struct UGA_GiantBat_Attack1_C : UGA_MonsterMeleeAttackBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x628 (0x628)
	struct ADCCharacterBase* As DCCharacter Base;  // 0x630 (0x630)
	struct ABP_GiantBat_C* As BP Giant Bat;  // 0x638 (0x638)
	struct UDCAT_DashToLocation* Async Task;  // 0x640 (0x640)


	void EventReceived_89DFD7BC4DE1144A2B5028AE4B4B0B46(struct FGameplayEventData Payload); // Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.EventReceived_89DFD7BC4DE1144A2B5028AE4B4B0B46
	void OnFinish_A59D6A7B48D10C8B0CB09485131D3822(bool IsArrivedDestLocation); // Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.OnFinish_A59D6A7B48D10C8B0CB09485131D3822
	void OnFinish_372A32544DABC7B360308B88A192A4E4(bool IsArrivedDestLocation); // Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.OnFinish_372A32544DABC7B360308B88A192A4E4
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GiantBat_Attack1(int32_t EntryPoint); // Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.ExecuteUbergraph_GA_GiantBat_Attack1
}; 
 
 


