#pragma once 
#include <GA_Mimic_Large_Block_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Mimic_Large_Block.GA_Mimic_Large_Block_C
// Size: 0x588(Inherited: 0x580)
struct UGA_Mimic_Large_Block_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_99461E984568D2BD0C202A96BB8C59B4(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_Mimic_Large_Block.GA_Mimic_Large_Block_C.EventReceived_99461E984568D2BD0C202A96BB8C59B4
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Mimic_Large_Block.GA_Mimic_Large_Block_C.AbilityActivated
	void ExecuteUbergraph_GA_Mimic_Large_Block(int32_t EntryPoint); // Function GA_Mimic_Large_Block.GA_Mimic_Large_Block_C.ExecuteUbergraph_GA_Mimic_Large_Block
}; 
 
 


