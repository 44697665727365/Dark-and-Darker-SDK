#pragma once 
#include <GA_LichNormalAttack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_LichNormalAttack.GA_LichNormalAttack_C
// Size: 0x6C8(Inherited: 0x6C0)
struct UGA_LichNormalAttack_C : UGA_MonsterChargedRangedAttackBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6C0 (0x6C0)


	void EventReceived_3D96C36F4FAC76511505409F6321DC9E(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_LichNormalAttack.GA_LichNormalAttack_C.EventReceived_3D96C36F4FAC76511505409F6321DC9E
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_LichNormalAttack.GA_LichNormalAttack_C.AbilityActivated
	void ExecuteUbergraph_GA_LichNormalAttack(int32_t EntryPoint); // Function GA_LichNormalAttack.GA_LichNormalAttack_C.ExecuteUbergraph_GA_LichNormalAttack
}; 
 
 


