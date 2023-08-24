#pragma once 
#include <GA_CentaurDemon_SprintAttack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CentaurDemon_SprintAttack.GA_CentaurDemon_SprintAttack_C
// Size: 0x6F8(Inherited: 0x6C9)
struct UGA_CentaurDemon_SprintAttack_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct ABP_DCMonsterBaseWithOptions_C* Caster;  // 0x6D8 (0x6D8)
	struct ADCCharacterBase* Target;  // 0x6E0 (0x6E0)
	struct FTimerHandle Rotate Caster TimerHandle;  // 0x6E8 (0x6E8)
	struct FTimerHandle Rotation Finish TimerHandle;  // 0x6F0 (0x6F0)


	void EventReceived_0564A4534D1BD80A4E8FDE9503060BD8(struct FGameplayEventData Payload); // Function GA_CentaurDemon_SprintAttack.GA_CentaurDemon_SprintAttack_C.EventReceived_0564A4534D1BD80A4E8FDE9503060BD8
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_CentaurDemon_SprintAttack.GA_CentaurDemon_SprintAttack_C.AbilityActivated
	void Rotate To Side Of Target(); // Function GA_CentaurDemon_SprintAttack.GA_CentaurDemon_SprintAttack_C.Rotate To Side Of Target
	void Rotation Timer(); // Function GA_CentaurDemon_SprintAttack.GA_CentaurDemon_SprintAttack_C.Rotation Timer
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_CentaurDemon_SprintAttack.GA_CentaurDemon_SprintAttack_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_CentaurDemon_SprintAttack(int32_t EntryPoint); // Function GA_CentaurDemon_SprintAttack.GA_CentaurDemon_SprintAttack_C.ExecuteUbergraph_GA_CentaurDemon_SprintAttack
}; 
 
 


