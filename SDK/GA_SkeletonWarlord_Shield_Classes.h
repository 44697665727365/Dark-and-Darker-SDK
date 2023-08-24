#pragma once 
#include <GA_SkeletonWarlord_Shield_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonWarlord_Shield.GA_SkeletonWarlord_Shield_C
// Size: 0x5A0(Inherited: 0x580)
struct UGA_SkeletonWarlord_Shield_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct TArray<struct FActiveGameplayEffectHandle> Applied Effect;  // 0x588 (0x588)
	struct UAbilityTask_WaitGameplayEvent* Async Task;  // 0x598 (0x598)


	void EventReceived_D0F3E8C442BCE9CD937A26A35A4808DA(struct FGameplayEventData Payload); // Function GA_SkeletonWarlord_Shield.GA_SkeletonWarlord_Shield_C.EventReceived_D0F3E8C442BCE9CD937A26A35A4808DA
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonWarlord_Shield.GA_SkeletonWarlord_Shield_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SkeletonWarlord_Shield.GA_SkeletonWarlord_Shield_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_SkeletonWarlord_Shield(int32_t EntryPoint); // Function GA_SkeletonWarlord_Shield.GA_SkeletonWarlord_Shield_C.ExecuteUbergraph_GA_SkeletonWarlord_Shield
}; 
 
 


