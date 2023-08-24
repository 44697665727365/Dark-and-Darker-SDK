#pragma once 
#include <GA_SkeletonWarlord_BonePrison_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonWarlord_BonePrison.GA_SkeletonWarlord_BonePrison_C
// Size: 0x5A8(Inherited: 0x580)
struct UGA_SkeletonWarlord_BonePrison_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct ABP_SkeletonWarlord_C* As BP Skeleton Warlord;  // 0x588 (0x588)
	struct FTimerHandle Apply Dominated Stack;  // 0x590 (0x590)
	struct FPrimaryAssetId In Monster Id;  // 0x598 (0x598)


	void EventReceived_D2CC5BCE4261685F5F94E29E8E5F42BF(struct FGameplayEventData Payload); // Function GA_SkeletonWarlord_BonePrison.GA_SkeletonWarlord_BonePrison_C.EventReceived_D2CC5BCE4261685F5F94E29E8E5F42BF
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SkeletonWarlord_BonePrison.GA_SkeletonWarlord_BonePrison_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonWarlord_BonePrison.GA_SkeletonWarlord_BonePrison_C.AbilityActivated
	void Apply Effect(); // Function GA_SkeletonWarlord_BonePrison.GA_SkeletonWarlord_BonePrison_C.Apply Effect
	void ExecuteUbergraph_GA_SkeletonWarlord_BonePrison(int32_t EntryPoint); // Function GA_SkeletonWarlord_BonePrison.GA_SkeletonWarlord_BonePrison_C.ExecuteUbergraph_GA_SkeletonWarlord_BonePrison
}; 
 
 


