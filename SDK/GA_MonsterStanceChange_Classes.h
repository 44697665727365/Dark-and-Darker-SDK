#pragma once 
#include <GA_MonsterStanceChange_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_MonsterStanceChange.GA_MonsterStanceChange_C
// Size: 0x5B8(Inherited: 0x580)
struct UGA_MonsterStanceChange_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct TArray<enum class E_Detachable> StanceDetachable;  // 0x588 (0x588)
	struct TArray<struct FGameplayTag> Add Gameplay Tags;  // 0x598 (0x598)
	struct TArray<struct FGameplayTagContainer> Remove Stance Tags;  // 0x5A8 (0x5A8)


	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_MonsterStanceChange.GA_MonsterStanceChange_C.AbilityActivated
	void ExecuteUbergraph_GA_MonsterStanceChange(int32_t EntryPoint); // Function GA_MonsterStanceChange.GA_MonsterStanceChange_C.ExecuteUbergraph_GA_MonsterStanceChange
}; 
 
 


