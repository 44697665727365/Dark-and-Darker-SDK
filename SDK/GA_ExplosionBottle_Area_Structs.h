#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ExplosionBottle_Area.GA_ExplosionBottle_Area_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_ExplosionBottle_Area.GA_ExplosionBottle_Area_C.ExecuteUbergraph_GA_ExplosionBottle_Area
struct FExecuteUbergraph_GA_ExplosionBottle_Area
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_K2_CommitAbility_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xB8 (0xB8)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0xC0 (0xC0)
	char pad_368_1 : 7;  // 0x170 (0x170)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x170 (0x170)
	char pad_369[7];  // 0x171 (0x171)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyPremadeSpecArray_ReturnValue;  // 0x178 (0x178)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x188 (0x188)


}; 
 
 