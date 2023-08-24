#pragma once 
#include <GA_DeathSkull_Attack_Nightmare_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C
// Size: 0x6B4(Inherited: 0x628)
struct UGA_DeathSkull_Attack_Nightmare_C : UGA_MonsterMeleeAttackBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x628 (0x628)
	struct FTimerHandle LookTarget TimerHandle;  // 0x630 (0x630)
	struct FTimerHandle Rush TimerHandle;  // 0x638 (0x638)
	struct ABP_DeathSkull_Common_C* As BP Death Skull;  // 0x640 (0x640)
	struct ADCCharacterBase* BB Target Actor;  // 0x648 (0x648)
	enum class ECollisionResponse New Response;  // 0x650 (0x650)
	char pad_1617[7];  // 0x651 (0x651)
	double AttackDistance;  // 0x658 (0x658)
	struct FVector CheckDestLocation;  // 0x660 (0x660)
	struct FVector AttackDir;  // 0x678 (0x678)
	double RemainDistance;  // 0x690 (0x690)
	double HeightCorrection;  // 0x698 (0x698)
	double PenetrateRange;  // 0x6A0 (0x6A0)
	double OnAttackTime;  // 0x6A8 (0x6A8)
	int32_t Attack Phase;  // 0x6B0 (0x6B0)


	void Find Target Position(); // Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.Find Target Position
	void OnFinish_A04CDA7F4680AB1B5DF9E2AC7BE8E563(); // Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.OnFinish_A04CDA7F4680AB1B5DF9E2AC7BE8E563
	void OnFinish_E635967A42A02C013C809A85943B8E54(); // Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.OnFinish_E635967A42A02C013C809A85943B8E54
	void LookTarget(); // Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.LookTarget
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.K2_OnEndAbility
	void Attack(); // Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.Attack
	void Move(); // Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.Move
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.AbilityActivated
	void ExecuteUbergraph_GA_DeathSkull_Attack_Nightmare(int32_t EntryPoint); // Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.ExecuteUbergraph_GA_DeathSkull_Attack_Nightmare
}; 
 
 


