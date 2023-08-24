#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Chest_Base.BP_Chest_Base_C.ExecuteUbergraph_BP_Chest_Base
struct FExecuteUbergraph_BP_Chest_Base
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
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x120 (0x120)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x130 (0x130)
	char pad_305[7];  // 0x131 (0x131)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0x138 (0x138)
	char pad_328_1 : 7;  // 0x148 (0x148)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x148 (0x148)
	char pad_329_1 : 7;  // 0x149 (0x149)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_2 : 1;  // 0x149 (0x149)
	char pad_330_1 : 7;  // 0x14A (0x14A)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x14A (0x14A)
	char pad_331[5];  // 0x14B (0x14B)
	struct UEquipmentInventoryComponent* CallFunc_GetComponentByClass_ReturnValue;  // 0x150 (0x150)
	char pad_344_1 : 7;  // 0x158 (0x158)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x158 (0x158)
	char pad_345[7];  // 0x159 (0x159)
	struct FItemData CallFunc_GetCurrentHoldingItemData_ReturnValue;  // 0x160 (0x160)
	struct AActor* K2Node_Event_Interacter_2;  // 0x200 (0x200)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x208 (0x208)
	struct FMsgReduceContainingItemRequest K2Node_MakeStruct_MsgReduceContainingItemRequest;  // 0x210 (0x210)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As__________________2;  // 0x240 (0x240)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x250 (0x250)
	char pad_593[7];  // 0x251 (0x251)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface_2;  // 0x258 (0x258)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool K2Node_DynamicCast_bSuccess_4 : 1;  // 0x268 (0x268)
	char pad_617_1 : 7;  // 0x269 (0x269)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_3 : 1;  // 0x269 (0x269)
	char pad_618_1 : 7;  // 0x26A (0x26A)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x26A (0x26A)
	char pad_619[5];  // 0x26B (0x26B)
	struct UEquipmentInventoryComponent* CallFunc_GetComponentByClass_ReturnValue_2;  // 0x270 (0x270)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x278 (0x278)
	char pad_633[7];  // 0x279 (0x279)
	struct FItemData CallFunc_GetCurrentHoldingItemData_ReturnValue_2;  // 0x280 (0x280)
	struct FMsgReduceContainingItemRequest K2Node_MakeStruct_MsgReduceContainingItemRequest_2;  // 0x320 (0x320)
	char pad_848_1 : 7;  // 0x350 (0x350)
	bool Temp_bool_Variable : 1;  // 0x350 (0x350)
	char pad_849[7];  // 0x351 (0x351)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2;  // 0x358 (0x358)
	char pad_872_1 : 7;  // 0x368 (0x368)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_4 : 1;  // 0x368 (0x368)
	uint8_t CallFunc_GetInteractability_ReturnValue;  // 0x369 (0x369)
	char pad_874_1 : 7;  // 0x36A (0x36A)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x36A (0x36A)
	char pad_875_1 : 7;  // 0x36B (0x36B)
	bool Temp_bool_Variable_2 : 1;  // 0x36B (0x36B)
	uint8_t CallFunc_GetInteractability_ReturnValue_2;  // 0x36C (0x36C)
	char pad_877_1 : 7;  // 0x36D (0x36D)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue_2 : 1;  // 0x36D (0x36D)


}; 
 
 // Function BP_Chest_Base.BP_Chest_Base_C.InteractFailed
// Size: 0x10(Inherited: 0x10)
struct FInteractFailed : FInteractFailed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag EventTag;  // 0x8 (0x8)


}; 
 
 // Function BP_Chest_Base.BP_Chest_Base_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 