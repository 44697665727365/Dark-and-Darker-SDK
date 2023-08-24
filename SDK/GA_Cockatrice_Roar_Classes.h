#pragma once 
#include <GA_Cockatrice_Roar_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Cockatrice_Roar.GA_Cockatrice_Roar_C
// Size: 0x590(Inherited: 0x580)
struct UGA_Cockatrice_Roar_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct ABP_DCMonsterBaseWithOptions_C* As BP DCMonster Base With Options;  // 0x588 (0x588)


	void EventReceived_F5F8C00F4E6E100DC493D8A5F327CBE9(struct FGameplayEventData Payload); // Function GA_Cockatrice_Roar.GA_Cockatrice_Roar_C.EventReceived_F5F8C00F4E6E100DC493D8A5F327CBE9
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Cockatrice_Roar.GA_Cockatrice_Roar_C.AbilityActivated
	void ExecuteUbergraph_GA_Cockatrice_Roar(int32_t EntryPoint); // Function GA_Cockatrice_Roar.GA_Cockatrice_Roar_C.ExecuteUbergraph_GA_Cockatrice_Roar
}; 
 
 


