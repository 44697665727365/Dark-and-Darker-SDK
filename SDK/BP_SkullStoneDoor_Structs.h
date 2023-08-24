#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_SkullStoneDoor.BP_SkullStoneDoor_C.BroadcastSystemMessage
struct FBroadcastSystemMessage
{
	struct ABP_PlayerCharacter_C* Interacter;  // 0x0 (0x0)
	struct FText SystemMessage;  // 0x8 (0x8)
	struct AController* CallFunc_GetController_ReturnValue;  // 0x20 (0x20)
	struct APlayerController* K2Node_DynamicCast_As_________;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x30 (0x30)


}; 
 
 // Function BP_SkullStoneDoor.BP_SkullStoneDoor_C.ExecuteUbergraph_BP_SkullStoneDoor
struct FExecuteUbergraph_BP_SkullStoneDoor
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* K2Node_Event_Interacter;  // 0x8 (0x8)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x10 (0x10)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x18 (0x18)
	struct FHitResult K2Node_Event_HitResult;  // 0x20 (0x20)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x108 (0x108)
	char pad_265_1 : 7;  // 0x109 (0x109)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x109 (0x109)
	char pad_266[6];  // 0x10A (0x10A)
	struct UEquipmentInventoryComponent* CallFunc_GetComponentByClass_ReturnValue;  // 0x110 (0x110)
	uint8_t CallFunc_GetInteractability_ReturnValue;  // 0x118 (0x118)
	char pad_281_1 : 7;  // 0x119 (0x119)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x119 (0x119)
	char pad_282_1 : 7;  // 0x11A (0x11A)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x11A (0x11A)
	char pad_283[5];  // 0x11B (0x11B)
	struct FItemData CallFunc_GetCurrentHoldingItemData_ReturnValue;  // 0x120 (0x120)


}; 
 
 // Function BP_SkullStoneDoor.BP_SkullStoneDoor_C.ReduceItem
struct FReduceItem
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct FItemData ItemData;  // 0x8 (0x8)
	int32_t Count;  // 0xA8 (0xA8)
	char pad_172[4];  // 0xAC (0xAC)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0xB0 (0xB0)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xC0 (0xC0)
	char pad_193[7];  // 0xC1 (0xC1)
	struct FMsgReduceContainingItemRequest K2Node_MakeStruct_MsgReduceContainingItemRequest;  // 0xC8 (0xC8)


}; 
 
 // Function BP_SkullStoneDoor.BP_SkullStoneDoor_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 