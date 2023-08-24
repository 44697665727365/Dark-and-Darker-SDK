#pragma once 
#include <GA_GiantCentipede_RunPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C
// Size: 0x678(Inherited: 0x580)
struct UGA_GiantCentipede_RunPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	char pad_1416_1 : 7;  // 0x588 (0x588)
	bool Reached : 1;  // 0x588 (0x588)
	char pad_1417[7];  // 0x589 (0x589)
	struct FGameplayEventData Gameplay Event Data;  // 0x590 (0x590)
	struct ABP_DCMonsterBaseWithOptions_C* As BP DCMonster Base With Options;  // 0x640 (0x640)
	struct FTimerHandle MoveFleeTimerHandle;  // 0x648 (0x648)
	double LimitFleeTime;  // 0x650 (0x650)
	struct FTimerHandle MoveFailTimerHandle;  // 0x658 (0x658)
	struct FTimerHandle MoveFailUnableTimerHandle;  // 0x660 (0x660)
	float GoalDistanceFromEnemy;  // 0x668 (0x668)
	char pad_1644[4];  // 0x66C (0x66C)
	struct FTimerHandle SpawnAoeTimerHandle;  // 0x670 (0x670)


	void OnFail_83E8B56F4909F3B83D11AAB504F6F509(enum class EPathFollowingResult MovementResult); // Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.OnFail_83E8B56F4909F3B83D11AAB504F6F509
	void OnSuccess_83E8B56F4909F3B83D11AAB504F6F509(enum class EPathFollowingResult MovementResult); // Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.OnSuccess_83E8B56F4909F3B83D11AAB504F6F509
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.AbilityActivated
	void MoveFlee(); // Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.MoveFlee
	void MoveFailTimeOut(); // Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.MoveFailTimeOut
	void MoveFailUnable(); // Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.MoveFailUnable
	void SpawnAoeTimer(); // Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.SpawnAoeTimer
	void ExecuteUbergraph_GA_GiantCentipede_RunPhase(int32_t EntryPoint); // Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.ExecuteUbergraph_GA_GiantCentipede_RunPhase
}; 
 
 


