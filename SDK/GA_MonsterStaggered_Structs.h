#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_MonsterStaggered.GA_MonsterStaggered_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_MonsterStaggered.GA_MonsterStaggered_C.ExecuteUbergraph_GA_MonsterStaggered
struct FExecuteUbergraph_GA_MonsterStaggered
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool K2Node_Event_bWasCancelled : 1;  // 0x11 (0x11)
	char pad_18[6];  // 0x12 (0x12)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x18 (0x18)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0xC8 (0xC8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_RemoveGameplayTag_ReturnValue : 1;  // 0xD0 (0xD0)


}; 
 
 // Function GA_MonsterStaggered.GA_MonsterStaggered_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 