#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonWarlord_Combo1.GA_SkeletonWarlord_Combo1_C.EventReceived_CF85DD6A410D7338CFDCF9B068F7EE7E
struct FEventReceived_CF85DD6A410D7338CFDCF9B068F7EE7E
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_Combo1.GA_SkeletonWarlord_Combo1_C.ExecuteUbergraph_GA_SkeletonWarlord_Combo1
struct FExecuteUbergraph_GA_SkeletonWarlord_Combo1
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FGameplayEventData Temp_struct_Variable;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0xC0 (0xC0)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0xC8 (0xC8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xD0 (0xD0)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xE0 (0xE0)
	char pad_225[7];  // 0xE1 (0xE1)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0xE8 (0xE8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0xF0 (0xF0)
	char pad_241_1 : 7;  // 0xF1 (0xF1)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0xF1 (0xF1)
	char pad_242[6];  // 0xF2 (0xF2)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0xF8 (0xF8)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x1A8 (0x1A8)
	char pad_425[7];  // 0x1A9 (0x1A9)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1B0 (0x1B0)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool K2Node_Event_bWasCancelled : 1;  // 0x260 (0x260)
	char pad_609[7];  // 0x261 (0x261)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x268 (0x268)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x270 (0x270)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2;  // 0x278 (0x278)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x280 (0x280)
	int32_t CallFunc_RandomInteger_ReturnValue;  // 0x288 (0x288)
	char pad_652[4];  // 0x28C (0x28C)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3;  // 0x290 (0x290)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool K2Node_SwitchInteger_CmpSuccess : 1;  // 0x298 (0x298)
	char pad_665_1 : 7;  // 0x299 (0x299)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x299 (0x299)
	char pad_666[6];  // 0x29A (0x29A)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x2A0 (0x2A0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5;  // 0x2A8 (0x2A8)
	struct ABP_SkeletonWarlord_C* K2Node_DynamicCast_AsBP_Skeleton_Warlord;  // 0x2B0 (0x2B0)
	char pad_696_1 : 7;  // 0x2B8 (0x2B8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x2B8 (0x2B8)
	char pad_697[7];  // 0x2B9 (0x2B9)
	double CallFunc_Combo_Reach_Calculation_Return;  // 0x2C0 (0x2C0)
	int32_t CallFunc_RandomIntegerInRange_ReturnValue;  // 0x2C8 (0x2C8)
	char pad_716_1 : 7;  // 0x2CC (0x2CC)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x2CC (0x2CC)
	char pad_717[3];  // 0x2CD (0x2CD)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x2D0 (0x2D0)
	struct FName CallFunc_MakeLiteralName_ReturnValue_2;  // 0x2E0 (0x2E0)
	int32_t CallFunc_GetValueAsInt_ReturnValue;  // 0x2E8 (0x2E8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x2EC (0x2EC)


}; 
 
 // Function GA_SkeletonWarlord_Combo1.GA_SkeletonWarlord_Combo1_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_Combo1.GA_SkeletonWarlord_Combo1_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 