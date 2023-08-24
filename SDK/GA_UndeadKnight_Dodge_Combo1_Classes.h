#pragma once 
#include <GA_UndeadKnight_Dodge_Combo1_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_UndeadKnight_Dodge_Combo1.GA_UndeadKnight_Dodge_Combo1_C
// Size: 0x6F0(Inherited: 0x6C9)
struct UGA_UndeadKnight_Dodge_Combo1_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct ADCMonsterBase* DCMonster Base;  // 0x6D8 (0x6D8)
	struct TArray<struct ADCCharacterBase*> Target Array;  // 0x6E0 (0x6E0)


	void EventReceived_79EC7A844F6968EDFF5B84B265136436(struct FGameplayEventData Payload); // Function GA_UndeadKnight_Dodge_Combo1.GA_UndeadKnight_Dodge_Combo1_C.EventReceived_79EC7A844F6968EDFF5B84B265136436
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_UndeadKnight_Dodge_Combo1.GA_UndeadKnight_Dodge_Combo1_C.AbilityActivated
	void ExecuteUbergraph_GA_UndeadKnight_Dodge_Combo1(int32_t EntryPoint); // Function GA_UndeadKnight_Dodge_Combo1.GA_UndeadKnight_Dodge_Combo1_C.ExecuteUbergraph_GA_UndeadKnight_Dodge_Combo1
}; 
 
 


