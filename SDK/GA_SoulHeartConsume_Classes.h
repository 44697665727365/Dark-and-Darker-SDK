#pragma once 
#include <GA_SoulHeartConsume_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SoulHeartConsume.GA_SoulHeartConsume_C
// Size: 0x710(Inherited: 0x650)
struct UGA_SoulHeartConsume_C : UGA_ItemConsume_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x650 (0x650)
	struct TArray<struct FDCGameplayEffectSetByCallerData> InitAttributeArray;  // 0x658 (0x658)
	struct TArray<struct FDCGameplayEffectSetByCallerData> InitAttributeArray_Requiem;  // 0x668 (0x668)
	ADCCharacterProduction* CharacterProduction;  // 0x678 (0x678)
	struct FDCGameplayEffectData RespawnHealthEffectData;  // 0x680 (0x680)
	struct FDCGameplayEffectData RespawnHealthEffectData_Requiem;  // 0x6C8 (0x6C8)


	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SoulHeartConsume.GA_SoulHeartConsume_C.AbilityActivated
	void ExecuteUbergraph_GA_SoulHeartConsume(int32_t EntryPoint); // Function GA_SoulHeartConsume.GA_SoulHeartConsume_C.ExecuteUbergraph_GA_SoulHeartConsume
}; 
 
 


