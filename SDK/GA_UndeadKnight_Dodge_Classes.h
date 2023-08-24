#pragma once 
#include <GA_UndeadKnight_Dodge_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_UndeadKnight_Dodge.GA_UndeadKnight_Dodge_C
// Size: 0x5A0(Inherited: 0x580)
struct UGA_UndeadKnight_Dodge_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct ADCMonsterBase* DCMonster Base;  // 0x588 (0x588)
	struct TArray<struct ADCCharacterBase*> Target Array;  // 0x590 (0x590)


	void EventReceived_1963BD844B63C23F28070F8DAA3AB658(struct FGameplayEventData Payload); // Function GA_UndeadKnight_Dodge.GA_UndeadKnight_Dodge_C.EventReceived_1963BD844B63C23F28070F8DAA3AB658
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_UndeadKnight_Dodge.GA_UndeadKnight_Dodge_C.AbilityActivated
	void ExecuteUbergraph_GA_UndeadKnight_Dodge(int32_t EntryPoint); // Function GA_UndeadKnight_Dodge.GA_UndeadKnight_Dodge_C.ExecuteUbergraph_GA_UndeadKnight_Dodge
}; 
 
 


