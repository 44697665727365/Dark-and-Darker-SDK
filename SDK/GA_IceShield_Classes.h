#pragma once 
#include <GA_IceShield_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_IceShield.GA_IceShield_C
// Size: 0x560(Inherited: 0x558)
struct UGA_IceShield_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)


	void EventReceived_5EB0E3114F71A35895119AB12A8713E4(struct FGameplayEventData Payload); // Function GA_IceShield.GA_IceShield_C.EventReceived_5EB0E3114F71A35895119AB12A8713E4
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_IceShield.GA_IceShield_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_IceShield(int32_t EntryPoint); // Function GA_IceShield.GA_IceShield_C.ExecuteUbergraph_GA_IceShield
}; 
 
 


