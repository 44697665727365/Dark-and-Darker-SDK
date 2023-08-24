#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Mimic_Large_Base.BP_Mimic_Large_Base_C.ExecuteUbergraph_BP_Mimic_Large_Base
struct FExecuteUbergraph_BP_Mimic_Large_Base
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x4 (0x4)
	int32_t K2Node_Event_InCount;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x11 (0x11)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x12 (0x12)
	char pad_19[5];  // 0x13 (0x13)
	struct UAnimInstance* CallFunc_GetAnimInstance_ReturnValue;  // 0x18 (0x18)
	struct UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2;  // 0x20 (0x20)
	struct UABP_Mimic_Large_C* K2Node_DynamicCast_AsABP_Mimic_Large;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct UABP_Mimic_Large_C* K2Node_DynamicCast_AsABP_Mimic_Large_2;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x40 (0x40)


}; 
 
 // Function BP_Mimic_Large_Base.BP_Mimic_Large_Base_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 