#pragma once 
#include <GA_Earthquake_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Earthquake.GA_Earthquake_C
// Size: 0x6E8(Inherited: 0x618)
struct UGA_Earthquake_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)
	struct UAbilityTask_WaitGameplayEvent* Task_Cnacel;  // 0x620 (0x620)
	char pad_1576[8];  // 0x628 (0x628)
	struct FTransform SpawnTransform;  // 0x630 (0x630)
	struct TMap<struct AActor*, struct FActiveGameplayEffectHandle> EffectHandleMap;  // 0x690 (0x690)
	struct ADCAoeBase* AoeActor;  // 0x6E0 (0x6E0)


	void EndSpell(); // Function GA_Earthquake.GA_Earthquake_C.EndSpell
	void RemoveEffect(struct AActor* OutActor); // Function GA_Earthquake.GA_Earthquake_C.RemoveEffect
	void SpawnAoe(struct FHitResult HtResult, bool& Result); // Function GA_Earthquake.GA_Earthquake_C.SpawnAoe
	void Cancelled_1D8A04C140FE58B0FC6293AA01E7D7B3(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Earthquake.GA_Earthquake_C.Cancelled_1D8A04C140FE58B0FC6293AA01E7D7B3
	void ValidData_1D8A04C140FE58B0FC6293AA01E7D7B3(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Earthquake.GA_Earthquake_C.ValidData_1D8A04C140FE58B0FC6293AA01E7D7B3
	void EventReceived_60A5E2014E7F780EFC926787A0E05711(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_Earthquake.GA_Earthquake_C.EventReceived_60A5E2014E7F780EFC926787A0E05711
	void OnDirectionChanged_28F6193A43CDDA6F2BCC3880F32F6CB5(); // Function GA_Earthquake.GA_Earthquake_C.OnDirectionChanged_28F6193A43CDDA6F2BCC3880F32F6CB5
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_Earthquake.GA_Earthquake_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Earthquake.GA_Earthquake_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_Earthquake(int32_t EntryPoint); // Function GA_Earthquake.GA_Earthquake_C.ExecuteUbergraph_GA_Earthquake
}; 
 
 


