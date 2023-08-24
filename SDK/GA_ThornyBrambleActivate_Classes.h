#pragma once 
#include <GA_ThornyBrambleActivate_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_ThornyBrambleActivate.GA_ThornyBrambleActivate_C
// Size: 0x5CC(Inherited: 0x5C0)
struct UGA_ThornyBrambleActivate_C : UGA_AuraBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5C0 (0x5C0)
	int32_t HitCount;  // 0x5C8 (0x5C8)


	void OnChange_737926B54B1EBE282AA4429E4294B8BF(float OldValue, float NewValue); // Function GA_ThornyBrambleActivate.GA_ThornyBrambleActivate_C.OnChange_737926B54B1EBE282AA4429E4294B8BF
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_ThornyBrambleActivate.GA_ThornyBrambleActivate_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ThornyBrambleActivate.GA_ThornyBrambleActivate_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_ThornyBrambleActivate(int32_t EntryPoint); // Function GA_ThornyBrambleActivate.GA_ThornyBrambleActivate_C.ExecuteUbergraph_GA_ThornyBrambleActivate
}; 
 
 


