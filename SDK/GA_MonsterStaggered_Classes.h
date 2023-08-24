#pragma once 
#include <GA_MonsterStaggered_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_MonsterStaggered.GA_MonsterStaggered_C
// Size: 0x588(Inherited: 0x580)
struct UGA_MonsterStaggered_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void K2_OnEndAbility(bool bWasCancelled); // Function GA_MonsterStaggered.GA_MonsterStaggered_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_MonsterStaggered.GA_MonsterStaggered_C.AbilityActivated
	void ExecuteUbergraph_GA_MonsterStaggered(int32_t EntryPoint); // Function GA_MonsterStaggered.GA_MonsterStaggered_C.ExecuteUbergraph_GA_MonsterStaggered
}; 
 
 


