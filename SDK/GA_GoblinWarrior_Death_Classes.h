#pragma once 
#include <GA_GoblinWarrior_Death_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinWarrior_Death.GA_GoblinWarrior_Death_C
// Size: 0x5A0(Inherited: 0x592)
struct UGA_GoblinWarrior_Death_C : UGA_MonsterDeath_C
{
	char pad_1426[6];  // 0x592 (0x592)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x598 (0x598)


	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinWarrior_Death.GA_GoblinWarrior_Death_C.AbilityActivated
	void ExecuteUbergraph_GA_GoblinWarrior_Death(int32_t EntryPoint); // Function GA_GoblinWarrior_Death.GA_GoblinWarrior_Death_C.ExecuteUbergraph_GA_GoblinWarrior_Death
}; 
 
 


