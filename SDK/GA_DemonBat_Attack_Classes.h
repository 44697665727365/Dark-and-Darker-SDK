#pragma once 
#include <GA_DemonBat_Attack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DemonBat_Attack.GA_DemonBat_Attack_C
// Size: 0x6D8(Inherited: 0x6C9)
struct UGA_DemonBat_Attack_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData); // Function GA_DemonBat_Attack.GA_DemonBat_Attack_C.ServerTargetDataReceived
	void ExecuteUbergraph_GA_DemonBat_Attack(int32_t EntryPoint); // Function GA_DemonBat_Attack.GA_DemonBat_Attack_C.ExecuteUbergraph_GA_DemonBat_Attack
}; 
 
 


