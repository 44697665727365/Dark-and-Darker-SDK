#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.EventReceived_235F91F447562B0F4256E28837D68907
struct FEventReceived_235F91F447562B0F4256E28837D68907
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.ExecuteUbergraph_GA_CentaurDemon_SprintPhase
struct FExecuteUbergraph_GA_CentaurDemon_SprintPhase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0xB8 (0xB8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0xC0 (0xC0)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0xE0 (0xE0)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0xF8 (0xF8)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x1A8 (0x1A8)
	struct FVector CallFunc_Normal_ReturnValue;  // 0x1C0 (0x1C0)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1D8 (0x1D8)
	char pad_648_1 : 7;  // 0x288 (0x288)
	bool CallFunc_Set_Variables_Result : 1;  // 0x288 (0x288)
	char pad_649[3];  // 0x289 (0x289)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x28C (0x28C)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x29C (0x29C)
	char pad_684[4];  // 0x2AC (0x2AC)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x2B0 (0x2B0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x2B8 (0x2B8)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue;  // 0x2C8 (0x2C8)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_2;  // 0x2D0 (0x2D0)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x2D8 (0x2D8)
	float CallFunc_GetDistanceTo_ReturnValue;  // 0x2E0 (0x2E0)
	char pad_740_1 : 7;  // 0x2E4 (0x2E4)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x2E4 (0x2E4)
	char pad_741[3];  // 0x2E5 (0x2E5)
	float CallFunc_GetDistanceTo_ReturnValue_2;  // 0x2E8 (0x2E8)
	char pad_748_1 : 7;  // 0x2EC (0x2EC)
	bool K2Node_Event_bWasCancelled : 1;  // 0x2EC (0x2EC)
	char pad_749_1 : 7;  // 0x2ED (0x2ED)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x2ED (0x2ED)
	char pad_750[2];  // 0x2EE (0x2EE)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x2F0 (0x2F0)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x2F8 (0x2F8)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0x3A8 (0x3A8)
	char pad_940[4];  // 0x3AC (0x3AC)
	double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;  // 0x3B0 (0x3B0)
	double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2;  // 0x3B8 (0x3B8)


}; 
 
 // Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.Set Variables
struct FSet Variables
{
	struct FGameplayEventData Event Data;  // 0x0 (0x0)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool Result : 1;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0xB8 (0xB8)
	float CallFunc_GetDistanceTo_ReturnValue;  // 0xD0 (0xD0)
	char pad_212_1 : 7;  // 0xD4 (0xD4)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0xD4 (0xD4)
	char pad_213_1 : 7;  // 0xD5 (0xD5)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0xD5 (0xD5)
	char pad_214[2];  // 0xD6 (0xD6)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0xD8 (0xD8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xE0 (0xE0)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0xE8 (0xE8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xF0 (0xF0)
	char pad_241[7];  // 0xF1 (0xF1)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast;  // 0xF8 (0xF8)


}; 
 
 