#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_GiantWorm.BP_GiantWorm_C.ExecuteUbergraph_BP_GiantWorm
struct FExecuteUbergraph_BP_GiantWorm
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x8 (0x8)
	int32_t K2Node_Event_InCount;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x15 (0x15)
	char pad_22_1 : 7;  // 0x16 (0x16)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x16 (0x16)
	char pad_23_1 : 7;  // 0x17 (0x17)
	bool CallFunc_Normal_ReturnValue : 1;  // 0x17 (0x17)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_Change_GE_Attribute_And_Apply_Return_Value;  // 0x18 (0x18)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x28 (0x28)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x2C (0x2C)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool CallFunc_Burrow_ReturnValue : 1;  // 0x31 (0x31)
	char pad_50[2];  // 0x32 (0x32)
	struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item;  // 0x34 (0x34)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x3C (0x3C)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_RemoveActiveGameplayEffect_ReturnValue : 1;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x44 (0x44)
	int32_t CallFunc_Max_ReturnValue;  // 0x48 (0x48)
	int32_t CallFunc_Get_BB_Phase_Phase;  // 0x4C (0x4C)
	int32_t CallFunc_RandomIntegerInRange_ReturnValue;  // 0x50 (0x50)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x54 (0x54)


}; 
 
 // Function BP_GiantWorm.BP_GiantWorm_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 