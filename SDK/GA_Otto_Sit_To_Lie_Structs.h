#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Otto_Sit_To_Lie.GA_Otto_Sit_To_Lie_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_Otto_Sit_To_Lie.GA_Otto_Sit_To_Lie_C.ExecuteUbergraph_GA_Otto_Sit_To_Lie
struct FExecuteUbergraph_GA_Otto_Sit_To_Lie
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x18 (0x18)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0xC8 (0xC8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_RemoveGameplayTag_ReturnValue : 1;  // 0xD0 (0xD0)


}; 
 
 