#pragma once 
#include <GA_CurseofPain_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CurseofPain.GA_CurseofPain_C
// Size: 0x620(Inherited: 0x618)
struct UGA_CurseofPain_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)


	void Cancelled_B76A5055469BECD50C74599607DE5AF4(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_CurseofPain.GA_CurseofPain_C.Cancelled_B76A5055469BECD50C74599607DE5AF4
	void ValidData_B76A5055469BECD50C74599607DE5AF4(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_CurseofPain.GA_CurseofPain_C.ValidData_B76A5055469BECD50C74599607DE5AF4
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_CurseofPain.GA_CurseofPain_C.AbilityActivated
	void ExecuteUbergraph_GA_CurseofPain(int32_t EntryPoint); // Function GA_CurseofPain.GA_CurseofPain_C.ExecuteUbergraph_GA_CurseofPain
}; 
 
 


