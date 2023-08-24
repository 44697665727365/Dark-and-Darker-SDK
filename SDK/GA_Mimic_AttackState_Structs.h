#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Mimic_AttackState.GA_Mimic_AttackState_C.ExecuteUbergraph_GA_Mimic_AttackState
struct FExecuteUbergraph_GA_Mimic_AttackState
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct FGameplayTag Temp_struct_Variable_2;  // 0xB8 (0xB8)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0xC0 (0xC0)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xC8 (0xC8)
	char pad_201[3];  // 0xC9 (0xC9)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0xCC (0xCC)
	char pad_212[4];  // 0xD4 (0xD4)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0xD8 (0xD8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x188 (0x188)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x190 (0x190)
	char pad_408_1 : 7;  // 0x198 (0x198)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x198 (0x198)
	char pad_409[3];  // 0x199 (0x199)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x19C (0x19C)
	char pad_428[4];  // 0x1AC (0x1AC)
	struct ABP_Mimic_Small_Base_C* K2Node_DynamicCast_AsBP_Mimic_Small_Base;  // 0x1B0 (0x1B0)
	char pad_440_1 : 7;  // 0x1B8 (0x1B8)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x1B8 (0x1B8)
	char pad_441[7];  // 0x1B9 (0x1B9)
	struct ABP_Mimic_Medium_Base_C* K2Node_DynamicCast_AsBP_Mimic_Medium_Base;  // 0x1C0 (0x1C0)
	char pad_456_1 : 7;  // 0x1C8 (0x1C8)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x1C8 (0x1C8)
	char pad_457[7];  // 0x1C9 (0x1C9)
	struct ABP_Mimic_Large_Base_C* K2Node_DynamicCast_AsBP_Mimic_Large_Base;  // 0x1D0 (0x1D0)
	char pad_472_1 : 7;  // 0x1D8 (0x1D8)
	bool K2Node_DynamicCast_bSuccess_4 : 1;  // 0x1D8 (0x1D8)
	char pad_473[7];  // 0x1D9 (0x1D9)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue;  // 0x1E0 (0x1E0)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1F8 (0x1F8)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x2A8 (0x2A8)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0x358 (0x358)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x408 (0x408)
	char pad_1040_1 : 7;  // 0x410 (0x410)
	bool K2Node_DynamicCast_bSuccess_5 : 1;  // 0x410 (0x410)
	char pad_1041[7];  // 0x411 (0x411)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue_2;  // 0x418 (0x418)
	double CallFunc_Vector_Distance2D_ReturnValue;  // 0x430 (0x430)
	char pad_1080_1 : 7;  // 0x438 (0x438)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x438 (0x438)


}; 
 
 // Function GA_Mimic_AttackState.GA_Mimic_AttackState_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_Mimic_AttackState.GA_Mimic_AttackState_C.EventReceived_A41C06D64BC5222CED392AA8C7A52DD2
struct FEventReceived_A41C06D64BC5222CED392AA8C7A52DD2
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 