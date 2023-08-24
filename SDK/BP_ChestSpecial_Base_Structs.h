#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_ChestSpecial_Base.BP_ChestSpecial_Base_C.ExecuteUbergraph_BP_ChestSpecial_Base
struct FExecuteUbergraph_BP_ChestSpecial_Base
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool Temp_bool_Variable : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct AActor* K2Node_Event_Interacter;  // 0x8 (0x8)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x10 (0x10)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x18 (0x18)
	struct FHitResult K2Node_Event_HitResult;  // 0x20 (0x20)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x108 (0x108)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x118 (0x118)
	char pad_281[7];  // 0x119 (0x119)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0x120 (0x120)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x130 (0x130)
	char pad_305_1 : 7;  // 0x131 (0x131)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x131 (0x131)
	char pad_306_1 : 7;  // 0x132 (0x132)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x132 (0x132)
	char pad_307[5];  // 0x133 (0x133)
	struct UEquipmentInventoryComponent* CallFunc_GetComponentByClass_ReturnValue;  // 0x138 (0x138)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x140 (0x140)
	char pad_321[7];  // 0x141 (0x141)
	struct FItemData CallFunc_GetCurrentHoldingItemData_ReturnValue;  // 0x148 (0x148)
	struct AActor* K2Node_Event_Interacter_2;  // 0x1E8 (0x1E8)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x1F0 (0x1F0)
	struct FMsgReduceContainingItemRequest K2Node_MakeStruct_MsgReduceContainingItemRequest;  // 0x1F8 (0x1F8)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As__________________2;  // 0x228 (0x228)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x238 (0x238)
	char pad_569[7];  // 0x239 (0x239)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface_2;  // 0x240 (0x240)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool K2Node_DynamicCast_bSuccess_4 : 1;  // 0x250 (0x250)
	char pad_593_1 : 7;  // 0x251 (0x251)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_2 : 1;  // 0x251 (0x251)
	char pad_594_1 : 7;  // 0x252 (0x252)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x252 (0x252)
	char pad_595[5];  // 0x253 (0x253)
	struct UEquipmentInventoryComponent* CallFunc_GetComponentByClass_ReturnValue_2;  // 0x258 (0x258)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x260 (0x260)
	char pad_609[7];  // 0x261 (0x261)
	struct FItemData CallFunc_GetCurrentHoldingItemData_ReturnValue_2;  // 0x268 (0x268)
	struct FMsgReduceContainingItemRequest K2Node_MakeStruct_MsgReduceContainingItemRequest_2;  // 0x308 (0x308)
	char pad_824_1 : 7;  // 0x338 (0x338)
	bool Temp_bool_Variable_2 : 1;  // 0x338 (0x338)
	char pad_825[7];  // 0x339 (0x339)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x340 (0x340)
	char pad_848_1 : 7;  // 0x350 (0x350)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_3 : 1;  // 0x350 (0x350)
	uint8_t CallFunc_GetInteractability_ReturnValue;  // 0x351 (0x351)
	char pad_850_1 : 7;  // 0x352 (0x352)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x352 (0x352)
	uint8_t CallFunc_GetInteractability_ReturnValue_2;  // 0x353 (0x353)
	char pad_852_1 : 7;  // 0x354 (0x354)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue_2 : 1;  // 0x354 (0x354)
	char pad_853[3];  // 0x355 (0x355)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2;  // 0x358 (0x358)
	char pad_872_1 : 7;  // 0x368 (0x368)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_4 : 1;  // 0x368 (0x368)


}; 
 
 // Function BP_ChestSpecial_Base.BP_ChestSpecial_Base_C.InteractFailed
// Size: 0x10(Inherited: 0x10)
struct FInteractFailed : FInteractFailed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag EventTag;  // 0x8 (0x8)


}; 
 
 // Function BP_ChestSpecial_Base.BP_ChestSpecial_Base_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 