#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Lantern.BP_Lantern_C.ExecuteUbergraph_BP_Lantern
struct FExecuteUbergraph_BP_Lantern
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x8 (0x8)
	int32_t K2Node_Event_InCount;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x15 (0x15)


}; 
 
 // Function BP_Lantern.BP_Lantern_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 