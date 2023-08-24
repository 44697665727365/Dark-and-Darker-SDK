#pragma once 
#include <GA_GoblinBolasinger_Flee_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C
// Size: 0x66C(Inherited: 0x580)
struct UGA_GoblinBolasinger_Flee_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FGameplayEventData Trigger Event Data;  // 0x588 (0x588)
	struct AActor* Target;  // 0x638 (0x638)
	char pad_1600_1 : 7;  // 0x640 (0x640)
	bool Reached : 1;  // 0x640 (0x640)
	char pad_1601[7];  // 0x641 (0x641)
	struct ABP_GoblinBolaslinger_C* As BP Goblin Bolaslinger;  // 0x648 (0x648)
	struct FTimerHandle MoveFleeTimerHandle;  // 0x650 (0x650)
	double LimitFleeTime;  // 0x658 (0x658)
	struct FTimerHandle MoveFailTimerHandle;  // 0x660 (0x660)
	float GoalDistanceFromEnemy;  // 0x668 (0x668)


	void EventReceived_B56679AE43FF329382C750930B7E2180(struct FGameplayEventData Payload); // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.EventReceived_B56679AE43FF329382C750930B7E2180
	void OnFail_D60F649742A7B239BC5AFCAE0F7D2692(enum class EPathFollowingResult MovementResult); // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnFail_D60F649742A7B239BC5AFCAE0F7D2692
	void OnSuccess_D60F649742A7B239BC5AFCAE0F7D2692(enum class EPathFollowingResult MovementResult); // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnSuccess_D60F649742A7B239BC5AFCAE0F7D2692
	void EventReceived_3FDA19F04FD64EF8679FE3B72FA17924(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.EventReceived_3FDA19F04FD64EF8679FE3B72FA17924
	void OnCancelled_3FDA19F04FD64EF8679FE3B72FA17924(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnCancelled_3FDA19F04FD64EF8679FE3B72FA17924
	void OnInterrupted_3FDA19F04FD64EF8679FE3B72FA17924(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnInterrupted_3FDA19F04FD64EF8679FE3B72FA17924
	void OnBlendOut_3FDA19F04FD64EF8679FE3B72FA17924(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnBlendOut_3FDA19F04FD64EF8679FE3B72FA17924
	void OnCompleted_3FDA19F04FD64EF8679FE3B72FA17924(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnCompleted_3FDA19F04FD64EF8679FE3B72FA17924
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.AbilityActivated
	void MoveFlee(); // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.MoveFlee
	void MoveFailTimeOut(); // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.MoveFailTimeOut
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GoblinBolasinger_Flee(int32_t EntryPoint); // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.ExecuteUbergraph_GA_GoblinBolasinger_Flee
}; 
 
 


