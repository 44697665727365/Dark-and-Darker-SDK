#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Wisp.BP_Wisp_C.ExecuteUbergraph_BP_Wisp
struct FExecuteUbergraph_BP_Wisp
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FPrimaryAssetId CallFunc_GetPrimaryAssetIdFromObject_ReturnValue;  // 0x8 (0x8)
	struct FDesignDataGameplayEffect CallFunc_GetDesignDataGameplayEffect_ReturnValue;  // 0x18 (0x18)
	struct FMsgGASActorDieNotify K2Node_Event_InMsg;  // 0x240 (0x240)
	char pad_1088_1 : 7;  // 0x440 (0x440)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x440 (0x440)
	char pad_1089[3];  // 0x441 (0x441)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x444 (0x444)
	int32_t K2Node_Event_InCount;  // 0x44C (0x44C)
	char pad_1104_1 : 7;  // 0x450 (0x450)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x450 (0x450)
	char pad_1105_1 : 7;  // 0x451 (0x451)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x451 (0x451)
	char pad_1106_1 : 7;  // 0x452 (0x452)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x452 (0x452)


}; 
 
 // Function BP_Wisp.BP_Wisp_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_Wisp.BP_Wisp_C.OnFMsgGASActorDieNotifyBlueprint
// Size: 0x200(Inherited: 0x200)
struct FOnFMsgGASActorDieNotifyBlueprint : FOnFMsgGASActorDieNotifyBlueprint
{
	struct FMsgGASActorDieNotify InMsg;  // 0x0 (0x0)


}; 
 
 