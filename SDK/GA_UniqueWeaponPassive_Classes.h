#pragma once 
#include <GA_UniqueWeaponPassive_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_UniqueWeaponPassive.GA_UniqueWeaponPassive_C
// Size: 0x560(Inherited: 0x558)
struct UGA_UniqueWeaponPassive_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)


	void OnHit(struct FGameplayEventData EventData); // Function GA_UniqueWeaponPassive.GA_UniqueWeaponPassive_C.OnHit
	void EventReceived_255D149942688A65BC6EB2AA8CA4B432(struct FGameplayEventData Payload); // Function GA_UniqueWeaponPassive.GA_UniqueWeaponPassive_C.EventReceived_255D149942688A65BC6EB2AA8CA4B432
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_UniqueWeaponPassive.GA_UniqueWeaponPassive_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_UniqueWeaponPassive(int32_t EntryPoint); // Function GA_UniqueWeaponPassive.GA_UniqueWeaponPassive_C.ExecuteUbergraph_GA_UniqueWeaponPassive
}; 
 
 


