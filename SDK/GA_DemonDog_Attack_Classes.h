#pragma once 
#include <GA_DemonDog_Attack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DemonDog_Attack.GA_DemonDog_Attack_C
// Size: 0x6D8(Inherited: 0x6C9)
struct UGA_DemonDog_Attack_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void EventReceived_DBA5641548D44CA6EB284BB42FBBF497(struct FGameplayEventData Payload); // Function GA_DemonDog_Attack.GA_DemonDog_Attack_C.EventReceived_DBA5641548D44CA6EB284BB42FBBF497
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DemonDog_Attack.GA_DemonDog_Attack_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_DemonDog_Attack.GA_DemonDog_Attack_C.AbilityActivated
	void ExecuteUbergraph_GA_DemonDog_Attack(int32_t EntryPoint); // Function GA_DemonDog_Attack.GA_DemonDog_Attack_C.ExecuteUbergraph_GA_DemonDog_Attack
}; 
 
 


