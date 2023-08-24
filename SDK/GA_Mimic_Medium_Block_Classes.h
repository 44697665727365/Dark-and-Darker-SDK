#pragma once 
#include <GA_Mimic_Medium_Block_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Mimic_Medium_Block.GA_Mimic_Medium_Block_C
// Size: 0x588(Inherited: 0x580)
struct UGA_Mimic_Medium_Block_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_A9DA7C014F460F86E96E0591DAE16358(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_Mimic_Medium_Block.GA_Mimic_Medium_Block_C.EventReceived_A9DA7C014F460F86E96E0591DAE16358
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Mimic_Medium_Block.GA_Mimic_Medium_Block_C.AbilityActivated
	void ExecuteUbergraph_GA_Mimic_Medium_Block(int32_t EntryPoint); // Function GA_Mimic_Medium_Block.GA_Mimic_Medium_Block_C.ExecuteUbergraph_GA_Mimic_Medium_Block
}; 
 
 


