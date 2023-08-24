#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Otto_Sit_To_Stand.GA_Otto_Sit_To_Stand_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_Otto_Sit_To_Stand.GA_Otto_Sit_To_Stand_C.ExecuteUbergraph_GA_Otto_Sit_To_Stand
struct FExecuteUbergraph_GA_Otto_Sit_To_Stand
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xB8 (0xB8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0xC0 (0xC0)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool CallFunc_RemoveGameplayTag_ReturnValue : 1;  // 0xC8 (0xC8)
	char pad_201_1 : 7;  // 0xC9 (0xC9)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0xC9 (0xC9)


}; 
 
 