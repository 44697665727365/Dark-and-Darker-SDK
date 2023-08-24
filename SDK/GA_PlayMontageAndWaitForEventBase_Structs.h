#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.GetBBTargetActorToMonsterBase
struct FGetBBTargetActorToMonsterBase
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct ABP_DCMonsterBaseWithOptions_C* DCMonsterBaseWithOptions;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x20 (0x20)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x28 (0x28)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x39 (0x39)


}; 
 
 // Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.EventReceived_7713E05F4EC00D3256E30A95AF21E3A0
struct FEventReceived_7713E05F4EC00D3256E30A95AF21E3A0
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.ExecuteUbergraph_GA_PlayMontageAndWaitForEventBase
struct FExecuteUbergraph_GA_PlayMontageAndWaitForEventBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_NotEqual_DoubleDouble_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x18 (0x18)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x178 (0x178)
	struct UDCAT_RotateToActor* CallFunc_RotateToActor_ReturnValue;  // 0x228 (0x228)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x230 (0x230)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x238 (0x238)
	char pad_569_1 : 7;  // 0x239 (0x239)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x239 (0x239)
	char pad_570[6];  // 0x23A (0x23A)
	double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;  // 0x240 (0x240)


}; 
 
 // Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.GetBBTargetActor
struct FGetBBTargetActor
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UObject* Return Value;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x20 (0x20)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x30 (0x30)


}; 
 
 // Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.GetBBTargetActorToCharacterBase
struct FGetBBTargetActorToCharacterBase
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct ADCCharacterBase* As DCCharacter Base;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x20 (0x20)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x28 (0x28)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x39 (0x39)


}; 
 
 