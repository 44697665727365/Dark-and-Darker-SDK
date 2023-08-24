#pragma once 
#include <GA_LocustsSwarm_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_LocustsSwarm.GA_LocustsSwarm_C
// Size: 0x688(Inherited: 0x618)
struct UGA_LocustsSwarm_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)
	struct FTransform SpawnTransform;  // 0x620 (0x620)
	struct ADCAoeBase* AoeActor;  // [x680 ([x680)


	void EndSpell(); // Function GA_LocustsSwarm.GA_LocustsSwarm_C.EndSpell
	void SpawnAoe(struct FHitResult HtResult, bool& Result); // Function GA_LocustsSwarm.GA_LocustsSwarm_C.SpawnAoe
	void Cancelled_1FD2291E4AFD8978108B38829AE38FF5(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_LocustsSwarm.GA_LocustsSwarm_C.Cancelled_1FD2291E4AFD8978108B38829AE38FF5
	void ValidData_1FD2291E4AFD8978108B38829AE38FF5(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_LocustsSwarm.GA_LocustsSwarm_C.ValidData_1FD2291E4AFD8978108B38829AE38FF5
	void EventReceived_FE9A586F4866FC81C4266582AAD4E1C6(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_LocustsSwarm.GA_LocustsSwarm_C.EventReceived_FE9A586F4866FC81C4266582AAD4E1C6
	void OnDirectionChanged_26EECCC4454C2204D92B728CF0C5576D(); // Function GA_LocustsSwarm.GA_LocustsSwarm_C.OnDirectionChanged_26EECCC4454C2204D92B728CF0C5576D
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_LocustsSwarm.GA_LocustsSwarm_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_LocustsSwarm.GA_LocustsSwarm_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_LocustsSwarm(int32_t EntryPoint); // Function GA_LocustsSwarm.GA_LocustsSwarm_C.ExecuteUbergraph_GA_LocustsSwarm
}; 
 
 


