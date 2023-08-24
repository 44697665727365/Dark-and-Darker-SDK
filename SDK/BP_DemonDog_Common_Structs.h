#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_DemonDog_Common.BP_DemonDog_Common_C.ExecuteUbergraph_BP_DemonDog_Common
struct FExecuteUbergraph_BP_DemonDog_Common
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x11 (0x11)
	char pad_18[2];  // 0x12 (0x12)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x14 (0x14)
	int32_t K2Node_Event_InCount;  // 0x1C (0x1C)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_SetVisionAngle_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x39 (0x39)
	char pad_58_1 : 7;  // 0x3A (0x3A)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue_2 : 1;  // 0x3A (0x3A)
	char pad_59[1];  // 0x3B (0x3B)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x3C (0x3C)
	char pad_76[4];  // 0x4C (0x4C)
	struct AAIController* CallFunc_GetAIController_ReturnValue_2;  // 0x50 (0x50)
	struct UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue_2;  // 0x58 (0x58)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool CallFunc_SetSightRange_ReturnValue : 1;  // 0x60 (0x60)


}; 
 
 // Function BP_DemonDog_Common.BP_DemonDog_Common_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 