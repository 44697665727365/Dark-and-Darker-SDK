#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_SkeletonFootmanFromFakeDeath_Common.BP_SkeletonFootmanFromFakeDeath_Common_C.ExecuteUbergraph_BP_SkeletonFootmanFromFakeDeath_Common
struct FExecuteUbergraph_BP_SkeletonFootmanFromFakeDeath_Common
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x1C (0x1C)
	int32_t K2Node_Event_InCount;  // 0x24 (0x24)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x29 (0x29)
	char pad_42_1 : 7;  // 0x2A (0x2A)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue_2 : 1;  // 0x2A (0x2A)
	char pad_43_1 : 7;  // 0x2B (0x2B)
	bool CallFunc_Death_ReturnValue : 1;  // 0x2B (0x2B)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool CallFunc_Normal_ReturnValue : 1;  // 0x2C (0x2C)


}; 
 
 // Function BP_SkeletonFootmanFromFakeDeath_Common.BP_SkeletonFootmanFromFakeDeath_Common_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 