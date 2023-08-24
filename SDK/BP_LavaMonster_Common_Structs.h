#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_LavaMonster_Common.BP_LavaMonster_Common_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_LavaMonster_Common.BP_LavaMonster_Common_C.BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
// Size: 0xB8(Inherited: 0xB8)
struct FBndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature : FBndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
{
	struct FObjectLinkRequestEvent RecvEvent;  // 0x0 (0x0)
	struct UObjectLinkMetaDataBlueprint* SendEventParam;  // 0xB0 (0xB0)


}; 
 
 // Function BP_LavaMonster_Common.BP_LavaMonster_Common_C.ExecuteUbergraph_BP_LavaMonster_Common
struct FExecuteUbergraph_BP_LavaMonster_Common
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x8 (0x8)
	int32_t K2Node_Event_InCount;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct UAnimInstance* CallFunc_GetAnimInstance_ReturnValue;  // 0x18 (0x18)
	struct UABP_LavaMonster_C* K2Node_DynamicCast_AsABP_Lava_Monster;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x29 (0x29)
	char pad_42_1 : 7;  // 0x2A (0x2A)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x2A (0x2A)
	char pad_43[5];  // 0x2B (0x2B)
	struct FObjectLinkRequestEvent K2Node_ComponentBoundEvent_RecvEvent;  // 0x30 (0x30)
	struct UObjectLinkMetaDataBlueprint* K2Node_ComponentBoundEvent_SendEventParam;  // 0xE0 (0xE0)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool CallFunc_LinkEventBase_Result : 1;  // 0xE8 (0xE8)
	char pad_233[7];  // 0xE9 (0xE9)
	struct ABP_GhostKing_Common_C* K2Node_DynamicCast_AsBP_Ghost_King_Common;  // 0xF0 (0xF0)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0xF8 (0xF8)
	char pad_249_1 : 7;  // 0xF9 (0xF9)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_3 : 1;  // 0xF9 (0xF9)
	char pad_250_1 : 7;  // 0xFA (0xFA)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0xFA (0xFA)
	char pad_251[1];  // 0xFB (0xFB)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0xFC (0xFC)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool CallFunc_Greater_IntInt_ReturnValue_2 : 1;  // 0x100 (0x100)
	char pad_257_1 : 7;  // 0x101 (0x101)
	bool CallFunc_AddGameplayTag_ReturnValue_2 : 1;  // 0x101 (0x101)
	char pad_258[2];  // 0x102 (0x102)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x104 (0x104)
	int32_t Temp_int_Array_Index_Variable;  // 0x108 (0x108)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x10C (0x10C)
	struct ABP_DCMonsterBaseWithOptions_C* CallFunc_Array_Get_Item;  // 0x110 (0x110)
	struct ABP_GhostKing_Common_C* K2Node_DynamicCast_AsBP_Ghost_King_Common_2;  // 0x118 (0x118)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x120 (0x120)
	char pad_289_1 : 7;  // 0x121 (0x121)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x121 (0x121)
	char pad_290_1 : 7;  // 0x122 (0x122)
	bool CallFunc_Get_And_Compare_To_BlackBoard_Mode_Result : 1;  // 0x122 (0x122)
	char pad_291[1];  // 0x123 (0x123)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x124 (0x124)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x128 (0x128)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool Temp_bool_True_if_break_was_hit_Variable : 1;  // 0x130 (0x130)
	char pad_305_1 : 7;  // 0x131 (0x131)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x131 (0x131)
	char pad_306_1 : 7;  // 0x132 (0x132)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x132 (0x132)
	char pad_307_1 : 7;  // 0x133 (0x133)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x133 (0x133)
	char pad_308[4];  // 0x134 (0x134)
	struct UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue;  // 0x138 (0x138)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x140 (0x140)
	char pad_321[7];  // 0x141 (0x141)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x148 (0x148)
	char pad_336_1 : 7;  // 0x150 (0x150)
	bool CallFunc_Set_Target_Provider_Result : 1;  // 0x150 (0x150)
	char pad_337[7];  // 0x151 (0x151)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x158 (0x158)


}; 
 
 // Function BP_LavaMonster_Common.BP_LavaMonster_Common_C.Call Wake Up
struct FCall Wake Up
{
	struct UAnimInstance* CallFunc_GetAnimInstance_ReturnValue;  // 0x0 (0x0)
	struct UABP_LavaMonster_C* K2Node_DynamicCast_AsABP_Lava_Monster;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x10 (0x10)


}; 
 
 