#pragma once 
#include <GA_GhostKing_EatingPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C
// Size: 0x5C8(Inherited: 0x580)
struct UGA_GhostKing_EatingPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct AActor* Target;  // 0x588 (0x588)
	struct FTimerHandle TimeOut To Chase TimerHandle;  // 0x590 (0x590)
	struct ABP_GhostKing_Common_C* As BP Ghost King;  // 0x598 (0x598)
	struct TArray<struct FActiveGameplayEffectHandle> Effect Handle;  // 0x5A0 (0x5A0)
	struct FTimerHandle Check Near Target TimerHandle;  // 0x5B0 (0x5B0)
	struct TArray<struct ADCCharacterBase*> Near Target Array;  // 0x5B8 (0x5B8)


	void EventReceived_3463EFF4417BB3384BC1978B45CE231A(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.EventReceived_3463EFF4417BB3384BC1978B45CE231A
	void OnCancelled_3463EFF4417BB3384BC1978B45CE231A(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnCancelled_3463EFF4417BB3384BC1978B45CE231A
	void OnInterrupted_3463EFF4417BB3384BC1978B45CE231A(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnInterrupted_3463EFF4417BB3384BC1978B45CE231A
	void OnBlendOut_3463EFF4417BB3384BC1978B45CE231A(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnBlendOut_3463EFF4417BB3384BC1978B45CE231A
	void OnCompleted_3463EFF4417BB3384BC1978B45CE231A(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnCompleted_3463EFF4417BB3384BC1978B45CE231A
	void EventReceived_EDC0A7A64CBF5F3A07573DB4C59A21DB(struct FGameplayEventData Payload); // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.EventReceived_EDC0A7A64CBF5F3A07573DB4C59A21DB
	void OnFail_324969DB431820DCE27899A1BAC9413E(enum class EPathFollowingResult MovementResult); // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnFail_324969DB431820DCE27899A1BAC9413E
	void OnSuccess_324969DB431820DCE27899A1BAC9413E(enum class EPathFollowingResult MovementResult); // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnSuccess_324969DB431820DCE27899A1BAC9413E
	void OnFail_5391F5304F1D635B3732248B0EF812AA(enum class EPathFollowingResult MovementResult); // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnFail_5391F5304F1D635B3732248B0EF812AA
	void OnSuccess_5391F5304F1D635B3732248B0EF812AA(enum class EPathFollowingResult MovementResult); // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnSuccess_5391F5304F1D635B3732248B0EF812AA
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.AbilityActivated
	void TimeOut To Chase(); // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.TimeOut To Chase
	void CheckNearTarget(); // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.CheckNearTarget
	void ExecuteUbergraph_GA_GhostKing_EatingPhase(int32_t EntryPoint); // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.ExecuteUbergraph_GA_GhostKing_EatingPhase
}; 
 
 


