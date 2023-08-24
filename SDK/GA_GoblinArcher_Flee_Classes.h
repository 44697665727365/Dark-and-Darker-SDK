#pragma once 
#include <GA_GoblinArcher_Flee_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C
// Size: 0x674(Inherited: 0x580)
struct UGA_GoblinArcher_Flee_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FGameplayEventData Trigger Event Data;  // 0x588 (0x588)
	struct AActor* Target;  // 0x638 (0x638)
	char pad_1600_1 : 7;  // 0x640 (0x640)
	bool Reached : 1;  // 0x640 (0x640)
	char pad_1601[7];  // 0x641 (0x641)
	struct ABP_GoblinArcher_C* As BP Goblin Archer;  // 0x648 (0x648)
	struct FTimerHandle MoveFleeTimerHandle;  // 0x650 (0x650)
	double LimitFleeTime;  // 0x658 (0x658)
	struct FTimerHandle MoveFailTimerHandle;  // 0x660 (0x660)
	struct FTimerHandle MoveFailUnableTimerHandle;  // 0x668 (0x668)
	float GoalDistanceFromEnemy;  // 0x670 (0x670)


	void EventReceived_86933E1F49F2B960ED4F83B9F19E4E93(struct FGameplayEventData Payload); // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.EventReceived_86933E1F49F2B960ED4F83B9F19E4E93
	void OnFail_4738D3F54466A34A2142A3ADFFE63889(enum class EPathFollowingResult MovementResult); // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnFail_4738D3F54466A34A2142A3ADFFE63889
	void OnSuccess_4738D3F54466A34A2142A3ADFFE63889(enum class EPathFollowingResult MovementResult); // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnSuccess_4738D3F54466A34A2142A3ADFFE63889
	void EventReceived_81B9BE924EC7C43D14623CA54085F212(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.EventReceived_81B9BE924EC7C43D14623CA54085F212
	void OnCancelled_81B9BE924EC7C43D14623CA54085F212(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnCancelled_81B9BE924EC7C43D14623CA54085F212
	void OnInterrupted_81B9BE924EC7C43D14623CA54085F212(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnInterrupted_81B9BE924EC7C43D14623CA54085F212
	void OnBlendOut_81B9BE924EC7C43D14623CA54085F212(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnBlendOut_81B9BE924EC7C43D14623CA54085F212
	void OnCompleted_81B9BE924EC7C43D14623CA54085F212(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnCompleted_81B9BE924EC7C43D14623CA54085F212
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.AbilityActivated
	void MoveFlee(); // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.MoveFlee
	void MoveFailTimeOut(); // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.MoveFailTimeOut
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GoblinArcher_Flee(int32_t EntryPoint); // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.ExecuteUbergraph_GA_GoblinArcher_Flee
}; 
 
 


