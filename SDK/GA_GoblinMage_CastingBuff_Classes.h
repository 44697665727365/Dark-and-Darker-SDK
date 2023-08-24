#pragma once 
#include <GA_GoblinMage_CastingBuff_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinMage_CastingBuff.GA_GoblinMage_CastingBuff_C
// Size: 0x588(Inherited: 0x580)
struct UGA_GoblinMage_CastingBuff_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_F92A268B48691D033B80078AEF0C891E(struct FGameplayEventData Payload); // Function GA_GoblinMage_CastingBuff.GA_GoblinMage_CastingBuff_C.EventReceived_F92A268B48691D033B80078AEF0C891E
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinMage_CastingBuff.GA_GoblinMage_CastingBuff_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GoblinMage_CastingBuff.GA_GoblinMage_CastingBuff_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GoblinMage_CastingBuff(int32_t EntryPoint); // Function GA_GoblinMage_CastingBuff.GA_GoblinMage_CastingBuff_C.ExecuteUbergraph_GA_GoblinMage_CastingBuff
}; 
 
 


