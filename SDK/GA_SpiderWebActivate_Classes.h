#pragma once 
#include <GA_SpiderWebActivate_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SpiderWebActivate.GA_SpiderWebActivate_C
// Size: 0x5CC(Inherited: 0x5C0)
struct UGA_SpiderWebActivate_C : UGA_AuraBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5C0 (0x5C0)
	int32_t Count;  // 0x5C8 (0x5C8)


	void OnChange_99C7DE264BB694FE1F05E7934C39DE88(float OldValue, float NewValue); // Function GA_SpiderWebActivate.GA_SpiderWebActivate_C.OnChange_99C7DE264BB694FE1F05E7934C39DE88
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SpiderWebActivate.GA_SpiderWebActivate_C.AbilityActivated
	void OnAuraOverlapBeginEvent(struct AActor* TargetActor); // Function GA_SpiderWebActivate.GA_SpiderWebActivate_C.OnAuraOverlapBeginEvent
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SpiderWebActivate.GA_SpiderWebActivate_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_SpiderWebActivate(int32_t EntryPoint); // Function GA_SpiderWebActivate.GA_SpiderWebActivate_C.ExecuteUbergraph_GA_SpiderWebActivate
}; 
 
 


