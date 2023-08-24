#pragma once 
#include <GA_ZombieEating_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_ZombieEating.GA_ZombieEating_C
// Size: 0x598(Inherited: 0x580)
struct UGA_ZombieEating_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FName TargetActor;  // 0x588 (0x588)
	double TempSightRange;  // 0x590 (0x590)


	void EventReceived_D94F53204DADF94B17AE4B948B7EC3A8(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_ZombieEating.GA_ZombieEating_C.EventReceived_D94F53204DADF94B17AE4B948B7EC3A8
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_ZombieEating.GA_ZombieEating_C.AbilityActivated
	void ExecuteUbergraph_GA_ZombieEating(int32_t EntryPoint); // Function GA_ZombieEating.GA_ZombieEating_C.ExecuteUbergraph_GA_ZombieEating
}; 
 
 


