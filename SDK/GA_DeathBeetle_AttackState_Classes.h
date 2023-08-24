#pragma once 
#include <GA_DeathBeetle_AttackState_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DeathBeetle_AttackState.GA_DeathBeetle_AttackState_C
// Size: 0x588(Inherited: 0x580)
struct UGA_DeathBeetle_AttackState_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_39775F904A1DD664E264DAA8ECD95886(struct FGameplayEventData Payload); // Function GA_DeathBeetle_AttackState.GA_DeathBeetle_AttackState_C.EventReceived_39775F904A1DD664E264DAA8ECD95886
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_DeathBeetle_AttackState.GA_DeathBeetle_AttackState_C.AbilityActivated
	void ExecuteUbergraph_GA_DeathBeetle_AttackState(int32_t EntryPoint); // Function GA_DeathBeetle_AttackState.GA_DeathBeetle_AttackState_C.ExecuteUbergraph_GA_DeathBeetle_AttackState
}; 
 
 


