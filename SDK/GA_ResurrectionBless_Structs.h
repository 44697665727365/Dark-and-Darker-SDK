#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ResurrectionBless.GA_ResurrectionBless_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_ResurrectionBless.GA_ResurrectionBless_C.ExecuteUbergraph_GA_ResurrectionBless
struct FExecuteUbergraph_GA_ResurrectionBless
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xB8 (0xB8)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0xC0 (0xC0)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xC8 (0xC8)
	char pad_201[7];  // 0xC9 (0xC9)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0xD0 (0xD0)


}; 
 
 