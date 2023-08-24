#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonWarlord_Order_Spawn.GA_SkeletonWarlord_Order_Spawn_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_Order_Spawn.GA_SkeletonWarlord_Order_Spawn_C.EventReceived_52B22F44496B41CC1BDA73ABD2D2C532
struct FEventReceived_52B22F44496B41CC1BDA73ABD2D2C532
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_Order_Spawn.GA_SkeletonWarlord_Order_Spawn_C.ExecuteUbergraph_GA_SkeletonWarlord_Order_Spawn
struct FExecuteUbergraph_GA_SkeletonWarlord_Order_Spawn
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xB8 (0xB8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x7FF7D35967D0 (0x1705D6E0080) (0x7FF7D35967D0 (0x1705D6E0080))
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385[7];  // 0x181 (0x181)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x188 (0x188)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x238 (0x238)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x240 (0x240)
	struct ABP_SkeletonWarlord_C* K2Node_DynamicCast_AsBP_Skeleton_Warlord;  // 0x248 (0x248)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x250 (0x250)
	char pad_593[7];  // 0x251 (0x251)
	struct ABP_SkeletonWarlord_C* K2Node_DynamicCast_AsBP_Skeleton_Warlord_2;  // 0x258 (0x258)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x260 (0x260)
	char pad_609_1 : 7;  // 0x261 (0x261)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x7FF7D3388D00 (0x0) (0x7FF7D3388D00 (0x0))


}; 
 
 