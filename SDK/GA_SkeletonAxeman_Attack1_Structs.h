#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonAxeman_Attack1.GA_SkeletonAxeman_Attack1_C.EventReceived_46D29C724C0705ED9484D1BA19D06997
struct FEventReceived_46D29C724C0705ED9484D1BA19D06997
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonAxeman_Attack1.GA_SkeletonAxeman_Attack1_C.EventReceived_14666380446D55B58D0721B32C91ABD3
struct FEventReceived_14666380446D55B58D0721B32C91ABD3
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonAxeman_Attack1.GA_SkeletonAxeman_Attack1_C.ExecuteUbergraph_GA_SkeletonAxeman_Attack1
struct FExecuteUbergraph_GA_SkeletonAxeman_Attack1
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0xB8 (0xB8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xC0 (0xC0)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0xD8 (0xD8)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x188 (0x188)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_2;  // 0x238 (0x238)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x240 (0x240)
	char pad_577[7];  // 0x241 (0x241)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x248 (0x248)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x250 (0x250)
	char pad_593[7];  // 0x251 (0x251)
	struct FGameplayEventData K2Node_CustomEvent_Payload_2;  // 0x258 (0x258)
	char pad_776_1 : 7;  // 0x308 (0x308)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0x308 (0x308)
	char pad_777_1 : 7;  // 0x309 (0x309)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x309 (0x309)
	char pad_778[6];  // 0x30A (0x30A)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x310 (0x310)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x3C0 (0x3C0)
	struct ABP_SkeletonAxeman_C* K2Node_DynamicCast_AsBP_Skeleton_Axeman;  // 0x3C8 (0x3C8)
	char pad_976_1 : 7;  // 0x3D0 (0x3D0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x3D0 (0x3D0)
	char pad_977_1 : 7;  // 0x3D1 (0x3D1)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x3D1 (0x3D1)
	char pad_978[2];  // 0x3D2 (0x3D2)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x3D4 (0x3D4)
	char pad_996[4];  // 0x3E4 (0x3E4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x3E8 (0x3E8)
	char pad_1008_1 : 7;  // 0x3F0 (0x3F0)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x3F0 (0x3F0)
	char pad_1009[7];  // 0x3F1 (0x3F1)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x3F8 (0x3F8)


}; 
 
 // Function GA_SkeletonAxeman_Attack1.GA_SkeletonAxeman_Attack1_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 