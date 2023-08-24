#pragma once 
#include <GA_IceBolt_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_IceBolt.GA_IceBolt_C
// Size: 0x620(Inherited: 0x618)
struct UGA_IceBolt_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)


	void Cancelled_581501F64E87E564129EFA91E4613987(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_IceBolt.GA_IceBolt_C.Cancelled_581501F64E87E564129EFA91E4613987
	void ValidData_581501F64E87E564129EFA91E4613987(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_IceBolt.GA_IceBolt_C.ValidData_581501F64E87E564129EFA91E4613987
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_IceBolt.GA_IceBolt_C.AbilityActivated
	void ExecuteUbergraph_GA_IceBolt(int32_t EntryPoint); // Function GA_IceBolt.GA_IceBolt_C.ExecuteUbergraph_GA_IceBolt
}; 
 
 


