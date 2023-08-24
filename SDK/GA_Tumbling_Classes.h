#pragma once 
#include <GA_Tumbling_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Tumbling.GA_Tumbling_C
// Size: 0x680(Inherited: 0x678)
struct UGA_Tumbling_C : UGA_PlayerSkillInstant_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x678 (0x678)


	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Tumbling.GA_Tumbling_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Tumbling.GA_Tumbling_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_Tumbling(int32_t EntryPoint); // Function GA_Tumbling.GA_Tumbling_C.ExecuteUbergraph_GA_Tumbling
}; 
 
 


