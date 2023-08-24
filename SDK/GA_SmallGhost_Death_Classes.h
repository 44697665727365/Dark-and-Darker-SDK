#pragma once 
#include <GA_SmallGhost_Death_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SmallGhost_Death.GA_SmallGhost_Death_C
// Size: 0x5A8(Inherited: 0x592)
struct UGA_SmallGhost_Death_C : UGA_MonsterDeath_C
{
	char pad_1426[6];  // 0x592 (0x592)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x598 (0x598)
	struct ABP_DCMonsterBaseWithOptions_C* As BP DCMonster Base With Options;  // 0x5A0 (0x5A0)


	void EventReceived_905269414E38620A7B4BD9BD4DE20C6B(struct FGameplayEventData Payload); // Function GA_SmallGhost_Death.GA_SmallGhost_Death_C.EventReceived_905269414E38620A7B4BD9BD4DE20C6B
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SmallGhost_Death.GA_SmallGhost_Death_C.AbilityActivated
	void ExecuteUbergraph_GA_SmallGhost_Death(int32_t EntryPoint); // Function GA_SmallGhost_Death.GA_SmallGhost_Death_C.ExecuteUbergraph_GA_SmallGhost_Death
}; 
 
 


