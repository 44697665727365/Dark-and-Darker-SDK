#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTT_SkillOnWhileState.BTT_SkillOnWhileState_C.ExecuteUbergraph_BTT_SkillOnWhileState
struct FExecuteUbergraph_BTT_SkillOnWhileState
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x8 (0x8)
	int32_t Temp_int_Array_Index_Variable_2;  // 0xC (0xC)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x10 (0x10)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x14 (0x14)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x18 (0x18)
	int32_t Temp_int_Array_Index_Variable_3;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Temp_bool_True_if_break_was_hit_Variable : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x21 (0x21)
	char pad_34[6];  // 0x22 (0x22)
	struct AAIController* K2Node_Event_OwnerController;  // 0x28 (0x28)
	struct APawn* K2Node_Event_ControlledPawn;  // 0x30 (0x30)
	struct ADCMonsterBase* K2Node_DynamicCast_AsDCMonster_Base;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x54 (0x54)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x58 (0x58)
	char pad_89[3];  // 0x59 (0x59)
	int32_t CallFunc_Array_Get_Item;  // 0x5C (0x5C)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x60 (0x60)
	char pad_97[3];  // 0x61 (0x61)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x64 (0x64)
	int32_t CallFunc_Array_Length_ReturnValue_3;  // 0x68 (0x68)
	int32_t CallFunc_Array_Length_ReturnValue_4;  // 0x6C (0x6C)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0x71 (0x71)
	char pad_114[2];  // 0x72 (0x72)
	int32_t CallFunc_Add_IntInt_ReturnValue_3;  // 0x74 (0x74)
	int32_t CallFunc_RandomInteger_ReturnValue;  // 0x78 (0x78)
	char pad_124_1 : 7;  // 0x7C (0x7C)
	bool CallFunc_EqualEqual_IntInt_ReturnValue_2 : 1;  // 0x7C (0x7C)
	char pad_125[3];  // 0x7D (0x7D)
	int32_t CallFunc_Add_IntInt_ReturnValue_4;  // 0x80 (0x80)
	char pad_132_1 : 7;  // 0x84 (0x84)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x84 (0x84)
	char pad_133[3];  // 0x85 (0x85)
	struct AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue;  // 0x88 (0x88)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x90 (0x90)
	int32_t Temp_int_Loop_Counter_Variable_3;  // 0x140 (0x140)
	int32_t CallFunc_Array_Length_ReturnValue_5;  // 0x144 (0x144)
	char pad_328_1 : 7;  // 0x148 (0x148)
	bool CallFunc_Less_IntInt_ReturnValue_3 : 1;  // 0x148 (0x148)
	char pad_329[3];  // 0x149 (0x149)
	int32_t CallFunc_Add_IntInt_ReturnValue_5;  // 0x14C (0x14C)
	char pad_336_1 : 7;  // 0x150 (0x150)
	bool CallFunc_Greater_IntInt_ReturnValue_2 : 1;  // 0x150 (0x150)
	char pad_337[3];  // 0x151 (0x151)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x154 (0x154)
	struct FGameplayTag CallFunc_Array_Get_Item_2;  // 0x164 (0x164)
	int32_t CallFunc_Add_IntInt_ReturnValue_6;  // 0x16C (0x16C)
	struct UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue;  // 0x170 (0x170)
	char pad_376_1 : 7;  // 0x178 (0x178)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x178 (0x178)
	char pad_377[3];  // 0x179 (0x179)
	int32_t CallFunc_Array_Length_ReturnValue_6;  // 0x17C (0x17C)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_Less_IntInt_ReturnValue_4 : 1;  // 0x180 (0x180)
	char pad_385[3];  // 0x181 (0x181)
	int32_t CallFunc_Array_Length_ReturnValue_7;  // 0x184 (0x184)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_EqualEqual_IntInt_ReturnValue_3 : 1;  // 0x188 (0x188)
	char pad_393_1 : 7;  // 0x189 (0x189)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x189 (0x189)


}; 
 
 // Function BTT_SkillOnWhileState.BTT_SkillOnWhileState_C.ReceiveExecuteAI
// Size: 0x10(Inherited: 0x10)
struct FReceiveExecuteAI : FReceiveExecuteAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 