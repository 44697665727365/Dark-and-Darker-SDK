#pragma once 
#include <GA_Wisp_Death_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Wisp_Death.GA_Wisp_Death_C
// Size: 0x5A8(Inherited: 0x592)
struct UGA_Wisp_Death_C : UGA_MonsterDeath_C
{
	char pad_1426[6];  // 0x592 (0x592)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x598 (0x598)
	struct ABP_DCMonsterBaseWithOptions_C* As BP DCMonster Base With Options;  // 0x5A0 (0x5A0)


	void EventReceived_A2C3D5EC4D6443972507938CFD3998CA(struct FGameplayEventData Payload); // Function GA_Wisp_Death.GA_Wisp_Death_C.EventReceived_A2C3D5EC4D6443972507938CFD3998CA
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Wisp_Death.GA_Wisp_Death_C.AbilityActivated
	void ExecuteUbergraph_GA_Wisp_Death(int32_t EntryPoint); // Function GA_Wisp_Death.GA_Wisp_Death_C.ExecuteUbergraph_GA_Wisp_Death
}; 
 
 


