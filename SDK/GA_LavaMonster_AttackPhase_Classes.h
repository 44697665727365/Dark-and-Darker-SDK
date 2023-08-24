#pragma once 
#include <GA_LavaMonster_AttackPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_LavaMonster_AttackPhase.GA_LavaMonster_AttackPhase_C
// Size: 0x598(Inherited: 0x580)
struct UGA_LavaMonster_AttackPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FGameplayTag Event Tag;  // 0x588 (0x588)
	struct ABP_LavaMonster_Common_C* As BP Lava Monster;  // 0x590 (0x590)


	void EventReceived_EC911C75464C4C17118BF492921C63D8(struct FGameplayEventData Payload); // Function GA_LavaMonster_AttackPhase.GA_LavaMonster_AttackPhase_C.EventReceived_EC911C75464C4C17118BF492921C63D8
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_LavaMonster_AttackPhase.GA_LavaMonster_AttackPhase_C.AbilityActivated
	void ExecuteUbergraph_GA_LavaMonster_AttackPhase(int32_t EntryPoint); // Function GA_LavaMonster_AttackPhase.GA_LavaMonster_AttackPhase_C.ExecuteUbergraph_GA_LavaMonster_AttackPhase
}; 
 
 


