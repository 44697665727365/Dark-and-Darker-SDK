#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Zombie_Common.BP_Zombie_Common_C.ExecuteUbergraph_BP_Zombie_Common
struct FExecuteUbergraph_BP_Zombie_Common
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x8 (0x8)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x14 (0x14)
	int32_t K2Node_Event_InCount;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x21 (0x21)
	char pad_34[6];  // 0x22 (0x22)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x28 (0x28)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x38 (0x38)
	struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool CallFunc_RemoveActiveGameplayEffect_ReturnValue : 1;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x54 (0x54)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x58 (0x58)
	int32_t CallFunc_Max_ReturnValue;  // 0x5C (0x5C)


}; 
 
 // Function BP_Zombie_Common.BP_Zombie_Common_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 