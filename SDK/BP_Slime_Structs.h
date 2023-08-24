#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Slime.BP_Slime_C.ExecuteUbergraph_BP_Slime
struct FExecuteUbergraph_BP_Slime
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool CallFunc_Burrow_ReturnValue : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)
	struct FPhysicalAnimationData K2Node_MakeStruct_PhysicalAnimationData;  // 0x8 (0x8)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x2C (0x2C)
	int32_t K2Node_Event_InCount;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x39 (0x39)


}; 
 
 // Function BP_Slime.BP_Slime_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 