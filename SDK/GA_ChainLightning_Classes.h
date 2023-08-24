#pragma once 
#include <GA_ChainLightning_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_ChainLightning.GA_ChainLightning_C
// Size: 0x660(Inherited: 0x618)
struct UGA_ChainLightning_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)
	double BoundingArea;  // 0x620 (0x620)
	int32_t BoundingCount;  // 0x628 (0x628)
	char pad_1580[4];  // 0x62C (0x62C)
	struct TArray<struct AActor*> IgnoreActors;  // 0x630 (0x630)
	struct FVector PivotLocation;  // 0x640 (0x640)
	double BoundingTime;  // 0x658 (0x658)


	void CheckTargetActor(struct AActor* TargetActor, bool& Result); // Function GA_ChainLightning.GA_ChainLightning_C.CheckTargetActor
	void OnBoundingTarget(int32_t RepeatCount); // Function GA_ChainLightning.GA_ChainLightning_C.OnBoundingTarget
	void OnApplyedTargetDamage(struct AActor* TargetActor, int32_t BoundCount); // Function GA_ChainLightning.GA_ChainLightning_C.OnApplyedTargetDamage
	void CalMinDistanceTarget(struct TArray<struct AActor*>& InActors, struct AActor*& OutActor); // Function GA_ChainLightning.GA_ChainLightning_C.CalMinDistanceTarget
	void Cancelled_31121FD1430811CAF3A874B288707DD0(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_ChainLightning.GA_ChainLightning_C.Cancelled_31121FD1430811CAF3A874B288707DD0
	void ValidData_31121FD1430811CAF3A874B288707DD0(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_ChainLightning.GA_ChainLightning_C.ValidData_31121FD1430811CAF3A874B288707DD0
	void OnFinished_0648ED534A0BC29A1C2F12BADC8FE40C(int32_t ActionNumber); // Function GA_ChainLightning.GA_ChainLightning_C.OnFinished_0648ED534A0BC29A1C2F12BADC8FE40C
	void OnPerformAction_0648ED534A0BC29A1C2F12BADC8FE40C(int32_t ActionNumber); // Function GA_ChainLightning.GA_ChainLightning_C.OnPerformAction_0648ED534A0BC29A1C2F12BADC8FE40C
	void OnFinish_739012464125AEAA064EE3BBAFFB2AFC(); // Function GA_ChainLightning.GA_ChainLightning_C.OnFinish_739012464125AEAA064EE3BBAFFB2AFC
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_ChainLightning.GA_ChainLightning_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ChainLightning.GA_ChainLightning_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_ChainLightning(int32_t EntryPoint); // Function GA_ChainLightning.GA_ChainLightning_C.ExecuteUbergraph_GA_ChainLightning
}; 
 
 


