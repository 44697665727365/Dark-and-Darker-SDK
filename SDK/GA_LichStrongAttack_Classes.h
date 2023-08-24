#pragma once 
#include <GA_LichStrongAttack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_LichStrongAttack.GA_LichStrongAttack_C
// Size: 0x780(Inherited: 0x774)
struct UGA_LichStrongAttack_C : UGA_MonsterProjectileAttackBase_C
{
	char pad_1908[4];  // 0x774 (0x774)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x778 (0x778)


	void EventReceived_4E4E06694B4EADEAE20F289910F13C2D(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_LichStrongAttack.GA_LichStrongAttack_C.EventReceived_4E4E06694B4EADEAE20F289910F13C2D
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_LichStrongAttack.GA_LichStrongAttack_C.AbilityActivated
	void ExecuteUbergraph_GA_LichStrongAttack(int32_t EntryPoint); // Function GA_LichStrongAttack.GA_LichStrongAttack_C.ExecuteUbergraph_GA_LichStrongAttack
}; 
 
 


