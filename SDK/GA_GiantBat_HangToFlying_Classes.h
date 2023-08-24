#pragma once 
#include <GA_GiantBat_HangToFlying_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GiantBat_HangToFlying.GA_GiantBat_HangToFlying_C
// Size: 0x588(Inherited: 0x580)
struct UGA_GiantBat_HangToFlying_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GiantBat_HangToFlying.GA_GiantBat_HangToFlying_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GiantBat_HangToFlying.GA_GiantBat_HangToFlying_C.AbilityActivated
	void Rotation(); // Function GA_GiantBat_HangToFlying.GA_GiantBat_HangToFlying_C.Rotation
	void ExecuteUbergraph_GA_GiantBat_HangToFlying(int32_t EntryPoint); // Function GA_GiantBat_HangToFlying.GA_GiantBat_HangToFlying_C.ExecuteUbergraph_GA_GiantBat_HangToFlying
}; 
 
 


