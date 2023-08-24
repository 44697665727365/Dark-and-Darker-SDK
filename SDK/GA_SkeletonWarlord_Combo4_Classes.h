#pragma once 
#include <GA_SkeletonWarlord_Combo4_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonWarlord_Combo4.GA_SkeletonWarlord_Combo4_C
// Size: 0x788(Inherited: 0x6C9)
struct UGA_SkeletonWarlord_Combo4_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct FGameplayEventData Trigger Event Data;  // 0x6D8 (0x6D8)


	void EventReceived_90198A41405BBF2E56DA7896FA3EB92F(struct FGameplayEventData Payload); // Function GA_SkeletonWarlord_Combo4.GA_SkeletonWarlord_Combo4_C.EventReceived_90198A41405BBF2E56DA7896FA3EB92F
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonWarlord_Combo4.GA_SkeletonWarlord_Combo4_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonWarlord_Combo4(int32_t EntryPoint); // Function GA_SkeletonWarlord_Combo4.GA_SkeletonWarlord_Combo4_C.ExecuteUbergraph_GA_SkeletonWarlord_Combo4
}; 
 
 


