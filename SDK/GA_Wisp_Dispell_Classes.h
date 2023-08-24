#pragma once 
#include <GA_Wisp_Dispell_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Wisp_Dispell.GA_Wisp_Dispell_C
// Size: 0x598(Inherited: 0x580)
struct UGA_Wisp_Dispell_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct TArray<struct ADCCharacterBase*> Target Array;  // 0x588 (0x588)


	void EventReceived_EECC35E14AC8B4DECCFAF39DB9078458(struct FGameplayEventData Payload); // Function GA_Wisp_Dispell.GA_Wisp_Dispell_C.EventReceived_EECC35E14AC8B4DECCFAF39DB9078458
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Wisp_Dispell.GA_Wisp_Dispell_C.AbilityActivated
	void ExecuteUbergraph_GA_Wisp_Dispell(int32_t EntryPoint); // Function GA_Wisp_Dispell.GA_Wisp_Dispell_C.ExecuteUbergraph_GA_Wisp_Dispell
}; 
 
 


