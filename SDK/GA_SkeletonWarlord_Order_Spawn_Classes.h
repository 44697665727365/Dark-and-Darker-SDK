#pragma once 
#include <GA_SkeletonWarlord_Order_Spawn_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonWarlord_Order_Spawn.GA_SkeletonWarlord_Order_Spawn_C
// Size: 0x588(Inherited: 0x580)
struct UGA_SkeletonWarlord_Order_Spawn_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_52B22F44496B41CC1BDA73ABD2D2C532(struct FGameplayEventData Payload); // Function GA_SkeletonWarlord_Order_Spawn.GA_SkeletonWarlord_Order_Spawn_C.EventReceived_52B22F44496B41CC1BDA73ABD2D2C532
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonWarlord_Order_Spawn.GA_SkeletonWarlord_Order_Spawn_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonWarlord_Order_Spawn(int32_t EntryPoint); // Function GA_SkeletonWarlord_Order_Spawn.GA_SkeletonWarlord_Order_Spawn_C.ExecuteUbergraph_GA_SkeletonWarlord_Order_Spawn
}; 
 
 


