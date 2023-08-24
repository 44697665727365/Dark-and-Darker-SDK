#pragma once 
#include <GA_SkeletonChampion_ComboPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonChampion_ComboPhase.GA_SkeletonChampion_ComboPhase_C
// Size: 0x588(Inherited: 0x580)
struct UGA_SkeletonChampion_ComboPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_2DC189A44E754DEE908D7CBD489F9CF8(struct FGameplayEventData Payload); // Function GA_SkeletonChampion_ComboPhase.GA_SkeletonChampion_ComboPhase_C.EventReceived_2DC189A44E754DEE908D7CBD489F9CF8
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonChampion_ComboPhase.GA_SkeletonChampion_ComboPhase_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonChampion_ComboPhase(int32_t EntryPoint); // Function GA_SkeletonChampion_ComboPhase.GA_SkeletonChampion_ComboPhase_C.ExecuteUbergraph_GA_SkeletonChampion_ComboPhase
}; 
 
 


