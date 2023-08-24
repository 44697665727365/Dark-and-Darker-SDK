#pragma once 
#include <GA_SkeletonWarlord_Order_BackStep_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonWarlord_Order_BackStep.GA_SkeletonWarlord_Order_BackStep_C
// Size: 0x588(Inherited: 0x580)
struct UGA_SkeletonWarlord_Order_BackStep_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_156B8D0D48D777076A1A77AE8F63574F(struct FGameplayEventData Payload); // Function GA_SkeletonWarlord_Order_BackStep.GA_SkeletonWarlord_Order_BackStep_C.EventReceived_156B8D0D48D777076A1A77AE8F63574F
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonWarlord_Order_BackStep.GA_SkeletonWarlord_Order_BackStep_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonWarlord_Order_BackStep(int32_t EntryPoint); // Function GA_SkeletonWarlord_Order_BackStep.GA_SkeletonWarlord_Order_BackStep_C.ExecuteUbergraph_GA_SkeletonWarlord_Order_BackStep
}; 
 
 


