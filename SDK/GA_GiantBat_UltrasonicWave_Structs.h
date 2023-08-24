#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GiantBat_UltrasonicWave.GA_GiantBat_UltrasonicWave_C.EventReceived_68D9B709497C03B93FB891B8ADD0D0F4
struct FEventReceived_68D9B709497C03B93FB891B8ADD0D0F4
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantBat_UltrasonicWave.GA_GiantBat_UltrasonicWave_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantBat_UltrasonicWave.GA_GiantBat_UltrasonicWave_C.ExecuteUbergraph_GA_GiantBat_UltrasonicWave
struct FExecuteUbergraph_GA_GiantBat_UltrasonicWave
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
	char pad_577[3];  // 0x241 (0x241)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x244 (0x244)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x248 (0x248)
	char pad_588_1 : 7;  // 0x24C (0x24C)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x24C (0x24C)
	char pad_589[3];  // 0x24D (0x24D)
	int32_t Temp_int_Array_Index_Variable;  // 0x250 (0x250)
	char pad_596[4];  // 0x254 (0x254)
	struct FGameplayEventData K2Node_CustomEvent_Payload_2;  // 0x258 (0x258)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x308 (0x308)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x3B8 (0x3B8)
	struct ABP_DCMonsterBase_C* K2Node_DynamicCast_AsBP_DCMonster_Base;  // 0x3C0 (0x3C0)
	char pad_968_1 : 7;  // 0x3C8 (0x3C8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x3C8 (0x3C8)
	char pad_969[7];  // 0x3C9 (0x3C9)
	struct UDCAT_RotateToActor* CallFunc_RotateToActor_ReturnValue;  // 0x3D0 (0x3D0)
	char pad_984_1 : 7;  // 0x3D8 (0x3D8)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x3D8 (0x3D8)
	char pad_985_1 : 7;  // 0x3D9 (0x3D9)
	bool CallFunc_GetAllTargetArray_ReturnValue : 1;  // 0x3D9 (0x3D9)
	char pad_986[2];  // 0x3DA (0x3DA)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x3DC (0x3DC)
	char pad_1004_1 : 7;  // 0x3EC (0x3EC)
	bool CallFunc_FilterTargetsWithinDistanceAndDirectionalAngleAndAllowedAngle_ReturnValue : 1;  // 0x3EC (0x3EC)
	char pad_1005[3];  // 0x3ED (0x3ED)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x3F0 (0x3F0)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0x3F8 (0x3F8)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x400 (0x400)
	char pad_1028[4];  // 0x404 (0x404)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x408 (0x408)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x4B8 (0x4B8)
	char pad_1212[4];  // 0x4BC (0x4BC)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x4C0 (0x4C0)
	int32_t CallFunc_Max_ReturnValue;  // 0x4D0 (0x4D0)
	float CallFunc_GetVerticalDistanceTo_ReturnValue;  // 0x4D4 (0x4D4)
	char pad_1240_1 : 7;  // 0x4D8 (0x4D8)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x4D8 (0x4D8)
	char pad_1241_1 : 7;  // 0x4D9 (0x4D9)
	bool K2Node_Event_bWasCancelled : 1;  // 0x4D9 (0x4D9)
	char pad_1242[2];  // 0x4DA (0x4DA)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x4DC (0x4DC)
	char pad_1248_1 : 7;  // 0x4E0 (0x4E0)
	bool CallFunc_Array_Contains_ReturnValue : 1;  // 0x4E0 (0x4E0)
	char pad_1249_1 : 7;  // 0x4E1 (0x4E1)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x4E1 (0x4E1)
	char pad_1250[6];  // 0x4E2 (0x4E2)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast;  // 0x4E8 (0x4E8)


}; 
 
 // Function GA_GiantBat_UltrasonicWave.GA_GiantBat_UltrasonicWave_C.EventReceived_A80402D641FC7F2A987748A071549433
struct FEventReceived_A80402D641FC7F2A987748A071549433
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantBat_UltrasonicWave.GA_GiantBat_UltrasonicWave_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 