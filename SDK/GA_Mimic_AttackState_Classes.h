#pragma once 
#include <GA_Mimic_AttackState_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Mimic_AttackState.GA_Mimic_AttackState_C
// Size: 0x5B0(Inherited: 0x580)
struct UGA_Mimic_AttackState_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct ABP_DCMonsterBaseWithOptions_C* As BP DCMonster Base With Options;  // 0x588 (0x588)
	struct TArray<struct ADCCharacterBase*> Target Array;  // 0x590 (0x590)
	struct AActor* Target;  // 0x5A0 (0x5A0)
	double Dash Distance;  // 0x5A8 (0x5A8)


	void EventReceived_A41C06D64BC5222CED392AA8C7A52DD2(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_Mimic_AttackState.GA_Mimic_AttackState_C.EventReceived_A41C06D64BC5222CED392AA8C7A52DD2
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Mimic_AttackState.GA_Mimic_AttackState_C.AbilityActivated
	void ExecuteUbergraph_GA_Mimic_AttackState(int32_t EntryPoint); // Function GA_Mimic_AttackState.GA_Mimic_AttackState_C.ExecuteUbergraph_GA_Mimic_AttackState
}; 
 
 


