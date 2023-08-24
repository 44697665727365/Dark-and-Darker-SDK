#pragma once 
#include <GA_DamageOnMove_Base_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DamageOnMove_Base.GA_DamageOnMove_Base_C
// Size: 0x570(Inherited: 0x558)
struct UGA_DamageOnMove_Base_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct FGameplayTag WaitGameplayTagRemove;  // 0x560 (0x560)
	struct FGameplayTag ApplyGameplayTagEffect;  // 0x568 (0x568)


	void EventReceived_BF6EE2BE40B27897C742FF9F58A960DF(struct FGameplayEventData Payload); // Function GA_DamageOnMove_Base.GA_DamageOnMove_Base_C.EventReceived_BF6EE2BE40B27897C742FF9F58A960DF
	void Removed_4F82E88D459E4C27FA441BB1321A09F0(); // Function GA_DamageOnMove_Base.GA_DamageOnMove_Base_C.Removed_4F82E88D459E4C27FA441BB1321A09F0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_DamageOnMove_Base.GA_DamageOnMove_Base_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_DamageOnMove_Base(int32_t EntryPoint); // Function GA_DamageOnMove_Base.GA_DamageOnMove_Base_C.ExecuteUbergraph_GA_DamageOnMove_Base
}; 
 
 


