#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_GMJailDoor01.BP_GMJailDoor01_C.ExecuteUbergraph_BP_GMJailDoor01
struct FExecuteUbergraph_BP_GMJailDoor01
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* K2Node_Event_Interacter;  // 0x8 (0x8)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x10 (0x10)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x18 (0x18)
	struct FHitResult K2Node_Event_HitResult;  // 0x20 (0x20)
	struct AActor* K2Node_Event_Interacter_2;  // 0x108 (0x108)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x110 (0x110)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x118 (0x118)
	char pad_296_1 : 7;  // 0x128 (0x128)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x128 (0x128)
	char pad_297[7];  // 0x129 (0x129)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0x130 (0x130)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x140 (0x140)
	char pad_321_1 : 7;  // 0x141 (0x141)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x141 (0x141)
	char pad_322[6];  // 0x142 (0x142)
	struct UEquipmentInventoryComponent* CallFunc_GetComponentByClass_ReturnValue;  // 0x148 (0x148)
	uint8_t CallFunc_GetInteractability_ReturnValue;  // 0x150 (0x150)
	char pad_337_1 : 7;  // 0x151 (0x151)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x151 (0x151)
	char pad_338_1 : 7;  // 0x152 (0x152)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x152 (0x152)
	char pad_339[5];  // 0x153 (0x153)
	struct FItemData CallFunc_GetCurrentHoldingItemData_ReturnValue;  // 0x158 (0x158)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As__________________2;  // 0x1F8 (0x1F8)
	char pad_520_1 : 7;  // 0x208 (0x208)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x208 (0x208)
	char pad_521_1 : 7;  // 0x209 (0x209)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_2 : 1;  // 0x209 (0x209)
	char pad_522[6];  // 0x20A (0x20A)
	struct FMsgReduceContainingItemRequest K2Node_MakeStruct_MsgReduceContainingItemRequest;  // 0x210 (0x210)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface_2;  // 0x240 (0x240)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool K2Node_DynamicCast_bSuccess_4 : 1;  // 0x250 (0x250)
	char pad_593[7];  // 0x251 (0x251)
	struct UEquipmentInventoryComponent* CallFunc_GetComponentByClass_ReturnValue_2;  // 0x258 (0x258)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x260 (0x260)
	char pad_609[7];  // 0x261 (0x261)
	struct FItemData CallFunc_GetCurrentHoldingItemData_ReturnValue_2;  // 0x268 (0x268)
	struct FMsgReduceContainingItemRequest K2Node_MakeStruct_MsgReduceContainingItemRequest_2;  // 0x308 (0x308)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x338 (0x338)
	char pad_840_1 : 7;  // 0x348 (0x348)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_3 : 1;  // 0x348 (0x348)
	char pad_841_1 : 7;  // 0x349 (0x349)
	bool Temp_bool_Variable : 1;  // 0x349 (0x349)
	char pad_842[6];  // 0x34A (0x34A)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2;  // 0x350 (0x350)
	char pad_864_1 : 7;  // 0x360 (0x360)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_4 : 1;  // 0x360 (0x360)
	char pad_865_1 : 7;  // 0x361 (0x361)
	bool Temp_bool_Variable_2 : 1;  // 0x361 (0x361)
	uint8_t CallFunc_GetInteractability_ReturnValue_2;  // 0x362 (0x362)
	char pad_867_1 : 7;  // 0x363 (0x363)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue_2 : 1;  // 0x363 (0x363)


}; 
 
 // Function BP_GMJailDoor01.BP_GMJailDoor01_C.InteractFailed
// Size: 0x10(Inherited: 0x10)
struct FInteractFailed : FInteractFailed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag EventTag;  // 0x8 (0x8)


}; 
 
 // Function BP_GMJailDoor01.BP_GMJailDoor01_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 