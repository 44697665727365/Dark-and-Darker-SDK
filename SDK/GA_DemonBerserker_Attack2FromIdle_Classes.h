#pragma once 
#include <GA_DemonBerserker_Attack2FromIdle_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DemonBerserker_Attack2FromIdle.GA_DemonBerserker_Attack2FromIdle_C
// Size: 0x6E1(Inherited: 0x6C9)
struct UGA_DemonBerserker_Attack2FromIdle_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct FGameplayTag Event Tag;  // 0x6D8 (0x6D8)
	char pad_1760_1 : 7;  // 0x6E0 (0x6E0)
	bool Combo Triggered : 1;  // 0x6E0 (0x6E0)


	void EventReceived_17805B8345D124FA6FAF2CB3E2C10054(struct FGameplayEventData Payload); // Function GA_DemonBerserker_Attack2FromIdle.GA_DemonBerserker_Attack2FromIdle_C.EventReceived_17805B8345D124FA6FAF2CB3E2C10054
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_DemonBerserker_Attack2FromIdle.GA_DemonBerserker_Attack2FromIdle_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DemonBerserker_Attack2FromIdle.GA_DemonBerserker_Attack2FromIdle_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle(int32_t EntryPoint); // Function GA_DemonBerserker_Attack2FromIdle.GA_DemonBerserker_Attack2FromIdle_C.ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle
}; 
 
 


