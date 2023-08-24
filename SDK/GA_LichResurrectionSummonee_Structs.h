#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_LichResurrectionSummonee.GA_LichResurrectionSummonee_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_LichResurrectionSummonee.GA_LichResurrectionSummonee_C.EventReceived_58B125304190401C7A5614A1C0047ACB
struct FEventReceived_58B125304190401C7A5614A1C0047ACB
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_LichResurrectionSummonee.GA_LichResurrectionSummonee_C.ExecuteUbergraph_GA_LichResurrectionSummonee
struct FExecuteUbergraph_GA_LichResurrectionSummonee
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool K2Node_Event_bWasCancelled : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x18 (0x18)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385[7];  // 0x181 (0x181)
	struct FObjectLinkRequestEvent K2Node_MakeStruct_ObjectLinkRequestEvent;  // 0x188 (0x188)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x238 (0x238)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x2E8 (0x2E8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x2F0 (0x2F0)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x2F8 (0x2F8)
	char pad_768_1 : 7;  // 0x300 (0x300)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x300 (0x300)
	char pad_769[7];  // 0x301 (0x301)
	struct ABP_Lich_Common_C* K2Node_DynamicCast_AsBP_Lich_Common;  // 0x308 (0x308)
	char pad_784_1 : 7;  // 0x310 (0x310)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x310 (0x310)
	char pad_785[7];  // 0x311 (0x311)
	struct TArray<struct FObjectLinkResponeEvent> CallFunc_RequestToLinkers_ReturnValue;  // 0x318 (0x318)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x328 (0x328)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x338 (0x338)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x340 (0x340)


}; 
 
 // Function GA_LichResurrectionSummonee.GA_LichResurrectionSummonee_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 