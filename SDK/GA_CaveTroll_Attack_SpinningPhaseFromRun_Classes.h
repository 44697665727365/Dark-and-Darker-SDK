#pragma once 
#include <GA_CaveTroll_Attack_SpinningPhaseFromRun_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C
// Size: 0x6A8(Inherited: 0x580)
struct UGA_CaveTroll_Attack_SpinningPhaseFromRun_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	double Choosing Ratio;  // 0x588 (0x588)
	struct FGameplayEventData Event Data;  // 0x590 (0x590)
	struct ABP_DCMonsterBaseWithOptions_C* Caster;  // 0x640 (0x640)
	struct FVector Caster Location;  // 0x648 (0x648)
	struct ADCCharacterBase* Target;  // 0x660 (0x660)
	char pad_1640_1 : 7;  // 0x668 (0x668)
	bool Reached : 1;  // 0x668 (0x668)
	char pad_1641[7];  // 0x669 (0x669)
	struct FTimerHandle Input Movement TimerHandle;  // 0x670 (0x670)
	struct FTimerHandle MoveFail TimerHandle;  // 0x678 (0x678)
	double DistanceToCharge;  // 0x680 (0x680)
	struct FGameplayTag Attack Choice Event Tag;  // 0x688 (0x688)
	struct FVector Target Location;  // 0x690 (0x690)


	void Set Variables(struct FGameplayEventData Event Data, bool& Result); // Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.Set Variables
	void EventReceived_34B70C134EA550599237CAA54022F76D(struct FGameplayEventData Payload); // Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.EventReceived_34B70C134EA550599237CAA54022F76D
	void MoveTimer(); // Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.MoveTimer
	void Add Input Movement(); // Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.Add Input Movement
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.AbilityActivated
	void ExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhaseFromRun(int32_t EntryPoint); // Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.ExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhaseFromRun
}; 
 
 


