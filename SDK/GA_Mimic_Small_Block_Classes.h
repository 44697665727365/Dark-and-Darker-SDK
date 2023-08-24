#pragma once 
#include <GA_Mimic_Small_Block_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Mimic_Small_Block.GA_Mimic_Small_Block_C
// Size: 0x588(Inherited: 0x580)
struct UGA_Mimic_Small_Block_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_44A1C966492FEBCDC0A8A380F779EA5E(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_Mimic_Small_Block.GA_Mimic_Small_Block_C.EventReceived_44A1C966492FEBCDC0A8A380F779EA5E
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Mimic_Small_Block.GA_Mimic_Small_Block_C.AbilityActivated
	void ExecuteUbergraph_GA_Mimic_Small_Block(int32_t EntryPoint); // Function GA_Mimic_Small_Block.GA_Mimic_Small_Block_C.ExecuteUbergraph_GA_Mimic_Small_Block
}; 
 
 


