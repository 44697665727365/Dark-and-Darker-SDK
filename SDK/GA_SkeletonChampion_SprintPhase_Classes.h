#pragma once 
#include <GA_SkeletonChampion_SprintPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C
// Size: 0x598(Inherited: 0x580)
struct UGA_SkeletonChampion_SprintPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct UShapeComponent* ;  // 0x588 (0x588)
	struct ABP_DCMonsterBaseWithOptions_C* As BP DCMonster Base With Options;  // 0x590 (0x590)


	void EventReceived_0976E0E9468066BEC23996B7CFF9D646(struct FGameplayEventData Payload); // Function GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C.EventReceived_0976E0E9468066BEC23996B7CFF9D646
	void OnFail_A7D5BE974E6E069FBEB9DEA6342A6CF5(enum class EPathFollowingResult MovementResult); // Function GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C.OnFail_A7D5BE974E6E069FBEB9DEA6342A6CF5
	void OnSuccess_A7D5BE974E6E069FBEB9DEA6342A6CF5(enum class EPathFollowingResult MovementResult); // Function GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C.OnSuccess_A7D5BE974E6E069FBEB9DEA6342A6CF5
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C.AbilityActivated
	void Fail Timer(); // Function GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C.Fail Timer
	void ExecuteUbergraph_GA_SkeletonChampion_SprintPhase(int32_t EntryPoint); // Function GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C.ExecuteUbergraph_GA_SkeletonChampion_SprintPhase
}; 
 
 


