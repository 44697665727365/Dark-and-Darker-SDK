#pragma once 
#include <GA_GiantWorm_Attack_OnGround_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GiantWorm_Attack_OnGround.GA_GiantWorm_Attack_OnGround_C
// Size: 0x6D8(Inherited: 0x6C9)
struct UGA_GiantWorm_Attack_OnGround_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void EventReceived_9C69B6A941B21289EA62809451A3D8FF(struct FGameplayEventData Payload); // Function GA_GiantWorm_Attack_OnGround.GA_GiantWorm_Attack_OnGround_C.EventReceived_9C69B6A941B21289EA62809451A3D8FF
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GiantWorm_Attack_OnGround.GA_GiantWorm_Attack_OnGround_C.AbilityActivated
	void ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData); // Function GA_GiantWorm_Attack_OnGround.GA_GiantWorm_Attack_OnGround_C.ServerTargetDataReceived
	void ExecuteUbergraph_GA_GiantWorm_Attack_OnGround(int32_t EntryPoint); // Function GA_GiantWorm_Attack_OnGround.GA_GiantWorm_Attack_OnGround_C.ExecuteUbergraph_GA_GiantWorm_Attack_OnGround
}; 
 
 


