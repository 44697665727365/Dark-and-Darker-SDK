#pragma once 
#include <GA_Mummy_AttackPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Mummy_AttackPhase.GA_Mummy_AttackPhase_C
// Size: 0x5B0(Inherited: 0x580)
struct UGA_Mummy_AttackPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct ADCCharacterBase* Target;  // 0x588 (0x588)
	double Check Distance To Enemy1;  // 0x590 (0x590)
	double Check Distance To Enemy2;  // 0x598 (0x598)
	double Check Distance To Enemy3;  // 0x5A0 (0x5A0)
	struct FGameplayTag Event Tag;  // 0x5A8 (0x5A8)


	void EventReceived_7A1CE0F142DAFDF372BBB1A3D3F876B6(struct FGameplayEventData Payload); // Function GA_Mummy_AttackPhase.GA_Mummy_AttackPhase_C.EventReceived_7A1CE0F142DAFDF372BBB1A3D3F876B6
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Mummy_AttackPhase.GA_Mummy_AttackPhase_C.AbilityActivated
	void ExecuteUbergraph_GA_Mummy_AttackPhase(int32_t EntryPoint); // Function GA_Mummy_AttackPhase.GA_Mummy_AttackPhase_C.ExecuteUbergraph_GA_Mummy_AttackPhase
}; 
 
 


