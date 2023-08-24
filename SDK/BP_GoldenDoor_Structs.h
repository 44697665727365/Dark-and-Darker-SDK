#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_GoldenDoor.BP_GoldenDoor_C.BroadcastSystemMessage
struct FBroadcastSystemMessage
{
	struct ABP_PlayerCharacter_C* Interacter;  // 0x0 (0x0)
	struct FText SystemMessage;  // 0x8 (0x8)
	struct AController* CallFunc_GetController_ReturnValue;  // 0x20 (0x20)
	struct APlayerController* K2Node_DynamicCast_As_________;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x30 (0x30)


}; 
 
 // Function BP_GoldenDoor.BP_GoldenDoor_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_GoldenDoor.BP_GoldenDoor_C.ExecuteUbergraph_BP_GoldenDoor
struct FExecuteUbergraph_BP_GoldenDoor
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* K2Node_Event_Interacter;  // 0x8 (0x8)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x10 (0x10)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x18 (0x18)
	struct FHitResult K2Node_Event_HitResult;  // 0x20 (0x20)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x108 (0x108)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x118 (0x118)
	char pad_281[7];  // 0x119 (0x119)
	struct UEquipmentInventoryComponent* CallFunc_GetComponentByClass_ReturnValue;  // 0x120 (0x120)
	char pad_296_1 : 7;  // 0x128 (0x128)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x128 (0x128)
	char pad_297_1 : 7;  // 0x129 (0x129)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x129 (0x129)
	char pad_298[6];  // 0x12A (0x12A)
	struct FItemData CallFunc_GetCurrentHoldingItemData_ReturnValue;  // 0x130 (0x130)
	uint8_t CallFunc_GetInteractability_ReturnValue;  // 0x1D0 (0x1D0)
	char pad_465_1 : 7;  // 0x1D1 (0x1D1)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x1D1 (0x1D1)


}; 
 
 // Function BP_GoldenDoor.BP_GoldenDoor_C.ReduceItem
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
 
 