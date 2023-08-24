#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonWarlord_Order_BackStep.GA_SkeletonWarlord_Order_BackStep_C.EventReceived_156B8D0D48D777076A1A77AE8F63574F
struct FEventReceived_156B8D0D48D777076A1A77AE8F63574F
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_Order_BackStep.GA_SkeletonWarlord_Order_BackStep_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_Order_BackStep.GA_SkeletonWarlord_Order_BackStep_C.ExecuteUbergraph_GA_SkeletonWarlord_Order_BackStep
struct FExecuteUbergraph_GA_SkeletonWarlord_Order_BackStep
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct ABP_SkeletonWarlord_C* K2Node_DynamicCast_AsBP_Skeleton_Warlord;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x1C (0x1C)
	char pad_44[4];  // 0x2C (0x2C)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x30 (0x30)
	struct FGameplayEventData Temp_struct_Variable;  // 0xE0 (0xE0)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x190 (0x190)
	char pad_408_1 : 7;  // 0x198 (0x198)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x198 (0x198)
	char pad_409[7];  // 0x199 (0x199)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1A0 (0x1A0)


}; 
 
 