#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Wraith_Common.BP_Wraith_Common_C.ExecuteUbergraph_BP_Wraith_Common
struct FExecuteUbergraph_BP_Wraith_Common
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x8 (0x8)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x10 (0x10)
	int32_t K2Node_Event_InCount;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FGameplayCueTag CallFunc_Map_Find_Value;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x30 (0x30)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function BP_Wraith_Common.BP_Wraith_Common_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 