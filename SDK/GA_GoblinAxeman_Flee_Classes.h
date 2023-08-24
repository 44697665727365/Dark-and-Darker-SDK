#pragma once 
#include <GA_GoblinAxeman_Flee_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C
// Size: 0x678(Inherited: 0x580)
struct UGA_GoblinAxeman_Flee_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FGameplayEventData Trigger Event Data;  // 0x588 (0x588)
	struct AActor* Target;  // 0x638 (0x638)
	char pad_1600_1 : 7;  // 0x640 (0x640)
	bool Reached : 1;  // 0x640 (0x640)
	char pad_1601[7];  // 0x641 (0x641)
	struct ABP_GoblinAxeman_C* As BP Goblin Axeman;  // 0x648 (0x648)
	struct FTimerHandle MoveFleeTimerHandle;  // 0x650 (0x650)
	double LimitFleeTime;  // 0x658 (0x658)
	struct FTimerHandle MoveFailTimerHandle;  // 0x660 (0x660)
	float GoalDistanceFromEnemy;  // 0x668 (0x668)
	char pad_1644[4];  // 0x66C (0x66C)
	struct FTimerHandle MoveFailUnableTimerHandle;  // 0x670 (0x670)


	void EventReceived_4EAB00894CA8693E0498138A37127E70(struct FGameplayEventData Payload); // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.EventReceived_4EAB00894CA8693E0498138A37127E70
	void OnFail_B9430B6C4D3B8DFEF39B4E904FBE88A7(enum class EPathFollowingResult MovementResult); // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnFail_B9430B6C4D3B8DFEF39B4E904FBE88A7
	void OnSuccess_B9430B6C4D3B8DFEF39B4E904FBE88A7(enum class EPathFollowingResult MovementResult); // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnSuccess_B9430B6C4D3B8DFEF39B4E904FBE88A7
	void EventReceived_54518C474AEA635B2AFC95ADD2993635(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.EventReceived_54518C474AEA635B2AFC95ADD2993635
	void OnCancelled_54518C474AEA635B2AFC95ADD2993635(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnCancelled_54518C474AEA635B2AFC95ADD2993635
	void OnInterrupted_54518C474AEA635B2AFC95ADD2993635(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnInterrupted_54518C474AEA635B2AFC95ADD2993635
	void OnBlendOut_54518C474AEA635B2AFC95ADD2993635(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnBlendOut_54518C474AEA635B2AFC95ADD2993635
	void OnCompleted_54518C474AEA635B2AFC95ADD2993635(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnCompleted_54518C474AEA635B2AFC95ADD2993635
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.AbilityActivated
	void MoveFlee(); // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.MoveFlee
	void MoveFailTimeOut(); // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.MoveFailTimeOut
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GoblinAxeman_Flee(int32_t EntryPoint); // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.ExecuteUbergraph_GA_GoblinAxeman_Flee
}; 
 
 


