#pragma once 
#include <GA_SkeletonGuardmanSummoned_Resurrection_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C
// Size: 0x588(Inherited: 0x580)
struct UGA_SkeletonGuardmanSummoned_Resurrection_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_F5DB03154B705B01887AA294184B876B(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.EventReceived_F5DB03154B705B01887AA294184B876B
	void OnCancelled_F5DB03154B705B01887AA294184B876B(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.OnCancelled_F5DB03154B705B01887AA294184B876B
	void OnInterrupted_F5DB03154B705B01887AA294184B876B(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.OnInterrupted_F5DB03154B705B01887AA294184B876B
	void OnBlendOut_F5DB03154B705B01887AA294184B876B(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.OnBlendOut_F5DB03154B705B01887AA294184B876B
	void OnCompleted_F5DB03154B705B01887AA294184B876B(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.OnCompleted_F5DB03154B705B01887AA294184B876B
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection(int32_t EntryPoint); // Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection
}; 
 
 


