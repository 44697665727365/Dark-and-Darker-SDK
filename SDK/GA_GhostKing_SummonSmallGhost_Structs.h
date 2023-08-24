#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GhostKing_SummonSmallGhost.GA_GhostKing_SummonSmallGhost_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_SummonSmallGhost.GA_GhostKing_SummonSmallGhost_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_SummonSmallGhost.GA_GhostKing_SummonSmallGhost_C.EventReceived_EDA2BCA841843174E8997585DF436FE2
struct FEventReceived_EDA2BCA841843174E8997585DF436FE2
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_SummonSmallGhost.GA_GhostKing_SummonSmallGhost_C.ExecuteUbergraph_GA_GhostKing_SummonSmallGhost
struct FExecuteUbergraph_GA_GhostKing_SummonSmallGhost
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xC0 (0xC0)
	char pad_193[7];  // 0xC1 (0xC1)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	char pad_376_1 : 7;  // 0x178 (0x178)
	bool K2Node_Event_bWasCancelled : 1;  // 0x178 (0x178)
	char pad_377[7];  // 0x179 (0x179)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x180 (0x180)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x188 (0x188)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x190 (0x190)
	struct ABP_GhostKing_Common_C* K2Node_DynamicCast_AsBP_Ghost_King_Common;  // 0x198 (0x198)
	char pad_416_1 : 7;  // 0x1A0 (0x1A0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1A0 (0x1A0)
	char pad_417_1 : 7;  // 0x1A1 (0x1A1)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x1A1 (0x1A1)
	char pad_418[6];  // 0x1A2 (0x1A2)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x1A8 (0x1A8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x1B0 (0x1B0)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x1B8 (0x1B8)
	struct ABP_GhostKing_Common_C* K2Node_DynamicCast_AsBP_Ghost_King_Common_2;  // 0x268 (0x268)
	char pad_624_1 : 7;  // 0x270 (0x270)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x270 (0x270)
	char pad_625[7];  // 0x271 (0x271)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x278 (0x278)
	char pad_848_1 : 7;  // 0x350 (0x350)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x350 (0x350)
	char pad_849_1 : 7;  // 0x351 (0x351)
	bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute : 1;  // 0x351 (0x351)
	char pad_850[2];  // 0x352 (0x352)
	float CallFunc_GetFloatAttribute_ReturnValue;  // 0x354 (0x354)
	char pad_856_1 : 7;  // 0x358 (0x358)
	bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2 : 1;  // 0x358 (0x358)
	char pad_857[3];  // 0x359 (0x359)
	float CallFunc_GetFloatAttribute_ReturnValue_2;  // 0x35C (0x35C)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x360 (0x360)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x368 (0x368)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x370 (0x370)
	char pad_896_1 : 7;  // 0x380 (0x380)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x380 (0x380)
	char pad_897[7];  // 0x381 (0x381)
	double CallFunc_Divide_DoubleDouble_A_ImplicitCast;  // 0x388 (0x388)
	double CallFunc_Divide_DoubleDouble_B_ImplicitCast;  // 0x390 (0x390)


}; 
 
 