#pragma once 
#include <GA_SkeletonWarlord_Combo5_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonWarlord_Combo5.GA_SkeletonWarlord_Combo5_C
// Size: 0x788(Inherited: 0x6C9)
struct UGA_SkeletonWarlord_Combo5_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct FGameplayEventData Trigger Event Data;  // 0x6D8 (0x6D8)


	void EventReceived_9831085E4ED4D1B4D3AEDC9983AEEAEA(struct FGameplayEventData Payload); // Function GA_SkeletonWarlord_Combo5.GA_SkeletonWarlord_Combo5_C.EventReceived_9831085E4ED4D1B4D3AEDC9983AEEAEA
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonWarlord_Combo5.GA_SkeletonWarlord_Combo5_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonWarlord_Combo5(int32_t EntryPoint); // Function GA_SkeletonWarlord_Combo5.GA_SkeletonWarlord_Combo5_C.ExecuteUbergraph_GA_SkeletonWarlord_Combo5
}; 
 
 


