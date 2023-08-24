#pragma once 
#include <GA_GoblinArcher_AttackState_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinArcher_AttackState.GA_GoblinArcher_AttackState_C
// Size: 0x590(Inherited: 0x580)
struct UGA_GoblinArcher_AttackState_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FGameplayTag Event Tag;  // 0x588 (0x588)


	void EventReceived_BB92ACDF454879A28FDB38B442C5740F(struct FGameplayEventData Payload); // Function GA_GoblinArcher_AttackState.GA_GoblinArcher_AttackState_C.EventReceived_BB92ACDF454879A28FDB38B442C5740F
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinArcher_AttackState.GA_GoblinArcher_AttackState_C.AbilityActivated
	void ExecuteUbergraph_GA_GoblinArcher_AttackState(int32_t EntryPoint); // Function GA_GoblinArcher_AttackState.GA_GoblinArcher_AttackState_C.ExecuteUbergraph_GA_GoblinArcher_AttackState
}; 
 
 


