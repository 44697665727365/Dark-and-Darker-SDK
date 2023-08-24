#pragma once 
#include <GA_LavaMonster_AttackPhase_Elite_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C
// Size: 0x5A0(Inherited: 0x580)
struct UGA_LavaMonster_AttackPhase_Elite_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FGameplayTag Event Tag;  // 0x588 (0x588)
	struct ABP_LavaMonster_Common_C* As BP Lava Monster;  // 0x590 (0x590)
	struct FTimerHandle MoveFailt TimerHandle;  // 0x598 (0x598)


	void EventReceived_ABDE35A0442A5FAEF726C7966DB196F8(struct FGameplayEventData Payload); // Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.EventReceived_ABDE35A0442A5FAEF726C7966DB196F8
	void OnFail_474F162345D3673CCC66B4A1438B16DB(enum class EPathFollowingResult MovementResult); // Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.OnFail_474F162345D3673CCC66B4A1438B16DB
	void OnSuccess_474F162345D3673CCC66B4A1438B16DB(enum class EPathFollowingResult MovementResult); // Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.OnSuccess_474F162345D3673CCC66B4A1438B16DB
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.AbilityActivated
	void MoveFail Timeout(); // Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.MoveFail Timeout
	void ExecuteUbergraph_GA_LavaMonster_AttackPhase_Elite(int32_t EntryPoint); // Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.ExecuteUbergraph_GA_LavaMonster_AttackPhase_Elite
}; 
 
 


