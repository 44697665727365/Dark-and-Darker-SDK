#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.EventReceived_34B70C134EA550599237CAA54022F76D
struct FEventReceived_34B70C134EA550599237CAA54022F76D
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.Set Variables
struct FSet Variables
{
	struct FGameplayEventData Event Data;  // 0x0 (0x0)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool Result : 1;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0xB8 (0xB8)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0xD0 (0xD0)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0xD8 (0xD8)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0xE0 (0xE0)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0xE8 (0xE8)
	char pad_233_1 : 7;  // 0xE9 (0xE9)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0xE9 (0xE9)
	char pad_234[6];  // 0xEA (0xEA)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0xF0 (0xF0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xF8 (0xF8)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x100 (0x100)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x108 (0x108)


}; 
 
 // Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.ExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhaseFromRun
struct FExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhaseFromRun
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0xB8 (0xB8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0xD0 (0xD0)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0xE0 (0xE0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x190 (0x190)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x1A0 (0x1A0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x1A8 (0x1A8)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue;  // 0x1B8 (0x1B8)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_2;  // 0x1C0 (0x1C0)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x1C8 (0x1C8)
	float CallFunc_GetDistanceTo_ReturnValue;  // 0x1D0 (0x1D0)
	char pad_468_1 : 7;  // 0x1D4 (0x1D4)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x1D4 (0x1D4)
	char pad_469[3];  // 0x1D5 (0x1D5)
	float CallFunc_GetDistanceTo_ReturnValue_2;  // 0x1D8 (0x1D8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x1DC (0x1DC)
	char pad_492_1 : 7;  // 0x1EC (0x1EC)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x1EC (0x1EC)
	char pad_493_1 : 7;  // 0x1ED (0x1ED)
	bool K2Node_Event_bWasCancelled : 1;  // 0x1ED (0x1ED)
	char pad_494[2];  // 0x1EE (0x1EE)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x1F0 (0x1F0)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x2A0 (0x2A0)
	char pad_848_1 : 7;  // 0x350 (0x350)
	bool CallFunc_Set_Variables_Result : 1;  // 0x350 (0x350)
	char pad_849[7];  // 0x351 (0x351)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x358 (0x358)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x370 (0x370)
	struct FVector CallFunc_Normal_ReturnValue;  // 0x388 (0x388)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0x3A0 (0x3A0)
	char pad_932[4];  // 0x3A4 (0x3A4)
	double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;  // 0x3A8 (0x3A8)
	double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2;  // 0x3B0 (0x3B0)


}; 
 
 // Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 