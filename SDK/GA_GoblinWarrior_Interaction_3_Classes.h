#pragma once 
#include <GA_GoblinWarrior_Interaction_3_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinWarrior_Interaction_3.GA_GoblinWarrior_Interaction_2_C
// Size: 0x590(Inherited: 0x580)
struct UGA_GoblinWarrior_Interaction_2_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FTimerHandle Rotation TimerHandle;  // 0x588 (0x588)


	void EventReceived_54FAB9564F96290A84B48B89342BD34A(struct FGameplayEventData Payload); // Function GA_GoblinWarrior_Interaction_3.GA_GoblinWarrior_Interaction_2_C.EventReceived_54FAB9564F96290A84B48B89342BD34A
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GoblinWarrior_Interaction_3.GA_GoblinWarrior_Interaction_2_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinWarrior_Interaction_3.GA_GoblinWarrior_Interaction_2_C.AbilityActivated
	void Rotate To Actor(); // Function GA_GoblinWarrior_Interaction_3.GA_GoblinWarrior_Interaction_2_C.Rotate To Actor
	void ExecuteUbergraph_GA_GoblinWarrior_Interaction_3(int32_t EntryPoint); // Function GA_GoblinWarrior_Interaction_3.GA_GoblinWarrior_Interaction_2_C.ExecuteUbergraph_GA_GoblinWarrior_Interaction_3
}; 
 
 


