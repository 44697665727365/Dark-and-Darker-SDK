#pragma once 
#include <GA_GoblinMage_Flee_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinMage_Flee.GA_GoblinMage_Flee_C
// Size: 0x728(Inherited: 0x580)
struct UGA_GoblinMage_Flee_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FGameplayEventData Trigger Event Data;  // 0x588 (0x588)
	char pad_1592_1 : 7;  // 0x638 (0x638)
	bool Reached : 1;  // 0x638 (0x638)
	char pad_1593[7];  // 0x639 (0x639)
	struct ABP_GoblinMage_C* As BP Goblin Mage;  // 0x640 (0x640)
	struct FTimerHandle MoveFleeTimerHandle;  // 0x648 (0x648)
	struct FTimerHandle MoveFailTimerHandle;  // 0x650 (0x650)
	struct FTimerHandle MoveFailUnableTimerHandle;  // 0x658 (0x658)
	double LimitFleeTime;  // 0x660 (0x660)
	float GoalDistanceFromEnemy;  // 0x668 (0x668)
	char pad_1644[4];  // 0x66C (0x66C)
	struct FGameplayEventData Gameplay Event Data;  // 0x670 (0x670)
	struct AActor* Target;  // 0x720 (0x720)


	void EventReceived_56E887C34B2A2F34647DE099B3850EBF(struct FGameplayEventData Payload); // Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.EventReceived_56E887C34B2A2F34647DE099B3850EBF
	void OnFail_BD9F7BBF4436D443ABCA108234B34067(enum class EPathFollowingResult MovementResult); // Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.OnFail_BD9F7BBF4436D443ABCA108234B34067
	void OnSuccess_BD9F7BBF4436D443ABCA108234B34067(enum class EPathFollowingResult MovementResult); // Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.OnSuccess_BD9F7BBF4436D443ABCA108234B34067
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.AbilityActivated
	void MoveFlee(); // Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.MoveFlee
	void MoveFailTimeOut(); // Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.MoveFailTimeOut
	void MoveFailUnable(); // Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.MoveFailUnable
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GoblinMage_Flee(int32_t EntryPoint); // Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.ExecuteUbergraph_GA_GoblinMage_Flee
}; 
 
 


