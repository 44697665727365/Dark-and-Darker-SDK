#pragma once 
#include <GA_PoisonedWeapon_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_PoisonedWeapon.GA_PoisonedWeapon_C
// Size: 0x560(Inherited: 0x558)
struct UGA_PoisonedWeapon_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)


	void EventReceived_AA80118041C97DA3E8B6EC8931DC8DEF(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_PoisonedWeapon.GA_PoisonedWeapon_C.EventReceived_AA80118041C97DA3E8B6EC8931DC8DEF
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_PoisonedWeapon.GA_PoisonedWeapon_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_PoisonedWeapon(int32_t EntryPoint); // Function GA_PoisonedWeapon.GA_PoisonedWeapon_C.ExecuteUbergraph_GA_PoisonedWeapon
}; 
 
 


