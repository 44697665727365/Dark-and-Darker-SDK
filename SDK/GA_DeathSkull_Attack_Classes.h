#pragma once 
#include <GA_DeathSkull_Attack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DeathSkull_Attack.GA_DeathSkull_Attack_C
// Size: 0x6C0(Inherited: 0x628)
struct UGA_DeathSkull_Attack_C : UGA_MonsterMeleeAttackBase
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
	double EaseMoveTime;  // 0x6A8 (0x6A8)
	double OnAttackTime;  // 0x6B0 (0x6B0)
	double BlendTime;  // 0x6B8 (0x6B8)


	void Find Target Position(); // Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.Find Target Position
	void OnFinish_2633EB2A49F35AC9C1DE7B93B1C6D195(); // Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.OnFinish_2633EB2A49F35AC9C1DE7B93B1C6D195
	void LookTarget(); // Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.LookTarget
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.K2_OnEndAbility
	void Rush(); // Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.Rush
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.AbilityActivated
	void ExecuteUbergraph_GA_DeathSkull_Attack(int32_t EntryPoint); // Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.ExecuteUbergraph_GA_DeathSkull_Attack
}; 
 
 


