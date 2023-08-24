#pragma once 
#include <GA_Wraith_AttackState_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Wraith_AttackState.GA_Wraith_AttackState_C
// Size: 0x588(Inherited: 0x580)
struct UGA_Wraith_AttackState_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_6CB57BDB4D9B95B8FF8803A9BF0FDA10(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_Wraith_AttackState.GA_Wraith_AttackState_C.EventReceived_6CB57BDB4D9B95B8FF8803A9BF0FDA10
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Wraith_AttackState.GA_Wraith_AttackState_C.AbilityActivated
	void ExecuteUbergraph_GA_Wraith_AttackState(int32_t EntryPoint); // Function GA_Wraith_AttackState.GA_Wraith_AttackState_C.ExecuteUbergraph_GA_Wraith_AttackState
}; 
 
 


