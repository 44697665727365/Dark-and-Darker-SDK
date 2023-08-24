#pragma once 
#include <GA_UndeadKnight_SprintPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_UndeadKnight_SprintPhase.GA_UndeadKnight_SprintPhase_C
// Size: 0x590(Inherited: 0x580)
struct UGA_UndeadKnight_SprintPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct UShapeComponent* ;  // 0x588 (0x588)


	void EventReceived_C01E00A745D90988C64F02A55501B62D(struct FGameplayEventData Payload); // Function GA_UndeadKnight_SprintPhase.GA_UndeadKnight_SprintPhase_C.EventReceived_C01E00A745D90988C64F02A55501B62D
	void OnFail_53A2376149A80593CBB556904CC367B9(enum class EPathFollowingResult MovementResult); // Function GA_UndeadKnight_SprintPhase.GA_UndeadKnight_SprintPhase_C.OnFail_53A2376149A80593CBB556904CC367B9
	void OnSuccess_53A2376149A80593CBB556904CC367B9(enum class EPathFollowingResult MovementResult); // Function GA_UndeadKnight_SprintPhase.GA_UndeadKnight_SprintPhase_C.OnSuccess_53A2376149A80593CBB556904CC367B9
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_UndeadKnight_SprintPhase.GA_UndeadKnight_SprintPhase_C.AbilityActivated
	void ExecuteUbergraph_GA_UndeadKnight_SprintPhase(int32_t EntryPoint); // Function GA_UndeadKnight_SprintPhase.GA_UndeadKnight_SprintPhase_C.ExecuteUbergraph_GA_UndeadKnight_SprintPhase
}; 
 
 


