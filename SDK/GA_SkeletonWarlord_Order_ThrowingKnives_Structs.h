#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonWarlord_Order_ThrowingKnives.GA_SkeletonWarlord_Order_ThrowingKnives_C.EventReceived_4779E9A8467D8891C1C2CDBF27B92EC1
struct FEventReceived_4779E9A8467D8891C1C2CDBF27B92EC1
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_Order_ThrowingKnives.GA_SkeletonWarlord_Order_ThrowingKnives_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_Order_ThrowingKnives.GA_SkeletonWarlord_Order_ThrowingKnives_C.ExecuteUbergraph_GA_SkeletonWarlord_Order_ThrowingKnives
struct FExecuteUbergraph_GA_SkeletonWarlord_Order_ThrowingKnives
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0xB8 (0xB8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x168 (0x168)
	struct FGameplayEventData Temp_struct_Variable;  // 0x178 (0x178)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x228 (0x228)
	char pad_560_1 : 7;  // 0x230 (0x230)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x230 (0x230)
	char pad_561[7];  // 0x231 (0x231)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x238 (0x238)
	struct ABP_SkeletonWarlord_C* K2Node_DynamicCast_AsBP_Skeleton_Warlord;  // 0x240 (0x240)
	char pad_584_1 : 7;  // 0x248 (0x248)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x248 (0x248)


}; 
 
 