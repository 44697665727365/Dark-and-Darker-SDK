#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_DireWolf.BP_DireWolf_C.ExecuteUbergraph_BP_DireWolf
struct FExecuteUbergraph_BP_DireWolf
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x4 (0x4)
	int32_t K2Node_Event_InCount;  // 0xC (0xC)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x7FF7D3428690 (0x16FAD03EBC0) (0x7FF7D3428690 (0x16FAD03EBC0))
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x7FF7D3428690 (0x16FAD03EBC0) (0x7FF7D3428690 (0x16FAD03EBC0))
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x1C (0x7F)
	char pad_29_1 : 7;  // 0x1D (0x1D)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x1D (0x1D)
	char pad_30_1 : 7;  // 0x1E (0x1E)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x1E (0x1E)
	char pad_31[1];  // 0x1F (0x1F)
	struct UAnimInstance* CallFunc_GetAnimInstance_ReturnValue;  // 0x7FF7D35967D0 (0x1705D6E0080) (0x7FF7D35967D0 (0x1705D6E0080))
	struct UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2;  // 0x28 (0x28)
	struct UABP_DireWolf_C* K2Node_DynamicCast_AsABP_Dire_Wolf;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct UABP_DireWolf_C* K2Node_DynamicCast_AsABP_Dire_Wolf_2;  // 0x7FF7D3388D00 (0x0) (0x7FF7D3388D00 (0x0))
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct UABP_DireWolf_C* K2Node_DynamicCast_AsABP_Dire_Wolf_3;  // 0x50 (0x50)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct UABP_DireWolf_C* K2Node_DynamicCast_AsABP_Dire_Wolf_4;  // 0x60 (0x60)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool K2Node_DynamicCast_bSuccess_4 : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x7FF7D35967D0 (0x1705D6E0080) (0x7FF7D35967D0 (0x1705D6E0080))
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x80 (0x80)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x90 (0x90)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x94 (0x94)
	int32_t CallFunc_Max_ReturnValue;  // 0x98 (0x98)
	int32_t Temp_int_Array_Index_Variable;  // 0x9C (0x9C)
	struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item;  // 0xA0 (0xA0)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool CallFunc_RemoveActiveGameplayEffect_ReturnValue : 1;  // 0xA8 (0xA8)


}; 
 
 // Function BP_DireWolf.BP_DireWolf_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 