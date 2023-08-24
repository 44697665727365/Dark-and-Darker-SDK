#pragma once 
#include <GA_UndeadKnight_Combo3_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_UndeadKnight_Combo3.GA_UndeadKnight_Combo3_C
// Size: 0x6F0(Inherited: 0x6C9)
struct UGA_UndeadKnight_Combo3_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct ADCMonsterBase* DCMonster Base;  // 0x6D8 (0x6D8)
	struct TArray<struct ADCCharacterBase*> Target Array;  // 0x6E0 (0x6E0)


	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_UndeadKnight_Combo3.GA_UndeadKnight_Combo3_C.AbilityActivated
	void ExecuteUbergraph_GA_UndeadKnight_Combo3(int32_t EntryPoint); // Function GA_UndeadKnight_Combo3.GA_UndeadKnight_Combo3_C.ExecuteUbergraph_GA_UndeadKnight_Combo3
}; 
 
 


