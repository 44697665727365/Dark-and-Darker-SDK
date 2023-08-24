#pragma once 
#include <GA_DoubleAxe_UniquePassive_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DoubleAxe_UniquePassive.GA_DoubleAxe_UniquePassive_C
// Size: 0x568(Inherited: 0x558)
struct UGA_DoubleAxe_UniquePassive_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct UDCAT_WaitForGameplayEvents* AT_WaitEventTag;  // 0x560 (0x560)


	void EventReceived_92F67D9442C2B2CF04064E88E63E2A1D(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_DoubleAxe_UniquePassive.GA_DoubleAxe_UniquePassive_C.EventReceived_92F67D9442C2B2CF04064E88E63E2A1D
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_DoubleAxe_UniquePassive.GA_DoubleAxe_UniquePassive_C.K2_ActivateAbilityFromEvent
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DoubleAxe_UniquePassive.GA_DoubleAxe_UniquePassive_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_DoubleAxe_UniquePassive(int32_t EntryPoint); // Function GA_DoubleAxe_UniquePassive.GA_DoubleAxe_UniquePassive_C.ExecuteUbergraph_GA_DoubleAxe_UniquePassive
}; 
 
 


