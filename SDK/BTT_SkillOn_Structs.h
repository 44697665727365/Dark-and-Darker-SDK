#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTT_SkillOn.BTT_SkillOn_C.ExecuteUbergraph_BTT_SkillOn
struct FExecuteUbergraph_BTT_SkillOn
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x8 (0x8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xC (0xC)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x10 (0x10)
	int32_t Temp_int_Array_Index_Variable;  // 0x14 (0x14)
	struct AAIController* K2Node_Event_OwnerController_2;  // 0x18 (0x18)
	struct APawn* K2Node_Event_ControlledPawn_2;  // 0x20 (0x20)
	struct ADCMonsterBase* K2Node_DynamicCast_AsDCMonster_Base;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	int32_t CallFunc_Array_Get_Item;  // 0x3C (0x3C)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x40 (0x40)
	int32_t CallFunc_Array_Length_ReturnValue_3;  // 0x44 (0x44)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0x48 (0x48)
	char pad_73[3];  // 0x49 (0x49)
	int32_t CallFunc_Array_Length_ReturnValue_4;  // 0x4C (0x4C)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x50 (0x50)
	char pad_81_1 : 7;  // 0x51 (0x51)
	bool CallFunc_Less_IntInt_ReturnValue_3 : 1;  // 0x51 (0x51)
	char pad_82_1 : 7;  // 0x52 (0x52)
	bool Temp_bool_True_if_break_was_hit_Variable : 1;  // 0x52 (0x52)
	char pad_83[1];  // 0x53 (0x53)
	int32_t CallFunc_Add_IntInt_ReturnValue_3;  // 0x54 (0x54)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x58 (0x58)
	char pad_89_1 : 7;  // 0x59 (0x59)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x59 (0x59)
	char pad_90[2];  // 0x5A (0x5A)
	int32_t CallFunc_RandomInteger_ReturnValue;  // 0x5C (0x5C)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool CallFunc_EqualEqual_IntInt_ReturnValue_2 : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)
	struct AAIController* K2Node_Event_OwnerController;  // 0x68 (0x68)
	struct APawn* K2Node_Event_ControlledPawn;  // 0x70 (0x70)
	float K2Node_Event_DeltaSeconds;  // 0x78 (0x78)
	char pad_124[4];  // 0x7C (0x7C)
	struct AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue;  // 0x80 (0x80)
	struct ABP_DCMonsterBase_C* K2Node_DynamicCast_AsBP_DCMonster_Base;  // 0x88 (0x88)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x90 (0x90)
	char pad_145[7];  // 0x91 (0x91)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x98 (0x98)
	int32_t CallFunc_Array_Length_ReturnValue_5;  // 0x148 (0x148)
	char pad_332_1 : 7;  // 0x14C (0x14C)
	bool CallFunc_EqualEqual_IntInt_ReturnValue_3 : 1;  // 0x14C (0x14C)
	char pad_333[3];  // 0x14D (0x14D)
	int32_t Temp_int_Array_Index_Variable_2;  // 0x150 (0x150)
	struct FGameplayTag CallFunc_Array_Get_Item_2;  // 0x154 (0x154)
	char pad_348_1 : 7;  // 0x15C (0x15C)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x15C (0x15C)
	char pad_349[3];  // 0x15D (0x15D)
	int32_t CallFunc_Add_IntInt_ReturnValue_4;  // 0x160 (0x160)
	char pad_356[4];  // 0x164 (0x164)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x168 (0x168)
	char pad_376_1 : 7;  // 0x178 (0x178)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x178 (0x178)


}; 
 
 // Function BTT_SkillOn.BTT_SkillOn_C.ReceiveExecuteAI
// Size: 0x10(Inherited: 0x10)
struct FReceiveExecuteAI : FReceiveExecuteAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 // Function BTT_SkillOn.BTT_SkillOn_C.ReceiveTickAI
// Size: 0x14(Inherited: 0x18)
struct FReceiveTickAI : FReceiveTickAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	float DeltaSeconds;  // 0x10 (0x10)


}; 
 
 