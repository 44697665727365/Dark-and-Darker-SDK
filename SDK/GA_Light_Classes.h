#pragma once 
#include <GA_Light_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Light.GA_Light_C
// Size: 0x640(Inherited: 0x618)
struct UGA_Light_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)
	double Time;  // 0x620 (0x620)
	struct FVector Out Socket Location;  // 0x628 (0x628)


	void Cancelled_5941290D49EFDA57A6C2A1B9C1DAC65E(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Light.GA_Light_C.Cancelled_5941290D49EFDA57A6C2A1B9C1DAC65E
	void ValidData_5941290D49EFDA57A6C2A1B9C1DAC65E(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Light.GA_Light_C.ValidData_5941290D49EFDA57A6C2A1B9C1DAC65E
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_Light.GA_Light_C.AbilityActivated
	void ExecuteUbergraph_GA_Light(int32_t EntryPoint); // Function GA_Light.GA_Light_C.ExecuteUbergraph_GA_Light
}; 
 
 


