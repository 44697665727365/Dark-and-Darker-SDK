#pragma once 
#include <GA_DemonDog_DashAttack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DemonDog_DashAttack.GA_DemonDog_DashAttack_C
// Size: 0x6D8(Inherited: 0x6C9)
struct UGA_DemonDog_DashAttack_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void EventReceived_6A2D151A41895208B55271BC106A0EF7(struct FGameplayEventData Payload); // Function GA_DemonDog_DashAttack.GA_DemonDog_DashAttack_C.EventReceived_6A2D151A41895208B55271BC106A0EF7
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DemonDog_DashAttack.GA_DemonDog_DashAttack_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_DemonDog_DashAttack.GA_DemonDog_DashAttack_C.AbilityActivated
	void ExecuteUbergraph_GA_DemonDog_DashAttack(int32_t EntryPoint); // Function GA_DemonDog_DashAttack.GA_DemonDog_DashAttack_C.ExecuteUbergraph_GA_DemonDog_DashAttack
}; 
 
 


