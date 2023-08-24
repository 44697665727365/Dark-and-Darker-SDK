#pragma once 
#include <GA_Protection_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Protection.GA_Protection_C
// Size: 0x6F8(Inherited: 0x618)
struct UGA_Protection_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)
	struct FGameplayCueParameters CueParam;  // 0x620 (0x620)


	void Cancelled_8882E75F477F364791CC55BAAF1CBC01(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Protection.GA_Protection_C.Cancelled_8882E75F477F364791CC55BAAF1CBC01
	void ValidData_8882E75F477F364791CC55BAAF1CBC01(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Protection.GA_Protection_C.ValidData_8882E75F477F364791CC55BAAF1CBC01
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_Protection.GA_Protection_C.AbilityActivated
	void ExecuteUbergraph_GA_Protection(int32_t EntryPoint); // Function GA_Protection.GA_Protection_C.ExecuteUbergraph_GA_Protection
}; 
 
 


