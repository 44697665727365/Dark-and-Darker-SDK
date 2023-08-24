#pragma once 
#include <GA_DemonBerserker_Attack1_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DemonBerserker_Attack1.GA_DemonBerserker_Attack1_C
// Size: 0x6E1(Inherited: 0x6C9)
struct UGA_DemonBerserker_Attack1_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct FGameplayTag Event Tag;  // 0x6D8 (0x6D8)
	char pad_1760_1 : 7;  // 0x6E0 (0x6E0)
	bool Combo Triggered : 1;  // 0x6E0 (0x6E0)


	void EventReceived_564F5B6C4DB573D61F1A8AA04342AF7C(struct FGameplayEventData Payload); // Function GA_DemonBerserker_Attack1.GA_DemonBerserker_Attack1_C.EventReceived_564F5B6C4DB573D61F1A8AA04342AF7C
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_DemonBerserker_Attack1.GA_DemonBerserker_Attack1_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DemonBerserker_Attack1.GA_DemonBerserker_Attack1_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_DemonBerserker_Attack1(int32_t EntryPoint); // Function GA_DemonBerserker_Attack1.GA_DemonBerserker_Attack1_C.ExecuteUbergraph_GA_DemonBerserker_Attack1
}; 
 
 


