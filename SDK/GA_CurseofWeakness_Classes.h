#pragma once 
#include <GA_CurseofWeakness_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CurseofWeakness.GA_CurseofWeakness_C
// Size: 0x620(Inherited: 0x618)
struct UGA_CurseofWeakness_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)


	void Cancelled_E0DFF2094ED6EA9BC449339A474F2CAA(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_CurseofWeakness.GA_CurseofWeakness_C.Cancelled_E0DFF2094ED6EA9BC449339A474F2CAA
	void ValidData_E0DFF2094ED6EA9BC449339A474F2CAA(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_CurseofWeakness.GA_CurseofWeakness_C.ValidData_E0DFF2094ED6EA9BC449339A474F2CAA
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_CurseofWeakness.GA_CurseofWeakness_C.AbilityActivated
	void ExecuteUbergraph_GA_CurseofWeakness(int32_t EntryPoint); // Function GA_CurseofWeakness.GA_CurseofWeakness_C.ExecuteUbergraph_GA_CurseofWeakness
}; 
 
 


