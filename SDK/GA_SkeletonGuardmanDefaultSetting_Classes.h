#pragma once 
#include <GA_SkeletonGuardmanDefaultSetting_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonGuardmanDefaultSetting.GA_SkeletonGuardmanDefaultSetting_C
// Size: 0x588(Inherited: 0x580)
struct UGA_SkeletonGuardmanDefaultSetting_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_2B77E3CC4AD34889AA615EA96094536E(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_SkeletonGuardmanDefaultSetting.GA_SkeletonGuardmanDefaultSetting_C.EventReceived_2B77E3CC4AD34889AA615EA96094536E
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonGuardmanDefaultSetting.GA_SkeletonGuardmanDefaultSetting_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonGuardmanDefaultSetting(int32_t EntryPoint); // Function GA_SkeletonGuardmanDefaultSetting.GA_SkeletonGuardmanDefaultSetting_C.ExecuteUbergraph_GA_SkeletonGuardmanDefaultSetting
}; 
 
 


