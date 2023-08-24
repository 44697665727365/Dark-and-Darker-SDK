#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_GiantCentipede.BP_GiantCentipede_C.ExecuteUbergraph_BP_GiantCentipede
struct FExecuteUbergraph_BP_GiantCentipede
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	double CallFunc_Get_BB_Probability_Probability;  // 0x8 (0x8)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x10 (0x10)
	float K2Node_Event_DeltaSeconds;  // 0x18 (0x18)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x1C (0x1C)
	int32_t K2Node_Event_InCount;  // 0x24 (0x24)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x29 (0x29)
	char pad_42_1 : 7;  // 0x2A (0x2A)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x2A (0x2A)
	char pad_43[1];  // 0x2B (0x2B)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x2C (0x2C)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffects_ReturnValue;  // 0x40 (0x40)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x50 (0x50)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x54 (0x54)
	int32_t CallFunc_Max_ReturnValue;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)
	struct UAnimInstance* CallFunc_GetAnimInstance_ReturnValue;  // 0x60 (0x60)
	struct UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2;  // 0x68 (0x68)
	struct UABP_GiantCentipede_C* K2Node_DynamicCast_AsABP_Giant_Centipede;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x78 (0x78)
	char pad_121[7];  // 0x79 (0x79)
	struct UABP_GiantCentipede_C* K2Node_DynamicCast_AsABP_Giant_Centipede_2;  // 0x80 (0x80)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x88 (0x88)
	char pad_137[7];  // 0x89 (0x89)
	double CallFunc_Get_BB_Probability_Probability_2;  // 0x90 (0x90)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x98 (0x98)
	struct FMsgGASAttributeNotify K2Node_Event_InMsg;  // 0xA0 (0xA0)
	char pad_1400_1 : 7;  // 0x578 (0x578)
	bool CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue : 1;  // 0x578 (0x578)
	char pad_1401[3];  // 0x579 (0x579)
	int32_t Temp_int_Array_Index_Variable;  // 0x57C (0x57C)
	struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item;  // 0x580 (0x580)
	char pad_1416_1 : 7;  // 0x588 (0x588)
	bool CallFunc_RemoveActiveGameplayEffect_ReturnValue : 1;  // 0x588 (0x588)


}; 
 
 // Function BP_GiantCentipede.BP_GiantCentipede_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_GiantCentipede.BP_GiantCentipede_C.ReceiveTick
// Size: 0x4(Inherited: 0x4)
struct FReceiveTick : FReceiveTick
{
	float DeltaSeconds;  // 0x0 (0x0)


}; 
 
 // Function BP_GiantCentipede.BP_GiantCentipede_C.OnFMsgGASAttributeNotifyBlueprint
// Size: 0x4D8(Inherited: 0x4D8)
struct FOnFMsgGASAttributeNotifyBlueprint : FOnFMsgGASAttributeNotifyBlueprint
{
	struct FMsgGASAttributeNotify InMsg;  // 0x0 (0x0)


}; 
 
 