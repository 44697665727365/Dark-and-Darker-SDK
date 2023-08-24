#pragma once 
#include <GA_UndeadKnight_Combo1_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_UndeadKnight_Combo1.GA_UndeadKnight_Combo1_C
// Size: 0x6F8(Inherited: 0x6C9)
struct UGA_UndeadKnight_Combo1_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct ADCMonsterBase* DCMonster Base;  // 0x6D8 (0x6D8)
	struct ABP_UndeadKnight_Common_C* As BP Undead Knight;  // 0x6E0 (0x6E0)
	struct TArray<struct ADCCharacterBase*> Target Array;  // 0x6E8 (0x6E8)


	void EventReceived_B1C357A44753DEDA6E4606999AAC67F5(struct FGameplayEventData Payload); // Function GA_UndeadKnight_Combo1.GA_UndeadKnight_Combo1_C.EventReceived_B1C357A44753DEDA6E4606999AAC67F5
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_UndeadKnight_Combo1.GA_UndeadKnight_Combo1_C.AbilityActivated
	void ExecuteUbergraph_GA_UndeadKnight_Combo1(int32_t EntryPoint); // Function GA_UndeadKnight_Combo1.GA_UndeadKnight_Combo1_C.ExecuteUbergraph_GA_UndeadKnight_Combo1
}; 
 
 


