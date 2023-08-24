#pragma once 
#include <GA_Otto_Base_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Otto_Base.GA_Otto_Base_C
// Size: 0x588(Inherited: 0x580)
struct UGA_Otto_Base_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Otto_Base.GA_Otto_Base_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Otto_Base.GA_Otto_Base_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_Otto_Base(int32_t EntryPoint); // Function GA_Otto_Base.GA_Otto_Base_C.ExecuteUbergraph_GA_Otto_Base
}; 
 
 


