#pragma once 
#include <GA_Halberd_UniquePassive_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Halberd_UniquePassive.GA_Halberd_UniquePassive_C
// Size: 0x568(Inherited: 0x560)
struct UGA_Halberd_UniquePassive_C : UGA_UniqueWeaponPassive_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x560 (0x560)


	void EventReceived_3EF2DF974793AF751C3C3EBE5273AB0C(struct FGameplayEventData Payload); // Function GA_Halberd_UniquePassive.GA_Halberd_UniquePassive_C.EventReceived_3EF2DF974793AF751C3C3EBE5273AB0C
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Halberd_UniquePassive.GA_Halberd_UniquePassive_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_Halberd_UniquePassive(int32_t EntryPoint); // Function GA_Halberd_UniquePassive.GA_Halberd_UniquePassive_C.ExecuteUbergraph_GA_Halberd_UniquePassive
}; 
 
 


