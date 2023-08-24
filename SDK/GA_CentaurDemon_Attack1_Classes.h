#pragma once 
#include <GA_CentaurDemon_Attack1_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C
// Size: 0x6F8(Inherited: 0x6C9)
struct UGA_CentaurDemon_Attack1_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	char pad_1752_1 : 7;  // 0x6D8 (0x6D8)
	bool Combo Triggered : 1;  // 0x6D8 (0x6D8)
	char pad_1753[7];  // 0x6D9 (0x6D9)
	struct FTimerHandle Check Target TimerHandle;  // 0x6E0 (0x6E0)
	double Found Target Rotation Speed;  // 0x6E8 (0x6E8)
	double Not Found Target Rotation Speed;  // 0x6F0 (0x6F0)


	void EventReceived_DCC6FDA4431C03D9495F53A7E8952928(struct FGameplayEventData Payload); // Function GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C.EventReceived_DCC6FDA4431C03D9495F53A7E8952928
	void EventReceived_292A21FB45B2F5B4590504B9C379EC8F(struct FGameplayEventData Payload); // Function GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C.EventReceived_292A21FB45B2F5B4590504B9C379EC8F
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C.AbilityActivated
	void Check Target To Rotate(); // Function GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C.Check Target To Rotate
	void ExecuteUbergraph_GA_CentaurDemon_Attack1(int32_t EntryPoint); // Function GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C.ExecuteUbergraph_GA_CentaurDemon_Attack1
}; 
 
 


