#pragma once 
#include <GA_GoblinWarrior_FleePhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C
// Size: 0x670(Inherited: 0x580)
struct UGA_GoblinWarrior_FleePhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	float GoalDistanceFromEnemy;  // 0x588 (0x588)
	char pad_1420[4];  // 0x58C (0x58C)
	double LimitFleeTime;  // 0x590 (0x590)
	struct FTimerHandle MoveFleeTimerHandle;  // 0x598 (0x598)
	struct FTimerHandle MoveFailTimerHandle;  // 0x5A0 (0x5A0)
	struct FTimerHandle MoveFailUnableTimerHandle;  // 0x5A8 (0x5A8)
	char pad_1456_1 : 7;  // 0x5B0 (0x5B0)
	bool Reached : 1;  // 0x5B0 (0x5B0)
	char pad_1457[7];  // 0x5B1 (0x5B1)
	struct ABP_DCMonsterBaseWithOptions_C* As BP DCMonster Base With Options;  // 0x5B8 (0x5B8)
	struct FGameplayEventData Gameplay Event Data;  // 0x5C0 (0x5C0)


	void EventReceived_BF3F566141F89016543AD490488A3AD7(struct FGameplayEventData Payload); // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.EventReceived_BF3F566141F89016543AD490488A3AD7
	void EventReceived_81379A3849C747B5C64706BF518AB608(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.EventReceived_81379A3849C747B5C64706BF518AB608
	void OnCancelled_81379A3849C747B5C64706BF518AB608(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnCancelled_81379A3849C747B5C64706BF518AB608
	void OnInterrupted_81379A3849C747B5C64706BF518AB608(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnInterrupted_81379A3849C747B5C64706BF518AB608
	void OnBlendOut_81379A3849C747B5C64706BF518AB608(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnBlendOut_81379A3849C747B5C64706BF518AB608
	void OnCompleted_81379A3849C747B5C64706BF518AB608(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnCompleted_81379A3849C747B5C64706BF518AB608
	void OnFail_1A840F70482377B71FCEADBD5ACE2499(enum class EPathFollowingResult MovementResult); // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnFail_1A840F70482377B71FCEADBD5ACE2499
	void OnSuccess_1A840F70482377B71FCEADBD5ACE2499(enum class EPathFollowingResult MovementResult); // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnSuccess_1A840F70482377B71FCEADBD5ACE2499
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.AbilityActivated
	void MoveFailTimeOut(); // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.MoveFailTimeOut
	void MoveFlee(); // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.MoveFlee
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.K2_OnEndAbility
	void MoveFailUnable(); // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.MoveFailUnable
	void ExecuteUbergraph_GA_GoblinWarrior_FleePhase(int32_t EntryPoint); // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.ExecuteUbergraph_GA_GoblinWarrior_FleePhase
}; 
 
 


