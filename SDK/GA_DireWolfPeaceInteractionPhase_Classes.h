#pragma once 
#include <GA_DireWolfPeaceInteractionPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C
// Size: 0x5B8(Inherited: 0x580)
struct UGA_DireWolfPeaceInteractionPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FVector Destination;  // 0x588 (0x588)
	struct FGameplayTag Event Tag;  // 0x5A0 (0x5A0)
	struct FTimerHandle StopMovement TimerHandle;  // 0x5A8 (0x5A8)
	struct UAbilityTask_WaitDelay* Delay Async Task;  // 0x5B0 (0x5B0)


	void GA_DireWolfPeaceInteractionPhase_AutoGenFunc(); // Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.GA_DireWolfPeaceInteractionPhase_AutoGenFunc
	void EventReceived_8FB63F494BA768FA1ED311ACF2F9B292(struct FGameplayEventData Payload); // Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.EventReceived_8FB63F494BA768FA1ED311ACF2F9B292
	void OnFail_C86AE1ED41315BC6F9772494FBBA5F1B(enum class EPathFollowingResult MovementResult); // Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.OnFail_C86AE1ED41315BC6F9772494FBBA5F1B
	void OnSuccess_C86AE1ED41315BC6F9772494FBBA5F1B(enum class EPathFollowingResult MovementResult); // Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.OnSuccess_C86AE1ED41315BC6F9772494FBBA5F1B
	void OnFinish_CB01DE074DD75C6C785969A460094EBA(); // Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.OnFinish_CB01DE074DD75C6C785969A460094EBA
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_DireWolfPeaceInteractionPhase(int32_t EntryPoint); // Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.ExecuteUbergraph_GA_DireWolfPeaceInteractionPhase
}; 
 
 


