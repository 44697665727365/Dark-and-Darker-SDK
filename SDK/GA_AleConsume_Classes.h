#pragma once 
#include <GA_AleConsume_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_AleConsume.GA_AleConsume_C
// Size: 0x658(Inherited: 0x650)
struct UGA_AleConsume_C : UGA_ItemConsume_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x650 (0x650)


	void K2_OnEndAbility(bool bWasCancelled); // Function GA_AleConsume.GA_AleConsume_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_AleConsume.GA_AleConsume_C.AbilityActivated
	void ExecuteUbergraph_GA_AleConsume(int32_t EntryPoint); // Function GA_AleConsume.GA_AleConsume_C.ExecuteUbergraph_GA_AleConsume
}; 
 
 


