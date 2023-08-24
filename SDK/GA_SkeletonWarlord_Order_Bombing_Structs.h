#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonWarlord_Order_Bombing.GA_SkeletonWarlord_Order_Bombing_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_Order_Bombing.GA_SkeletonWarlord_Order_Bombing_C.ExecuteUbergraph_GA_SkeletonWarlord_Order_Bombing
struct FExecuteUbergraph_GA_SkeletonWarlord_Order_Bombing
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xB8 (0xB8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385[7];  // 0x181 (0x181)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x188 (0x188)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x238 (0x238)
	struct ABP_SkeletonWarlord_C* K2Node_DynamicCast_AsBP_Skeleton_Warlord;  // 0x240 (0x240)
	char pad_584_1 : 7;  // 0x248 (0x248)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x248 (0x248)


}; 
 
 // Function GA_SkeletonWarlord_Order_Bombing.GA_SkeletonWarlord_Order_Bombing_C.EventReceived_BCFAC1BA463673E3C7CDE086F73B792E
struct FEventReceived_BCFAC1BA463673E3C7CDE086F73B792E
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 