#pragma once 
#include <GA_RuinsGolem_AttackSlam_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_RuinsGolem_AttackSlam.GA_RuinsGolem_AttackSlam_C
// Size: 0x650(Inherited: 0x608)
struct UGA_RuinsGolem_AttackSlam_C : UGA_AoeCallerAtLocationFromMontage_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x608 (0x608)
	struct TArray<struct FVector> Spawn Locations;  // 0x610 (0x610)
	struct ADCCharacterBase* Instigator;  // 0x620 (0x620)
	int32_t Spawn Count;  // 0x628 (0x628)
	char pad_1580[4];  // 0x62C (0x62C)
	struct FTimerHandle Spawn TimerHandle;  // 0x630 (0x630)
	double Spawn Gap of Distance;  // 0x638 (0x638)
	double Base Spawn Distance;  // 0x640 (0x640)
	double Random Rotation Value;  // 0x648 (0x648)


	void EventReceived_9F0B47BF4D356B3DCEF1B9ABE7B467F6(struct FGameplayEventData Payload); // Function GA_RuinsGolem_AttackSlam.GA_RuinsGolem_AttackSlam_C.EventReceived_9F0B47BF4D356B3DCEF1B9ABE7B467F6
	void Spawn Aoe(); // Function GA_RuinsGolem_AttackSlam.GA_RuinsGolem_AttackSlam_C.Spawn Aoe
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_RuinsGolem_AttackSlam.GA_RuinsGolem_AttackSlam_C.AbilityActivated
	void ExecuteUbergraph_GA_RuinsGolem_AttackSlam(int32_t EntryPoint); // Function GA_RuinsGolem_AttackSlam.GA_RuinsGolem_AttackSlam_C.ExecuteUbergraph_GA_RuinsGolem_AttackSlam
}; 
 
 


